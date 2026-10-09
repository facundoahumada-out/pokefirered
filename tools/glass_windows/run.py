#!/usr/bin/env python3
# Glass windows generator for the DNS window lights.
#
# For every town in buildglass.TOWNS it:
#  - builds palette 7 of the town's secondary tileset as a glass-only palette
#    (colours 1-4 are always General's palette 3 colours 10-13),
#  - moves the glass pixels of every window metatile to their own layer, drawn with palette 7,
#  - copies General's window metatiles to the fixed block 0x3E0+ of the town tileset and
#    makes the town's maps use those copies.
#
# IMPORTANT: it must be run on tilesets that haven't been processed yet (it is not idempotent).
# Usage: python3 tools/glass_windows/run.py [TownName ...]
import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from buildglass import TOWNS, Town

names = sys.argv[1:] or list(TOWNS)
for name in names:
    T = Town(name).run()
    T.save()
    n = T.update_maps()
    print(f'{name}: {len(T.sec_windows)} windows, {len(T.newtiles)} new tiles, {n} map cells', ' | '.join(T.log))
