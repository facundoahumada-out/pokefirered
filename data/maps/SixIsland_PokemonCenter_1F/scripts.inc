SixIsland_PokemonCenter_1F_MapScripts::
# 2 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PokemonCenter_1F_OnTransition
# 3 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SixIsland_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SixIsland_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0, SixIsland_PokemonCenter_1F_EventScript_RivalScene
	.2byte 0


SixIsland_PokemonCenter_1F_OnTransition::
# 10 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SIX_ISLAND
# 11 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0, SixIsland_PokemonCenter_1F_EventScript_ShowRival
	end


SixIsland_PokemonCenter_1F_EventScript_ShowRival::
# 16 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_SIX_ISLAND_POKECENTER_RIVAL
	return


SixIsland_PokemonCenter_1F_EventScript_RivalScene::
# 21 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 22 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 23 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 24 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 26 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_ExclamationMark
# 27 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 28 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_Delay48
# 29 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 30 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	delay 25
# 31 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, SixIsland_PokemonCenter_1F_Movement_RivalApproach
# 32 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_RivalImpossibleToGetAllMonsAroundHere
# 34 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 35 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_PokemonCenter_1F_Movement_PlayerWatchRivalExit
# 36 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, SixIsland_PokemonCenter_1F_Movement_RivalExit
# 37 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	fadedefaultbgm
# 39 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 40 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	delay 35
# 41 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_SIX_ISLAND_RIVAL
# 42 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 1
# 43 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
# 44 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	releaseall
	end


# 48 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_Movement_RivalApproach::
# 49 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 50 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 51 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 52 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 53 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 56 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_Movement_RivalExit::
# 57 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 58 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	delay_4
# 59 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 60 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 63 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_Movement_PlayerWatchRivalExit::
# 64 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 65 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 66 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	step_end

SixIsland_PokemonCenter_1F_EventScript_Nurse::
# 70 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	lock
# 71 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 72 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 73 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	release
	end


SixIsland_PokemonCenter_1F_EventScript_Hiker::
# 78 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland, MSGBOX_NPC
	end


SixIsland_PokemonCenter_1F_EventScript_OldMan::
# 83 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem, MSGBOX_NPC
	end

