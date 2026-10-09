OneIsland_Harbor_MapScripts::
# 2 "data/maps/OneIsland_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, OneIsland_Harbor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 5 "data/maps/OneIsland_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_Harbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OneIsland_Harbor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/OneIsland_Harbor/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1, OneIsland_Harbor_EventScript_TurnPlayerNorth
	.2byte 0

OneIsland_Harbor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/OneIsland_Harbor/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1, OneIsland_Harbor_EventScript_PlayerEnterHarborFirstTime
	.2byte 0


OneIsland_Harbor_EventScript_TurnPlayerNorth::
# 11 "data/maps/OneIsland_Harbor/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


OneIsland_Harbor_EventScript_PlayerEnterHarborFirstTime::
# 16 "data/maps/OneIsland_Harbor/scripts.pory"
	lockall
# 17 "data/maps/OneIsland_Harbor/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 18 "data/maps/OneIsland_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Harbor_Movement_PlayerExitHarbor
# 19 "data/maps/OneIsland_Harbor/scripts.pory"
	waitmovement 0
# 20 "data/maps/OneIsland_Harbor/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 2
# 21 "data/maps/OneIsland_Harbor/scripts.pory"
	warp MAP_ONE_ISLAND, 12, 18
# 22 "data/maps/OneIsland_Harbor/scripts.pory"
	waitstate
# 23 "data/maps/OneIsland_Harbor/scripts.pory"
	releaseall
	end


# 27 "data/maps/OneIsland_Harbor/scripts.pory"
OneIsland_Harbor_Movement_PlayerExitHarbor::
# 28 "data/maps/OneIsland_Harbor/scripts.pory"
	walk_up
# 29 "data/maps/OneIsland_Harbor/scripts.pory"
	walk_up
# 30 "data/maps/OneIsland_Harbor/scripts.pory"
	walk_up
# 31 "data/maps/OneIsland_Harbor/scripts.pory"
	step_end

OneIsland_Harbor_EventScript_Sailor::
# 35 "data/maps/OneIsland_Harbor/scripts.pory"
	lock
# 36 "data/maps/OneIsland_Harbor/scripts.pory"
	faceplayer
# 37 "data/maps/OneIsland_Harbor/scripts.pory"
	message Text_WhereDoYouWantToSail
# 38 "data/maps/OneIsland_Harbor/scripts.pory"
	waitmessage
# 39 "data/maps/OneIsland_Harbor/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 40 "data/maps/OneIsland_Harbor/scripts.pory"
	goto EventScript_ChooseDestFromOneIsland
	end

