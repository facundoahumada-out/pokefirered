VictoryRoad_1F_MapScripts::
# 2 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_1F_OnLoad
# 3 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
	.byte 0


VictoryRoad_1F_OnLoad::
# 7 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_1F, 100, VictoryRoad_1F_EventScript_SetRockBarrier
	end


VictoryRoad_1F_EventScript_SetRockBarrier::
# 12 "data/maps/VictoryRoad_1F/scripts.pory"
	setmetatile 12, 14, METATILE_Cave_RockBarrier_Top, 1
# 13 "data/maps/VictoryRoad_1F/scripts.pory"
	setmetatile 12, 15, METATILE_Cave_RockBarrier_Bottom, 1
	return


VictoryRoad_1F_OnTransition::
# 18 "data/maps/VictoryRoad_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VICTORY_ROAD_1F
	end


VictoryRoad_1F_EventScript_FloorSwitch::
# 23 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 24 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_1F, 100, VictoryRoad_1F_EventScript_FloorSwitchAlreadyPressed
# 25 "data/maps/VictoryRoad_1F/scripts.pory"
	setmetatile 12, 14, METATILE_Cave_Floor_Ledge_Top, 0
# 26 "data/maps/VictoryRoad_1F/scripts.pory"
	setmetatile 12, 15, METATILE_Cave_Floor_Ledge_Bottom, 0
# 27 "data/maps/VictoryRoad_1F/scripts.pory"
	playse SE_ICE_BREAK
# 28 "data/maps/VictoryRoad_1F/scripts.pory"
	special DrawWholeMapView
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	waitse
# 30 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_1F_BOULDER
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_1F, 100
# 32 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
	end


VictoryRoad_1F_EventScript_FloorSwitchAlreadyPressed::
# 37 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
	end


VictoryRoad_1F_EventScript_Naomi::
# 42 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_NAOMI, VictoryRoad_1F_Text_NaomiIntro, VictoryRoad_1F_Text_NaomiDefeat
# 43 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_1F_EventScript_Rolando::
# 48 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_ROLANDO, VictoryRoad_1F_Text_RolandoIntro, VictoryRoad_1F_Text_RolandoDefeat
# 49 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_RolandoPostBattle, MSGBOX_AUTOCLOSE
	end

