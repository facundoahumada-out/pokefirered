import zlib, struct, os
ROOT=os.environ.get('ROOT', os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..')))
def read_png(path):
    d=open(path,'rb').read(); pos=8; idat=b''; plte=None
    while pos<len(d):
        ln,=struct.unpack('>I',d[pos:pos+4]); typ=d[pos+4:pos+8]; body=d[pos+8:pos+8+ln]; pos+=12+ln
        if typ==b'IHDR': w,h,bd,ct,_,_,il=struct.unpack('>IIBBBBB',body)
        elif typ==b'PLTE': plte=[tuple(body[i:i+3]) for i in range(0,len(body),3)]
        elif typ==b'IDAT': idat+=body
    assert ct==3 and il==0, (ct,il)
    raw=zlib.decompress(idat); stride=(w*bd+7)//8; bpp=1
    rows=[]; prev=bytearray(stride); i=0
    for y in range(h):
        f=raw[i]; line=bytearray(raw[i+1:i+1+stride]); i+=1+stride
        for x in range(stride):
            a=line[x-bpp] if x>=bpp else 0; b=prev[x]; c=prev[x-bpp] if x>=bpp else 0
            if f==1: line[x]=(line[x]+a)&255
            elif f==2: line[x]=(line[x]+b)&255
            elif f==3: line[x]=(line[x]+((a+b)>>1))&255
            elif f==4:
                p=a+b-c; pa=abs(p-a); pb=abs(p-b); pc=abs(p-c)
                pr=a if pa<=pb and pa<=pc else (b if pb<=pc else c)
                line[x]=(line[x]+pr)&255
        prev=line
        px=[]
        for x in range(w):
            if bd==4: v=line[x//2]; px.append((v>>4) if x%2==0 else (v&15))
            elif bd==8: px.append(line[x])
        rows.append(px)
    return w,h,bd,rows,plte
def write_png_rgb(path,w,h,pix):
    raw=b''.join(b'\x00'+bytes(c for p in pix[y] for c in p) for y in range(h))
    def ch(t,b): return struct.pack('>I',len(b))+t+b+struct.pack('>I',zlib.crc32(t+b)&0xffffffff)
    open(path,'wb').write(b'\x89PNG\r\n\x1a\n'+ch(b'IHDR',struct.pack('>IIBBBBB',w,h,8,2,0,0,0))+ch(b'IDAT',zlib.compress(raw,9))+ch(b'IEND',b''))
def write_png_indexed4(path,w,h,rows,plte):
    raw=b''
    for y in range(h):
        line=bytearray()
        for x in range(0,w,2): line.append((rows[y][x]<<4)|rows[y][x+1])
        raw+=b'\x00'+bytes(line)
    def ch(t,b): return struct.pack('>I',len(b))+t+b+struct.pack('>I',zlib.crc32(t+b)&0xffffffff)
    open(path,'wb').write(b'\x89PNG\r\n\x1a\n'+ch(b'IHDR',struct.pack('>IIBBBBB',w,h,4,3,0,0,0))+ch(b'PLTE',b''.join(bytes(c) for c in plte))+ch(b'IDAT',zlib.compress(raw,9))+ch(b'IEND',b''))
def read_pal(path):
    L=open(path).read().split('\n'); return [tuple(int(v) for v in l.split()) for l in L[3:19]]
def tiles_of(ts):
    w,h,bd,rows,_=read_png(f'{ROOT}/data/tilesets/{ts}/tiles.png')
    T=[]
    for ty in range(h//8):
        for tx in range(w//8):
            T.append([rows[ty*8+y][tx*8:tx*8+8] for y in range(8)])
    return T
def metatiles_of(ts):
    d=open(f'{ROOT}/data/tilesets/{ts}/metatiles.bin','rb').read()
    v=struct.unpack(f'<{len(d)//2}H',d); return [v[i:i+12] for i in range(0,len(v),12)]
