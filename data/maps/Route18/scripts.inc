Route18_MapScripts::
# 2 "data/maps/Route18/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_OnTransition
# 3 "data/maps/Route18/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route18_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Route18_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 4 "data/maps/Route18/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ROUTE16, 1, Route18_OnWarpCyclingRoad
	.2byte 0


Route18_OnTransition::
# 9 "data/maps/Route18/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ROUTE16, 1, Route18_OnTransitionCyclingRoad
	end


Route18_OnTransitionCyclingRoad::
# 14 "data/maps/Route18/scripts.pory"
	setflag FLAG_SYS_ON_CYCLING_ROAD
	return


Route18_OnWarpCyclingRoad::
# 19 "data/maps/Route18/scripts.pory"
	special ForcePlayerOntoBike
	end


Route18_EventScript_RouteSign::
# 24 "data/maps/Route18/scripts.pory"
	msgbox Route18_Text_RouteSign, MSGBOX_SIGN
	end


Route18_EventScript_CyclingRoadSign::
# 29 "data/maps/Route18/scripts.pory"
	msgbox Route18_Text_CyclingRoadSign, MSGBOX_SIGN
	end

