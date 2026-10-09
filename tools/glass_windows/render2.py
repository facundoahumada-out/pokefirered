# Generic renderer: any layout with any tileset pair
import sys, os, json, struct, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from gfx import *
os.chdir(ROOT)
hdr=open('src/data/tilesets/headers.h').read()
gfxh=open('src/data/tilesets/graphics.h').read()+open('src/graphics.c').read()
_lay={l['id']:l for l in json.load(open('data/layouts/layouts.json'))['layouts'] if 'id' in l}
def ts_dir(sym):
    m=re.search(r'const struct Tileset '+sym+r' =\s*\{(.*?)\};',hdr,re.S).group(1)
    tiles=re.search(r'\.tiles = (\w+)',m).group(1)
    return re.search(r'\b'+tiles+r'\[\][^\n]*?"data/tilesets/(.*?)/tiles',gfxh).group(1)
class TS:
    def __init__(self, psym, ssym):
        P=ts_dir(psym); S=ts_dir(ssym); self.P,self.S=P,S
        t=tiles_of(P); t+= [[[0]*8]*8]*(640-len(t)); self.ntp=len(t)
        self.tiles=t+tiles_of(S)
        self.pals=[read_pal(f'data/tilesets/{P}/palettes/{i:02}.pal') for i in range(7)]+[read_pal(f'data/tilesets/{S}/palettes/{i:02}.pal') for i in range(7,13)]
        m=metatiles_of(P); self.nmp=len(m); m+=[(0,)*12]*(640-len(m)); self.mts=m+metatiles_of(S)
    def metatile(self, mid, pals=None):
        pals=pals or self.pals
        img=[[pals[0][0]]*16 for _ in range(16)]
        if mid>=len(self.mts): return img
        for L in range(3):
            for k in range(4):
                e=self.mts[mid][L*4+k]; t=e&0x3FF; hf=(e>>10)&1; vf=(e>>11)&1; pal=e>>12
                ox=(k%2)*8; oy=(k//2)*8
                tile=self.tiles[t] if t<len(self.tiles) else [[0]*8]*8
                for y in range(8):
                    for x in range(8):
                        c=tile[7-y if vf else y][7-x if hf else x]
                        if c==0: continue
                        img[oy+y][ox+x]=pals[pal][c] if pal<13 else (255,0,255)
        return img
def layout(lid):
    L=_lay[lid]; d=open(L['blockdata_filepath'],'rb').read()
    return L, struct.unpack(f'<{len(d)//2}H',d)
def render_layout(lid, out, SC=1, pals=None, crop=None):
    L,b=layout(lid); ts=TS(L['primary_tileset'],L['secondary_tileset'])
    W,H=L['width'],L['height']; x0,x1,y0,y1=crop or (0,W,0,H)
    pix=[[(0,0,0)]*((x1-x0)*16*SC) for _ in range((y1-y0)*16*SC)]
    cache={}
    for by in range(y0,y1):
        for bx in range(x0,x1):
            mid=b[by*W+bx]&0x3FF
            if mid not in cache: cache[mid]=ts.metatile(mid,pals)
            m=cache[mid]
            for y in range(16):
                for x in range(16):
                    for sy in range(SC):
                        r=pix[((by-y0)*16+y)*SC+sy]
                        for sx in range(SC): r[((bx-x0)*16+x)*SC+sx]=m[y][x]
    write_png_rgb(out,len(pix[0]),len(pix),pix)
    return ts
