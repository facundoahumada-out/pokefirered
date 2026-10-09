import sys, os, json, struct
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from render2 import TS, ts_dir
from gfx import read_png, write_png_indexed4, read_pal, tiles_of, ROOT
from inventory import is_water
os.chdir(ROOT)

GEN_GLASS_IDX = [10, 11, 12, 13]           # General palette 3 glass colours -> glass palette 1..4
GEN_GLASS = {(3, i) for i in GEN_GLASS_IDX}
GLASS_PAL = 7
BLOCK_BASE = 0x3E0
GEN_WINDOWS = [0x006,0x007,0x018,0x019,0x020,0x021,0x042,0x043,0x057,0x058,0x059,0x05b,0x062,
               0x150,0x151,0x154,0x155,0x156,0x15b,0x180,0x181,0x197,0x1b5,0x1b6,0x1b7]
def ROWMASK(rows): return rows
LAV_MASKS = {
    (0x28c, 12): [[y == 7 and 3 <= x <= 6 for x in range(8)] for y in range(8)],
    (0x29c, 12): [[y <= 5 and 3 <= x <= 6 for x in range(8)] for y in range(8)],
}
TOWNS = {
 'PalletTown':     dict(dir='pallet_town',     glass={(8,8),(8,9),(8,10),(9,8),(9,9),(9,10),(10,8),(10,9),(10,10)}, excl=set()),
 'ViridianCity':   dict(dir='viridian_city',   glass=set(), excl=set()),
 'PewterCity':     dict(dir='pewter_city',     glass={(8,8),(8,9),(8,10),(9,8),(9,9),(9,10),(11,5),(11,6),(11,12)}, excl=set()),
 'CeruleanCity':   dict(dir='cerulean_city',   glass=set(), excl={0x2e9}),
 'VermilionCity':  dict(dir='vermilion_city',  glass={(9,14),(9,15),(10,14)}, excl=set()),
 'LavenderTown':   dict(dir='lavender_town',   glass=set(), excl={0x2f6,0x2f7}, masks=LAV_MASKS),
 'CeladonCity':    dict(dir='celadon_city',    glass={(8,5),(8,6),(8,7),(10,10),(10,11),(10,12)}, excl={0x2c2,0x2d1,0x35d,0x35e}),
 'FuchsiaCity':    dict(dir='fuchsia_city',    glass=set(), excl={0x288,0x289}),
 'SaffronCity':    dict(dir='saffron_city',    glass={(9,13),(9,14),(12,13),(12,15)}, excl={0x2f8,0x2f9,0x2fa,0x2fb}),
 'CinnabarIsland': dict(dir='cinnabar_island', glass={(9,9),(9,10)}, excl=set()),
 'IndigoPlateau':  dict(dir='indigo_plateau',  glass={(10,12),(10,13),(10,14)}, excl=set()),
 'SeviiIslands123':dict(dir='sevii_islands_123',glass={(11,8),(11,9)}, excl={0x2a0}),
 'SeviiIslands45': dict(dir='sevii_islands_45', glass={(9,14)}, excl=set()),
 'SeviiIslands67': dict(dir='sevii_islands_67', glass=set(), excl={0x318,0x319,0x31a,0x31b}),
}

class Town:
    def __init__(self, name):
        self.name=name; c=TOWNS[name]; self.cfg=c
        self.d=f"data/tilesets/secondary/{c['dir']}"
        self.ts=TS('gTileset_General','gTileset_'+name)
        self.glass=c['glass']|GEN_GLASS; self.masks=c.get('masks',{})
        w,h,bd,self.rows,self.plte=read_png(self.d+'/tiles.png')
        m=open(self.d+'/metatiles.bin','rb').read(); self.mt=list(struct.unpack(f'<{len(m)//2}H',m))
        a=open(self.d+'/metatile_attributes.bin','rb').read(); self.attr=list(struct.unpack(f'<{len(a)//4}I',a))
        g=open('data/tilesets/primary/general/metatiles.bin','rb').read(); self.gmt=list(struct.unpack(f'<{len(g)//2}H',g))
        ga=open('data/tilesets/primary/general/metatile_attributes.bin','rb').read(); self.gattr=list(struct.unpack(f'<{len(ga)//4}I',ga))
        self.gtiles=tiles_of('primary/general')
        self.pals=self.ts.pals
        self.newtiles={}; self.log=[]
        used=set(e&0x3ff for e in self.mt)|set(e&0x3ff for e in self.gmt)
        self.free=[640+i for i in range(1,min(self.ntiles(),376)) if (640+i) not in used and all(c==0 for r in self.tile(640+i) for c in r)]
    # ---- tiles ----
    def ntiles(self): return (len(self.rows)//8)*16
    def tile(self, t):
        if t<640: return self.gtiles[t]
        l=t-640
        if l>=self.ntiles(): return [[0]*8 for _ in range(8)]
        ty,tx=divmod(l,16); return [self.rows[ty*8+y][tx*8:tx*8+8] for y in range(8)]
    def put(self, t, px):
        l=t-640
        while l>=self.ntiles():
            for _ in range(8): self.rows.append([0]*128)
        ty,tx=divmod(l,16)
        for y in range(8): self.rows[ty*8+y][tx*8:tx*8+8]=list(px[y])
    def alloc(self, px):
        key=tuple(tuple(r) for r in px)
        if all(c==0 for r in px for c in r): return 0
        if key in self.newtiles: return self.newtiles[key]
        if not self.free:
            n=self.ntiles()
            if n>=376: raise Exception(f'{self.name}: sin espacio de tiles')
            for _ in range(8): self.rows.append([0]*128)
            self.free=[640+i for i in range(n,min(n+16,376))]
        t=self.free.pop(0)
        self.put(t,px); self.newtiles[key]=t; return t
    # ---- glass palette ----
    def build_glass_palette(self):
        cols=[self.pals[3][i] for i in GEN_GLASS_IDX]
        extra=[self.pals[p][i] for (p,i) in sorted(self.cfg['glass'])]
        for (t,p),m in self.masks.items():
            tp=self.tile(t)
            extra+= [self.pals[p][tp[y][x]] for y in range(8) for x in range(8) if m[y][x]]
        for c in extra:
            if c not in cols: cols.append(c)
        assert len(cols)<=15, (self.name, len(cols))
        self.gpal=cols
        self.gindex={c:i+1 for i,c in enumerate(cols)}
    # ---- per-metatile processing ----
    def entries(self, mid):
        if mid<640: return list(self.gmt[mid*12:mid*12+12])
        return list(self.mt[(mid-640)*12:(mid-640)*12+12])
    def glass_positions(self, ent, q):
        vis=[[None]*8 for _ in range(8)]
        for L in range(3):
            e=ent[L*4+q]; t=e&0x3ff; p=e>>12; hf=(e>>10)&1; vf=(e>>11)&1
            if p>=13: continue
            tp=self.tile(t); filler=(L==0 and e==0x3014)
            for y in range(8):
                for x in range(8):
                    ty=7-y if vf else y; tx=7-x if hf else x
                    c=tp[ty][tx]
                    if c: vis[y][x]=(L,t,p,c,ty,tx,filler)
        G={}
        for y in range(8):
            for x in range(8):
                v=vis[y][x]
                if not v or v[6]: continue
                L,t,p,c,ty,tx,_=v
                m=self.masks.get((t,p))
                if (p,c) in self.glass or (m and m[ty][tx]):
                    G[(y,x)]=self.pals[p][c]
        return G, vis
    def alloc_flip(self, px):
        """allocate a tile reusing an existing one if a flipped version exists; returns (tile, flags)"""
        if all(c==0 for r in px for c in r): return 0,0
        variants=[(px,0),([r[::-1] for r in px],0x400),(px[::-1],0x800),([r[::-1] for r in px[::-1]],0xC00)]
        for v,f in variants:
            key=tuple(tuple(r) for r in v)
            if key in self.newtiles: return self.newtiles[key],f
        return self.alloc(px),0
    def process(self, mid):
        ent=self.entries(mid); changed=False
        for q in range(4):
            G,vis=self.glass_positions(ent,q)
            if not G: continue
            changed=True
            top=max(vis[y][x][0] for (y,x) in G)
            filler_visible=any(vis[y][x] and vis[y][x][6] for y in range(8) for x in range(8) if (y,x) not in G)
            feasible=[]
            for L in range(3):
                e=ent[L*4+q]; t=e&0x3ff; hf=(e>>10)&1; vf=(e>>11)&1; tp=self.tile(t)
                if all(c==0 for r in tp for c in r): feasible.append(L); continue
                if L==0 and t==0x014 and (e>>12)==3 and not filler_visible: feasible.append(L); continue
                only_glass=all(tp[ty][tx]==0 or ((7-ty if vf else ty),(7-tx if hf else tx)) in G for ty in range(8) for tx in range(8))
                if only_glass: feasible.append(L)
            if not feasible:
                self.log.append(f'SIN CAPA LIBRE: metatile {mid:#x} cuadrante {q}'); continue
            below=[L for L in feasible if L<=top]
            GL=max(below) if below else min(feasible)
            for L in range(GL+1,3):
                e=ent[L*4+q]; t=e&0x3ff; hf=(e>>10)&1; vf=(e>>11)&1
                tp=[list(r) for r in self.tile(t)]; mod=False
                for (y,x) in G:
                    ty=7-y if vf else y; tx=7-x if hf else x
                    if tp[ty][tx]: tp[ty][tx]=0; mod=True
                if mod:
                    nt=self.alloc(tp)
                    ent[L*4+q]=((e&0xFC00)|nt) if nt else 0
            gl=[[0]*8 for _ in range(8)]
            for (y,x),rgb in G.items(): gl[y][x]=self.gindex[rgb]
            gt,fl=self.alloc_flip(gl)
            ent[GL*4+q]=gt|fl|(GLASS_PAL<<12)
        return ent if changed else None
    def run(self):
        self.build_glass_palette()
        c=self.cfg
        # secondary windows (in place)
        sec=[m for m in range(640,640+len(self.mt)//12) if m not in c['excl'] and not is_water(self.ts,m)
             and any(self.glass_positions(self.entries(m),q)[0] for q in range(4))]
        for m in sec:
            ent=self.process(m)
            if ent: self.mt[(m-640)*12:(m-640)*12+12]=ent
        # General window copies in the fixed block
        n=len(self.mt)//12; need=BLOCK_BASE-640+len(GEN_WINDOWS)
        assert n<=BLOCK_BASE-640, (self.name,'metatiles chocan con el bloque')
        self.mt+= [0]*12*(need-n); self.attr+= [0]*(need-n)
        for i,g in enumerate(GEN_WINDOWS):
            ent=self.process(g) or self.entries(g)
            b=BLOCK_BASE-640+i
            self.mt[b*12:b*12+12]=ent; self.attr[b]=self.gattr[g]
        self.sec_windows=sec
        return self
    def save(self):
        plte=(self.plte+[(0,0,0)]*16)[:16]
        write_png_indexed4(self.d+'/tiles.png',128,len(self.rows),self.rows,plte)
        open(self.d+'/metatiles.bin','wb').write(struct.pack(f'<{len(self.mt)}H',*self.mt))
        open(self.d+'/metatile_attributes.bin','wb').write(struct.pack(f'<{len(self.attr)}I',*self.attr))
        cols=[(0,0,0)]+self.gpal+[(0,0,0)]*(15-len(self.gpal))
        open(f'{self.d}/palettes/{GLASS_PAL:02}.pal','w').write('JASC-PAL\r\n0100\r\n16\r\n'+''.join(f'{r} {g} {b}\r\n' for r,g,b in cols))
    def update_maps(self):
        lay=json.load(open('data/layouts/layouts.json'))['layouts']; n=0
        remap={g:BLOCK_BASE+i for i,g in enumerate(GEN_WINDOWS)}
        for l in lay:
            if l.get('secondary_tileset')!='gTileset_'+self.name or l.get('primary_tileset')!='gTileset_General': continue
            p=l['blockdata_filepath']; d=open(p,'rb').read(); v=list(struct.unpack(f'<{len(d)//2}H',d))
            for i,x in enumerate(v):
                if (x&0x3ff) in remap: v[i]=(x&0xFC00)|remap[x&0x3ff]; n+=1
            open(p,'wb').write(struct.pack(f'<{len(v)}H',*v))
        return n
