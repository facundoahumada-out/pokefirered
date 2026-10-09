EventScript_NeedCardKey::
# 2 "data/scripts/silphco_doors.pory"
	msgbox Text_ItNeedsCardKey
# 3 "data/scripts/silphco_doors.pory"
	releaseall
	end


EventScript_DoorUnlocked::
# 8 "data/scripts/silphco_doors.pory"
	msgbox Text_TheDoorIsOpen
# 9 "data/scripts/silphco_doors.pory"
	releaseall
	end


EventScript_Close2FDoor1::
# 14 "data/scripts/silphco_doors.pory"
	setmetatile 5, 8, METATILE_SilphCo_HorizontalBarrier_TopLeft, 1
# 15 "data/scripts/silphco_doors.pory"
	setmetatile 6, 8, METATILE_SilphCo_HorizontalBarrier_TopRight, 1
# 16 "data/scripts/silphco_doors.pory"
	setmetatile 5, 9, METATILE_SilphCo_HorizontalBarrier_BottomLeft, 1
# 17 "data/scripts/silphco_doors.pory"
	setmetatile 6, 9, METATILE_SilphCo_HorizontalBarrier_BottomRight, 1
# 18 "data/scripts/silphco_doors.pory"
	setmetatile 6, 10, METATILE_SilphCo_Floor_ShadeFull, 0
	return


EventScript_Close2FDoor2::
# 23 "data/scripts/silphco_doors.pory"
	setmetatile 5, 15, METATILE_SilphCo_HorizontalBarrier_TopLeft, 1
# 24 "data/scripts/silphco_doors.pory"
	setmetatile 6, 15, METATILE_SilphCo_HorizontalBarrier_TopRight, 1
# 25 "data/scripts/silphco_doors.pory"
	setmetatile 5, 16, METATILE_SilphCo_HorizontalBarrier_BottomLeft, 1
# 26 "data/scripts/silphco_doors.pory"
	setmetatile 6, 16, METATILE_SilphCo_HorizontalBarrier_BottomRight, 1
# 27 "data/scripts/silphco_doors.pory"
	setmetatile 6, 17, METATILE_SilphCo_Floor_ShadeFull, 0
	return


EventScript_Close3FDoor1::
# 32 "data/scripts/silphco_doors.pory"
	setmetatile 9, 11, METATILE_SilphCo_VerticalBarrier_TopLeft, 1
# 33 "data/scripts/silphco_doors.pory"
	setmetatile 10, 11, METATILE_SilphCo_VerticalBarrier_TopRight, 1
# 34 "data/scripts/silphco_doors.pory"
	setmetatile 9, 12, METATILE_SilphCo_VerticalBarrier_MidLeft, 1
# 35 "data/scripts/silphco_doors.pory"
	setmetatile 10, 12, METATILE_SilphCo_VerticalBarrier_MidRight, 1
# 36 "data/scripts/silphco_doors.pory"
	setmetatile 9, 13, METATILE_SilphCo_VerticalBarrier_BottomLeft, 1
# 37 "data/scripts/silphco_doors.pory"
	setmetatile 10, 13, METATILE_SilphCo_VerticalBarrier_BottomRight, 1
	return


EventScript_Close3FDoor2::
# 42 "data/scripts/silphco_doors.pory"
	setmetatile 20, 11, METATILE_SilphCo_VerticalBarrier_TopLeft, 1
# 43 "data/scripts/silphco_doors.pory"
	setmetatile 21, 11, METATILE_SilphCo_VerticalBarrier_TopRight, 1
# 44 "data/scripts/silphco_doors.pory"
	setmetatile 20, 12, METATILE_SilphCo_VerticalBarrier_MidLeft, 1
# 45 "data/scripts/silphco_doors.pory"
	setmetatile 21, 12, METATILE_SilphCo_VerticalBarrier_MidRight, 1
# 46 "data/scripts/silphco_doors.pory"
	setmetatile 20, 13, METATILE_SilphCo_VerticalBarrier_BottomLeft, 1
# 47 "data/scripts/silphco_doors.pory"
	setmetatile 21, 13, METATILE_SilphCo_VerticalBarrier_BottomRight, 1
	return


EventScript_Close4FDoor1::
# 52 "data/scripts/silphco_doors.pory"
	setmetatile 3, 16, METATILE_SilphCo_HorizontalBarrier_TopLeft, 1
# 53 "data/scripts/silphco_doors.pory"
	setmetatile 4, 16, METATILE_SilphCo_HorizontalBarrier_TopRight, 1
# 54 "data/scripts/silphco_doors.pory"
	setmetatile 3, 17, METATILE_SilphCo_HorizontalBarrier_BottomLeft, 1
# 55 "data/scripts/silphco_doors.pory"
	setmetatile 4, 17, METATILE_SilphCo_HorizontalBarrier_BottomRight, 1
# 56 "data/scripts/silphco_doors.pory"
	setmetatile 4, 18, METATILE_SilphCo_Floor_ShadeFull, 0
	return


EventScript_Close4FDoor2::
# 61 "data/scripts/silphco_doors.pory"
	setmetatile 14, 11, METATILE_SilphCo_HorizontalBarrier_TopLeft, 1
# 62 "data/scripts/silphco_doors.pory"
	setmetatile 15, 11, METATILE_SilphCo_HorizontalBarrier_TopRight, 1
# 63 "data/scripts/silphco_doors.pory"
	setmetatile 14, 12, METATILE_SilphCo_HorizontalBarrier_BottomLeft, 1
# 64 "data/scripts/silphco_doors.pory"
	setmetatile 15, 12, METATILE_SilphCo_HorizontalBarrier_BottomRight, 1
# 65 "data/scripts/silphco_doors.pory"
	setmetatile 15, 13, METATILE_SilphCo_Floor_ShadeFull, 0
	return


EventScript_Close5FDoor1::
# 70 "data/scripts/silphco_doors.pory"
	setmetatile 7, 8, METATILE_SilphCo_VerticalBarrier_TopLeft, 1
# 71 "data/scripts/silphco_doors.pory"
	setmetatile 8, 8, METATILE_SilphCo_VerticalBarrier_TopRight, 1
# 72 "data/scripts/silphco_doors.pory"
	setmetatile 7, 9, METATILE_SilphCo_VerticalBarrier_MidLeft, 1
# 73 "data/scripts/silphco_doors.pory"
	setmetatile 8, 9, METATILE_SilphCo_VerticalBarrier_MidRight, 1
# 74 "data/scripts/silphco_doors.pory"
	setmetatile 7, 10, METATILE_SilphCo_VerticalBarrier_BottomLeft, 1
# 75 "data/scripts/silphco_doors.pory"
	setmetatile 8, 10, METATILE_SilphCo_VerticalBarrier_BottomRight, 1
	return


EventScript_Close5FDoor2::
# 80 "data/scripts/silphco_doors.pory"
	setmetatile 7, 17, METATILE_SilphCo_VerticalBarrier_TopLeft, 1
# 81 "data/scripts/silphco_doors.pory"
	setmetatile 8, 17, METATILE_SilphCo_VerticalBarrier_TopRight, 1
# 82 "data/scripts/silphco_doors.pory"
	setmetatile 7, 18, METATILE_SilphCo_VerticalBarrier_MidLeft, 1
# 83 "data/scripts/silphco_doors.pory"
	setmetatile 8, 18, METATILE_SilphCo_VerticalBarrier_MidRight, 1
# 84 "data/scripts/silphco_doors.pory"
	setmetatile 7, 19, METATILE_SilphCo_VerticalBarrier_BottomLeft, 1
# 85 "data/scripts/silphco_doors.pory"
	setmetatile 8, 19, METATILE_SilphCo_VerticalBarrier_BottomRight, 1
	return


EventScript_Close5FDoor3::
# 90 "data/scripts/silphco_doors.pory"
	setmetatile 18, 12, METATILE_SilphCo_VerticalBarrier_TopLeft, 1
# 91 "data/scripts/silphco_doors.pory"
	setmetatile 19, 12, METATILE_SilphCo_VerticalBarrier_TopRight, 1
# 92 "data/scripts/silphco_doors.pory"
	setmetatile 18, 13, METATILE_SilphCo_VerticalBarrier_MidLeft, 1
# 93 "data/scripts/silphco_doors.pory"
	setmetatile 19, 13, METATILE_SilphCo_VerticalBarrier_MidRight, 1
# 94 "data/scripts/silphco_doors.pory"
	setmetatile 18, 14, METATILE_SilphCo_VerticalBarrier_BottomLeft, 1
# 95 "data/scripts/silphco_doors.pory"
	setmetatile 19, 14, METATILE_SilphCo_VerticalBarrier_BottomRight, 1
	return


EventScript_Close6FDoor::
# 100 "data/scripts/silphco_doors.pory"
	setmetatile 5, 14, METATILE_SilphCo_VerticalBarrier_TopLeft, 1
# 101 "data/scripts/silphco_doors.pory"
	setmetatile 6, 14, METATILE_SilphCo_VerticalBarrier_TopRight, 1
# 102 "data/scripts/silphco_doors.pory"
	setmetatile 5, 15, METATILE_SilphCo_VerticalBarrier_MidLeft, 1
# 103 "data/scripts/silphco_doors.pory"
	setmetatile 6, 15, METATILE_SilphCo_VerticalBarrier_MidRight, 1
# 104 "data/scripts/silphco_doors.pory"
	setmetatile 5, 16, METATILE_SilphCo_VerticalBarrier_BottomLeft, 1
# 105 "data/scripts/silphco_doors.pory"
	setmetatile 6, 16, METATILE_SilphCo_VerticalBarrier_BottomRight, 1
	return


EventScript_Close7FDoor1::
# 110 "data/scripts/silphco_doors.pory"
	setmetatile 11, 8, METATILE_SilphCo_HorizontalBarrier_TopLeft, 1
# 111 "data/scripts/silphco_doors.pory"
	setmetatile 12, 8, METATILE_SilphCo_HorizontalBarrier_TopRight, 1
# 112 "data/scripts/silphco_doors.pory"
	setmetatile 11, 9, METATILE_SilphCo_HorizontalBarrier_BottomLeft, 1
# 113 "data/scripts/silphco_doors.pory"
	setmetatile 12, 9, METATILE_SilphCo_HorizontalBarrier_BottomRight, 1
# 114 "data/scripts/silphco_doors.pory"
	setmetatile 12, 10, METATILE_SilphCo_Floor_ShadeFull, 0
	return


EventScript_Close7FDoor2::
# 119 "data/scripts/silphco_doors.pory"
	setmetatile 24, 7, METATILE_SilphCo_HorizontalBarrier_TopLeft, 1
# 120 "data/scripts/silphco_doors.pory"
	setmetatile 25, 7, METATILE_SilphCo_HorizontalBarrier_TopRight, 1
# 121 "data/scripts/silphco_doors.pory"
	setmetatile 24, 8, METATILE_SilphCo_HorizontalBarrier_BottomLeft, 1
# 122 "data/scripts/silphco_doors.pory"
	setmetatile 25, 8, METATILE_SilphCo_HorizontalBarrier_BottomRight, 1
# 123 "data/scripts/silphco_doors.pory"
	setmetatile 25, 9, METATILE_SilphCo_Floor_ShadeFull, 0
	return


EventScript_Close7FDoor3::
# 128 "data/scripts/silphco_doors.pory"
	setmetatile 25, 13, METATILE_SilphCo_HorizontalBarrier_TopLeft, 1
# 129 "data/scripts/silphco_doors.pory"
	setmetatile 26, 13, METATILE_SilphCo_HorizontalBarrier_TopRight, 1
# 130 "data/scripts/silphco_doors.pory"
	setmetatile 25, 14, METATILE_SilphCo_HorizontalBarrier_BottomLeft, 1
# 131 "data/scripts/silphco_doors.pory"
	setmetatile 26, 14, METATILE_SilphCo_HorizontalBarrier_BottomRight, 1
# 132 "data/scripts/silphco_doors.pory"
	setmetatile 26, 15, METATILE_SilphCo_Floor_ShadeFull, 0
	return


EventScript_Close8FDoor::
# 137 "data/scripts/silphco_doors.pory"
	setmetatile 5, 9, METATILE_SilphCo_VerticalBarrier_TopLeft, 1
# 138 "data/scripts/silphco_doors.pory"
	setmetatile 6, 9, METATILE_SilphCo_VerticalBarrier_TopRight, 1
# 139 "data/scripts/silphco_doors.pory"
	setmetatile 5, 10, METATILE_SilphCo_VerticalBarrier_MidLeft, 1
# 140 "data/scripts/silphco_doors.pory"
	setmetatile 6, 10, METATILE_SilphCo_VerticalBarrier_MidRight, 1
# 141 "data/scripts/silphco_doors.pory"
	setmetatile 5, 11, METATILE_SilphCo_VerticalBarrier_BottomLeft, 1
# 142 "data/scripts/silphco_doors.pory"
	setmetatile 6, 11, METATILE_SilphCo_VerticalBarrier_BottomRight, 1
	return


EventScript_Close9FDoor1::
# 147 "data/scripts/silphco_doors.pory"
	setmetatile 2, 9, METATILE_SilphCo_VerticalBarrier_TopLeft, 1
# 148 "data/scripts/silphco_doors.pory"
	setmetatile 3, 9, METATILE_SilphCo_VerticalBarrier_TopRight, 1
# 149 "data/scripts/silphco_doors.pory"
	setmetatile 2, 10, METATILE_SilphCo_VerticalBarrier_MidLeft, 1
# 150 "data/scripts/silphco_doors.pory"
	setmetatile 3, 10, METATILE_SilphCo_VerticalBarrier_MidRight, 1
# 151 "data/scripts/silphco_doors.pory"
	setmetatile 2, 11, METATILE_SilphCo_VerticalBarrier_BottomLeft, 1
# 152 "data/scripts/silphco_doors.pory"
	setmetatile 3, 11, METATILE_SilphCo_VerticalBarrier_BottomRight, 1
	return


EventScript_Close9FDoor2::
# 157 "data/scripts/silphco_doors.pory"
	setmetatile 12, 15, METATILE_SilphCo_VerticalBarrier_TopLeft, 1
# 158 "data/scripts/silphco_doors.pory"
	setmetatile 13, 15, METATILE_SilphCo_VerticalBarrier_TopRight, 1
# 159 "data/scripts/silphco_doors.pory"
	setmetatile 12, 16, METATILE_SilphCo_VerticalBarrier_MidLeft, 1
# 160 "data/scripts/silphco_doors.pory"
	setmetatile 13, 16, METATILE_SilphCo_VerticalBarrier_MidRight, 1
# 161 "data/scripts/silphco_doors.pory"
	setmetatile 12, 17, METATILE_SilphCo_VerticalBarrier_BottomLeft, 1
# 162 "data/scripts/silphco_doors.pory"
	setmetatile 13, 17, METATILE_SilphCo_VerticalBarrier_BottomRight, 1
	return


EventScript_Close9FDoor3::
# 167 "data/scripts/silphco_doors.pory"
	setmetatile 21, 6, METATILE_SilphCo_HorizontalBarrier_TopLeft, 1
# 168 "data/scripts/silphco_doors.pory"
	setmetatile 22, 6, METATILE_SilphCo_HorizontalBarrier_TopRight, 1
# 169 "data/scripts/silphco_doors.pory"
	setmetatile 21, 7, METATILE_SilphCo_HorizontalBarrier_BottomLeft, 1
# 170 "data/scripts/silphco_doors.pory"
	setmetatile 22, 7, METATILE_SilphCo_HorizontalBarrier_BottomRight, 1
# 171 "data/scripts/silphco_doors.pory"
	setmetatile 22, 8, METATILE_SilphCo_Floor_ShadeFull, 0
	return


EventScript_Close9FDoor4::
# 176 "data/scripts/silphco_doors.pory"
	setmetatile 21, 12, METATILE_SilphCo_HorizontalBarrier_TopLeft, 1
# 177 "data/scripts/silphco_doors.pory"
	setmetatile 22, 12, METATILE_SilphCo_HorizontalBarrier_TopRight, 1
# 178 "data/scripts/silphco_doors.pory"
	setmetatile 21, 13, METATILE_SilphCo_HorizontalBarrier_BottomLeft, 1
# 179 "data/scripts/silphco_doors.pory"
	setmetatile 22, 13, METATILE_SilphCo_HorizontalBarrier_BottomRight, 1
# 180 "data/scripts/silphco_doors.pory"
	setmetatile 22, 14, METATILE_SilphCo_Floor_ShadeFull, 0
	return


EventScript_Close10FDoor::
# 185 "data/scripts/silphco_doors.pory"
	setmetatile 12, 11, METATILE_SilphCo_HorizontalBarrier_TopLeft, 1
# 186 "data/scripts/silphco_doors.pory"
	setmetatile 13, 11, METATILE_SilphCo_HorizontalBarrier_TopRight, 1
# 187 "data/scripts/silphco_doors.pory"
	setmetatile 12, 12, METATILE_SilphCo_HorizontalBarrier_BottomLeft, 1
# 188 "data/scripts/silphco_doors.pory"
	setmetatile 13, 12, METATILE_SilphCo_HorizontalBarrier_BottomRight, 1
# 189 "data/scripts/silphco_doors.pory"
	setmetatile 13, 13, METATILE_SilphCo_Floor_ShadeFull, 0
	return


EventScript_Close11FDoor::
# 194 "data/scripts/silphco_doors.pory"
	setmetatile 5, 16, METATILE_SilphCo_HorizontalBarrier_TopLeft, 1
# 195 "data/scripts/silphco_doors.pory"
	setmetatile 6, 16, METATILE_SilphCo_HorizontalBarrier_TopRight, 1
# 196 "data/scripts/silphco_doors.pory"
	setmetatile 5, 17, METATILE_SilphCo_HorizontalBarrier_BottomLeft, 1
# 197 "data/scripts/silphco_doors.pory"
	setmetatile 6, 17, METATILE_SilphCo_HorizontalBarrier_BottomRight, 1
# 198 "data/scripts/silphco_doors.pory"
	setmetatile 6, 18, METATILE_SilphCo_Floor_ShadeFull, 0
	return


EventScript_Open2FDoor1::
# 203 "data/scripts/silphco_doors.pory"
	setmetatile 5, 8, METATILE_SilphCo_Floor_ShadeFull, 0
# 204 "data/scripts/silphco_doors.pory"
	setmetatile 6, 8, METATILE_SilphCo_Floor, 0
# 205 "data/scripts/silphco_doors.pory"
	setmetatile 5, 9, METATILE_SilphCo_Floor_ShadeFull, 0
# 206 "data/scripts/silphco_doors.pory"
	setmetatile 6, 9, METATILE_SilphCo_Floor, 0
# 207 "data/scripts/silphco_doors.pory"
	setmetatile 6, 10, METATILE_SilphCo_Floor, 0
	return


EventScript_Open2FDoor2::
# 212 "data/scripts/silphco_doors.pory"
	setmetatile 5, 15, METATILE_SilphCo_Floor_ShadeFull, 0
# 213 "data/scripts/silphco_doors.pory"
	setmetatile 6, 15, METATILE_SilphCo_Floor, 0
# 214 "data/scripts/silphco_doors.pory"
	setmetatile 5, 16, METATILE_SilphCo_Floor_ShadeFull, 0
# 215 "data/scripts/silphco_doors.pory"
	setmetatile 6, 16, METATILE_SilphCo_Floor, 0
# 216 "data/scripts/silphco_doors.pory"
	setmetatile 6, 17, METATILE_SilphCo_Floor, 0
	return


EventScript_Open3FDoor1::
# 221 "data/scripts/silphco_doors.pory"
	setmetatile 9, 11, METATILE_SilphCo_Wall_LeftEdge, 1
# 222 "data/scripts/silphco_doors.pory"
	setmetatile 10, 11, METATILE_SilphCo_Wall_RightEdge, 1
# 223 "data/scripts/silphco_doors.pory"
	setmetatile 9, 12, METATILE_SilphCo_Floor_ShadeFull, 0
# 224 "data/scripts/silphco_doors.pory"
	setmetatile 10, 12, METATILE_SilphCo_Floor_ShadeFull, 0
# 225 "data/scripts/silphco_doors.pory"
	setmetatile 9, 13, METATILE_SilphCo_Floor_WallLeftCorner, 0
# 226 "data/scripts/silphco_doors.pory"
	setmetatile 10, 13, METATILE_SilphCo_Floor_WallRightCorner, 0
	return


EventScript_Open3FDoor2::
# 231 "data/scripts/silphco_doors.pory"
	setmetatile 20, 11, METATILE_SilphCo_Wall_LeftEdge, 1
# 232 "data/scripts/silphco_doors.pory"
	setmetatile 21, 11, METATILE_SilphCo_Wall_RightEdge, 1
# 233 "data/scripts/silphco_doors.pory"
	setmetatile 20, 12, METATILE_SilphCo_Floor_ShadeFull, 0
# 234 "data/scripts/silphco_doors.pory"
	setmetatile 21, 12, METATILE_SilphCo_Floor_ShadeFull, 0
# 235 "data/scripts/silphco_doors.pory"
	setmetatile 20, 13, METATILE_SilphCo_Floor_WallLeftCorner, 0
# 236 "data/scripts/silphco_doors.pory"
	setmetatile 21, 13, METATILE_SilphCo_Floor_WallRightCorner, 0
	return


EventScript_Open4FDoor1::
# 241 "data/scripts/silphco_doors.pory"
	setmetatile 3, 16, METATILE_SilphCo_Floor_ShadeFull, 0
# 242 "data/scripts/silphco_doors.pory"
	setmetatile 4, 16, METATILE_SilphCo_Floor, 0
# 243 "data/scripts/silphco_doors.pory"
	setmetatile 3, 17, METATILE_SilphCo_Floor_ShadeFull, 0
# 244 "data/scripts/silphco_doors.pory"
	setmetatile 4, 17, METATILE_SilphCo_Floor, 0
# 245 "data/scripts/silphco_doors.pory"
	setmetatile 4, 18, METATILE_SilphCo_Floor, 0
	return


EventScript_Open4FDoor2::
# 250 "data/scripts/silphco_doors.pory"
	setmetatile 14, 11, METATILE_SilphCo_Floor_ShadeFull, 0
# 251 "data/scripts/silphco_doors.pory"
	setmetatile 15, 11, METATILE_SilphCo_Floor, 0
# 252 "data/scripts/silphco_doors.pory"
	setmetatile 14, 12, METATILE_SilphCo_Floor_ShadeFull, 0
# 253 "data/scripts/silphco_doors.pory"
	setmetatile 15, 12, METATILE_SilphCo_Floor, 0
# 254 "data/scripts/silphco_doors.pory"
	setmetatile 15, 13, METATILE_SilphCo_Floor, 0
	return


EventScript_Open5FDoor1::
# 259 "data/scripts/silphco_doors.pory"
	setmetatile 7, 8, METATILE_SilphCo_Wall_LeftEdge, 1
# 260 "data/scripts/silphco_doors.pory"
	setmetatile 8, 8, METATILE_SilphCo_Wall_RightEdge, 1
# 261 "data/scripts/silphco_doors.pory"
	setmetatile 7, 9, METATILE_SilphCo_Floor_ShadeFull, 0
# 262 "data/scripts/silphco_doors.pory"
	setmetatile 8, 9, METATILE_SilphCo_Floor_ShadeFull, 0
# 263 "data/scripts/silphco_doors.pory"
	setmetatile 7, 10, METATILE_SilphCo_Floor_WallLeftCorner, 0
# 264 "data/scripts/silphco_doors.pory"
	setmetatile 8, 10, METATILE_SilphCo_Floor_WallRightCorner, 0
	return


EventScript_Open5FDoor2::
# 269 "data/scripts/silphco_doors.pory"
	setmetatile 7, 17, METATILE_SilphCo_Wall_LeftEdge, 1
# 270 "data/scripts/silphco_doors.pory"
	setmetatile 8, 17, METATILE_SilphCo_Wall_RightEdge, 1
# 271 "data/scripts/silphco_doors.pory"
	setmetatile 7, 18, METATILE_SilphCo_Floor_ShadeFull, 0
# 272 "data/scripts/silphco_doors.pory"
	setmetatile 8, 18, METATILE_SilphCo_Floor_ShadeFull, 0
# 273 "data/scripts/silphco_doors.pory"
	setmetatile 7, 19, METATILE_SilphCo_Floor_WallLeftCorner, 0
# 274 "data/scripts/silphco_doors.pory"
	setmetatile 8, 19, METATILE_SilphCo_Floor_WallRightCorner, 0
	return


EventScript_Open5FDoor3::
# 279 "data/scripts/silphco_doors.pory"
	setmetatile 18, 12, METATILE_SilphCo_Wall_LeftEdge, 1
# 280 "data/scripts/silphco_doors.pory"
	setmetatile 19, 12, METATILE_SilphCo_Wall_RightEdge, 1
# 281 "data/scripts/silphco_doors.pory"
	setmetatile 18, 13, METATILE_SilphCo_Floor_ShadeFull, 0
# 282 "data/scripts/silphco_doors.pory"
	setmetatile 19, 13, METATILE_SilphCo_Floor_ShadeFull, 0
# 283 "data/scripts/silphco_doors.pory"
	setmetatile 18, 14, METATILE_SilphCo_Floor_WallLeftCorner, 0
# 284 "data/scripts/silphco_doors.pory"
	setmetatile 19, 14, METATILE_SilphCo_Floor_WallRightCorner, 0
	return


EventScript_Open6FDoor::
# 289 "data/scripts/silphco_doors.pory"
	setmetatile 5, 14, METATILE_SilphCo_Wall_LeftEdge, 1
# 290 "data/scripts/silphco_doors.pory"
	setmetatile 6, 14, METATILE_SilphCo_Wall_RightEdge, 1
# 291 "data/scripts/silphco_doors.pory"
	setmetatile 5, 15, METATILE_SilphCo_Floor_ShadeFull, 0
# 292 "data/scripts/silphco_doors.pory"
	setmetatile 6, 15, METATILE_SilphCo_Floor_ShadeFull, 0
# 293 "data/scripts/silphco_doors.pory"
	setmetatile 5, 16, METATILE_SilphCo_Floor_WallLeftCorner, 0
# 294 "data/scripts/silphco_doors.pory"
	setmetatile 6, 16, METATILE_SilphCo_Floor_WallRightCorner, 0
	return


EventScript_Open7FDoor1::
# 299 "data/scripts/silphco_doors.pory"
	setmetatile 11, 8, METATILE_SilphCo_Floor_ShadeFull, 0
# 300 "data/scripts/silphco_doors.pory"
	setmetatile 12, 8, METATILE_SilphCo_Floor, 0
# 301 "data/scripts/silphco_doors.pory"
	setmetatile 11, 9, METATILE_SilphCo_Floor_ShadeFull, 0
# 302 "data/scripts/silphco_doors.pory"
	setmetatile 12, 9, METATILE_SilphCo_Floor, 0
# 303 "data/scripts/silphco_doors.pory"
	setmetatile 12, 10, METATILE_SilphCo_Floor, 0
	return


EventScript_Open7FDoor2::
# 308 "data/scripts/silphco_doors.pory"
	setmetatile 24, 7, METATILE_SilphCo_Floor_ShadeFull, 0
# 309 "data/scripts/silphco_doors.pory"
	setmetatile 25, 7, METATILE_SilphCo_Floor, 0
# 310 "data/scripts/silphco_doors.pory"
	setmetatile 24, 8, METATILE_SilphCo_Floor_ShadeFull, 0
# 311 "data/scripts/silphco_doors.pory"
	setmetatile 25, 8, METATILE_SilphCo_Floor, 0
# 312 "data/scripts/silphco_doors.pory"
	setmetatile 25, 9, METATILE_SilphCo_Floor, 0
	return


EventScript_Open7FDoor3::
# 317 "data/scripts/silphco_doors.pory"
	setmetatile 25, 13, METATILE_SilphCo_Floor_ShadeFull, 0
# 318 "data/scripts/silphco_doors.pory"
	setmetatile 26, 13, METATILE_SilphCo_Floor, 0
# 319 "data/scripts/silphco_doors.pory"
	setmetatile 25, 14, METATILE_SilphCo_Floor_ShadeFull, 0
# 320 "data/scripts/silphco_doors.pory"
	setmetatile 26, 14, METATILE_SilphCo_Floor, 0
# 321 "data/scripts/silphco_doors.pory"
	setmetatile 26, 15, METATILE_SilphCo_Floor, 0
	return


EventScript_Open8FDoor::
# 326 "data/scripts/silphco_doors.pory"
	setmetatile 5, 9, METATILE_SilphCo_Wall_LeftEdge, 1
# 327 "data/scripts/silphco_doors.pory"
	setmetatile 6, 9, METATILE_SilphCo_Wall_RightEdge, 1
# 328 "data/scripts/silphco_doors.pory"
	setmetatile 5, 10, METATILE_SilphCo_Floor_ShadeFull, 0
# 329 "data/scripts/silphco_doors.pory"
	setmetatile 6, 10, METATILE_SilphCo_Floor_ShadeFull, 0
# 330 "data/scripts/silphco_doors.pory"
	setmetatile 5, 11, METATILE_SilphCo_Floor_WallLeftCorner, 0
# 331 "data/scripts/silphco_doors.pory"
	setmetatile 6, 11, METATILE_SilphCo_Floor_WallRightCorner, 0
	return


EventScript_Open9FDoor1::
# 336 "data/scripts/silphco_doors.pory"
	setmetatile 2, 9, METATILE_SilphCo_Wall_LeftEdge, 1
# 337 "data/scripts/silphco_doors.pory"
	setmetatile 3, 9, METATILE_SilphCo_Wall_RightEdge, 1
# 338 "data/scripts/silphco_doors.pory"
	setmetatile 2, 10, METATILE_SilphCo_Floor_ShadeFull, 0
# 339 "data/scripts/silphco_doors.pory"
	setmetatile 3, 10, METATILE_SilphCo_Floor_ShadeFull, 0
# 340 "data/scripts/silphco_doors.pory"
	setmetatile 2, 11, METATILE_SilphCo_Floor_WallLeftCorner, 0
# 341 "data/scripts/silphco_doors.pory"
	setmetatile 3, 11, METATILE_SilphCo_Floor_WallRightCorner, 0
	return


EventScript_Open9FDoor2::
# 346 "data/scripts/silphco_doors.pory"
	setmetatile 12, 15, METATILE_SilphCo_Wall_LeftEdge, 1
# 347 "data/scripts/silphco_doors.pory"
	setmetatile 13, 15, METATILE_SilphCo_Wall_RightEdge, 1
# 348 "data/scripts/silphco_doors.pory"
	setmetatile 12, 16, METATILE_SilphCo_Floor_ShadeFull, 0
# 349 "data/scripts/silphco_doors.pory"
	setmetatile 13, 16, METATILE_SilphCo_Floor_ShadeFull, 0
# 350 "data/scripts/silphco_doors.pory"
	setmetatile 12, 17, METATILE_SilphCo_Floor_WallLeftCorner, 0
# 351 "data/scripts/silphco_doors.pory"
	setmetatile 13, 17, METATILE_SilphCo_Floor_WallRightCorner, 0
	return


EventScript_Open9FDoor3::
# 356 "data/scripts/silphco_doors.pory"
	setmetatile 21, 6, METATILE_SilphCo_Floor_ShadeFull, 0
# 357 "data/scripts/silphco_doors.pory"
	setmetatile 22, 6, METATILE_SilphCo_Floor, 0
# 358 "data/scripts/silphco_doors.pory"
	setmetatile 21, 7, METATILE_SilphCo_Floor_ShadeFull, 0
# 359 "data/scripts/silphco_doors.pory"
	setmetatile 22, 7, METATILE_SilphCo_Floor, 0
# 360 "data/scripts/silphco_doors.pory"
	setmetatile 22, 8, METATILE_SilphCo_Floor, 0
	return


EventScript_Open9FDoor4::
# 365 "data/scripts/silphco_doors.pory"
	setmetatile 21, 12, METATILE_SilphCo_Floor_ShadeFull, 0
# 366 "data/scripts/silphco_doors.pory"
	setmetatile 22, 12, METATILE_SilphCo_Floor, 0
# 367 "data/scripts/silphco_doors.pory"
	setmetatile 21, 13, METATILE_SilphCo_Floor_ShadeFull, 0
# 368 "data/scripts/silphco_doors.pory"
	setmetatile 22, 13, METATILE_SilphCo_Floor, 0
# 369 "data/scripts/silphco_doors.pory"
	setmetatile 22, 14, METATILE_SilphCo_Floor, 0
	return


EventScript_Open10FDoor::
# 374 "data/scripts/silphco_doors.pory"
	setmetatile 12, 11, METATILE_SilphCo_Floor_ShadeFull, 0
# 375 "data/scripts/silphco_doors.pory"
	setmetatile 13, 11, METATILE_SilphCo_Floor, 0
# 376 "data/scripts/silphco_doors.pory"
	setmetatile 12, 12, METATILE_SilphCo_Floor_ShadeFull, 0
# 377 "data/scripts/silphco_doors.pory"
	setmetatile 13, 12, METATILE_SilphCo_Floor, 0
# 378 "data/scripts/silphco_doors.pory"
	setmetatile 13, 13, METATILE_SilphCo_Floor, 0
	return


EventScript_Open11FDoor::
# 383 "data/scripts/silphco_doors.pory"
	setmetatile 5, 16, METATILE_SilphCo_Floor_ShadeFull, 0
# 384 "data/scripts/silphco_doors.pory"
	setmetatile 6, 16, METATILE_SilphCo_Floor, 0
# 385 "data/scripts/silphco_doors.pory"
	setmetatile 5, 17, METATILE_SilphCo_Floor_ShadeFull, 0
# 386 "data/scripts/silphco_doors.pory"
	setmetatile 6, 17, METATILE_SilphCo_Floor, 0
# 387 "data/scripts/silphco_doors.pory"
	setmetatile 6, 18, METATILE_SilphCo_Floor, 0
	return


SilphCo_2F_EventScript_Door1::
# 392 "data/scripts/silphco_doors.pory"
	lockall
# 393 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 1
# 394 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_2F_DOOR_1
# 395 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_2F_DOOR_1, EventScript_DoorUnlocked
# 396 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_2F_EventScript_Door2::
# 401 "data/scripts/silphco_doors.pory"
	lockall
# 402 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 2
# 403 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_2F_DOOR_2
# 404 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_2F_DOOR_2, EventScript_DoorUnlocked
# 405 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_3F_EventScript_Door1::
# 410 "data/scripts/silphco_doors.pory"
	lockall
# 411 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 3
# 412 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_3F_DOOR_1
# 413 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_3F_DOOR_1, EventScript_DoorUnlocked
# 414 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_3F_EventScript_Door2::
# 419 "data/scripts/silphco_doors.pory"
	lockall
# 420 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 4
# 421 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_3F_DOOR_2
# 422 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_3F_DOOR_2, EventScript_DoorUnlocked
# 423 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_4F_EventScript_Door1::
# 428 "data/scripts/silphco_doors.pory"
	lockall
# 429 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 5
# 430 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_4F_DOOR_1
# 431 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_4F_DOOR_1, EventScript_DoorUnlocked
# 432 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_4F_EventScript_Door2::
# 437 "data/scripts/silphco_doors.pory"
	lockall
# 438 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 6
# 439 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_4F_DOOR_2
# 440 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_4F_DOOR_2, EventScript_DoorUnlocked
# 441 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_5F_EventScript_Door1::
# 446 "data/scripts/silphco_doors.pory"
	lockall
# 447 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 7
# 448 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_5F_DOOR_1
# 449 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_5F_DOOR_1, EventScript_DoorUnlocked
# 450 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_5F_EventScript_Door2::
# 455 "data/scripts/silphco_doors.pory"
	lockall
# 456 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 8
# 457 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_5F_DOOR_2
# 458 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_5F_DOOR_2, EventScript_DoorUnlocked
# 459 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_5F_EventScript_Door3::
# 464 "data/scripts/silphco_doors.pory"
	lockall
# 465 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 9
# 466 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_5F_DOOR_3
# 467 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_5F_DOOR_3, EventScript_DoorUnlocked
# 468 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_6F_EventScript_Door::
# 473 "data/scripts/silphco_doors.pory"
	lockall
# 474 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 10
# 475 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_6F_DOOR
# 476 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_6F_DOOR, EventScript_DoorUnlocked
# 477 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_7F_EventScript_Door1::
# 482 "data/scripts/silphco_doors.pory"
	lockall
# 483 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 11
# 484 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_7F_DOOR_1
# 485 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_7F_DOOR_1, EventScript_DoorUnlocked
# 486 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_7F_EventScript_Door2::
# 491 "data/scripts/silphco_doors.pory"
	lockall
# 492 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 12
# 493 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_7F_DOOR_2
# 494 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_7F_DOOR_2, EventScript_DoorUnlocked
# 495 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_7F_EventScript_Door3::
# 500 "data/scripts/silphco_doors.pory"
	lockall
# 501 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 13
# 502 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_7F_DOOR_3
# 503 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_7F_DOOR_3, EventScript_DoorUnlocked
# 504 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_8F_EventScript_Door::
# 509 "data/scripts/silphco_doors.pory"
	lockall
# 510 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 14
# 511 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_8F_DOOR
# 512 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_8F_DOOR, EventScript_DoorUnlocked
# 513 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_9F_EventScript_Door1::
# 518 "data/scripts/silphco_doors.pory"
	lockall
# 519 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 15
# 520 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_9F_DOOR_1
# 521 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_9F_DOOR_1, EventScript_DoorUnlocked
# 522 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_9F_EventScript_Door2::
# 527 "data/scripts/silphco_doors.pory"
	lockall
# 528 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 16
# 529 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_9F_DOOR_2
# 530 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_9F_DOOR_2, EventScript_DoorUnlocked
# 531 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_9F_EventScript_Door3::
# 536 "data/scripts/silphco_doors.pory"
	lockall
# 537 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 17
# 538 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_9F_DOOR_3
# 539 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_9F_DOOR_3, EventScript_DoorUnlocked
# 540 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_9F_EventScript_Door4::
# 545 "data/scripts/silphco_doors.pory"
	lockall
# 546 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 18
# 547 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_9F_DOOR_4
# 548 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_9F_DOOR_4, EventScript_DoorUnlocked
# 549 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_10F_EventScript_Door::
# 554 "data/scripts/silphco_doors.pory"
	lockall
# 555 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 19
# 556 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_10F_DOOR
# 557 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_10F_DOOR, EventScript_DoorUnlocked
# 558 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


SilphCo_11F_EventScript_Door::
# 563 "data/scripts/silphco_doors.pory"
	lockall
# 564 "data/scripts/silphco_doors.pory"
	setvar VAR_TEMP_1, 20
# 565 "data/scripts/silphco_doors.pory"
	setvar VAR_0x8004, FLAG_SILPH_11F_DOOR
# 566 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_SILPH_11F_DOOR, EventScript_DoorUnlocked
# 567 "data/scripts/silphco_doors.pory"
	goto EventScript_TryUnlockDoor
	end


EventScript_TryUnlockDoor::
# 572 "data/scripts/silphco_doors.pory"
	goto_if_set FLAG_HIDE_SILPH_CO_5F_CARD_KEY, EventScript_OpenDoor
# 573 "data/scripts/silphco_doors.pory"
	goto EventScript_NeedCardKey
	end


EventScript_OpenDoor::
# 578 "data/scripts/silphco_doors.pory"
	playfanfare MUS_LEVEL_UP
# 579 "data/scripts/silphco_doors.pory"
	msgbox Text_CardKeyOpenedDoor
# 580 "data/scripts/silphco_doors.pory"
	waitfanfare
# 581 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 1, EventScript_Open2FDoor1
# 582 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 2, EventScript_Open2FDoor2
# 583 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 3, EventScript_Open3FDoor1
# 584 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 4, EventScript_Open3FDoor2
# 585 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 5, EventScript_Open4FDoor1
# 586 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 6, EventScript_Open4FDoor2
# 587 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 7, EventScript_Open5FDoor1
# 588 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 8, EventScript_Open5FDoor2
# 589 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 9, EventScript_Open5FDoor3
# 590 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 10, EventScript_Open6FDoor
# 591 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 11, EventScript_Open7FDoor1
# 592 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 12, EventScript_Open7FDoor2
# 593 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 13, EventScript_Open7FDoor3
# 594 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 14, EventScript_Open8FDoor
# 595 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 15, EventScript_Open9FDoor1
# 596 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 16, EventScript_Open9FDoor2
# 597 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 17, EventScript_Open9FDoor3
# 598 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 18, EventScript_Open9FDoor4
# 599 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 19, EventScript_Open10FDoor
# 600 "data/scripts/silphco_doors.pory"
	call_if_eq VAR_TEMP_1, 20, EventScript_Open11FDoor
# 601 "data/scripts/silphco_doors.pory"
	waitse
# 602 "data/scripts/silphco_doors.pory"
	playse SE_UNLOCK
# 603 "data/scripts/silphco_doors.pory"
	special DrawWholeMapView
# 604 "data/scripts/silphco_doors.pory"
	waitse
# 605 "data/scripts/silphco_doors.pory"
	special SetHiddenItemFlag
# 606 "data/scripts/silphco_doors.pory"
	releaseall
	end

