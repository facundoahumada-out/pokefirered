CinnabarIsland_MapScripts::
# 2 "data/maps/CinnabarIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_OnTransition
# 3 "data/maps/CinnabarIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CinnabarIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/CinnabarIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1, CinnabarIsland_EventScript_ExitPokeCenterForOneIsland
# 5 "data/maps/CinnabarIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 1, CinnabarIsland_EventScript_BillScene
# 6 "data/maps/CinnabarIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 3, CinnabarIsland_EventScript_ReturnFromSeviiIslands
	.2byte 0


CinnabarIsland_OnTransition::
# 11 "data/maps/CinnabarIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CINNABAR_ISLAND
# 12 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_CheckUnlockGym
# 13 "data/maps/CinnabarIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND, 1, CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland
# 14 "data/maps/CinnabarIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND, 3, CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands
# 15 "data/maps/CinnabarIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1, CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter
	end


CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter::
# 20 "data/maps/CinnabarIsland/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 21 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_TEMP_2
# 22 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 15, 12
# 23 "data/maps/CinnabarIsland/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_LEFT
# 24 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 12
	return


CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland::
# 29 "data/maps/CinnabarIsland/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 30 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_ge VAR_0x8004, 18, CinnabarIsland_EventScript_MoveSeagallopDown
# 31 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_TEMP_2
# 32 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 18, 12
# 33 "data/maps/CinnabarIsland/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_UP
# 34 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 12
	return


CinnabarIsland_EventScript_MoveSeagallopDown::
# 39 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 8
	return


CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands::
# 44 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 21, 8
# 45 "data/maps/CinnabarIsland/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_UP
	return


CinnabarIsland_EventScript_CheckUnlockGym::
# 50 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_set FLAG_HIDE_POKEMON_MANSION_B1F_SECRET_KEY, CinnabarIsland_EventScript_UnlockGym
	return


CinnabarIsland_EventScript_UnlockGym::
# 55 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


CinnabarIsland_EventScript_ExitPokeCenterForOneIsland::
# 60 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 61 "data/maps/CinnabarIsland/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 62 "data/maps/CinnabarIsland/scripts.pory"
	savebgm MUS_DUMMY
# 63 "data/maps/CinnabarIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 64 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 2
# 65 "data/maps/CinnabarIsland/scripts.pory"
	delay 20
# 66 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 67 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
	end


CinnabarIsland_EventScript_ReturnFromSeviiIslands::
# 72 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 73 "data/maps/CinnabarIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 74 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IfYouHaveTriPassYouCanGoAgain
# 75 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 76 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillExit
# 77 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 78 "data/maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 79 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 4
# 80 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 81 "data/maps/CinnabarIsland/scripts.pory"
	clearflag FLAG_HIDE_LOSTELLE_IN_HER_HOME
# 82 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
	end


# 86 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillExit::
# 87 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 88 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 89 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 90 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 91 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 92 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 93 "data/maps/CinnabarIsland/scripts.pory"
	step_end

CinnabarIsland_EventScript_BillScene::
# 97 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 98 "data/maps/CinnabarIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 99 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillFacePlayer1
# 100 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillFacePlayer2
# 101 "data/maps/CinnabarIsland/scripts.pory"
	playse SE_PIN
# 102 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_ExclamationMark
# 103 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 104 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_Delay48
# 105 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 106 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillApproachPlayer1
# 107 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillApproachPlayer2
# 108 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_HeyIfItIsntPlayer
# 109 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_ComeWithMeToOneIsland, MSGBOX_YESNO
# 110 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_EventScript_AgreeSailToOneIsland
# 111 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_EventScript_DeclineSailToOneIsland
	end


CinnabarIsland_EventScript_BillFacePlayer1::
# 116 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_WalkInPlaceFasterUp
# 117 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BillFacePlayer2::
# 122 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_WalkInPlaceFasterLeft
# 123 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BillApproachPlayer1::
# 128 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachPlayer1
# 129 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BillApproachPlayer2::
# 134 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachPlayer2
# 135 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 136 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 137 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_AgreeSailToOneIsland::
# 142 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_AllRightLetsGo
# 143 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 144 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 145 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
	end


CinnabarIsland_EventScript_DeclineSailToOneIsland::
# 150 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IllBeWaitingInPokeCenter
# 151 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 152 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillExitToPokeCenter
# 153 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillReturnToPokeCenter
# 154 "data/maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 155 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 156 "data/maps/CinnabarIsland/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 157 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
	end


CinnabarIsland_EventScript_BillExitToPokeCenter::
# 162 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillExitToPokeCenter
# 163 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
	return


# 167 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillExitToPokeCenter::
# 168 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 169 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 170 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 171 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 172 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 173 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 174 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 175 "data/maps/CinnabarIsland/scripts.pory"
	step_end

CinnabarIsland_EventScript_BillReturnToPokeCenter::
# 179 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerWatchBillExit
# 180 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachDoor
# 181 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 182 "data/maps/CinnabarIsland/scripts.pory"
	opendoor 14, 11
# 183 "data/maps/CinnabarIsland/scripts.pory"
	waitdooranim
# 184 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillReEnterPokeCenter
# 185 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 186 "data/maps/CinnabarIsland/scripts.pory"
	closedoor 14, 11
# 187 "data/maps/CinnabarIsland/scripts.pory"
	waitdooranim
	return


# 191 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerWatchBillExit::
# 192 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 193 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 194 "data/maps/CinnabarIsland/scripts.pory"
	step_end

# 197 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachDoor::
# 198 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 199 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 200 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_up
# 201 "data/maps/CinnabarIsland/scripts.pory"
	step_end

# 204 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillReEnterPokeCenter::
# 205 "data/maps/CinnabarIsland/scripts.pory"
	walk_up
# 206 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 207 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 208 "data/maps/CinnabarIsland/scripts.pory"
	step_end

CinnabarIsland_EventScript_SailToOneIsland::
# 213 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_ApproachShore
# 214 "data/maps/CinnabarIsland/scripts.pory"
	addobject LOCALID_CINNABAR_SEAGALLOP
# 215 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BoatArrive
# 216 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BoatArriveExitedPokeCenter
# 217 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_MyPalsBoatArrived
# 218 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 219 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BoardBoat
# 220 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BoardBoatExitedPokeCenter
# 221 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 222 "data/maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 223 "data/maps/CinnabarIsland/scripts.pory"
	delay 40
# 224 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_SEAGALLOP
# 225 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1
# 226 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_CINNABAR_ISLAND
# 227 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_ONE_ISLAND
# 228 "data/maps/CinnabarIsland/scripts.pory"
	goto EventScript_SetSail
	end


CinnabarIsland_EventScript_ApproachShore::
# 233 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_ApproachShore
# 234 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_ApproachShore
# 235 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BoatArrive::
# 240 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillFaceBoat
# 241 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 242 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BoatArriveExitedPokeCenter::
# 247 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 248 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BoardBoat::
# 253 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillBoardBoat
# 254 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoat
# 255 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BoardBoatExitedPokeCenter::
# 260 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillBoardBoatFromShore
# 261 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoatFromShore
# 262 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
	return


# 266 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BoatArrive::
# 267 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 268 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 269 "data/maps/CinnabarIsland/scripts.pory"
	walk_fast_left
# 270 "data/maps/CinnabarIsland/scripts.pory"
	walk_fast_left
# 271 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 272 "data/maps/CinnabarIsland/scripts.pory"
	walk_slower_left
# 273 "data/maps/CinnabarIsland/scripts.pory"
	walk_slower_left
# 274 "data/maps/CinnabarIsland/scripts.pory"
	step_end

# 277 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillBoardBoat::
# 278 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 279 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 280 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 281 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 282 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 283 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 284 "data/maps/CinnabarIsland/scripts.pory"
	step_end

# 287 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer1::
# 288 "data/maps/CinnabarIsland/scripts.pory"
	walk_up
# 289 "data/maps/CinnabarIsland/scripts.pory"
	step_end

# 292 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer2::
# 293 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 294 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 295 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 296 "data/maps/CinnabarIsland/scripts.pory"
	step_end

# 299 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillFaceBoat::
# 300 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 301 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 302 "data/maps/CinnabarIsland/scripts.pory"
	delay_8
# 303 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 304 "data/maps/CinnabarIsland/scripts.pory"
	step_end

# 307 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_ApproachShore::
# 308 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 309 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 310 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 311 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 312 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 313 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 314 "data/maps/CinnabarIsland/scripts.pory"
	step_end

# 317 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillBoardBoatFromShore::
# 318 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 319 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 320 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 321 "data/maps/CinnabarIsland/scripts.pory"
	step_end

# 324 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoat::
# 325 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 326 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 327 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 328 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 329 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 330 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 331 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 332 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 333 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 334 "data/maps/CinnabarIsland/scripts.pory"
	step_end

# 337 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoatFromShore::
# 338 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 339 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 340 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 341 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 342 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 343 "data/maps/CinnabarIsland/scripts.pory"
	step_end

CinnabarIsland_EventScript_GymDoorLocked::
# 348 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 349 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 350 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 351 "data/maps/CinnabarIsland/scripts.pory"
	delay 20
# 352 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_DoorIsLocked
# 353 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 354 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_ForcePlayerFromDoor
# 355 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 356 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
	end


# 360 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_ForcePlayerFromDoor::
# 361 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 362 "data/maps/CinnabarIsland/scripts.pory"
	step_end

CinnabarIsland_EventScript_Woman::
# 366 "data/maps/CinnabarIsland/scripts.pory"
	lock
# 367 "data/maps/CinnabarIsland/scripts.pory"
	faceplayer
# 368 "data/maps/CinnabarIsland/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 3
# 369 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab
# 370 "data/maps/CinnabarIsland/scripts.pory"
	release
	end


CinnabarIsland_EventScript_OldMan::
# 375 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_ScientistsExperimentInMansion, MSGBOX_NPC
	end


CinnabarIsland_EventScript_IslandSign::
# 380 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IslandSign, MSGBOX_SIGN
	end


CinnabarIsland_EventScript_PokemonLabSign::
# 385 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_PokemonLab, MSGBOX_SIGN
	end


CinnabarIsland_EventScript_GymSign::
# 390 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 391 "data/maps/CinnabarIsland/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 0
# 392 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_GymSign
# 393 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
	end

