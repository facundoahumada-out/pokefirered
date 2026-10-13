PalletTown_MapScripts::
# 4 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
# 8 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MushroomPatch_OnResume
# 5 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalletTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/PalletTown/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 2, PalletTown_EventScript_OakRatingScene
	.2byte 0


PalletTown_OnTransition::
# 12 "data/maps/PalletTown/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PALLET_TOWN
# 13 "data/maps/PalletTown/scripts.pory"
	call_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_TryReadySignLady
# 14 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 0, PalletTown_EventScript_SetSignLadyPos
# 15 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SetSignLadyDone
# 16 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_MOM
# 17 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MOM_SHOES, 1, PalletTown_EventScript_ShowMomAtExit
	end


PalletTown_EventScript_ShowMomAtExit::
# 22 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_MOM
	return


PalletTown_EventScript_TryReadySignLady::
# 27 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_OPENED_START_MENU, EventScript_Return
# 28 "data/maps/PalletTown/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, EventScript_Return
# 29 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	return


PalletTown_EventScript_SetSignLadyDone::
# 34 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
	return


PalletTown_EventScript_SetSignLadyPos::
# 39 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_MoveSignLadyToRouteEntrance
# 40 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 5, 15
# 41 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_UP
	return


PalletTown_EventScript_MoveSignLadyToRouteEntrance::
# 46 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 12, 2
# 47 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_DOWN
# 48 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_2, TRUE
	return


PalletTown_EventScript_OakRatingScene::
# 54 "data/maps/PalletTown/scripts.pory"
	lockall
# 55 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 56 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_PROF_OAK, 14, 14
# 57 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
# 58 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 59 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToPlayersDoor
# 60 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_EventScript_NotBeenToOneIslandYet
# 62 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 63 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, 0
# 64 "data/maps/PalletTown/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 65 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 66 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 67 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 68 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 69 "data/maps/PalletTown/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_EventScript_NotEnoughMonsForNationalDex
# 70 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 71 "data/maps/PalletTown/scripts.pory"
	closemessage
# 72 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 73 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 74 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabFromHouse
# 75 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 76 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 77 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 78 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 79 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 80 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 81 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 82 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 83 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 84 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 85 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 86 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 87 "data/maps/PalletTown/scripts.pory"
	waitstate
# 88 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_EndOakRatingScene::
# 93 "data/maps/PalletTown/scripts.pory"
	closemessage
# 94 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakExit
# 95 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 96 "data/maps/PalletTown/scripts.pory"
	removeobject LOCALID_PALLET_PROF_OAK
# 97 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 98 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 103 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 104 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	end


PalletTown_EventScript_NotBeenToOneIslandYet::
# 109 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 110 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	end


# 114 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor::
# 115 "data/maps/PalletTown/scripts.pory"
	walk_left
# 116 "data/maps/PalletTown/scripts.pory"
	walk_left
# 117 "data/maps/PalletTown/scripts.pory"
	walk_left
# 118 "data/maps/PalletTown/scripts.pory"
	walk_up
# 119 "data/maps/PalletTown/scripts.pory"
	walk_up
# 120 "data/maps/PalletTown/scripts.pory"
	walk_up
# 121 "data/maps/PalletTown/scripts.pory"
	walk_up
# 122 "data/maps/PalletTown/scripts.pory"
	walk_up
# 123 "data/maps/PalletTown/scripts.pory"
	walk_left
# 124 "data/maps/PalletTown/scripts.pory"
	walk_left
# 125 "data/maps/PalletTown/scripts.pory"
	walk_left
# 126 "data/maps/PalletTown/scripts.pory"
	walk_left
# 127 "data/maps/PalletTown/scripts.pory"
	walk_left
# 128 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 129 "data/maps/PalletTown/scripts.pory"
	step_end

# 132 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakExit::
# 133 "data/maps/PalletTown/scripts.pory"
	walk_right
# 134 "data/maps/PalletTown/scripts.pory"
	walk_right
# 135 "data/maps/PalletTown/scripts.pory"
	walk_right
# 136 "data/maps/PalletTown/scripts.pory"
	walk_right
# 137 "data/maps/PalletTown/scripts.pory"
	walk_right
# 138 "data/maps/PalletTown/scripts.pory"
	walk_down
# 139 "data/maps/PalletTown/scripts.pory"
	walk_down
# 140 "data/maps/PalletTown/scripts.pory"
	walk_down
# 141 "data/maps/PalletTown/scripts.pory"
	walk_down
# 142 "data/maps/PalletTown/scripts.pory"
	walk_down
# 143 "data/maps/PalletTown/scripts.pory"
	walk_right
# 144 "data/maps/PalletTown/scripts.pory"
	walk_right
# 145 "data/maps/PalletTown/scripts.pory"
	walk_right
# 146 "data/maps/PalletTown/scripts.pory"
	step_end

# 149 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse::
# 150 "data/maps/PalletTown/scripts.pory"
	walk_right
# 151 "data/maps/PalletTown/scripts.pory"
	walk_right
# 152 "data/maps/PalletTown/scripts.pory"
	walk_right
# 153 "data/maps/PalletTown/scripts.pory"
	walk_right
# 154 "data/maps/PalletTown/scripts.pory"
	walk_right
# 155 "data/maps/PalletTown/scripts.pory"
	walk_down
# 156 "data/maps/PalletTown/scripts.pory"
	walk_down
# 157 "data/maps/PalletTown/scripts.pory"
	walk_down
# 158 "data/maps/PalletTown/scripts.pory"
	walk_down
# 159 "data/maps/PalletTown/scripts.pory"
	walk_down
# 160 "data/maps/PalletTown/scripts.pory"
	walk_right
# 161 "data/maps/PalletTown/scripts.pory"
	walk_right
# 162 "data/maps/PalletTown/scripts.pory"
	walk_right
# 163 "data/maps/PalletTown/scripts.pory"
	walk_right
# 164 "data/maps/PalletTown/scripts.pory"
	walk_right
# 165 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 166 "data/maps/PalletTown/scripts.pory"
	step_end

# 169 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse::
# 170 "data/maps/PalletTown/scripts.pory"
	walk_down
# 171 "data/maps/PalletTown/scripts.pory"
	walk_right
# 172 "data/maps/PalletTown/scripts.pory"
	walk_right
# 173 "data/maps/PalletTown/scripts.pory"
	walk_right
# 174 "data/maps/PalletTown/scripts.pory"
	walk_right
# 175 "data/maps/PalletTown/scripts.pory"
	walk_right
# 176 "data/maps/PalletTown/scripts.pory"
	walk_down
# 177 "data/maps/PalletTown/scripts.pory"
	walk_down
# 178 "data/maps/PalletTown/scripts.pory"
	walk_down
# 179 "data/maps/PalletTown/scripts.pory"
	walk_down
# 180 "data/maps/PalletTown/scripts.pory"
	walk_down
# 181 "data/maps/PalletTown/scripts.pory"
	walk_right
# 182 "data/maps/PalletTown/scripts.pory"
	walk_right
# 183 "data/maps/PalletTown/scripts.pory"
	walk_right
# 184 "data/maps/PalletTown/scripts.pory"
	walk_right
# 185 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_OakTriggerLeft::
# 189 "data/maps/PalletTown/scripts.pory"
	lockall
# 190 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 191 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTriggerRight::
# 196 "data/maps/PalletTown/scripts.pory"
	lockall
# 197 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 198 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTrigger::
# 203 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 204 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 205 "data/maps/PalletTown/scripts.pory"
	delay 30
# 206 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_OAK, 0
# 207 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 208 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 209 "data/maps/PalletTown/scripts.pory"
	delay 85
# 210 "data/maps/PalletTown/scripts.pory"
	closemessage
# 211 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 212 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 213 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 214 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 215 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 216 "data/maps/PalletTown/scripts.pory"
	delay 30
# 217 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 218 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakEnterLeft
# 219 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakEnterRight
# 220 "data/maps/PalletTown/scripts.pory"
	delay 30
# 221 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 222 "data/maps/PalletTown/scripts.pory"
	closemessage
# 223 "data/maps/PalletTown/scripts.pory"
	delay 30
# 224 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakLeadPlayerToLabLeft
# 225 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakLeadPlayerToLabRight
# 226 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 227 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 228 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 229 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 230 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 231 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 232 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 233 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 234 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 235 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 236 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 237 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 238 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 239 "data/maps/PalletTown/scripts.pory"
	waitstate
# 240 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_OakEnterLeft::
# 245 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLeft
# 246 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakEnterRight::
# 251 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterRight
# 252 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 257 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
# 258 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 259 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakLeadPlayerToLabRight::
# 264 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
# 265 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 266 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


# 270 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLeft::
# 271 "data/maps/PalletTown/scripts.pory"
	walk_up
# 272 "data/maps/PalletTown/scripts.pory"
	walk_up
# 273 "data/maps/PalletTown/scripts.pory"
	walk_right
# 274 "data/maps/PalletTown/scripts.pory"
	walk_up
# 275 "data/maps/PalletTown/scripts.pory"
	walk_up
# 276 "data/maps/PalletTown/scripts.pory"
	walk_right
# 277 "data/maps/PalletTown/scripts.pory"
	walk_up
# 278 "data/maps/PalletTown/scripts.pory"
	walk_up
# 279 "data/maps/PalletTown/scripts.pory"
	step_end

# 282 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterRight::
# 283 "data/maps/PalletTown/scripts.pory"
	walk_right
# 284 "data/maps/PalletTown/scripts.pory"
	walk_up
# 285 "data/maps/PalletTown/scripts.pory"
	walk_up
# 286 "data/maps/PalletTown/scripts.pory"
	walk_right
# 287 "data/maps/PalletTown/scripts.pory"
	walk_up
# 288 "data/maps/PalletTown/scripts.pory"
	walk_up
# 289 "data/maps/PalletTown/scripts.pory"
	walk_right
# 290 "data/maps/PalletTown/scripts.pory"
	walk_up
# 291 "data/maps/PalletTown/scripts.pory"
	walk_up
# 292 "data/maps/PalletTown/scripts.pory"
	step_end

# 295 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft::
# 296 "data/maps/PalletTown/scripts.pory"
	walk_down
# 297 "data/maps/PalletTown/scripts.pory"
	walk_left
# 298 "data/maps/PalletTown/scripts.pory"
	walk_down
# 299 "data/maps/PalletTown/scripts.pory"
	walk_down
# 300 "data/maps/PalletTown/scripts.pory"
	walk_down
# 301 "data/maps/PalletTown/scripts.pory"
	walk_down
# 302 "data/maps/PalletTown/scripts.pory"
	walk_down
# 303 "data/maps/PalletTown/scripts.pory"
	walk_down
# 304 "data/maps/PalletTown/scripts.pory"
	walk_down
# 305 "data/maps/PalletTown/scripts.pory"
	walk_down
# 306 "data/maps/PalletTown/scripts.pory"
	walk_down
# 307 "data/maps/PalletTown/scripts.pory"
	walk_down
# 308 "data/maps/PalletTown/scripts.pory"
	walk_down
# 309 "data/maps/PalletTown/scripts.pory"
	walk_right
# 310 "data/maps/PalletTown/scripts.pory"
	walk_right
# 311 "data/maps/PalletTown/scripts.pory"
	walk_right
# 312 "data/maps/PalletTown/scripts.pory"
	walk_right
# 313 "data/maps/PalletTown/scripts.pory"
	walk_right
# 314 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 315 "data/maps/PalletTown/scripts.pory"
	step_end

# 318 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabRight::
# 319 "data/maps/PalletTown/scripts.pory"
	walk_down
# 320 "data/maps/PalletTown/scripts.pory"
	walk_left
# 321 "data/maps/PalletTown/scripts.pory"
	walk_left
# 322 "data/maps/PalletTown/scripts.pory"
	walk_down
# 323 "data/maps/PalletTown/scripts.pory"
	walk_down
# 324 "data/maps/PalletTown/scripts.pory"
	walk_down
# 325 "data/maps/PalletTown/scripts.pory"
	walk_down
# 326 "data/maps/PalletTown/scripts.pory"
	walk_down
# 327 "data/maps/PalletTown/scripts.pory"
	walk_down
# 328 "data/maps/PalletTown/scripts.pory"
	walk_down
# 329 "data/maps/PalletTown/scripts.pory"
	walk_down
# 330 "data/maps/PalletTown/scripts.pory"
	walk_down
# 331 "data/maps/PalletTown/scripts.pory"
	walk_down
# 332 "data/maps/PalletTown/scripts.pory"
	walk_down
# 333 "data/maps/PalletTown/scripts.pory"
	walk_right
# 334 "data/maps/PalletTown/scripts.pory"
	walk_right
# 335 "data/maps/PalletTown/scripts.pory"
	walk_right
# 336 "data/maps/PalletTown/scripts.pory"
	walk_right
# 337 "data/maps/PalletTown/scripts.pory"
	walk_right
# 338 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 339 "data/maps/PalletTown/scripts.pory"
	step_end

# 342 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLab::
# 343 "data/maps/PalletTown/scripts.pory"
	walk_up
# 344 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 345 "data/maps/PalletTown/scripts.pory"
	step_end

# 348 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft::
# 349 "data/maps/PalletTown/scripts.pory"
	walk_down
# 350 "data/maps/PalletTown/scripts.pory"
	walk_down
# 351 "data/maps/PalletTown/scripts.pory"
	walk_left
# 352 "data/maps/PalletTown/scripts.pory"
	walk_down
# 353 "data/maps/PalletTown/scripts.pory"
	walk_down
# 354 "data/maps/PalletTown/scripts.pory"
	walk_down
# 355 "data/maps/PalletTown/scripts.pory"
	walk_down
# 356 "data/maps/PalletTown/scripts.pory"
	walk_down
# 357 "data/maps/PalletTown/scripts.pory"
	walk_down
# 358 "data/maps/PalletTown/scripts.pory"
	walk_down
# 359 "data/maps/PalletTown/scripts.pory"
	walk_down
# 360 "data/maps/PalletTown/scripts.pory"
	walk_down
# 361 "data/maps/PalletTown/scripts.pory"
	walk_down
# 362 "data/maps/PalletTown/scripts.pory"
	walk_down
# 363 "data/maps/PalletTown/scripts.pory"
	walk_right
# 364 "data/maps/PalletTown/scripts.pory"
	walk_right
# 365 "data/maps/PalletTown/scripts.pory"
	walk_right
# 366 "data/maps/PalletTown/scripts.pory"
	walk_right
# 367 "data/maps/PalletTown/scripts.pory"
	step_end

# 370 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight::
# 371 "data/maps/PalletTown/scripts.pory"
	walk_down
# 372 "data/maps/PalletTown/scripts.pory"
	walk_down
# 373 "data/maps/PalletTown/scripts.pory"
	walk_left
# 374 "data/maps/PalletTown/scripts.pory"
	walk_left
# 375 "data/maps/PalletTown/scripts.pory"
	walk_down
# 376 "data/maps/PalletTown/scripts.pory"
	walk_down
# 377 "data/maps/PalletTown/scripts.pory"
	walk_down
# 378 "data/maps/PalletTown/scripts.pory"
	walk_down
# 379 "data/maps/PalletTown/scripts.pory"
	walk_down
# 380 "data/maps/PalletTown/scripts.pory"
	walk_down
# 381 "data/maps/PalletTown/scripts.pory"
	walk_down
# 382 "data/maps/PalletTown/scripts.pory"
	walk_down
# 383 "data/maps/PalletTown/scripts.pory"
	walk_down
# 384 "data/maps/PalletTown/scripts.pory"
	walk_down
# 385 "data/maps/PalletTown/scripts.pory"
	walk_down
# 386 "data/maps/PalletTown/scripts.pory"
	walk_right
# 387 "data/maps/PalletTown/scripts.pory"
	walk_right
# 388 "data/maps/PalletTown/scripts.pory"
	walk_right
# 389 "data/maps/PalletTown/scripts.pory"
	walk_right
# 390 "data/maps/PalletTown/scripts.pory"
	step_end

# 393 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerEnterLab::
# 394 "data/maps/PalletTown/scripts.pory"
	walk_right
# 395 "data/maps/PalletTown/scripts.pory"
	walk_up
# 396 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 397 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_SignLady::
# 401 "data/maps/PalletTown/scripts.pory"
	lock
# 402 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2, PalletTown_EventScript_SignLadyDone
# 403 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SignLadyJustShowedSign
# 404 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_TEMP_2, TRUE, PalletTown_EventScript_SignLadyStartShowSign
# 405 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLadyGoReadSign
# 406 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 407 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 408 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 409 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 410 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_ExclamationMark
# 411 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 412 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_Delay48
# 413 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 414 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 415 "data/maps/PalletTown/scripts.pory"
	closemessage
# 416 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayRight
# 417 "data/maps/PalletTown/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayLeft
# 418 "data/maps/PalletTown/scripts.pory"
	copyobjectxytoperm LOCALID_PALLET_SIGN_LADY
# 419 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_2
# 420 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyMoveOutOfWayRight::
# 425 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayRight
# 426 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_SignLadyMoveOutOfWayLeft::
# 431 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayLeft
# 432 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_SignLadyDone::
# 437 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 438 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 439 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
# 440 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyGoReadSign::
# 445 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 446 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 447 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
# 448 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyJustShowedSign::
# 453 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 454 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 455 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
# 456 "data/maps/PalletTown/scripts.pory"
	release
	end


# 460 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayRight::
# 461 "data/maps/PalletTown/scripts.pory"
	walk_right
# 462 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_left
# 463 "data/maps/PalletTown/scripts.pory"
	step_end

# 466 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayLeft::
# 467 "data/maps/PalletTown/scripts.pory"
	walk_left
# 468 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_right
# 469 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_FatMan::
# 473 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
# 474 "data/maps/PalletTown/scripts.pory"
	additem ITEM_HM09_ROCK_CLIMB
# 475 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MOM_SHOES, 1
# 476 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_MOM
# 477 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_MOM
# 478 "data/maps/PalletTown/scripts.pory"
	additem ITEM_ADAMANT_MINT
# 479 "data/maps/PalletTown/scripts.pory"
	additem ITEM_BOLD_MINT
# 480 "data/maps/PalletTown/scripts.pory"
	additem ITEM_BRAVE_MINT
# 481 "data/maps/PalletTown/scripts.pory"
	additem ITEM_CALM_MINT
# 482 "data/maps/PalletTown/scripts.pory"
	additem ITEM_CAREFUL_MINT
# 483 "data/maps/PalletTown/scripts.pory"
	additem ITEM_GENTLE_MINT
# 484 "data/maps/PalletTown/scripts.pory"
	additem ITEM_HASTY_MINT
# 485 "data/maps/PalletTown/scripts.pory"
	additem ITEM_IMPISH_MINT
# 486 "data/maps/PalletTown/scripts.pory"
	additem ITEM_JOLLY_MINT
# 487 "data/maps/PalletTown/scripts.pory"
	additem ITEM_LAX_MINT
# 488 "data/maps/PalletTown/scripts.pory"
	additem ITEM_LONELY_MINT
# 489 "data/maps/PalletTown/scripts.pory"
	additem ITEM_MILD_MINT
# 490 "data/maps/PalletTown/scripts.pory"
	additem ITEM_MODEST_MINT
# 491 "data/maps/PalletTown/scripts.pory"
	additem ITEM_NAIVE_MINT
# 492 "data/maps/PalletTown/scripts.pory"
	additem ITEM_NAUGHTY_MINT
# 493 "data/maps/PalletTown/scripts.pory"
	additem ITEM_QUIET_MINT
# 494 "data/maps/PalletTown/scripts.pory"
	additem ITEM_RASH_MINT
# 495 "data/maps/PalletTown/scripts.pory"
	additem ITEM_RELAXED_MINT
# 496 "data/maps/PalletTown/scripts.pory"
	additem ITEM_SASSY_MINT
# 497 "data/maps/PalletTown/scripts.pory"
	additem ITEM_SERIOUS_MINT
# 498 "data/maps/PalletTown/scripts.pory"
	additem ITEM_TIMID_MINT
# 499 "data/maps/PalletTown/scripts.pory"
	additem ITEM_SHINY_CHARM
# 500 "data/maps/PalletTown/scripts.pory"
	givemon SPECIES_AMBIPOM, 25
# 501 "data/maps/PalletTown/scripts.pory"
	givemon SPECIES_FARFETCHD, 32
# 502 "data/maps/PalletTown/scripts.pory"
	additem ITEM_RARE_CANDY, 2
# 503 "data/maps/PalletTown/scripts.pory"
	additem ITEM_SHINY_STONE
# 504 "data/maps/PalletTown/scripts.pory"
	additem ITEM_DUSK_STONE
# 505 "data/maps/PalletTown/scripts.pory"
	additem ITEM_OVAL_STONE
# 506 "data/maps/PalletTown/scripts.pory"
	additem ITEM_RAZOR_CLAW
# 507 "data/maps/PalletTown/scripts.pory"
	additem ITEM_RAZOR_FANG
# 508 "data/maps/PalletTown/scripts.pory"
	additem ITEM_PROTECTOR
# 509 "data/maps/PalletTown/scripts.pory"
	additem ITEM_ELECTIRIZER
# 510 "data/maps/PalletTown/scripts.pory"
	additem ITEM_MAGMARIZER
# 511 "data/maps/PalletTown/scripts.pory"
	additem ITEM_DUBIOUS_DISC
# 512 "data/maps/PalletTown/scripts.pory"
	additem ITEM_BICYCLE
# 513 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_GOT_BICYCLE
# 514 "data/maps/PalletTown/scripts.pory"
	special ForcePlayerOntoBike
# 515 "data/maps/PalletTown/scripts.pory"
	warp MAP_ROUTE17, 2, 19
# 516 "data/maps/PalletTown/scripts.pory"
	waitstate
# 517 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_OaksLabSign::
# 522 "data/maps/PalletTown/scripts.pory"
	lockall
# 523 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, 0
# 524 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 525 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_PlayersHouseSign::
# 530 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_RivalsHouseSign::
# 535 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_TownSign::
# 540 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
	end


PalletTown_EventScript_TrainerTips::
# 545 "data/maps/PalletTown/scripts.pory"
	lockall
# 546 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 547 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 548 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_SignLadyTrigger::
# 553 "data/maps/PalletTown/scripts.pory"
	lockall
# 554 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_WalkInPlaceFasterRight
# 555 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 556 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 557 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 558 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_SignLadyShowSign::
# 563 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 564 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 565 "data/maps/PalletTown/scripts.pory"
	closemessage
# 566 "data/maps/PalletTown/scripts.pory"
	delay 20
# 567 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 568 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_OPENED_START_MENU
# 569 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 570 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_2, FALSE
# 571 "data/maps/PalletTown/scripts.pory"
	special SetWalkingIntoSignVars
# 572 "data/maps/PalletTown/scripts.pory"
	special DisableMsgBoxWalkaway
# 573 "data/maps/PalletTown/scripts.pory"
	signmsg
# 574 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 575 "data/maps/PalletTown/scripts.pory"
	normalmsg
	return


PalletTown_EventScript_SignLadyStartShowSign::
# 580 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 581 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 582 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 583 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_TriggerMomGiveRunningShoes::
# 588 "data/maps/PalletTown/scripts.pory"
	lockall
# 589 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_4, 0
# 590 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 591 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, Common_Movement_WalkInPlaceFasterLeft
# 592 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 593 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 594 "data/maps/PalletTown/scripts.pory"
	waitse
# 595 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 596 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, Common_Movement_ExclamationMark
# 597 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 598 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, Common_Movement_Delay48
# 599 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 600 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_MomDontGoOut
# 601 "data/maps/PalletTown/scripts.pory"
	closemessage
# 602 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_MomGiveRunningShoes
# 603 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_Mom::
# 608 "data/maps/PalletTown/scripts.pory"
	lock
# 609 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 611 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_4, 0
# 612 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_EventScript_MomUseAltRoute
# 613 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 614 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_MomGiveRunningShoes
# 615 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_MomGiveRunningShoes::
# 620 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_MomGiveRunningShoes
# 621 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 622 "data/maps/PalletTown/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 623 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_ReceivedRunningShoesFromMom
# 624 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 625 "data/maps/PalletTown/scripts.pory"
	waitfanfare
# 626 "data/maps/PalletTown/scripts.pory"
	delay 30
# 627 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 628 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_MomGiveRunningShoes2
# 629 "data/maps/PalletTown/scripts.pory"
	closemessage
# 630 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 631 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MOM_SHOES, 0
# 632 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_MomWalkHome
	return


PalletTown_EventScript_MomWalkHome::
# 639 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, PalletTown_EventScript_MomWalkToHouse
# 640 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, PalletTown_EventScript_MomWalkToHouseAlt
# 641 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 642 "data/maps/PalletTown/scripts.pory"
	waitmovement LOCALID_PALLET_MOM
# 643 "data/maps/PalletTown/scripts.pory"
	opendoor 6, 7
# 644 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 645 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, PalletTown_Movement_MomEnterHouse
# 646 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 647 "data/maps/PalletTown/scripts.pory"
	closedoor 6, 7
# 648 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 649 "data/maps/PalletTown/scripts.pory"
	removeobject LOCALID_PALLET_MOM
# 650 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_MOM
	return


PalletTown_EventScript_MomUseAltRoute::
# 655 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_4, 1
	return


PalletTown_EventScript_MomWalkToHouse::
# 660 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, PalletTown_Movement_MomWalkToHouse
	return


PalletTown_EventScript_MomWalkToHouseAlt::
# 665 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, PalletTown_Movement_MomWalkToHouseAlt
	return


# 670 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_MomWalkToHouseAlt::
# 671 "data/maps/PalletTown/scripts.pory"
	walk_left
# 672 "data/maps/PalletTown/scripts.pory"
	walk_down
# 673 "data/maps/PalletTown/scripts.pory"
	walk_left
# 674 "data/maps/PalletTown/scripts.pory"
	walk_down
# 675 "data/maps/PalletTown/scripts.pory"
	walk_down
# 676 "data/maps/PalletTown/scripts.pory"
	walk_down
# 677 "data/maps/PalletTown/scripts.pory"
	walk_down
# 678 "data/maps/PalletTown/scripts.pory"
	walk_down
# 679 "data/maps/PalletTown/scripts.pory"
	walk_left
# 680 "data/maps/PalletTown/scripts.pory"
	walk_left
# 681 "data/maps/PalletTown/scripts.pory"
	walk_left
# 682 "data/maps/PalletTown/scripts.pory"
	walk_left
# 683 "data/maps/PalletTown/scripts.pory"
	walk_left
# 684 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 685 "data/maps/PalletTown/scripts.pory"
	step_end

# 688 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_MomWalkToHouse::
# 689 "data/maps/PalletTown/scripts.pory"
	walk_down
# 690 "data/maps/PalletTown/scripts.pory"
	walk_left
# 691 "data/maps/PalletTown/scripts.pory"
	walk_left
# 692 "data/maps/PalletTown/scripts.pory"
	walk_down
# 693 "data/maps/PalletTown/scripts.pory"
	walk_down
# 694 "data/maps/PalletTown/scripts.pory"
	walk_down
# 695 "data/maps/PalletTown/scripts.pory"
	walk_down
# 696 "data/maps/PalletTown/scripts.pory"
	walk_down
# 697 "data/maps/PalletTown/scripts.pory"
	walk_left
# 698 "data/maps/PalletTown/scripts.pory"
	walk_left
# 699 "data/maps/PalletTown/scripts.pory"
	walk_left
# 700 "data/maps/PalletTown/scripts.pory"
	walk_left
# 701 "data/maps/PalletTown/scripts.pory"
	walk_left
# 702 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 703 "data/maps/PalletTown/scripts.pory"
	step_end

# 706 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_MomEnterHouse::
# 707 "data/maps/PalletTown/scripts.pory"
	walk_up
# 708 "data/maps/PalletTown/scripts.pory"
	delay_4
# 709 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 710 "data/maps/PalletTown/scripts.pory"
	step_end
