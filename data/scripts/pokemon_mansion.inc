PokemonMansion_EventScript_SecretSwitch::
# 2 "data/scripts/pokemon_mansion.pory"
	msgbox PokemonMansion_Text_PressSecretSwitch, MSGBOX_YESNO
# 3 "data/scripts/pokemon_mansion.pory"
	goto_if_eq VAR_RESULT, NO, PokemonMansion_EventScript_DontPressSwitch
# 4 "data/scripts/pokemon_mansion.pory"
	msgbox PokemonMansion_Text_WhoWouldnt
# 5 "data/scripts/pokemon_mansion.pory"
	goto_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_ResetSwitch
# 6 "data/scripts/pokemon_mansion.pory"
	setflag FLAG_POKEMON_MANSION_SWITCH_STATE
# 7 "data/scripts/pokemon_mansion.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 8 "data/scripts/pokemon_mansion.pory"
	goto_if_eq VAR_0x8000, 0, PokemonMansion_EventScript_PressSwitch_1F
# 9 "data/scripts/pokemon_mansion.pory"
	goto_if_eq VAR_0x8000, 1, PokemonMansion_EventScript_PressSwitch_2F
# 10 "data/scripts/pokemon_mansion.pory"
	goto_if_eq VAR_0x8000, 2, PokemonMansion_EventScript_PressSwitch_3F
# 11 "data/scripts/pokemon_mansion.pory"
	goto_if_eq VAR_0x8000, 3, PokemonMansion_EventScript_PressSwitch_B1F
	end


PokemonMansion_EventScript_ResetSwitch::
# 16 "data/scripts/pokemon_mansion.pory"
	clearflag FLAG_POKEMON_MANSION_SWITCH_STATE
# 17 "data/scripts/pokemon_mansion.pory"
	copyvar VAR_0x8000, VAR_0x8004
# 18 "data/scripts/pokemon_mansion.pory"
	goto_if_eq VAR_0x8000, 0, PokemonMansion_EventScript_ResetSwitch_1F
# 19 "data/scripts/pokemon_mansion.pory"
	goto_if_eq VAR_0x8000, 1, PokemonMansion_EventScript_ResetSwitch_2F
# 20 "data/scripts/pokemon_mansion.pory"
	goto_if_eq VAR_0x8000, 2, PokemonMansion_EventScript_ResetSwitch_3F
# 21 "data/scripts/pokemon_mansion.pory"
	goto_if_eq VAR_0x8000, 3, PokemonMansion_EventScript_ResetSwitch_B1F
	end


PokemonMansion_EventScript_DontPressSwitch::
# 26 "data/scripts/pokemon_mansion.pory"
	msgbox PokemonMansion_Text_NotQuiteYet
# 27 "data/scripts/pokemon_mansion.pory"
	releaseall
	end


PokemonMansion_EventScript_PressSwitch_1F::
# 32 "data/scripts/pokemon_mansion.pory"
	setmetatile 22, 10, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 33 "data/scripts/pokemon_mansion.pory"
	setmetatile 23, 10, METATILE_PokemonMansion_Floor, 0
# 34 "data/scripts/pokemon_mansion.pory"
	setmetatile 24, 10, METATILE_PokemonMansion_Floor, 0
# 35 "data/scripts/pokemon_mansion.pory"
	setmetatile 22, 11, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 36 "data/scripts/pokemon_mansion.pory"
	setmetatile 23, 11, METATILE_PokemonMansion_Floor, 0
# 37 "data/scripts/pokemon_mansion.pory"
	setmetatile 24, 11, METATILE_PokemonMansion_Floor, 0
# 38 "data/scripts/pokemon_mansion.pory"
	setmetatile 27, 25, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 39 "data/scripts/pokemon_mansion.pory"
	setmetatile 28, 25, METATILE_PokemonMansion_Floor, 0
# 40 "data/scripts/pokemon_mansion.pory"
	setmetatile 29, 25, METATILE_PokemonMansion_Floor, 0
# 41 "data/scripts/pokemon_mansion.pory"
	setmetatile 27, 26, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 42 "data/scripts/pokemon_mansion.pory"
	setmetatile 28, 26, METATILE_PokemonMansion_Floor, 0
# 43 "data/scripts/pokemon_mansion.pory"
	setmetatile 29, 26, METATILE_PokemonMansion_Floor, 0
# 44 "data/scripts/pokemon_mansion.pory"
	setmetatile 32, 25, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 45 "data/scripts/pokemon_mansion.pory"
	setmetatile 33, 25, METATILE_PokemonMansion_Floor, 0
# 46 "data/scripts/pokemon_mansion.pory"
	setmetatile 34, 25, METATILE_PokemonMansion_Floor, 0
# 47 "data/scripts/pokemon_mansion.pory"
	setmetatile 32, 26, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 48 "data/scripts/pokemon_mansion.pory"
	setmetatile 33, 26, METATILE_PokemonMansion_Floor, 0
# 49 "data/scripts/pokemon_mansion.pory"
	setmetatile 34, 26, METATILE_PokemonMansion_Floor, 0
# 50 "data/scripts/pokemon_mansion.pory"
	setmetatile 31, 18, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
# 51 "data/scripts/pokemon_mansion.pory"
	setmetatile 32, 18, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
# 52 "data/scripts/pokemon_mansion.pory"
	setmetatile 33, 18, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
# 53 "data/scripts/pokemon_mansion.pory"
	setmetatile 31, 19, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft, 1
# 54 "data/scripts/pokemon_mansion.pory"
	setmetatile 32, 19, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid, 1
# 55 "data/scripts/pokemon_mansion.pory"
	setmetatile 33, 19, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight, 1
# 56 "data/scripts/pokemon_mansion.pory"
	setmetatile 5, 4, METATILE_PokemonMansion_Statue_RedEyes, 0
	return


PokemonMansion_EventScript_ResetSwitch_1F::
# 61 "data/scripts/pokemon_mansion.pory"
	setmetatile 22, 10, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
# 62 "data/scripts/pokemon_mansion.pory"
	setmetatile 23, 10, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
# 63 "data/scripts/pokemon_mansion.pory"
	setmetatile 24, 10, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
# 64 "data/scripts/pokemon_mansion.pory"
	setmetatile 22, 11, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft, 1
# 65 "data/scripts/pokemon_mansion.pory"
	setmetatile 23, 11, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid, 1
# 66 "data/scripts/pokemon_mansion.pory"
	setmetatile 24, 11, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight, 1
# 67 "data/scripts/pokemon_mansion.pory"
	setmetatile 27, 25, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
# 68 "data/scripts/pokemon_mansion.pory"
	setmetatile 28, 25, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
# 69 "data/scripts/pokemon_mansion.pory"
	setmetatile 29, 25, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
# 70 "data/scripts/pokemon_mansion.pory"
	setmetatile 27, 26, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft, 1
# 71 "data/scripts/pokemon_mansion.pory"
	setmetatile 28, 26, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid, 1
# 72 "data/scripts/pokemon_mansion.pory"
	setmetatile 29, 26, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight, 1
# 73 "data/scripts/pokemon_mansion.pory"
	setmetatile 32, 25, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
# 74 "data/scripts/pokemon_mansion.pory"
	setmetatile 33, 25, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
# 75 "data/scripts/pokemon_mansion.pory"
	setmetatile 34, 25, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
# 76 "data/scripts/pokemon_mansion.pory"
	setmetatile 32, 26, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft, 1
# 77 "data/scripts/pokemon_mansion.pory"
	setmetatile 33, 26, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid, 1
# 78 "data/scripts/pokemon_mansion.pory"
	setmetatile 34, 26, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight, 1
# 79 "data/scripts/pokemon_mansion.pory"
	setmetatile 31, 18, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 80 "data/scripts/pokemon_mansion.pory"
	setmetatile 32, 18, METATILE_PokemonMansion_Floor, 0
# 81 "data/scripts/pokemon_mansion.pory"
	setmetatile 33, 18, METATILE_PokemonMansion_Floor, 0
# 82 "data/scripts/pokemon_mansion.pory"
	setmetatile 31, 19, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 83 "data/scripts/pokemon_mansion.pory"
	setmetatile 32, 19, METATILE_PokemonMansion_Floor, 0
# 84 "data/scripts/pokemon_mansion.pory"
	setmetatile 33, 19, METATILE_PokemonMansion_Floor, 0
# 85 "data/scripts/pokemon_mansion.pory"
	setmetatile 5, 4, METATILE_PokemonMansion_Statue_BlackEyes, 0
	return


PokemonMansion_EventScript_PressSwitch_2F::
# 90 "data/scripts/pokemon_mansion.pory"
	setmetatile 24, 14, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 91 "data/scripts/pokemon_mansion.pory"
	setmetatile 25, 14, METATILE_PokemonMansion_Floor, 0
# 92 "data/scripts/pokemon_mansion.pory"
	setmetatile 26, 14, METATILE_PokemonMansion_Floor, 0
# 93 "data/scripts/pokemon_mansion.pory"
	setmetatile 24, 15, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 94 "data/scripts/pokemon_mansion.pory"
	setmetatile 25, 15, METATILE_PokemonMansion_Floor, 0
# 95 "data/scripts/pokemon_mansion.pory"
	setmetatile 26, 15, METATILE_PokemonMansion_Floor, 0
# 96 "data/scripts/pokemon_mansion.pory"
	setmetatile 10, 28, METATILE_PokemonMansion_Wall_EndPost_Mid, 1
# 97 "data/scripts/pokemon_mansion.pory"
	setmetatile 10, 29, METATILE_PokemonMansion_Wall_EndPost_Bottom, 1
# 98 "data/scripts/pokemon_mansion.pory"
	setmetatile 10, 30, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 99 "data/scripts/pokemon_mansion.pory"
	setmetatile 10, 31, METATILE_PokemonMansion_Floor, 0
# 100 "data/scripts/pokemon_mansion.pory"
	setmetatile 10, 32, METATILE_PokemonMansion_Wall_EndCap, 0
# 101 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 4, METATILE_PokemonMansion_Barrier_Vertical_TopWall, 1
# 102 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 5, METATILE_PokemonMansion_Barrier_Vertical_TopBase, 1
# 103 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 6, METATILE_PokemonMansion_Barrier_Vertical_MidShadow, 1
# 104 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 7, METATILE_PokemonMansion_Barrier_Vertical_Mid, 1
# 105 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 8, METATILE_PokemonMansion_Barrier_Vertical_Bottom, 1
# 106 "data/scripts/pokemon_mansion.pory"
	setmetatile 2, 15, METATILE_PokemonMansion_Statue_RedEyes, 0
	return


PokemonMansion_EventScript_ResetSwitch_2F::
# 111 "data/scripts/pokemon_mansion.pory"
	setmetatile 24, 14, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
# 112 "data/scripts/pokemon_mansion.pory"
	setmetatile 25, 14, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
# 113 "data/scripts/pokemon_mansion.pory"
	setmetatile 26, 14, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
# 114 "data/scripts/pokemon_mansion.pory"
	setmetatile 24, 15, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft, 1
# 115 "data/scripts/pokemon_mansion.pory"
	setmetatile 25, 15, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid, 1
# 116 "data/scripts/pokemon_mansion.pory"
	setmetatile 26, 15, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight, 1
# 117 "data/scripts/pokemon_mansion.pory"
	setmetatile 10, 28, METATILE_PokemonMansion_Barrier_Vertical_TopWall, 1
# 118 "data/scripts/pokemon_mansion.pory"
	setmetatile 10, 29, METATILE_PokemonMansion_Barrier_Vertical_TopBase, 1
# 119 "data/scripts/pokemon_mansion.pory"
	setmetatile 10, 30, METATILE_PokemonMansion_Barrier_Vertical_MidShadow, 1
# 120 "data/scripts/pokemon_mansion.pory"
	setmetatile 10, 31, METATILE_PokemonMansion_Barrier_Vertical_Mid, 1
# 121 "data/scripts/pokemon_mansion.pory"
	setmetatile 10, 32, METATILE_PokemonMansion_Barrier_Vertical_Bottom, 1
# 122 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 4, METATILE_PokemonMansion_Wall_EndPost_Mid, 1
# 123 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 5, METATILE_PokemonMansion_Wall_EndPost_Bottom, 1
# 124 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 6, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 125 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 7, METATILE_PokemonMansion_Floor, 0
# 126 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 8, METATILE_PokemonMansion_Wall_EndCap, 0
# 127 "data/scripts/pokemon_mansion.pory"
	setmetatile 2, 15, METATILE_PokemonMansion_Statue_BlackEyes, 0
	return


PokemonMansion_EventScript_PressSwitch_3F::
# 132 "data/scripts/pokemon_mansion.pory"
	setmetatile 17, 11, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 133 "data/scripts/pokemon_mansion.pory"
	setmetatile 18, 11, METATILE_PokemonMansion_Floor, 0
# 134 "data/scripts/pokemon_mansion.pory"
	setmetatile 19, 11, METATILE_PokemonMansion_Floor, 0
# 135 "data/scripts/pokemon_mansion.pory"
	setmetatile 17, 12, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 136 "data/scripts/pokemon_mansion.pory"
	setmetatile 18, 12, METATILE_PokemonMansion_Floor, 0
# 137 "data/scripts/pokemon_mansion.pory"
	setmetatile 19, 12, METATILE_PokemonMansion_Floor, 0
# 138 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 4, METATILE_PokemonMansion_Barrier_Vertical_TopWall, 1
# 139 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 5, METATILE_PokemonMansion_Barrier_Vertical_TopBase, 1
# 140 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 6, METATILE_PokemonMansion_Barrier_Vertical_MidShadow, 1
# 141 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 7, METATILE_PokemonMansion_Barrier_Vertical_Mid, 1
# 142 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 8, METATILE_PokemonMansion_Barrier_Vertical_Bottom, 1
# 143 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 4, METATILE_PokemonMansion_Statue_RedEyes, 0
	return


PokemonMansion_EventScript_ResetSwitch_3F::
# 148 "data/scripts/pokemon_mansion.pory"
	setmetatile 17, 11, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
# 149 "data/scripts/pokemon_mansion.pory"
	setmetatile 18, 11, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
# 150 "data/scripts/pokemon_mansion.pory"
	setmetatile 19, 11, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
# 151 "data/scripts/pokemon_mansion.pory"
	setmetatile 17, 12, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft, 1
# 152 "data/scripts/pokemon_mansion.pory"
	setmetatile 18, 12, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid, 1
# 153 "data/scripts/pokemon_mansion.pory"
	setmetatile 19, 12, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight, 1
# 154 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 4, METATILE_PokemonMansion_Wall_EndPost_Mid, 1
# 155 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 5, METATILE_PokemonMansion_Wall_EndPost_Bottom, 1
# 156 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 6, METATILE_PokemonMansion_Floor_ShadeFull, 0
# 157 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 7, METATILE_PokemonMansion_Floor, 0
# 158 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 8, METATILE_PokemonMansion_Wall_EndCap, 0
# 159 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 4, METATILE_PokemonMansion_Statue_BlackEyes, 0
	return


PokemonMansion_EventScript_PressSwitch_B1F::
# 164 "data/scripts/pokemon_mansion.pory"
	setmetatile 33, 20, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
# 165 "data/scripts/pokemon_mansion.pory"
	setmetatile 34, 20, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
# 166 "data/scripts/pokemon_mansion.pory"
	setmetatile 35, 20, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
# 167 "data/scripts/pokemon_mansion.pory"
	setmetatile 33, 21, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft_Basement, 1
# 168 "data/scripts/pokemon_mansion.pory"
	setmetatile 34, 21, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid_Basement, 1
# 169 "data/scripts/pokemon_mansion.pory"
	setmetatile 35, 21, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight_Basement, 1
# 170 "data/scripts/pokemon_mansion.pory"
	setmetatile 16, 26, METATILE_PokemonMansion_Barrier_Vertical_TopWall, 1
# 171 "data/scripts/pokemon_mansion.pory"
	setmetatile 16, 27, METATILE_PokemonMansion_Barrier_Vertical_TopBase, 1
# 172 "data/scripts/pokemon_mansion.pory"
	setmetatile 16, 28, METATILE_PokemonMansion_Barrier_Vertical_MidShadow_Basement, 1
# 173 "data/scripts/pokemon_mansion.pory"
	setmetatile 16, 29, METATILE_PokemonMansion_Barrier_Vertical_Mid_Basement, 1
# 174 "data/scripts/pokemon_mansion.pory"
	setmetatile 16, 30, METATILE_PokemonMansion_Barrier_Vertical_Bottom_Basement, 1
# 175 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 8, METATILE_PokemonMansion_Wall_EndPost_Mid, 1
# 176 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 9, METATILE_PokemonMansion_Wall_EndPost_Bottom, 1
# 177 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 10, METATILE_PokemonMansion_BasementFloor_ShadeFull, 0
# 178 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 11, METATILE_PokemonMansion_BasementFloor, 0
# 179 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 12, METATILE_PokemonMansion_Wall_EndCap_Basement, 0
# 180 "data/scripts/pokemon_mansion.pory"
	setmetatile 20, 22, METATILE_PokemonMansion_BasementFloor_ShadeFull, 0
# 181 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 22, METATILE_PokemonMansion_BasementFloor, 0
# 182 "data/scripts/pokemon_mansion.pory"
	setmetatile 22, 22, METATILE_PokemonMansion_BasementFloor, 0
# 183 "data/scripts/pokemon_mansion.pory"
	setmetatile 20, 23, METATILE_PokemonMansion_BasementFloor_ShadeFull, 0
# 184 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 23, METATILE_PokemonMansion_BasementFloor, 0
# 185 "data/scripts/pokemon_mansion.pory"
	setmetatile 22, 23, METATILE_PokemonMansion_BasementFloor, 0
# 186 "data/scripts/pokemon_mansion.pory"
	setmetatile 24, 28, METATILE_PokemonMansion_Statue_RedEyes_Basement, 0
# 187 "data/scripts/pokemon_mansion.pory"
	setmetatile 27, 4, METATILE_PokemonMansion_Statue_RedEyes_Basement, 0
	return


PokemonMansion_EventScript_ResetSwitch_B1F::
# 192 "data/scripts/pokemon_mansion.pory"
	setmetatile 33, 20, METATILE_PokemonMansion_BasementFloor_ShadeFull, 0
# 193 "data/scripts/pokemon_mansion.pory"
	setmetatile 34, 20, METATILE_PokemonMansion_BasementFloor, 0
# 194 "data/scripts/pokemon_mansion.pory"
	setmetatile 35, 20, METATILE_PokemonMansion_BasementFloor, 0
# 195 "data/scripts/pokemon_mansion.pory"
	setmetatile 33, 21, METATILE_PokemonMansion_BasementFloor_ShadeFull, 0
# 196 "data/scripts/pokemon_mansion.pory"
	setmetatile 34, 21, METATILE_PokemonMansion_BasementFloor, 0
# 197 "data/scripts/pokemon_mansion.pory"
	setmetatile 35, 21, METATILE_PokemonMansion_BasementFloor, 0
# 198 "data/scripts/pokemon_mansion.pory"
	setmetatile 16, 26, METATILE_PokemonMansion_Wall_EndPost_Mid, 1
# 199 "data/scripts/pokemon_mansion.pory"
	setmetatile 16, 27, METATILE_PokemonMansion_Wall_EndPost_Bottom, 1
# 200 "data/scripts/pokemon_mansion.pory"
	setmetatile 16, 28, METATILE_PokemonMansion_BasementFloor_ShadeFull, 0
# 201 "data/scripts/pokemon_mansion.pory"
	setmetatile 16, 29, METATILE_PokemonMansion_BasementFloor, 0
# 202 "data/scripts/pokemon_mansion.pory"
	setmetatile 16, 30, METATILE_PokemonMansion_Wall_EndCap_Basement, 0
# 203 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 8, METATILE_PokemonMansion_Barrier_Vertical_TopWall, 1
# 204 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 9, METATILE_PokemonMansion_Barrier_Vertical_TopBase, 1
# 205 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 10, METATILE_PokemonMansion_Barrier_Vertical_MidShadow_Basement, 1
# 206 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 11, METATILE_PokemonMansion_Barrier_Vertical_Mid_Basement, 1
# 207 "data/scripts/pokemon_mansion.pory"
	setmetatile 12, 12, METATILE_PokemonMansion_Barrier_Vertical_Bottom_Basement, 1
# 208 "data/scripts/pokemon_mansion.pory"
	setmetatile 20, 22, METATILE_PokemonMansion_Barrier_Horizontal_TopLeft, 1
# 209 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 22, METATILE_PokemonMansion_Barrier_Horizontal_TopMid, 1
# 210 "data/scripts/pokemon_mansion.pory"
	setmetatile 22, 22, METATILE_PokemonMansion_Barrier_Horizontal_TopRight, 1
# 211 "data/scripts/pokemon_mansion.pory"
	setmetatile 20, 23, METATILE_PokemonMansion_Barrier_Horizontal_BottomLeft_Basement, 1
# 212 "data/scripts/pokemon_mansion.pory"
	setmetatile 21, 23, METATILE_PokemonMansion_Barrier_Horizontal_BottomMid_Basement, 1
# 213 "data/scripts/pokemon_mansion.pory"
	setmetatile 22, 23, METATILE_PokemonMansion_Barrier_Horizontal_BottomRight_Basement, 1
# 214 "data/scripts/pokemon_mansion.pory"
	setmetatile 24, 28, METATILE_PokemonMansion_Statue_BlackEyes_Basement, 0
# 215 "data/scripts/pokemon_mansion.pory"
	setmetatile 27, 4, METATILE_PokemonMansion_Statue_BlackEyes_Basement, 0
	return

