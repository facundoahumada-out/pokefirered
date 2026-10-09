OneIsland_MapScripts::
# 2 "data/maps/OneIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_OnTransition
# 3 "data/maps/OneIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OneIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/OneIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 2, OneIsland_EventScript_EnterOneIslandFirstTime
	.2byte 0


OneIsland_OnTransition::
# 9 "data/maps/OneIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ONE_ISLAND
	end


OneIsland_EventScript_EnterOneIslandFirstTime::
# 14 "data/maps/OneIsland/scripts.pory"
	lockall
# 15 "data/maps/OneIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 16 "data/maps/OneIsland/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerExitHarbor
# 17 "data/maps/OneIsland/scripts.pory"
	waitmovement 0
# 18 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_BillLetsGoSeeCelio
# 19 "data/maps/OneIsland/scripts.pory"
	closemessage
# 20 "data/maps/OneIsland/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_BILL, OneIsland_Movement_BillWalkToPokeCenter
# 21 "data/maps/OneIsland/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerWalkToPokeCenter
# 22 "data/maps/OneIsland/scripts.pory"
	waitmovement 0
# 23 "data/maps/OneIsland/scripts.pory"
	opendoor 14, 5
# 24 "data/maps/OneIsland/scripts.pory"
	waitdooranim
# 25 "data/maps/OneIsland/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_BILL, OneIsland_Movement_BillEnterPokeCenter
# 26 "data/maps/OneIsland/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerEnterPokeCenter
# 27 "data/maps/OneIsland/scripts.pory"
	waitmovement 0
# 28 "data/maps/OneIsland/scripts.pory"
	closedoor 14, 5
# 29 "data/maps/OneIsland/scripts.pory"
	waitdooranim
# 30 "data/maps/OneIsland/scripts.pory"
	removeobject LOCALID_ONE_ISLAND_BILL
# 31 "data/maps/OneIsland/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 3
# 32 "data/maps/OneIsland/scripts.pory"
	warp MAP_ONE_ISLAND_POKEMON_CENTER_1F, 9, 9
# 33 "data/maps/OneIsland/scripts.pory"
	waitstate
# 34 "data/maps/OneIsland/scripts.pory"
	releaseall
	end


# 38 "data/maps/OneIsland/scripts.pory"
OneIsland_Movement_PlayerWalkToPokeCenter::
# 39 "data/maps/OneIsland/scripts.pory"
	walk_up
# 40 "data/maps/OneIsland/scripts.pory"
	walk_up
# 41 "data/maps/OneIsland/scripts.pory"
	walk_up
# 42 "data/maps/OneIsland/scripts.pory"
	walk_up
# 43 "data/maps/OneIsland/scripts.pory"
	walk_up
# 44 "data/maps/OneIsland/scripts.pory"
	walk_right
# 45 "data/maps/OneIsland/scripts.pory"
	walk_right
# 46 "data/maps/OneIsland/scripts.pory"
	walk_up
# 47 "data/maps/OneIsland/scripts.pory"
	walk_up
# 48 "data/maps/OneIsland/scripts.pory"
	walk_up
# 49 "data/maps/OneIsland/scripts.pory"
	walk_up
# 50 "data/maps/OneIsland/scripts.pory"
	walk_up
# 51 "data/maps/OneIsland/scripts.pory"
	step_end

# 54 "data/maps/OneIsland/scripts.pory"
OneIsland_Movement_PlayerEnterPokeCenter::
# 55 "data/maps/OneIsland/scripts.pory"
	walk_up
# 56 "data/maps/OneIsland/scripts.pory"
	walk_up
# 57 "data/maps/OneIsland/scripts.pory"
	set_invisible
# 58 "data/maps/OneIsland/scripts.pory"
	step_end

# 61 "data/maps/OneIsland/scripts.pory"
OneIsland_Movement_PlayerExitHarbor::
# 62 "data/maps/OneIsland/scripts.pory"
	walk_up
# 63 "data/maps/OneIsland/scripts.pory"
	step_end

# 66 "data/maps/OneIsland/scripts.pory"
OneIsland_Movement_BillWalkToPokeCenter::
# 67 "data/maps/OneIsland/scripts.pory"
	walk_up
# 68 "data/maps/OneIsland/scripts.pory"
	walk_up
# 69 "data/maps/OneIsland/scripts.pory"
	walk_up
# 70 "data/maps/OneIsland/scripts.pory"
	walk_up
# 71 "data/maps/OneIsland/scripts.pory"
	walk_right
# 72 "data/maps/OneIsland/scripts.pory"
	walk_right
# 73 "data/maps/OneIsland/scripts.pory"
	walk_up
# 74 "data/maps/OneIsland/scripts.pory"
	walk_up
# 75 "data/maps/OneIsland/scripts.pory"
	walk_up
# 76 "data/maps/OneIsland/scripts.pory"
	walk_up
# 77 "data/maps/OneIsland/scripts.pory"
	walk_up
# 78 "data/maps/OneIsland/scripts.pory"
	walk_up
# 79 "data/maps/OneIsland/scripts.pory"
	step_end

# 82 "data/maps/OneIsland/scripts.pory"
OneIsland_Movement_BillEnterPokeCenter::
# 83 "data/maps/OneIsland/scripts.pory"
	walk_up
# 84 "data/maps/OneIsland/scripts.pory"
	set_invisible
# 85 "data/maps/OneIsland/scripts.pory"
	step_end

OneIsland_EventScript_OldMan::
# 89 "data/maps/OneIsland/scripts.pory"
	lock
# 90 "data/maps/OneIsland/scripts.pory"
	faceplayer
# 91 "data/maps/OneIsland/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_EventScript_OldManLinkHoenn
# 92 "data/maps/OneIsland/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_EventScript_OldManLinkKanto
# 93 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_LuckyToHaveCelioHere
# 94 "data/maps/OneIsland/scripts.pory"
	release
	end


OneIsland_EventScript_OldManLinkKanto::
# 99 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_HavePCLinkageWithKanto
# 100 "data/maps/OneIsland/scripts.pory"
	release
	end


OneIsland_EventScript_OldManLinkHoenn::
# 105 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_HavePCLinkageWithHoenn
# 106 "data/maps/OneIsland/scripts.pory"
	release
	end


OneIsland_EventScript_BaldingMan::
# 111 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_IsntWarmClimateHereGreat, MSGBOX_NPC
	end


OneIsland_EventScript_IslandSign::
# 116 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_IslandSign, MSGBOX_SIGN
	end


OneIsland_EventScript_PokemonNetCenterSign::
# 121 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_PokemonNetCenterSign, MSGBOX_SIGN
	end

