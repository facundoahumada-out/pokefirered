VictoryRoad_2F_MapScripts::
# 2 "data/maps/VictoryRoad_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_2F_OnLoad
	.byte 0


VictoryRoad_2F_OnLoad::
# 6 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_SetRockBarrier1
# 7 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_SetRockBarrier2
	end


VictoryRoad_2F_EventScript_SetRockBarrier1::
# 12 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_RockBarrier_Top, 1
# 13 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_RockBarrier_Bottom, 1
	return


VictoryRoad_2F_EventScript_SetRockBarrier2::
# 18 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_RockBarrier_Top, 1
# 19 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_RockBarrier_Bottom, 1
	return


VictoryRoad_2F_EventScript_FloorSwitch1::
# 24 "data/maps/VictoryRoad_2F/scripts.pory"
	lockall
# 25 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed
# 26 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_Floor_Ledge_Top, 0
# 27 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_Floor_Ledge_Bottom, 0
# 28 "data/maps/VictoryRoad_2F/scripts.pory"
	playse SE_ICE_BREAK
# 29 "data/maps/VictoryRoad_2F/scripts.pory"
	special DrawWholeMapView
# 30 "data/maps/VictoryRoad_2F/scripts.pory"
	waitse
# 31 "data/maps/VictoryRoad_2F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER1
# 32 "data/maps/VictoryRoad_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
# 33 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
	end


VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed::
# 38 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
	end


VictoryRoad_2F_EventScript_FloorSwitch2::
# 43 "data/maps/VictoryRoad_2F/scripts.pory"
	lockall
# 44 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed
# 45 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_Floor_Ledge_Top, 0
# 46 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_Floor_Ledge_Bottom, 0
# 47 "data/maps/VictoryRoad_2F/scripts.pory"
	playse SE_ICE_BREAK
# 48 "data/maps/VictoryRoad_2F/scripts.pory"
	special DrawWholeMapView
# 49 "data/maps/VictoryRoad_2F/scripts.pory"
	waitse
# 50 "data/maps/VictoryRoad_2F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER2
# 51 "data/maps/VictoryRoad_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
# 52 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
	end


VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed::
# 57 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
	end


VictoryRoad_2F_EventScript_Dawson::
# 62 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_DAWSON, VictoryRoad_2F_Text_DawsonIntro, VictoryRoad_2F_Text_DawsonDefeat
# 63 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_EventScript_Daisuke::
# 68 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_DAISUKE, VictoryRoad_2F_Text_DaisukeIntro, VictoryRoad_2F_Text_DaisukeDefeat
# 69 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_EventScript_Nelson::
# 74 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NELSON, VictoryRoad_2F_Text_NelsonIntro, VictoryRoad_2F_Text_NelsonDefeat
# 75 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_NelsonPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_EventScript_Gregory::
# 80 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_GREGORY, VictoryRoad_2F_Text_GregoryIntro, VictoryRoad_2F_Text_GregoryDefeat
# 81 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_EventScript_Vincent::
# 86 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_TAMER_VINCENT, VictoryRoad_2F_Text_VincentIntro, VictoryRoad_2F_Text_VincentDefeat
# 87 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
	end

