TwoIsland_JoyfulGameCorner_MapScripts::
# 2 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_JoyfulGameCorner_OnTransition
# 12 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 3 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwoIsland_JoyfulGameCorner_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwoIsland_JoyfulGameCorner_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwoIsland_JoyfulGameCorner_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 4 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_EventScript_TurnPlayerNorth
# 5 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, EventScript_CheckTurnAttendant
	.2byte 0

TwoIsland_JoyfulGameCorner_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 0, TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene
# 9 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene
# 10 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
	.2byte 0


TwoIsland_JoyfulGameCorner_OnTransition::
# 16 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	call_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_EventScript_SetLostelleReturnedPos
	end


TwoIsland_JoyfulGameCorner_EventScript_SetLostelleReturnedPos::
# 21 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setobjectxyperm LOCALID_JOYFUL_GAME_CORNER_DADDY, 6, 2
# 22 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_DADDY, MOVEMENT_TYPE_FACE_DOWN
# 23 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, MOVEMENT_TYPE_LOOK_AROUND
# 24 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4
	return


TwoIsland_JoyfulGameCorner_EventScript_TurnPlayerNorth::
# 29 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene::
# 34 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	lockall
# 35 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 36 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_YouRescuedLostelle
# 37 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 38 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	special BufferBigGuyOrBigGirlString
# 39 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_LostelleItsOkayDaddy
# 40 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	closemessage
# 41 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, Common_Movement_WalkInPlaceFasterDown
# 42 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 43 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3
# 44 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	releaseall
	end


TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene::
# 49 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	lockall
# 50 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 51 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_Movement_DaddyPacing
# 52 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 53 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_WhereHasLostelleGottenTo
# 54 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	closemessage
# 55 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_WalkInPlaceFasterDown
# 56 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 57 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	playse SE_PIN
# 58 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_ExclamationMark
# 59 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 60 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_Delay48
# 61 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 62 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_Movement_DaddyApproachPlayer
# 63 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 64 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 65 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 66 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseHelpFindLostelle
# 67 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	closemessage
# 68 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	playse SE_RS_DOOR
# 69 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitse
# 70 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_PLAYER, TwoIsland_JoyfulGameCorner_Movement_PlayerFaceDaddy
# 71 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 72 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	playbgm MUS_ENCOUNTER_BOY, 0
# 73 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	addobject LOCALID_JOYFUL_GAME_CORNER_BIKER
# 74 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, TwoIsland_JoyfulGameCorner_Movement_BikerLookAround
# 75 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 76 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_IsThisOnlyThreeIsland
# 77 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_WalkInPlaceFasterRight
# 78 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 79 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsTwoIslandMoveIt
# 80 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_TheseIslandsAreConfusing
# 81 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	closemessage
# 82 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_WalkInPlaceFasterDown
# 83 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmovement 0
# 84 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	playse SE_EXIT
# 85 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	removeobject LOCALID_JOYFUL_GAME_CORNER_BIKER
# 86 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	fadedefaultbgm
# 87 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	delay 60
# 88 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PunkScuffedUpMyFloor
# 89 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	clearflag FLAG_HIDE_THREE_ISLAND_LONE_BIKER
# 90 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 2
# 91 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 1
# 92 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	releaseall
	end


# 96 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_DaddyPacing::
# 97 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_left
# 98 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_right
# 99 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_right
# 100 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	delay_8
# 101 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_in_place_faster_up
# 102 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	delay_16
# 103 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	step_end

# 106 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_DaddyApproachPlayer::
# 107 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_down
# 108 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_down
# 109 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_down
# 110 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_in_place_faster_left
# 111 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	step_end

# 114 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_PlayerFaceDaddy::
# 115 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_left
# 116 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_in_place_faster_right
# 117 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	step_end

# 120 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_BikerLookAround::
# 121 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_in_place_faster_left
# 122 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	delay_8
# 123 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_in_place_faster_right
# 124 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	delay_8
# 125 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	walk_in_place_faster_up
# 126 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	step_end

TwoIsland_JoyfulGameCorner_EventScript_InfoMan::
# 130 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	lock
# 131 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	faceplayer
# 132 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4, JoyfulGameCorner_EventScript_InfoMan2
# 133 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_JoyfulGameCorner_EventScript_GetGamesGoingSoon
# 134 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_NotRunningAnyGamesToday
# 135 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
	end


TwoIsland_JoyfulGameCorner_EventScript_GetGamesGoingSoon::
# 140 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_GetGamesGoingSoon
# 141 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
	end


TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy::
# 147 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	lock
# 148 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	faceplayer
# 149 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4, JoyfulGameCorner_EventScript_MinigameAttendant
# 150 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_EventScript_GetGameCornerRunning
# 151 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3, TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite
# 152 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseGoToThreeIsland
# 153 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
	end


TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite::
# 158 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE, TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone
# 159 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsForMe
# 160 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2
# 161 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 162 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 163 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	message TwoIsland_JoyfulGameCorner_Text_HandedMeteoriteToLostellesDaddy
# 164 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitmessage
# 165 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	waitfanfare
# 166 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	call EventScript_RestorePrevTextColor
# 167 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	removeitem ITEM_METEORITE
# 168 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_OhThisIsFromBill
# 169 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone
	end


TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone::
# 174 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	checkitemspace ITEM_MOON_STONE
# 175 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TwoIsland_JoyfulGameCorner_EventScript_NoRoomForMoonStone
# 176 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	additem ITEM_MOON_STONE
# 177 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setflag FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER
# 178 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgreceiveditem TwoIsland_JoyfulGameCorner_Text_ReceivedMoonStoneFromLostellesDaddy, ITEM_MOON_STONE
# 179 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
	end


TwoIsland_JoyfulGameCorner_EventScript_GetGameCornerRunning::
# 184 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_IllGetGameCornerRunning
# 185 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
	end


TwoIsland_JoyfulGameCorner_EventScript_NoRoomForMoonStone::
# 190 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE
# 191 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_NotGoingToFitInBag
# 192 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
	end


TwoIsland_JoyfulGameCorner_EventScript_Lostelle::
# 197 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	lock
# 198 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	faceplayer
# 199 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseShowMeYouBeingCool
# 200 "data/maps/TwoIsland_JoyfulGameCorner/scripts.pory"
	release
	end

