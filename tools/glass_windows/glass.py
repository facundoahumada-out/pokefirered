import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from render2 import *
F=(14,14,6)
def filt(c): return tuple(((v>>3)*(32-f)>>5)<<3 for v,f in zip(c,F))
def glassy(c):
    r,g,b=c
    return b>=200 and b-r>=80 and g>=120
def night_pals(ts, lit):
    n=[[filt(c) for c in p] for p in ts.pals]
    for (p,i) in lit: n[p][i]=(248,216,96)
    return n
def candidates(ts):
    return {(p,i) for p in range(13) for i in range(1,16) if glassy(ts.pals[p][i])}
