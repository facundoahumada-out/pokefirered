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
# 18 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_TestDailyLeadersVisibility
	end


PalletTown_EventScript_ShowMomAtExit::
# 23 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_MOM
	return


PalletTown_EventScript_TryReadySignLady::
# 28 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_OPENED_START_MENU, EventScript_Return
# 29 "data/maps/PalletTown/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, EventScript_Return
# 30 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	return


PalletTown_EventScript_SetSignLadyDone::
# 35 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
	return


PalletTown_EventScript_SetSignLadyPos::
# 40 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_MoveSignLadyToRouteEntrance
# 41 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 5, 15
# 42 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_UP
	return


PalletTown_EventScript_MoveSignLadyToRouteEntrance::
# 47 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 12, 2
# 48 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_DOWN
# 49 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_2, TRUE
	return


PalletTown_EventScript_OakRatingScene::
# 55 "data/maps/PalletTown/scripts.pory"
	lockall
# 56 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 57 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_PROF_OAK, 14, 14
# 58 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
# 59 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 60 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToPlayersDoor
# 61 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 62 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_EventScript_NotBeenToOneIslandYet
# 63 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 64 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, 0
# 65 "data/maps/PalletTown/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 66 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 67 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 68 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 69 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 70 "data/maps/PalletTown/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_EventScript_NotEnoughMonsForNationalDex
# 71 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 72 "data/maps/PalletTown/scripts.pory"
	closemessage
# 73 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 74 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 75 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabFromHouse
# 76 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 77 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 78 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 79 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 80 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 81 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 82 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 83 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 84 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 85 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 86 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 87 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 88 "data/maps/PalletTown/scripts.pory"
	waitstate
# 89 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_EndOakRatingScene::
# 94 "data/maps/PalletTown/scripts.pory"
	closemessage
# 95 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakExit
# 96 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 97 "data/maps/PalletTown/scripts.pory"
	removeobject LOCALID_PALLET_PROF_OAK
# 98 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 99 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 104 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 105 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	end


PalletTown_EventScript_NotBeenToOneIslandYet::
# 110 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 111 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	end


# 115 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor::
# 116 "data/maps/PalletTown/scripts.pory"
	walk_left
# 117 "data/maps/PalletTown/scripts.pory"
	walk_left
# 118 "data/maps/PalletTown/scripts.pory"
	walk_left
# 119 "data/maps/PalletTown/scripts.pory"
	walk_up
# 120 "data/maps/PalletTown/scripts.pory"
	walk_up
# 121 "data/maps/PalletTown/scripts.pory"
	walk_up
# 122 "data/maps/PalletTown/scripts.pory"
	walk_up
# 123 "data/maps/PalletTown/scripts.pory"
	walk_up
# 124 "data/maps/PalletTown/scripts.pory"
	walk_left
# 125 "data/maps/PalletTown/scripts.pory"
	walk_left
# 126 "data/maps/PalletTown/scripts.pory"
	walk_left
# 127 "data/maps/PalletTown/scripts.pory"
	walk_left
# 128 "data/maps/PalletTown/scripts.pory"
	walk_left
# 129 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 130 "data/maps/PalletTown/scripts.pory"
	step_end

# 133 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakExit::
# 134 "data/maps/PalletTown/scripts.pory"
	walk_right
# 135 "data/maps/PalletTown/scripts.pory"
	walk_right
# 136 "data/maps/PalletTown/scripts.pory"
	walk_right
# 137 "data/maps/PalletTown/scripts.pory"
	walk_right
# 138 "data/maps/PalletTown/scripts.pory"
	walk_right
# 139 "data/maps/PalletTown/scripts.pory"
	walk_down
# 140 "data/maps/PalletTown/scripts.pory"
	walk_down
# 141 "data/maps/PalletTown/scripts.pory"
	walk_down
# 142 "data/maps/PalletTown/scripts.pory"
	walk_down
# 143 "data/maps/PalletTown/scripts.pory"
	walk_down
# 144 "data/maps/PalletTown/scripts.pory"
	walk_right
# 145 "data/maps/PalletTown/scripts.pory"
	walk_right
# 146 "data/maps/PalletTown/scripts.pory"
	walk_right
# 147 "data/maps/PalletTown/scripts.pory"
	step_end

# 150 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse::
# 151 "data/maps/PalletTown/scripts.pory"
	walk_right
# 152 "data/maps/PalletTown/scripts.pory"
	walk_right
# 153 "data/maps/PalletTown/scripts.pory"
	walk_right
# 154 "data/maps/PalletTown/scripts.pory"
	walk_right
# 155 "data/maps/PalletTown/scripts.pory"
	walk_right
# 156 "data/maps/PalletTown/scripts.pory"
	walk_down
# 157 "data/maps/PalletTown/scripts.pory"
	walk_down
# 158 "data/maps/PalletTown/scripts.pory"
	walk_down
# 159 "data/maps/PalletTown/scripts.pory"
	walk_down
# 160 "data/maps/PalletTown/scripts.pory"
	walk_down
# 161 "data/maps/PalletTown/scripts.pory"
	walk_right
# 162 "data/maps/PalletTown/scripts.pory"
	walk_right
# 163 "data/maps/PalletTown/scripts.pory"
	walk_right
# 164 "data/maps/PalletTown/scripts.pory"
	walk_right
# 165 "data/maps/PalletTown/scripts.pory"
	walk_right
# 166 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 167 "data/maps/PalletTown/scripts.pory"
	step_end

# 170 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse::
# 171 "data/maps/PalletTown/scripts.pory"
	walk_down
# 172 "data/maps/PalletTown/scripts.pory"
	walk_right
# 173 "data/maps/PalletTown/scripts.pory"
	walk_right
# 174 "data/maps/PalletTown/scripts.pory"
	walk_right
# 175 "data/maps/PalletTown/scripts.pory"
	walk_right
# 176 "data/maps/PalletTown/scripts.pory"
	walk_right
# 177 "data/maps/PalletTown/scripts.pory"
	walk_down
# 178 "data/maps/PalletTown/scripts.pory"
	walk_down
# 179 "data/maps/PalletTown/scripts.pory"
	walk_down
# 180 "data/maps/PalletTown/scripts.pory"
	walk_down
# 181 "data/maps/PalletTown/scripts.pory"
	walk_down
# 182 "data/maps/PalletTown/scripts.pory"
	walk_right
# 183 "data/maps/PalletTown/scripts.pory"
	walk_right
# 184 "data/maps/PalletTown/scripts.pory"
	walk_right
# 185 "data/maps/PalletTown/scripts.pory"
	walk_right
# 186 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_OakTriggerLeft::
# 190 "data/maps/PalletTown/scripts.pory"
	lockall
# 191 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 192 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTriggerRight::
# 197 "data/maps/PalletTown/scripts.pory"
	lockall
# 198 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 199 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTrigger::
# 204 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 205 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 206 "data/maps/PalletTown/scripts.pory"
	delay 30
# 207 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_OAK, 0
# 208 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 209 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 210 "data/maps/PalletTown/scripts.pory"
	delay 85
# 211 "data/maps/PalletTown/scripts.pory"
	closemessage
# 212 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 213 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 214 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 215 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 216 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 217 "data/maps/PalletTown/scripts.pory"
	delay 30
# 218 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 219 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakEnterLeft
# 220 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakEnterRight
# 221 "data/maps/PalletTown/scripts.pory"
	delay 30
# 222 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 223 "data/maps/PalletTown/scripts.pory"
	closemessage
# 224 "data/maps/PalletTown/scripts.pory"
	delay 30
# 225 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakLeadPlayerToLabLeft
# 226 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakLeadPlayerToLabRight
# 227 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 228 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 229 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 230 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 231 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 232 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 233 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 234 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 235 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 236 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 237 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 238 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 239 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 240 "data/maps/PalletTown/scripts.pory"
	waitstate
# 241 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_OakEnterLeft::
# 246 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLeft
# 247 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakEnterRight::
# 252 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterRight
# 253 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 258 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
# 259 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 260 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakLeadPlayerToLabRight::
# 265 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
# 266 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 267 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


# 271 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLeft::
# 272 "data/maps/PalletTown/scripts.pory"
	walk_up
# 273 "data/maps/PalletTown/scripts.pory"
	walk_up
# 274 "data/maps/PalletTown/scripts.pory"
	walk_right
# 275 "data/maps/PalletTown/scripts.pory"
	walk_up
# 276 "data/maps/PalletTown/scripts.pory"
	walk_up
# 277 "data/maps/PalletTown/scripts.pory"
	walk_right
# 278 "data/maps/PalletTown/scripts.pory"
	walk_up
# 279 "data/maps/PalletTown/scripts.pory"
	walk_up
# 280 "data/maps/PalletTown/scripts.pory"
	step_end

# 283 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterRight::
# 284 "data/maps/PalletTown/scripts.pory"
	walk_right
# 285 "data/maps/PalletTown/scripts.pory"
	walk_up
# 286 "data/maps/PalletTown/scripts.pory"
	walk_up
# 287 "data/maps/PalletTown/scripts.pory"
	walk_right
# 288 "data/maps/PalletTown/scripts.pory"
	walk_up
# 289 "data/maps/PalletTown/scripts.pory"
	walk_up
# 290 "data/maps/PalletTown/scripts.pory"
	walk_right
# 291 "data/maps/PalletTown/scripts.pory"
	walk_up
# 292 "data/maps/PalletTown/scripts.pory"
	walk_up
# 293 "data/maps/PalletTown/scripts.pory"
	step_end

# 296 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft::
# 297 "data/maps/PalletTown/scripts.pory"
	walk_down
# 298 "data/maps/PalletTown/scripts.pory"
	walk_left
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
	walk_down
# 310 "data/maps/PalletTown/scripts.pory"
	walk_right
# 311 "data/maps/PalletTown/scripts.pory"
	walk_right
# 312 "data/maps/PalletTown/scripts.pory"
	walk_right
# 313 "data/maps/PalletTown/scripts.pory"
	walk_right
# 314 "data/maps/PalletTown/scripts.pory"
	walk_right
# 315 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 316 "data/maps/PalletTown/scripts.pory"
	step_end

# 319 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabRight::
# 320 "data/maps/PalletTown/scripts.pory"
	walk_down
# 321 "data/maps/PalletTown/scripts.pory"
	walk_left
# 322 "data/maps/PalletTown/scripts.pory"
	walk_left
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
	walk_down
# 334 "data/maps/PalletTown/scripts.pory"
	walk_right
# 335 "data/maps/PalletTown/scripts.pory"
	walk_right
# 336 "data/maps/PalletTown/scripts.pory"
	walk_right
# 337 "data/maps/PalletTown/scripts.pory"
	walk_right
# 338 "data/maps/PalletTown/scripts.pory"
	walk_right
# 339 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 340 "data/maps/PalletTown/scripts.pory"
	step_end

# 343 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLab::
# 344 "data/maps/PalletTown/scripts.pory"
	walk_up
# 345 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 346 "data/maps/PalletTown/scripts.pory"
	step_end

# 349 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft::
# 350 "data/maps/PalletTown/scripts.pory"
	walk_down
# 351 "data/maps/PalletTown/scripts.pory"
	walk_down
# 352 "data/maps/PalletTown/scripts.pory"
	walk_left
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
	walk_down
# 364 "data/maps/PalletTown/scripts.pory"
	walk_right
# 365 "data/maps/PalletTown/scripts.pory"
	walk_right
# 366 "data/maps/PalletTown/scripts.pory"
	walk_right
# 367 "data/maps/PalletTown/scripts.pory"
	walk_right
# 368 "data/maps/PalletTown/scripts.pory"
	step_end

# 371 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight::
# 372 "data/maps/PalletTown/scripts.pory"
	walk_down
# 373 "data/maps/PalletTown/scripts.pory"
	walk_down
# 374 "data/maps/PalletTown/scripts.pory"
	walk_left
# 375 "data/maps/PalletTown/scripts.pory"
	walk_left
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
	walk_down
# 387 "data/maps/PalletTown/scripts.pory"
	walk_right
# 388 "data/maps/PalletTown/scripts.pory"
	walk_right
# 389 "data/maps/PalletTown/scripts.pory"
	walk_right
# 390 "data/maps/PalletTown/scripts.pory"
	walk_right
# 391 "data/maps/PalletTown/scripts.pory"
	step_end

# 394 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerEnterLab::
# 395 "data/maps/PalletTown/scripts.pory"
	walk_right
# 396 "data/maps/PalletTown/scripts.pory"
	walk_up
# 397 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 398 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_SignLady::
# 402 "data/maps/PalletTown/scripts.pory"
	lock
# 403 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2, PalletTown_EventScript_SignLadyDone
# 404 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SignLadyJustShowedSign
# 405 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_TEMP_2, TRUE, PalletTown_EventScript_SignLadyStartShowSign
# 406 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLadyGoReadSign
# 407 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 408 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 409 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 410 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 411 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_ExclamationMark
# 412 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 413 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_Delay48
# 414 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 415 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 416 "data/maps/PalletTown/scripts.pory"
	closemessage
# 417 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayRight
# 418 "data/maps/PalletTown/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayLeft
# 419 "data/maps/PalletTown/scripts.pory"
	copyobjectxytoperm LOCALID_PALLET_SIGN_LADY
# 420 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_2
# 421 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyMoveOutOfWayRight::
# 426 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayRight
# 427 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_SignLadyMoveOutOfWayLeft::
# 432 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayLeft
# 433 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_SignLadyDone::
# 438 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 439 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 440 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
# 441 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyGoReadSign::
# 446 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 447 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 448 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
# 449 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyJustShowedSign::
# 454 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 455 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 456 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
# 457 "data/maps/PalletTown/scripts.pory"
	release
	end


# 461 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayRight::
# 462 "data/maps/PalletTown/scripts.pory"
	walk_right
# 463 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_left
# 464 "data/maps/PalletTown/scripts.pory"
	step_end

# 467 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayLeft::
# 468 "data/maps/PalletTown/scripts.pory"
	walk_left
# 469 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_right
# 470 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_FatMan::
# 474 "data/maps/PalletTown/scripts.pory"
	lock
# 475 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 476 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC
# 477 "data/maps/PalletTown/scripts.pory"
	special GiveTestTeam
# 478 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_OaksLabSign::
# 483 "data/maps/PalletTown/scripts.pory"
	lockall
# 484 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, 0
# 485 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 486 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_PlayersHouseSign::
# 491 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_RivalsHouseSign::
# 496 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_TownSign::
# 501 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
	end


PalletTown_EventScript_TrainerTips::
# 506 "data/maps/PalletTown/scripts.pory"
	lockall
# 507 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 508 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 509 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_SignLadyTrigger::
# 514 "data/maps/PalletTown/scripts.pory"
	lockall
# 515 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_WalkInPlaceFasterRight
# 516 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 517 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 518 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 519 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_SignLadyShowSign::
# 524 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 525 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 526 "data/maps/PalletTown/scripts.pory"
	closemessage
# 527 "data/maps/PalletTown/scripts.pory"
	delay 20
# 528 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 529 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_OPENED_START_MENU
# 530 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 531 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_2, FALSE
# 532 "data/maps/PalletTown/scripts.pory"
	special SetWalkingIntoSignVars
# 533 "data/maps/PalletTown/scripts.pory"
	special DisableMsgBoxWalkaway
# 534 "data/maps/PalletTown/scripts.pory"
	signmsg
# 535 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 536 "data/maps/PalletTown/scripts.pory"
	normalmsg
	return


PalletTown_EventScript_SignLadyStartShowSign::
# 541 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 542 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 543 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 544 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_TriggerMomGiveRunningShoes::
# 549 "data/maps/PalletTown/scripts.pory"
	lockall
# 550 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_4, 0
# 551 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 552 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, Common_Movement_WalkInPlaceFasterLeft
# 553 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 554 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 555 "data/maps/PalletTown/scripts.pory"
	waitse
# 556 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 557 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, Common_Movement_ExclamationMark
# 558 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 559 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, Common_Movement_Delay48
# 560 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 561 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_MomDontGoOut
# 562 "data/maps/PalletTown/scripts.pory"
	closemessage
# 563 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_MomGiveRunningShoes
# 564 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_Mom::
# 569 "data/maps/PalletTown/scripts.pory"
	lock
# 570 "data/maps/PalletTown/scripts.pory"
	faceplayer
# 572 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_4, 0
# 573 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_EventScript_MomUseAltRoute
# 574 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 575 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_MomGiveRunningShoes
# 576 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_MomGiveRunningShoes::
# 581 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_MomGiveRunningShoes
# 582 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 583 "data/maps/PalletTown/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 584 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_ReceivedRunningShoesFromMom
# 585 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 586 "data/maps/PalletTown/scripts.pory"
	waitfanfare
# 587 "data/maps/PalletTown/scripts.pory"
	delay 30
# 588 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 589 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_MomGiveRunningShoes2
# 590 "data/maps/PalletTown/scripts.pory"
	closemessage
# 591 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 592 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MOM_SHOES, 0
# 593 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_MomWalkHome
	return


PalletTown_EventScript_MomWalkHome::
# 600 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_4, 0, PalletTown_EventScript_MomWalkToHouse
# 601 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_4, 1, PalletTown_EventScript_MomWalkToHouseAlt
# 602 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 603 "data/maps/PalletTown/scripts.pory"
	waitmovement LOCALID_PALLET_MOM
# 604 "data/maps/PalletTown/scripts.pory"
	opendoor 6, 7
# 605 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 606 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, PalletTown_Movement_MomEnterHouse
# 607 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 608 "data/maps/PalletTown/scripts.pory"
	closedoor 6, 7
# 609 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 610 "data/maps/PalletTown/scripts.pory"
	removeobject LOCALID_PALLET_MOM
# 611 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_MOM
	return


PalletTown_EventScript_MomUseAltRoute::
# 616 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_4, 1
	return


PalletTown_EventScript_MomWalkToHouse::
# 621 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, PalletTown_Movement_MomWalkToHouse
	return


PalletTown_EventScript_MomWalkToHouseAlt::
# 626 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, PalletTown_Movement_MomWalkToHouseAlt
	return


# 631 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_MomWalkToHouseAlt::
# 632 "data/maps/PalletTown/scripts.pory"
	walk_left
# 633 "data/maps/PalletTown/scripts.pory"
	walk_down
# 634 "data/maps/PalletTown/scripts.pory"
	walk_left
# 635 "data/maps/PalletTown/scripts.pory"
	walk_down
# 636 "data/maps/PalletTown/scripts.pory"
	walk_down
# 637 "data/maps/PalletTown/scripts.pory"
	walk_down
# 638 "data/maps/PalletTown/scripts.pory"
	walk_down
# 639 "data/maps/PalletTown/scripts.pory"
	walk_down
# 640 "data/maps/PalletTown/scripts.pory"
	walk_left
# 641 "data/maps/PalletTown/scripts.pory"
	walk_left
# 642 "data/maps/PalletTown/scripts.pory"
	walk_left
# 643 "data/maps/PalletTown/scripts.pory"
	walk_left
# 644 "data/maps/PalletTown/scripts.pory"
	walk_left
# 645 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 646 "data/maps/PalletTown/scripts.pory"
	step_end

# 649 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_MomWalkToHouse::
# 650 "data/maps/PalletTown/scripts.pory"
	walk_down
# 651 "data/maps/PalletTown/scripts.pory"
	walk_left
# 652 "data/maps/PalletTown/scripts.pory"
	walk_left
# 653 "data/maps/PalletTown/scripts.pory"
	walk_down
# 654 "data/maps/PalletTown/scripts.pory"
	walk_down
# 655 "data/maps/PalletTown/scripts.pory"
	walk_down
# 656 "data/maps/PalletTown/scripts.pory"
	walk_down
# 657 "data/maps/PalletTown/scripts.pory"
	walk_down
# 658 "data/maps/PalletTown/scripts.pory"
	walk_left
# 659 "data/maps/PalletTown/scripts.pory"
	walk_left
# 660 "data/maps/PalletTown/scripts.pory"
	walk_left
# 661 "data/maps/PalletTown/scripts.pory"
	walk_left
# 662 "data/maps/PalletTown/scripts.pory"
	walk_left
# 663 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 664 "data/maps/PalletTown/scripts.pory"
	step_end

# 667 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_MomEnterHouse::
# 668 "data/maps/PalletTown/scripts.pory"
	walk_up
# 669 "data/maps/PalletTown/scripts.pory"
	delay_4
# 670 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 671 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_TestDailyLeadersVisibility::
# 678 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_11
# 679 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_12
# 680 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_13
# 681 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_14
# 682 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_15
# 683 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_16
# 684 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_17
# 685 "data/maps/PalletTown/scripts.pory"
	specialvar VAR_RESULT, GetDayOfWeek
# 686 "data/maps/PalletTown/scripts.pory"
	switch VAR_RESULT
# 687 "data/maps/PalletTown/scripts.pory"
	case 1, PalletTown_EventScript_TestDailyLeadersVisibility_3
# 689 "data/maps/PalletTown/scripts.pory"
	case 2, PalletTown_EventScript_TestDailyLeadersVisibility_4
# 691 "data/maps/PalletTown/scripts.pory"
	case 3, PalletTown_EventScript_TestDailyLeadersVisibility_5
# 693 "data/maps/PalletTown/scripts.pory"
	case 4, PalletTown_EventScript_TestDailyLeadersVisibility_6
# 695 "data/maps/PalletTown/scripts.pory"
	case 5, PalletTown_EventScript_TestDailyLeadersVisibility_7
# 697 "data/maps/PalletTown/scripts.pory"
	case 6, PalletTown_EventScript_TestDailyLeadersVisibility_8
# 699 "data/maps/PalletTown/scripts.pory"
	case 0, PalletTown_EventScript_TestDailyLeadersVisibility_9
PalletTown_EventScript_TestDailyLeadersVisibility_1:
	return

PalletTown_EventScript_TestDailyLeadersVisibility_3:
# 688 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_TEMP_11
	goto PalletTown_EventScript_TestDailyLeadersVisibility_1

PalletTown_EventScript_TestDailyLeadersVisibility_4:
# 690 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_TEMP_12
	goto PalletTown_EventScript_TestDailyLeadersVisibility_1

PalletTown_EventScript_TestDailyLeadersVisibility_5:
# 692 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_TEMP_13
	goto PalletTown_EventScript_TestDailyLeadersVisibility_1

PalletTown_EventScript_TestDailyLeadersVisibility_6:
# 694 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_TEMP_14
	goto PalletTown_EventScript_TestDailyLeadersVisibility_1

PalletTown_EventScript_TestDailyLeadersVisibility_7:
# 696 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_TEMP_15
	goto PalletTown_EventScript_TestDailyLeadersVisibility_1

PalletTown_EventScript_TestDailyLeadersVisibility_8:
# 698 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_TEMP_16
	goto PalletTown_EventScript_TestDailyLeadersVisibility_1

PalletTown_EventScript_TestDailyLeadersVisibility_9:
# 700 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_TEMP_17
	goto PalletTown_EventScript_TestDailyLeadersVisibility_1

