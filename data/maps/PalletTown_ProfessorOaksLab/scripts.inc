PalletTown_ProfessorOaksLab_MapScripts::
# 8 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 9 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 12 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene
	.2byte 0

PalletTown_ProfessorOaksLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 14 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
	.2byte 0


PalletTown_ProfessorOaksLab_OnTransition::
# 19 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 20 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene
# 21 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene
# 22 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished
# 23 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck
	end


PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck::
# 28 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
	return


PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished::
# 33 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
	return


PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 38 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 39 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene::
# 45 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 46 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
	return


PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene::
# 51 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene::
# 56 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 57 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 58 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 59 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 60 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 61 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 62 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 63 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 65 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 66 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 67 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
	end


PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 72 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 73 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 74 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth
# 75 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth
# 76 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 77 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 78 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 79 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 81 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth
# 82 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest
# 83 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 84 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 85 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 86 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 87 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth
# 88 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth
# 89 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast
# 90 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest
# 91 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_1
# 92 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_2
# 93 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 94 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 95 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 96 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 97 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 98 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 99 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special EnableNationalPokedex
# 110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_Delay48
# 125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, LOCALID_OAKS_LAB_PROF_OAK
# 127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special PlayerFaceObject
# 128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAlmostForgotOldTickets
# 129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
# 130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem ITEM_AURORA_TICKET
# 131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
# 132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
# 133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakDontTellRivalAboutTickets
# 134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk::
# 210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth::
# 219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_DUMMY
# 242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 60
# 246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


# 258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter::
# 259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter::
# 269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact::
# 281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


# 299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp::
# 300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 2
# 314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 3
# 321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 338 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft::
# 380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 385 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 386 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid::
# 390 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 391 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 392 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 393 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 394 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 395 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight::
# 399 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 400 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 401 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 402 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 403 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 407 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 408 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 409 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 414 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 415 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 416 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 422 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 423 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 428 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 430 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 436 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 440 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft::
# 441 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 442 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 443 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 444 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 445 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 446 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 447 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 448 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 451 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid::
# 452 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 453 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 454 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 455 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 456 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 457 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 458 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 461 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight::
# 462 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 463 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 464 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 465 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 466 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 467 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 471 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 472 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 473 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 478 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 479 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 480 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 485 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 486 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 487 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 492 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 493 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 494 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 499 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 500 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 504 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft::
# 505 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 506 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 507 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 508 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 509 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 510 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 513 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid::
# 514 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 515 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 516 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 517 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 518 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 521 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight::
# 522 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 523 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 524 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 525 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 529 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special HealPlayerParty
# 530 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 531 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 532 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 533 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 534 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 535 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 536 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 537 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_EXIT
# 538 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 539 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 540 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 541 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 546 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 547 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 548 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 553 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 554 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 555 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 560 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 561 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 562 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
	return


# 566 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft::
# 567 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 568 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 569 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 570 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 571 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 572 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 573 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 574 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 577 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight::
# 578 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 579 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 580 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 581 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 582 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 583 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 584 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 585 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 588 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid::
# 589 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 590 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 591 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 593 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 594 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 595 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 596 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 597 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle::
# 601 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 602 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 603 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 604 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 605 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 606 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 609 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight::
# 610 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 611 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 612 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 613 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 614 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 615 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_Rival::
# 619 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 620 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 621 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 622 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 623 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 624 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 629 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 630 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 635 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 636 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 641 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 642 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 643 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 644 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 645 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 646 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 647 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 648 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 649 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 650 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 651 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 652 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 653 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 658 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 659 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 664 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 665 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 671 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 676 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 677 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 678 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 679 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 681 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 682 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 683 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 684 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 685 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 686 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 687 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 689 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 690 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 691 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 692 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 693 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 694 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 695 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 696 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 697 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 698 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 699 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_Delay48
# 700 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 701 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 702 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 703 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 704 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 705 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 706 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 707 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 708 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 709 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 710 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 711 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 712 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 714 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 715 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 716 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 717 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 718 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 719 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 720 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 721 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 25
# 722 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 723 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 724 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 725 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 726 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 727 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 728 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 729 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 730 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 731 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 732 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 733 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 734 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 735 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 736 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 737 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 738 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MOM_SHOES, 1
# 739 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 740 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 741 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 742 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 743 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 744 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 745 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 746 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 747 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 748 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 749 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 750 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 751 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 752 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 753 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 754 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 755 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 756 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 757 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 758 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 759 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 760 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 761 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 766 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 767 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 772 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 773 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 778 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 779 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 780 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 785 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 786 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 790 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast::
# 791 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 792 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 793 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 794 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 797 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver::
# 798 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 799 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 800 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 803 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth::
# 804 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 805 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 806 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 810 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 811 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 816 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 817 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 818 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 819 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 824 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 825 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 826 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 831 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 832 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 836 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast::
# 837 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 838 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 839 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 840 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 843 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk::
# 844 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 845 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 846 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 847 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 850 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk::
# 851 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 852 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 853 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 854 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 855 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 858 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth::
# 859 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 860 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 861 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 862 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 863 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 864 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 868 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 869 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 870 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 871 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 872 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 873 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 874 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls
# 875 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
	end


PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 880 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 881 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 882 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 887 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 888 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 889 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 890 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 891 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 892 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 893 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 894 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 895 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 896 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 897 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 898 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 70
# 899 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 900 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_TEMP_2
# 901 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 906 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 907 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 912 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 913 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 918 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 919 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 924 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 925 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 929 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 930 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 931 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 932 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 933 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 934 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 935 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 936 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 939 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 940 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 941 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 942 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 943 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 944 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 945 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 946 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 949 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 950 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 951 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 952 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 953 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 954 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 955 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 956 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 959 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 960 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 961 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 962 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 963 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 964 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 965 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 966 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 970 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 971 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 972 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 973 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 974 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 975 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 976 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 977 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 978 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 979 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 980 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 981 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 982 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 983 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 984 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 985 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 986 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 987 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 988 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 989 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 990 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 991 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 992 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 993 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 994 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 995 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 999 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 1000 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1001 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1002 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1003 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 1004 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1005 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1006 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1007 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1008 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 1012 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 1013 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1014 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 1015 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 1016 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 1017 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 1018 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
	end


PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 1023 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 1028 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 1029 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special QuestLog_CutRecording
# 1030 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 1031 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 1032 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	checkitem ITEM_POKE_BALL
# 1033 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 1034 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
	end


PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 1039 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 1040 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
	end


PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 1045 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 1046 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 1047 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 1048 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 1053 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 1054 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 1059 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 1060 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 1065 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 1066 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 1067 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 1068 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1069 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 1074 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 1075 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 1076 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1077 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1078 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1079 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 1084 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 1085 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 1086 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1087 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1088 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 1093 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 1094 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1095 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1096 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1097 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 1102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 1103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 1112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 1113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 1130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 1161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest::
# 1162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 1163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth::
# 1168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 1175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 1176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter::
# 1180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit::
# 1190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
# 1204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
# 1205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, LOCALID_CHARMANDER_BALL
# 1206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceRight
# 1215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic VAR_TEMP_2, 10, 3
# 1217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	givemon VAR_TEMP_2, 5
# 1259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_TEMP_1
# 1260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_2
# 1261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 1266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
	end


EventScript_GiveNicknameToStarter::
# 1272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 1273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_ChangePokemonNickname
# 1274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_TEMP_4
# 1311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 1313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	return


# 1328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander::
# 1329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle::
# 1341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1344 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1345 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur::
# 1351 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1356 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
# 1364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
# 1365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, LOCALID_BULBASAUR_BALL
# 1366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 2
# 1377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
# 1378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
# 1379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, LOCALID_SQUIRTLE_BALL
# 1380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1388 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1394 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1395 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1397 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1403 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 1404 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1405 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1410 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1411 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1412 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1413 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1414 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1419 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 1420 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1426 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1427 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1428 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 1429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1430 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
	end


PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1440 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
	end


PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1445 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
	end


PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1450 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1451 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1452 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1453 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1458 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1459 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end

