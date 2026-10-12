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
	end


PalletTown_EventScript_TryReadySignLady::
# 20 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_OPENED_START_MENU, EventScript_Return
# 21 "data/maps/PalletTown/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, EventScript_Return
# 22 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	return


PalletTown_EventScript_SetSignLadyDone::
# 27 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
	return


PalletTown_EventScript_SetSignLadyPos::
# 32 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_MoveSignLadyToRouteEntrance
# 33 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 5, 15
# 34 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_UP
	return


PalletTown_EventScript_MoveSignLadyToRouteEntrance::
# 39 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 12, 2
# 40 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_DOWN
# 41 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_2, TRUE
	return


PalletTown_EventScript_OakRatingScene::
# 47 "data/maps/PalletTown/scripts.pory"
	lockall
# 48 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 49 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_PROF_OAK, 14, 14
# 50 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
# 51 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 52 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToPlayersDoor
# 53 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_EventScript_NotBeenToOneIslandYet
# 55 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 56 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, 0
# 57 "data/maps/PalletTown/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 58 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 59 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 60 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 61 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 62 "data/maps/PalletTown/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_EventScript_NotEnoughMonsForNationalDex
# 63 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 64 "data/maps/PalletTown/scripts.pory"
	closemessage
# 65 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 66 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 67 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabFromHouse
# 68 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 69 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 70 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 71 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 72 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 73 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 74 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 75 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 76 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 77 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 78 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 79 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 80 "data/maps/PalletTown/scripts.pory"
	waitstate
# 81 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_EndOakRatingScene::
# 86 "data/maps/PalletTown/scripts.pory"
	closemessage
# 87 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakExit
# 88 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 89 "data/maps/PalletTown/scripts.pory"
	removeobject LOCALID_PALLET_PROF_OAK
# 90 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 91 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 96 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 97 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	end


PalletTown_EventScript_NotBeenToOneIslandYet::
# 102 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 103 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	end


# 107 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor::
# 108 "data/maps/PalletTown/scripts.pory"
	walk_left
# 109 "data/maps/PalletTown/scripts.pory"
	walk_left
# 110 "data/maps/PalletTown/scripts.pory"
	walk_left
# 111 "data/maps/PalletTown/scripts.pory"
	walk_up
# 112 "data/maps/PalletTown/scripts.pory"
	walk_up
# 113 "data/maps/PalletTown/scripts.pory"
	walk_up
# 114 "data/maps/PalletTown/scripts.pory"
	walk_up
# 115 "data/maps/PalletTown/scripts.pory"
	walk_up
# 116 "data/maps/PalletTown/scripts.pory"
	walk_left
# 117 "data/maps/PalletTown/scripts.pory"
	walk_left
# 118 "data/maps/PalletTown/scripts.pory"
	walk_left
# 119 "data/maps/PalletTown/scripts.pory"
	walk_left
# 120 "data/maps/PalletTown/scripts.pory"
	walk_left
# 121 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 122 "data/maps/PalletTown/scripts.pory"
	step_end

# 125 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakExit::
# 126 "data/maps/PalletTown/scripts.pory"
	walk_right
# 127 "data/maps/PalletTown/scripts.pory"
	walk_right
# 128 "data/maps/PalletTown/scripts.pory"
	walk_right
# 129 "data/maps/PalletTown/scripts.pory"
	walk_right
# 130 "data/maps/PalletTown/scripts.pory"
	walk_right
# 131 "data/maps/PalletTown/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown/scripts.pory"
	walk_down
# 133 "data/maps/PalletTown/scripts.pory"
	walk_down
# 134 "data/maps/PalletTown/scripts.pory"
	walk_down
# 135 "data/maps/PalletTown/scripts.pory"
	walk_down
# 136 "data/maps/PalletTown/scripts.pory"
	walk_right
# 137 "data/maps/PalletTown/scripts.pory"
	walk_right
# 138 "data/maps/PalletTown/scripts.pory"
	walk_right
# 139 "data/maps/PalletTown/scripts.pory"
	step_end

# 142 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse::
# 143 "data/maps/PalletTown/scripts.pory"
	walk_right
# 144 "data/maps/PalletTown/scripts.pory"
	walk_right
# 145 "data/maps/PalletTown/scripts.pory"
	walk_right
# 146 "data/maps/PalletTown/scripts.pory"
	walk_right
# 147 "data/maps/PalletTown/scripts.pory"
	walk_right
# 148 "data/maps/PalletTown/scripts.pory"
	walk_down
# 149 "data/maps/PalletTown/scripts.pory"
	walk_down
# 150 "data/maps/PalletTown/scripts.pory"
	walk_down
# 151 "data/maps/PalletTown/scripts.pory"
	walk_down
# 152 "data/maps/PalletTown/scripts.pory"
	walk_down
# 153 "data/maps/PalletTown/scripts.pory"
	walk_right
# 154 "data/maps/PalletTown/scripts.pory"
	walk_right
# 155 "data/maps/PalletTown/scripts.pory"
	walk_right
# 156 "data/maps/PalletTown/scripts.pory"
	walk_right
# 157 "data/maps/PalletTown/scripts.pory"
	walk_right
# 158 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 159 "data/maps/PalletTown/scripts.pory"
	step_end

# 162 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse::
# 163 "data/maps/PalletTown/scripts.pory"
	walk_down
# 164 "data/maps/PalletTown/scripts.pory"
	walk_right
# 165 "data/maps/PalletTown/scripts.pory"
	walk_right
# 166 "data/maps/PalletTown/scripts.pory"
	walk_right
# 167 "data/maps/PalletTown/scripts.pory"
	walk_right
# 168 "data/maps/PalletTown/scripts.pory"
	walk_right
# 169 "data/maps/PalletTown/scripts.pory"
	walk_down
# 170 "data/maps/PalletTown/scripts.pory"
	walk_down
# 171 "data/maps/PalletTown/scripts.pory"
	walk_down
# 172 "data/maps/PalletTown/scripts.pory"
	walk_down
# 173 "data/maps/PalletTown/scripts.pory"
	walk_down
# 174 "data/maps/PalletTown/scripts.pory"
	walk_right
# 175 "data/maps/PalletTown/scripts.pory"
	walk_right
# 176 "data/maps/PalletTown/scripts.pory"
	walk_right
# 177 "data/maps/PalletTown/scripts.pory"
	walk_right
# 178 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_OakTriggerLeft::
# 182 "data/maps/PalletTown/scripts.pory"
	lockall
# 183 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 184 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTriggerRight::
# 189 "data/maps/PalletTown/scripts.pory"
	lockall
# 190 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 191 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTrigger::
# 196 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 197 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 198 "data/maps/PalletTown/scripts.pory"
	delay 30
# 199 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_OAK, 0
# 200 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 201 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 202 "data/maps/PalletTown/scripts.pory"
	delay 85
# 203 "data/maps/PalletTown/scripts.pory"
	closemessage
# 204 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 205 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 206 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 207 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 208 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 209 "data/maps/PalletTown/scripts.pory"
	delay 30
# 210 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 211 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakEnterLeft
# 212 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakEnterRight
# 213 "data/maps/PalletTown/scripts.pory"
	delay 30
# 214 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 215 "data/maps/PalletTown/scripts.pory"
	closemessage
# 216 "data/maps/PalletTown/scripts.pory"
	delay 30
# 217 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakLeadPlayerToLabLeft
# 218 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakLeadPlayerToLabRight
# 219 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 220 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 221 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 222 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 223 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 224 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 225 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 226 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 227 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 228 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 229 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 230 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 231 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 232 "data/maps/PalletTown/scripts.pory"
	waitstate
# 233 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_OakEnterLeft::
# 238 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLeft
# 239 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakEnterRight::
# 244 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterRight
# 245 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 250 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
# 251 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 252 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_OakLeadPlayerToLabRight::
# 257 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
# 258 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 259 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


# 263 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLeft::
# 264 "data/maps/PalletTown/scripts.pory"
	walk_up
# 265 "data/maps/PalletTown/scripts.pory"
	walk_up
# 266 "data/maps/PalletTown/scripts.pory"
	walk_right
# 267 "data/maps/PalletTown/scripts.pory"
	walk_up
# 268 "data/maps/PalletTown/scripts.pory"
	walk_up
# 269 "data/maps/PalletTown/scripts.pory"
	walk_right
# 270 "data/maps/PalletTown/scripts.pory"
	walk_up
# 271 "data/maps/PalletTown/scripts.pory"
	walk_up
# 272 "data/maps/PalletTown/scripts.pory"
	step_end

# 275 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterRight::
# 276 "data/maps/PalletTown/scripts.pory"
	walk_right
# 277 "data/maps/PalletTown/scripts.pory"
	walk_up
# 278 "data/maps/PalletTown/scripts.pory"
	walk_up
# 279 "data/maps/PalletTown/scripts.pory"
	walk_right
# 280 "data/maps/PalletTown/scripts.pory"
	walk_up
# 281 "data/maps/PalletTown/scripts.pory"
	walk_up
# 282 "data/maps/PalletTown/scripts.pory"
	walk_right
# 283 "data/maps/PalletTown/scripts.pory"
	walk_up
# 284 "data/maps/PalletTown/scripts.pory"
	walk_up
# 285 "data/maps/PalletTown/scripts.pory"
	step_end

# 288 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft::
# 289 "data/maps/PalletTown/scripts.pory"
	walk_down
# 290 "data/maps/PalletTown/scripts.pory"
	walk_left
# 291 "data/maps/PalletTown/scripts.pory"
	walk_down
# 292 "data/maps/PalletTown/scripts.pory"
	walk_down
# 293 "data/maps/PalletTown/scripts.pory"
	walk_down
# 294 "data/maps/PalletTown/scripts.pory"
	walk_down
# 295 "data/maps/PalletTown/scripts.pory"
	walk_down
# 296 "data/maps/PalletTown/scripts.pory"
	walk_down
# 297 "data/maps/PalletTown/scripts.pory"
	walk_down
# 298 "data/maps/PalletTown/scripts.pory"
	walk_down
# 299 "data/maps/PalletTown/scripts.pory"
	walk_down
# 300 "data/maps/PalletTown/scripts.pory"
	walk_down
# 301 "data/maps/PalletTown/scripts.pory"
	walk_down
# 302 "data/maps/PalletTown/scripts.pory"
	walk_right
# 303 "data/maps/PalletTown/scripts.pory"
	walk_right
# 304 "data/maps/PalletTown/scripts.pory"
	walk_right
# 305 "data/maps/PalletTown/scripts.pory"
	walk_right
# 306 "data/maps/PalletTown/scripts.pory"
	walk_right
# 307 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 308 "data/maps/PalletTown/scripts.pory"
	step_end

# 311 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabRight::
# 312 "data/maps/PalletTown/scripts.pory"
	walk_down
# 313 "data/maps/PalletTown/scripts.pory"
	walk_left
# 314 "data/maps/PalletTown/scripts.pory"
	walk_left
# 315 "data/maps/PalletTown/scripts.pory"
	walk_down
# 316 "data/maps/PalletTown/scripts.pory"
	walk_down
# 317 "data/maps/PalletTown/scripts.pory"
	walk_down
# 318 "data/maps/PalletTown/scripts.pory"
	walk_down
# 319 "data/maps/PalletTown/scripts.pory"
	walk_down
# 320 "data/maps/PalletTown/scripts.pory"
	walk_down
# 321 "data/maps/PalletTown/scripts.pory"
	walk_down
# 322 "data/maps/PalletTown/scripts.pory"
	walk_down
# 323 "data/maps/PalletTown/scripts.pory"
	walk_down
# 324 "data/maps/PalletTown/scripts.pory"
	walk_down
# 325 "data/maps/PalletTown/scripts.pory"
	walk_down
# 326 "data/maps/PalletTown/scripts.pory"
	walk_right
# 327 "data/maps/PalletTown/scripts.pory"
	walk_right
# 328 "data/maps/PalletTown/scripts.pory"
	walk_right
# 329 "data/maps/PalletTown/scripts.pory"
	walk_right
# 330 "data/maps/PalletTown/scripts.pory"
	walk_right
# 331 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 332 "data/maps/PalletTown/scripts.pory"
	step_end

# 335 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLab::
# 336 "data/maps/PalletTown/scripts.pory"
	walk_up
# 337 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 338 "data/maps/PalletTown/scripts.pory"
	step_end

# 341 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft::
# 342 "data/maps/PalletTown/scripts.pory"
	walk_down
# 343 "data/maps/PalletTown/scripts.pory"
	walk_down
# 344 "data/maps/PalletTown/scripts.pory"
	walk_left
# 345 "data/maps/PalletTown/scripts.pory"
	walk_down
# 346 "data/maps/PalletTown/scripts.pory"
	walk_down
# 347 "data/maps/PalletTown/scripts.pory"
	walk_down
# 348 "data/maps/PalletTown/scripts.pory"
	walk_down
# 349 "data/maps/PalletTown/scripts.pory"
	walk_down
# 350 "data/maps/PalletTown/scripts.pory"
	walk_down
# 351 "data/maps/PalletTown/scripts.pory"
	walk_down
# 352 "data/maps/PalletTown/scripts.pory"
	walk_down
# 353 "data/maps/PalletTown/scripts.pory"
	walk_down
# 354 "data/maps/PalletTown/scripts.pory"
	walk_down
# 355 "data/maps/PalletTown/scripts.pory"
	walk_down
# 356 "data/maps/PalletTown/scripts.pory"
	walk_right
# 357 "data/maps/PalletTown/scripts.pory"
	walk_right
# 358 "data/maps/PalletTown/scripts.pory"
	walk_right
# 359 "data/maps/PalletTown/scripts.pory"
	walk_right
# 360 "data/maps/PalletTown/scripts.pory"
	step_end

# 363 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight::
# 364 "data/maps/PalletTown/scripts.pory"
	walk_down
# 365 "data/maps/PalletTown/scripts.pory"
	walk_down
# 366 "data/maps/PalletTown/scripts.pory"
	walk_left
# 367 "data/maps/PalletTown/scripts.pory"
	walk_left
# 368 "data/maps/PalletTown/scripts.pory"
	walk_down
# 369 "data/maps/PalletTown/scripts.pory"
	walk_down
# 370 "data/maps/PalletTown/scripts.pory"
	walk_down
# 371 "data/maps/PalletTown/scripts.pory"
	walk_down
# 372 "data/maps/PalletTown/scripts.pory"
	walk_down
# 373 "data/maps/PalletTown/scripts.pory"
	walk_down
# 374 "data/maps/PalletTown/scripts.pory"
	walk_down
# 375 "data/maps/PalletTown/scripts.pory"
	walk_down
# 376 "data/maps/PalletTown/scripts.pory"
	walk_down
# 377 "data/maps/PalletTown/scripts.pory"
	walk_down
# 378 "data/maps/PalletTown/scripts.pory"
	walk_down
# 379 "data/maps/PalletTown/scripts.pory"
	walk_right
# 380 "data/maps/PalletTown/scripts.pory"
	walk_right
# 381 "data/maps/PalletTown/scripts.pory"
	walk_right
# 382 "data/maps/PalletTown/scripts.pory"
	walk_right
# 383 "data/maps/PalletTown/scripts.pory"
	step_end

# 386 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerEnterLab::
# 387 "data/maps/PalletTown/scripts.pory"
	walk_right
# 388 "data/maps/PalletTown/scripts.pory"
	walk_up
# 389 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 390 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_SignLady::
# 394 "data/maps/PalletTown/scripts.pory"
	lock
# 395 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2, PalletTown_EventScript_SignLadyDone
# 396 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SignLadyJustShowedSign
# 397 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_TEMP_2, TRUE, PalletTown_EventScript_SignLadyStartShowSign
# 398 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLadyGoReadSign
# 399 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 400 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 401 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 402 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 403 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_ExclamationMark
# 404 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 405 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_Delay48
# 406 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 407 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 408 "data/maps/PalletTown/scripts.pory"
	closemessage
# 409 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayRight
# 410 "data/maps/PalletTown/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayLeft
# 411 "data/maps/PalletTown/scripts.pory"
	copyobjectxytoperm LOCALID_PALLET_SIGN_LADY
# 412 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_2
# 413 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyMoveOutOfWayRight::
# 418 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayRight
# 419 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_SignLadyMoveOutOfWayLeft::
# 424 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayLeft
# 425 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
	return


PalletTown_EventScript_SignLadyDone::
# 430 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 431 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 432 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
# 433 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyGoReadSign::
# 438 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 439 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 440 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
# 441 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_SignLadyJustShowedSign::
# 446 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 447 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 448 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
# 449 "data/maps/PalletTown/scripts.pory"
	release
	end


# 453 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayRight::
# 454 "data/maps/PalletTown/scripts.pory"
	walk_right
# 455 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_left
# 456 "data/maps/PalletTown/scripts.pory"
	step_end

# 459 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayLeft::
# 460 "data/maps/PalletTown/scripts.pory"
	walk_left
# 461 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_right
# 462 "data/maps/PalletTown/scripts.pory"
	step_end

PalletTown_EventScript_FatMan::
# 466 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
# 467 "data/maps/PalletTown/scripts.pory"
	additem ITEM_HM09_ROCK_CLIMB
# 468 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MOM_SHOES, 1
# 469 "data/maps/PalletTown/scripts.pory"
	additem ITEM_ADAMANT_MINT
# 470 "data/maps/PalletTown/scripts.pory"
	additem ITEM_BOLD_MINT
# 471 "data/maps/PalletTown/scripts.pory"
	additem ITEM_BRAVE_MINT
# 472 "data/maps/PalletTown/scripts.pory"
	additem ITEM_CALM_MINT
# 473 "data/maps/PalletTown/scripts.pory"
	additem ITEM_CAREFUL_MINT
# 474 "data/maps/PalletTown/scripts.pory"
	additem ITEM_GENTLE_MINT
# 475 "data/maps/PalletTown/scripts.pory"
	additem ITEM_HASTY_MINT
# 476 "data/maps/PalletTown/scripts.pory"
	additem ITEM_IMPISH_MINT
# 477 "data/maps/PalletTown/scripts.pory"
	additem ITEM_JOLLY_MINT
# 478 "data/maps/PalletTown/scripts.pory"
	additem ITEM_LAX_MINT
# 479 "data/maps/PalletTown/scripts.pory"
	additem ITEM_LONELY_MINT
# 480 "data/maps/PalletTown/scripts.pory"
	additem ITEM_MILD_MINT
# 481 "data/maps/PalletTown/scripts.pory"
	additem ITEM_MODEST_MINT
# 482 "data/maps/PalletTown/scripts.pory"
	additem ITEM_NAIVE_MINT
# 483 "data/maps/PalletTown/scripts.pory"
	additem ITEM_NAUGHTY_MINT
# 484 "data/maps/PalletTown/scripts.pory"
	additem ITEM_QUIET_MINT
# 485 "data/maps/PalletTown/scripts.pory"
	additem ITEM_RASH_MINT
# 486 "data/maps/PalletTown/scripts.pory"
	additem ITEM_RELAXED_MINT
# 487 "data/maps/PalletTown/scripts.pory"
	additem ITEM_SASSY_MINT
# 488 "data/maps/PalletTown/scripts.pory"
	additem ITEM_SERIOUS_MINT
# 489 "data/maps/PalletTown/scripts.pory"
	additem ITEM_TIMID_MINT
# 490 "data/maps/PalletTown/scripts.pory"
	additem ITEM_SHINY_CHARM
# 491 "data/maps/PalletTown/scripts.pory"
	givemon SPECIES_AMBIPOM, 25
# 492 "data/maps/PalletTown/scripts.pory"
	givemon SPECIES_FARFETCHD, 32
# 493 "data/maps/PalletTown/scripts.pory"
	additem ITEM_RARE_CANDY, 2
# 494 "data/maps/PalletTown/scripts.pory"
	additem ITEM_SHINY_STONE
# 495 "data/maps/PalletTown/scripts.pory"
	additem ITEM_DUSK_STONE
# 496 "data/maps/PalletTown/scripts.pory"
	additem ITEM_OVAL_STONE
# 497 "data/maps/PalletTown/scripts.pory"
	additem ITEM_RAZOR_CLAW
# 498 "data/maps/PalletTown/scripts.pory"
	additem ITEM_RAZOR_FANG
# 499 "data/maps/PalletTown/scripts.pory"
	additem ITEM_PROTECTOR
# 500 "data/maps/PalletTown/scripts.pory"
	additem ITEM_ELECTIRIZER
# 501 "data/maps/PalletTown/scripts.pory"
	additem ITEM_MAGMARIZER
# 502 "data/maps/PalletTown/scripts.pory"
	additem ITEM_DUBIOUS_DISC
# 503 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_OaksLabSign::
# 508 "data/maps/PalletTown/scripts.pory"
	lockall
# 509 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, 0
# 510 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 511 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_PlayersHouseSign::
# 516 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_RivalsHouseSign::
# 521 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_TownSign::
# 526 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
	end


PalletTown_EventScript_TrainerTips::
# 531 "data/maps/PalletTown/scripts.pory"
	lockall
# 532 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 533 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 534 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_SignLadyTrigger::
# 539 "data/maps/PalletTown/scripts.pory"
	lockall
# 540 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_WalkInPlaceFasterRight
# 541 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 542 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 543 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 544 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_SignLadyShowSign::
# 549 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 550 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 551 "data/maps/PalletTown/scripts.pory"
	closemessage
# 552 "data/maps/PalletTown/scripts.pory"
	delay 20
# 553 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 554 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_OPENED_START_MENU
# 555 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 556 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_2, FALSE
# 557 "data/maps/PalletTown/scripts.pory"
	special SetWalkingIntoSignVars
# 558 "data/maps/PalletTown/scripts.pory"
	special DisableMsgBoxWalkaway
# 559 "data/maps/PalletTown/scripts.pory"
	signmsg
# 560 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 561 "data/maps/PalletTown/scripts.pory"
	normalmsg
	return


PalletTown_EventScript_SignLadyStartShowSign::
# 566 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 567 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 568 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 569 "data/maps/PalletTown/scripts.pory"
	release
	end


PalletTown_EventScript_TriggerMomGiveRunningShoes_left::
# 574 "data/maps/PalletTown/scripts.pory"
	lockall
# 575 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_4, 0
# 576 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_VarMomGiveRunningShoes
# 577 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_TriggerMomGiveRunningShoes_right::
# 582 "data/maps/PalletTown/scripts.pory"
	lockall
# 583 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_4, 1
# 584 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_VarMomGiveRunningShoes
# 585 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_VarMomGiveRunningShoes::
# 590 "data/maps/PalletTown/scripts.pory"
	lockall
# 591 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MOM_SHOES, 1, PalletTown_EventScript_TriggerMomGiveRunningShoes
# 592 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_TriggerMomGiveRunningShoes::
# 597 "data/maps/PalletTown/scripts.pory"
	lockall
# 599 "data/maps/PalletTown/scripts.pory"
	opendoor 6, 7
# 600 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 601 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_MOM
# 602 "data/maps/PalletTown/scripts.pory"
	closedoor 6, 7
# 603 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 604 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 605 "data/maps/PalletTown/scripts.pory"
	waitse
# 606 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 607 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_MomDontGoOut
# 608 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 609 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 610 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 611 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 612 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 613 "data/maps/PalletTown/scripts.pory"
	delay 30
# 614 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_TEMP_4, 0, PalletTown_EventScript_MomGiveRunningShoesMoveLeft
# 615 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_TEMP_4, 1, PalletTown_EventScript_MomGiveRunningShoesMoveRight
# 616 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_TriggerMomGiveRunningShoes2::
# 621 "data/maps/PalletTown/scripts.pory"
	lockall
# 622 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_MomGiveRunningShoes
# 623 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 624 "data/maps/PalletTown/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 625 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_MomGiveRunningShoes2
# 626 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 627 "data/maps/PalletTown/scripts.pory"
	waitfanfare
# 628 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 629 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MOM_SHOES, 0
# 630 "data/maps/PalletTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 631 "data/maps/PalletTown/scripts.pory"
	removeobject LOCALID_PALLET_MOM
# 632 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_MOM
# 633 "data/maps/PalletTown/scripts.pory"
	delay 30
# 634 "data/maps/PalletTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 635 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MOM_SHOES, 0
# 636 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_MomGiveRunningShoesMoveLeft::
# 641 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, PalletTown_Momvement_MomGiveRunningShoes_left
# 642 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 643 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_TriggerMomGiveRunningShoes2
# 644 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


PalletTown_EventScript_MomGiveRunningShoesMoveRight::
# 649 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_MOM, PalletTown_Momvement_MomGiveRunningShoes_right
# 650 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 651 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_TriggerMomGiveRunningShoes2
# 652 "data/maps/PalletTown/scripts.pory"
	releaseall
	end


# 656 "data/maps/PalletTown/scripts.pory"
PalletTown_Momvement_MomGiveRunningShoes_left::
# 657 "data/maps/PalletTown/scripts.pory"
	walk_down
# 658 "data/maps/PalletTown/scripts.pory"
	walk_right
# 659 "data/maps/PalletTown/scripts.pory"
	walk_right
# 660 "data/maps/PalletTown/scripts.pory"
	walk_right
# 661 "data/maps/PalletTown/scripts.pory"
	walk_right
# 662 "data/maps/PalletTown/scripts.pory"
	walk_right
# 663 "data/maps/PalletTown/scripts.pory"
	walk_right
# 664 "data/maps/PalletTown/scripts.pory"
	walk_up
# 665 "data/maps/PalletTown/scripts.pory"
	walk_up
# 666 "data/maps/PalletTown/scripts.pory"
	walk_up
# 667 "data/maps/PalletTown/scripts.pory"
	walk_up
# 668 "data/maps/PalletTown/scripts.pory"
	walk_up
# 669 "data/maps/PalletTown/scripts.pory"
	walk_up
# 670 "data/maps/PalletTown/scripts.pory"
	face_up
# 671 "data/maps/PalletTown/scripts.pory"
	step_end

# 674 "data/maps/PalletTown/scripts.pory"
PalletTown_Momvement_MomGiveRunningShoes_right::
# 675 "data/maps/PalletTown/scripts.pory"
	walk_down
# 676 "data/maps/PalletTown/scripts.pory"
	walk_right
# 677 "data/maps/PalletTown/scripts.pory"
	walk_right
# 678 "data/maps/PalletTown/scripts.pory"
	walk_right
# 679 "data/maps/PalletTown/scripts.pory"
	walk_right
# 680 "data/maps/PalletTown/scripts.pory"
	walk_right
# 681 "data/maps/PalletTown/scripts.pory"
	walk_right
# 682 "data/maps/PalletTown/scripts.pory"
	walk_up
# 683 "data/maps/PalletTown/scripts.pory"
	walk_up
# 684 "data/maps/PalletTown/scripts.pory"
	walk_up
# 685 "data/maps/PalletTown/scripts.pory"
	walk_up
# 686 "data/maps/PalletTown/scripts.pory"
	walk_up
# 687 "data/maps/PalletTown/scripts.pory"
	walk_up
# 688 "data/maps/PalletTown/scripts.pory"
	walk_right
# 689 "data/maps/PalletTown/scripts.pory"
	face_up
# 690 "data/maps/PalletTown/scripts.pory"
	step_end
