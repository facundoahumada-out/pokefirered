VictoryRoad_3F_MapScripts::
# 2 "data/maps/VictoryRoad_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_3F_OnLoad
	.byte 0


VictoryRoad_3F_OnLoad::
# 6 "data/maps/VictoryRoad_3F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_SetRockBarrier
	end


VictoryRoad_3F_EventScript_SetRockBarrier::
# 11 "data/maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_RockBarrier_Top, 1
# 12 "data/maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_RockBarrier_Bottom, 1
	return


VictoryRoad_3F_EventScript_FloorSwitch::
# 17 "data/maps/VictoryRoad_3F/scripts.pory"
	lockall
# 18 "data/maps/VictoryRoad_3F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed
# 19 "data/maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_Floor_Ledge_Top, 0
# 20 "data/maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_Floor_Ledge_Bottom, 0
# 21 "data/maps/VictoryRoad_3F/scripts.pory"
	playse SE_ICE_BREAK
# 22 "data/maps/VictoryRoad_3F/scripts.pory"
	special DrawWholeMapView
# 23 "data/maps/VictoryRoad_3F/scripts.pory"
	waitse
# 24 "data/maps/VictoryRoad_3F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_3F_BOULDER1
# 25 "data/maps/VictoryRoad_3F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_3F_BOULDER2
# 26 "data/maps/VictoryRoad_3F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 100
# 27 "data/maps/VictoryRoad_3F/scripts.pory"
	releaseall
	end


VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed::
# 32 "data/maps/VictoryRoad_3F/scripts.pory"
	releaseall
	end


VictoryRoad_3F_EventScript_George::
# 37 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_GEORGE, VictoryRoad_3F_Text_GeorgeIntro, VictoryRoad_3F_Text_GeorgeDefeat
# 38 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_3F_EventScript_Colby::
# 43 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_COLBY, VictoryRoad_3F_Text_ColbyIntro, VictoryRoad_3F_Text_ColbyDefeat
# 44 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_ColbyPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_3F_EventScript_Caroline::
# 49 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_CAROLINE, VictoryRoad_3F_Text_CarolineIntro, VictoryRoad_3F_Text_CarolineDefeat
# 50 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_3F_EventScript_Alexa::
# 55 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_ALEXA, VictoryRoad_3F_Text_AlexaIntro, VictoryRoad_3F_Text_AlexaDefeat
# 56 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_3F_EventScript_Ray::
# 61 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_RayIntro, VictoryRoad_3F_Text_RayDefeat, VictoryRoad_3F_Text_RayNotEnoughMons
# 62 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_RayPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_3F_EventScript_Tyra::
# 67 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_TyraIntro, VictoryRoad_3F_Text_TyraDefeat, VictoryRoad_3F_Text_TyraNotEnoughMons
# 68 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
	end

