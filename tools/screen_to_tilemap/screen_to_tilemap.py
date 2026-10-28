#!/usr/bin/env python3
"""
Converts one or more full-screen images (e.g. 240x160) into a shared 4bpp tileset
and one GBA text-mode tilemap per screen. Identical tiles (also when flipped) are
stored only once.

Usage:
    screen_to_tilemap.py TILES.png SCREEN1.png:MAP1.bin [SCREEN2.png:MAP2.bin ...]
        [--palnum N] [--map-width 32] [--map-height 32]

All screens must use the same 16 colours. If the first screen is an indexed PNG
its palette order is kept (index 0 is the transparent/backdrop colour), otherwise
colours are sorted by how often they appear.

The tileset is written as an indexed PNG 16 tiles wide, so the usual make rules
build TILES.4bpp and TILES.gbapal from it. Pure Python, no dependencies.
"""
import argparse
import struct
import sys
import zlib
from collections import Counter

TILES_PER_ROW = 16


def read_png(path):
    data = open(path, 'rb').read()
    if data[:8] != b'\x89PNG\r\n\x1a\n':
        sys.exit(f'{path}: not a PNG')
    pos = 8
    idat = b''
    plte = None
    while pos < len(data):
        length, = struct.unpack('>I', data[pos:pos + 4])
        ctype = data[pos + 4:pos + 8]
        chunk = data[pos + 8:pos + 8 + length]
        pos += 12 + length
        if ctype == b'IHDR':
            width, height, depth, colortype, _, _, interlace = struct.unpack('>IIBBBBB', chunk)
        elif ctype == b'PLTE':
            plte = [tuple(chunk[i:i + 3]) for i in range(0, len(chunk), 3)]
        elif ctype == b'IDAT':
            idat += chunk
    if interlace:
        sys.exit(f'{path}: interlaced PNGs are not supported')
    channels = {0: 1, 2: 3, 3: 1, 4: 2, 6: 4}[colortype]
    bpp = max(1, channels * depth // 8)
    stride = (width * channels * depth + 7) // 8
    raw = zlib.decompress(idat)
    rows = []
    prev = bytearray(stride)
    i = 0
    for _ in range(height):
        ftype = raw[i]
        i += 1
        line = bytearray(raw[i:i + stride])
        i += stride
        for x in range(stride):
            a = line[x - bpp] if x >= bpp else 0
            b = prev[x]
            c = prev[x - bpp] if x >= bpp else 0
            if ftype == 1:
                line[x] = (line[x] + a) & 0xFF
            elif ftype == 2:
                line[x] = (line[x] + b) & 0xFF
            elif ftype == 3:
                line[x] = (line[x] + (a + b) // 2) & 0xFF
            elif ftype == 4:
                p = a + b - c
                pa, pb, pc = abs(p - a), abs(p - b), abs(p - c)
                line[x] = (line[x] + (a if pa <= pb and pa <= pc else b if pb <= pc else c)) & 0xFF
        rows.append(line)
        prev = line
    pixels = []
    for line in rows:
        row = []
        for x in range(width):
            if colortype == 3:
                per = 8 // depth
                idx = line[x] if depth == 8 else (line[x // per] >> (8 - depth * (x % per + 1))) & ((1 << depth) - 1)
                row.append(plte[idx])
            elif colortype in (2, 6):
                row.append(tuple(line[x * channels:x * channels + 3]))
            else:
                v = line[x * channels]
                row.append((v, v, v))
        pixels.append(row)
    return width, height, pixels, plte if colortype == 3 else None


def write_indexed_png(path, width, height, indices, palette):
    raw = bytearray()
    for row in indices:
        raw.append(0)
        for x in range(0, width, 2):
            raw.append((row[x] << 4) | (row[x + 1] if x + 1 < width else 0))

    def chunk(ctype, content):
        return struct.pack('>I', len(content)) + ctype + content + struct.pack('>I', zlib.crc32(ctype + content) & 0xFFFFFFFF)

    with open(path, 'wb') as f:
        f.write(b'\x89PNG\r\n\x1a\n')
        f.write(chunk(b'IHDR', struct.pack('>IIBBBBB', width, height, 4, 3, 0, 0, 0)))
        f.write(chunk(b'PLTE', b''.join(bytes(c) for c in palette)))
        f.write(chunk(b'IDAT', zlib.compress(bytes(raw), 9)))
        f.write(chunk(b'IEND', b''))


def get_tile(indices, tx, ty):
    return tuple(tuple(indices[ty * 8 + y][tx * 8:tx * 8 + 8]) for y in range(8))


def hflip(tile):
    return tuple(row[::-1] for row in tile)


def vflip(tile):
    return tile[::-1]


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('tiles')
    parser.add_argument('screens', nargs='+', help='SCREEN.png:MAP.bin')
    parser.add_argument('--palnum', type=int, default=0)
    parser.add_argument('--map-width', type=int, default=32)
    parser.add_argument('--map-height', type=int, default=32)
    args = parser.parse_args()

    screens = []
    palette = None
    for pair in args.screens:
        src, _, dst = pair.partition(':')
        if not dst:
            sys.exit(f'expected SCREEN.png:MAP.bin, got {pair}')
        width, height, pixels, plte = read_png(src)
        if width % 8 or height % 8:
            sys.exit(f'{src}: size must be a multiple of 8')
        if width // 8 > args.map_width or height // 8 > args.map_height:
            sys.exit(f'{src}: bigger than the tilemap')
        if palette is None and plte:
            palette = list(plte[:16])
        screens.append((src, dst, width, height, pixels))

    counts = Counter(p for _, _, _, _, pixels in screens for row in pixels for p in row)
    if palette is None:
        palette = [c for c, _ in counts.most_common()]
    missing = [c for c in counts if c not in palette]
    if missing or len(palette) > 16:
        sys.exit(f'screens need at most 16 colours; not in palette: {missing}')
    palette += [(0, 0, 0)] * (16 - len(palette))
    color_index = {}
    for i, c in enumerate(palette):
        color_index.setdefault(c, i)

    # Tile 0 is always the blank tile, so empty tilemap entries show the backdrop colour.
    blank = tuple(tuple([0] * 8) for _ in range(8))
    tiles = [blank]
    lookup = {blank: (0, 0)}
    for src, dst, width, height, pixels in screens:
        indices = [[color_index[p] for p in row] for row in pixels]
        tilemap = [0] * (args.map_width * args.map_height)
        for ty in range(height // 8):
            for tx in range(width // 8):
                tile = get_tile(indices, tx, ty)
                if tile not in lookup:
                    tile_id = len(tiles)
                    tiles.append(tile)
                    # Only add the flipped versions if nothing else already maps to them.
                    for flips, variant in ((0, tile), (1, hflip(tile)), (2, vflip(tile)), (3, vflip(hflip(tile)))):
                        lookup.setdefault(variant, (tile_id, flips))
                tile_id, flips = lookup[tile]
                tilemap[ty * args.map_width + tx] = tile_id | (flips << 10) | (args.palnum << 12)
        with open(dst, 'wb') as f:
            f.write(struct.pack(f'<{len(tilemap)}H', *tilemap))

    if len(tiles) > 1024:
        sys.exit(f'too many tiles: {len(tiles)} (max 1024)')
    rows = (len(tiles) + TILES_PER_ROW - 1) // TILES_PER_ROW
    sheet = [[0] * (TILES_PER_ROW * 8) for _ in range(rows * 8)]
    for i, tile in enumerate(tiles):
        ox, oy = (i % TILES_PER_ROW) * 8, (i // TILES_PER_ROW) * 8
        for y in range(8):
            sheet[oy + y][ox:ox + 8] = tile[y]
    write_indexed_png(args.tiles, TILES_PER_ROW * 8, rows * 8, sheet, palette)
    print(f'{args.tiles}: {len(tiles)} tiles')


if __name__ == '__main__':
    main()
