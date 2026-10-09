FiveIsland_ResortGorgeous_MapScripts::
# 2 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FiveIsland_ResortGorgeous_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 5 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_ResortGorgeous_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FiveIsland_ResortGorgeous_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth
	.2byte 0

FiveIsland_ResortGorgeous_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene
	.2byte 0


FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth::
# 11 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene::
# 16 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	lockall
# 17 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 18 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow
# 19 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	closemessage
# 20 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, Common_Movement_WalkInPlaceFasterUp
# 21 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	waitmovement 0
# 22 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	opendoor 39, 8
# 23 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	waitdooranim
# 24 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, FiveIsland_ResortGorgeous_Movement_SelphyEnterHome
# 25 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	waitmovement 0
# 26 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	closedoor 39, 8
# 27 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	waitdooranim
# 28 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	removeobject LOCALID_RESORT_GORGEOUS_SELPHY
# 29 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	clearflag FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY
# 30 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 2
# 31 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	releaseall
	end


# 35 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
FiveIsland_ResortGorgeous_Movement_SelphyEnterHome::
# 36 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	walk_up
# 37 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	set_invisible
# 38 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	step_end

FiveIsland_ResortGorgeous_EventScript_SelphysHouseSign::
# 42 "data/maps/FiveIsland_ResortGorgeous/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_Text_SelphysHouse, MSGBOX_SIGN
	end

