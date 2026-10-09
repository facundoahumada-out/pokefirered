SSAnne_Exterior_MapScripts::
# 2 "data/maps/SSAnne_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SSAnne_Exterior_OnTransition
# 3 "data/maps/SSAnne_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SSAnne_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SSAnne_Exterior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SSAnne_Exterior/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 1, SSAnne_Exterior_ExitSSAnne
	.2byte 0


SSAnne_Exterior_OnTransition::
# 9 "data/maps/SSAnne_Exterior/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SSANNE_EXTERIOR
	end


SSAnne_Exterior_ExitSSAnne::
# 14 "data/maps/SSAnne_Exterior/scripts.pory"
	lockall
# 15 "data/maps/SSAnne_Exterior/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 16 "data/maps/SSAnne_Exterior/scripts.pory"
	call_if_le VAR_0x8005, 6, SSAnne_Exterior_WalkDown
# 17 "data/maps/SSAnne_Exterior/scripts.pory"
	call_if_ge VAR_0x8005, 7, SSAnne_Exterior_WalkInPlaceDown
# 18 "data/maps/SSAnne_Exterior/scripts.pory"
	fadenewbgm MUS_SURF
# 19 "data/maps/SSAnne_Exterior/scripts.pory"
	delay 50
# 20 "data/maps/SSAnne_Exterior/scripts.pory"
	special DoSSAnneDepartureCutscene
# 21 "data/maps/SSAnne_Exterior/scripts.pory"
	waitstate
# 22 "data/maps/SSAnne_Exterior/scripts.pory"
	removeobject LOCALID_SS_ANNE
# 23 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_Exterior_Movement_Exit
# 24 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement 0
# 25 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 2
# 26 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
# 27 "data/maps/SSAnne_Exterior/scripts.pory"
	warp MAP_VERMILION_CITY, 23, 34
# 28 "data/maps/SSAnne_Exterior/scripts.pory"
	waitstate
# 29 "data/maps/SSAnne_Exterior/scripts.pory"
	releaseall
	end


SSAnne_Exterior_WalkDown::
# 34 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_Exterior_Movement_WalkDown
# 35 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement 0
	return


SSAnne_Exterior_WalkInPlaceDown::
# 40 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 41 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement 0
	return


# 45 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_Movement_Exit::
# 46 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 47 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 48 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 49 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 50 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 51 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 52 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 53 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 54 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 55 "data/maps/SSAnne_Exterior/scripts.pory"
	step_end

# 58 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_Movement_WalkDown::
# 59 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 60 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 61 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 62 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 63 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 64 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 65 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 66 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 67 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 68 "data/maps/SSAnne_Exterior/scripts.pory"
	step_end
