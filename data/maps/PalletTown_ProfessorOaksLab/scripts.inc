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
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk::
# 196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth::
# 205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_DUMMY
# 228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 60
# 232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


# 244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter::
# 245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter::
# 255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact::
# 267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


# 285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp::
# 286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 2
# 300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 3
# 307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft::
# 366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 371 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid::
# 376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight::
# 385 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 386 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 387 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 388 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 393 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 394 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 395 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 400 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 401 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 402 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 407 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 408 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 409 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 414 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 415 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 416 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 422 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 426 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft::
# 427 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 428 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 430 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 431 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 432 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 433 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 434 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 437 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid::
# 438 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 439 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 440 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 441 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 442 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 443 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 444 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 447 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight::
# 448 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 449 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 450 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 451 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 452 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 453 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 457 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 458 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 459 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 464 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 465 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 466 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 471 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 472 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 473 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 478 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 479 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 480 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 485 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 486 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end


# 490 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft::
# 491 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 492 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 493 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 494 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 495 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 496 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 499 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid::
# 500 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 501 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 502 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 503 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 504 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 507 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight::
# 508 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 509 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 510 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 511 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 515 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special HealPlayerParty
# 516 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 517 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 518 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 519 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 520 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 521 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 522 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 523 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_EXIT
# 524 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 525 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 526 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 527 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 532 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 533 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 534 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 539 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 540 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 541 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 546 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 547 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 548 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
	return


# 552 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft::
# 553 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 554 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 555 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 556 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 557 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 558 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 559 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 560 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 563 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight::
# 564 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 565 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 566 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 567 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 568 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 569 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 570 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 571 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 574 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid::
# 575 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 576 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 577 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 578 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 579 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 580 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 581 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 582 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 583 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 586 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle::
# 587 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 588 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 589 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 590 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 591 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 595 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight::
# 596 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 597 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 598 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 599 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 601 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_Rival::
# 605 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 606 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 607 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 608 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 609 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 610 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 615 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 616 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 621 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 622 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 627 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 628 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 629 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 630 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 631 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 632 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 633 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 634 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 635 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 636 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 637 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 638 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 639 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 644 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 645 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 650 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 651 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 656 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 657 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 662 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 663 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 664 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 665 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 666 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 667 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 668 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 669 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 671 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 672 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 673 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 674 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 675 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 676 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 677 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 678 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 679 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 681 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 682 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 683 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 684 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 685 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_Delay48
# 686 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 687 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 689 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 690 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 691 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 692 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 693 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 694 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 695 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 696 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 697 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 698 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 699 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 700 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 701 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 702 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 703 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 704 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 705 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 706 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 707 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 25
# 708 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 709 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 710 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 711 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 712 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 714 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 715 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 716 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 717 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 718 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 719 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 720 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 721 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 722 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 723 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 724 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MOM_SHOES, 1
# 725 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 726 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 727 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 728 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 729 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 730 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 731 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 732 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 733 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 734 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 735 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 736 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 737 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 738 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 739 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 740 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 741 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 742 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 743 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 744 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 745 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 746 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 747 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 752 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 753 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 758 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 759 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 764 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 765 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 766 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 771 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 772 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 776 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast::
# 777 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 778 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 779 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 780 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 783 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver::
# 784 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 785 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 786 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 789 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth::
# 790 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 791 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 792 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 796 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 797 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 802 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 803 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 804 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 805 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 810 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 811 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 812 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 817 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 818 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 822 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast::
# 823 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 824 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 825 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 826 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 829 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk::
# 830 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 831 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 832 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 833 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 836 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk::
# 837 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 838 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 839 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 840 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 841 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 844 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth::
# 845 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 846 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 847 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 848 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 849 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 850 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 854 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 855 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 856 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 857 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 858 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 859 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 860 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls
# 861 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
	end


PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 866 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 867 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 868 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 873 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 874 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 875 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 876 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 877 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 878 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 879 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 880 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 881 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 882 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 883 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 884 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 70
# 885 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 886 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_TEMP_2
# 887 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 892 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 893 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 898 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 899 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 904 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 905 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 910 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 911 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 915 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 916 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 917 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 918 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 919 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 920 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 921 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 922 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 925 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 926 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 927 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 928 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 929 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 930 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 931 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 932 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 935 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 936 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 937 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 938 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 939 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 940 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 941 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 942 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 945 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 946 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 947 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 948 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 949 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 950 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 951 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 952 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 956 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 957 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 958 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 959 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 960 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 961 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 962 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 963 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 964 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 965 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 966 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 967 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 968 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 969 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 970 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 971 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 972 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 973 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 974 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 975 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 976 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 977 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 978 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 979 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 980 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 981 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 985 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 986 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 987 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 988 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 989 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 990 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 991 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 992 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 993 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 994 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 998 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 999 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1000 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 1001 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 1002 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 1003 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 1004 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
	end


PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 1009 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 1014 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 1015 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special QuestLog_CutRecording
# 1016 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 1017 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 1018 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	checkitem ITEM_POKE_BALL
# 1019 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 1020 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
	end


PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 1025 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 1026 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
	end


PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 1031 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 1032 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 1033 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 1034 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 1039 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 1040 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 1045 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 1046 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 1051 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 1052 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 1053 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 1054 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1055 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 1060 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 1061 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 1062 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1063 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1064 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1065 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 1070 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 1071 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 1072 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1073 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1074 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 1079 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 1080 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1081 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1082 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1083 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 1088 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 1089 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1090 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1091 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1092 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1093 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 1098 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 1099 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 1116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
	return


# 1147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest::
# 1148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 1149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth::
# 1154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 1161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 1162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter::
# 1166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit::
# 1176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
# 1190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
# 1191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, LOCALID_CHARMANDER_BALL
# 1192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceRight
# 1201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic VAR_TEMP_2, 10, 3
# 1203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
	end


PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	givemon VAR_TEMP_2, 5
# 1245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_TEMP_1
# 1246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_2
# 1247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 1252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
	end


EventScript_GiveNicknameToStarter::
# 1258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 1259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_ChangePokemonNickname
# 1260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_1, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
	end


PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_TEMP_4
# 1297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 1299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	return


# 1314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander::
# 1315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle::
# 1327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

# 1336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur::
# 1337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1338 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
# 1350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
# 1351 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, LOCALID_BULBASAUR_BALL
# 1352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 2
# 1363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
# 1364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
# 1365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_4, LOCALID_SQUIRTLE_BALL
# 1366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 1390 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1391 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1397 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1399 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1400 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1405 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 1406 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1407 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1412 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1413 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1414 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 1415 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1416 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
	end


PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1426 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
	end


PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1431 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
	end


PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1436 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1437 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1438 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1439 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1444 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1445 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
	end

