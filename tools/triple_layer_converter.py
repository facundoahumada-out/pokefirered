#!/usr/bin/env python3
# Converts pokefirered metatiles to the triple layer system (12 tiles per metatile).
# Adapted from https://gist.github.com/SBird1337/ccfa47b5ef41c454b637735d4574592a
# FRLG metatile attributes are 32-bit, with the layer type in bits 29-30.
import os
import argparse
import struct

layer_type_mask = 0x60000000
layer_type_shift = 29

METATILE_LAYER_TYPE_NORMAL = 0   # bottom/top -> middle/top bg layers
METATILE_LAYER_TYPE_COVERED = 1  # bottom/top -> bottom/middle bg layers
METATILE_LAYER_TYPE_SPLIT = 2    # bottom/top -> bottom/top bg layers

parser = argparse.ArgumentParser(description='Convert pokefirered metatiles to use the triple layer system.')
parser.add_argument('--tsroot', required=True,
                    help='Path to the tilesets directory in your pokefirered project, e.g. /path/to/pokefirered/data/tilesets')
args = parser.parse_args()

if not os.path.exists(args.tsroot):
    print(f"Given tilesets root directory does not exist: {args.tsroot}")
    exit(1)

tileset_dirs = []
for group in ('primary', 'secondary'):
    group_path = os.path.join(args.tsroot, group)
    if not os.path.exists(group_path):
        print(f"[ERR] Given tilesets root directory does not contain a {group} folder, aborting.")
        exit(1)
    _, dirs, _ = next(os.walk(group_path))
    tileset_dirs += [os.path.join(group_path, d) for d in sorted(dirs)]

for tileset_dir in tileset_dirs:
    tileset_name = os.path.basename(tileset_dir)
    metatiles_path = os.path.join(tileset_dir, 'metatiles.bin')
    metatile_attributes_path = os.path.join(tileset_dir, 'metatile_attributes.bin')
    if not os.path.exists(metatiles_path):
        print(f"[SKIP] {tileset_name} skipped because metatiles.bin was not found.")
        continue
    if not os.path.exists(metatile_attributes_path):
        print(f"[SKIP] {tileset_name} skipped because metatile_attributes.bin was not found.")
        continue

    with open(metatile_attributes_path, 'rb') as f:
        attr_data = f.read()
    with open(metatiles_path, 'rb') as f:
        metatile_bytes = f.read()

    num_metatiles = len(attr_data) // 4
    if len(metatile_bytes) != 16 * num_metatiles:
        print(f"[SKIP] {tileset_name} skipped because metatiles.bin is not four times the size of metatile_attributes.bin (already converted?)")
        continue

    attributes = struct.unpack(f'<{num_metatiles}I', attr_data)
    metatiles = struct.unpack(f'<{num_metatiles * 8}H', metatile_bytes)

    new_metatile_data = []
    new_attributes = []
    for i, attr in enumerate(attributes):
        layer_type = (attr & layer_type_mask) >> layer_type_shift
        bottom = list(metatiles[i * 8:i * 8 + 4])
        top = list(metatiles[i * 8 + 4:i * 8 + 8])
        empty = [0] * 4
        if layer_type == METATILE_LAYER_TYPE_NORMAL:
            # Vanilla FRLG draws tile 0x014 with palette 3 under "normal" metatiles,
            # and some metatiles rely on it showing through transparent pixels.
            new_metatile_data += [0x3014] * 4 + bottom + top
        elif layer_type == METATILE_LAYER_TYPE_COVERED:
            new_metatile_data += bottom + top + empty
        elif layer_type == METATILE_LAYER_TYPE_SPLIT:
            new_metatile_data += bottom + empty + top
        else:
            new_metatile_data += [0] * 12
        new_attributes.append(attr & ~layer_type_mask & 0xFFFFFFFF)

    with open(metatiles_path, 'wb') as f:
        f.write(struct.pack(f'<{len(new_metatile_data)}H', *new_metatile_data))
    with open(metatile_attributes_path, 'wb') as f:
        f.write(struct.pack(f'<{len(new_attributes)}I', *new_attributes))
    print(f'[OK] Converted {tileset_name}')
