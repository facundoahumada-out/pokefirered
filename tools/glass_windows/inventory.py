import sys, os, json
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from glass import *
TOWNS=['LAYOUT_PALLET_TOWN','LAYOUT_VIRIDIAN_CITY','LAYOUT_PEWTER_CITY','LAYOUT_CERULEAN_CITY','LAYOUT_VERMILION_CITY','LAYOUT_LAVENDER_TOWN','LAYOUT_CELADON_CITY','LAYOUT_FUCHSIA_CITY','LAYOUT_SAFFRON_CITY','LAYOUT_SAFFRON_CITY_CONNECTION','LAYOUT_CINNABAR_ISLAND','LAYOUT_INDIGO_PLATEAU_EXTERIOR','LAYOUT_ONE_ISLAND','LAYOUT_TWO_ISLAND','LAYOUT_THREE_ISLAND','LAYOUT_FOUR_ISLAND','LAYOUT_FIVE_ISLAND','LAYOUT_SIX_ISLAND','LAYOUT_SEVEN_ISLAND']
def glass_mask(ts, mid):
    """per-pixel: (pal,idx,layer) if glassy colour"""
    out=[]
    if mid>=len(ts.mts): return out
    for L in range(3):
        for k in range(4):
            e=ts.mts[mid][L*4+k]; t=e&0x3FF; pal=e>>12
            if pal>=13 or t>=len(ts.tiles): continue
            idxs=set(c for r in ts.tiles[t] for c in r if c)
            for c in idxs:
                if glassy(ts.pals[pal][c]): out.append((L,k,t,pal,c))
    return out
def town_candidates(lid):
    L,b=layout(lid); ts=TS(L['primary_tileset'],L['secondary_tileset'])
    used=sorted(set(x&0x3FF for x in b))
    return ts,{m:glass_mask(ts,m) for m in used if glass_mask(ts,m)}
import struct as _st
WATER={0x10,0x11,0x12,0x13,0x15,0x16,0x17,0x19,0x1A,0x1B,0x22,0x50,0x51,0x52,0x53}
def behaviors(tsdir):
    d=open(f'data/tilesets/{tsdir}/metatile_attributes.bin','rb').read()
    return [a&0x1FF for a in _st.unpack(f'<{len(d)//4}I',d)]
def is_water(ts, mid):
    if mid<640:
        b=behaviors(ts.P); return mid<len(b) and b[mid] in WATER
    b=behaviors(ts.S); return mid-640<len(b) and b[mid-640] in WATER
