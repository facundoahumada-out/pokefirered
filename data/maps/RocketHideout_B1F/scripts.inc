RocketHideout_B1F_MapScripts::
# 2 "data/maps/RocketHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RocketHideout_B1F_OnLoad
# 3 "data/maps/RocketHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RocketHideout_B1F_OnTransition
	.byte 0


RocketHideout_B1F_OnLoad::
# 7 "data/maps/RocketHideout_B1F/scripts.pory"
	call_if_not_defeated TRAINER_TEAM_ROCKET_GRUNT_12 RocketHideout_B1F_EventScript_SetBarrier
	end


RocketHideout_B1F_OnTransition::
# 12 "data/maps/RocketHideout_B1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROCKET_HIDEOUT_B1F
	end


RocketHideout_B1F_EventScript_Grunt1::
# 17 "data/maps/RocketHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_8, RocketHideout_B1F_Text_Grunt1Intro, RocketHideout_B1F_Text_Grunt1Defeat
# 18 "data/maps/RocketHideout_B1F/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B1F_EventScript_Grunt2::
# 23 "data/maps/RocketHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_9, RocketHideout_B1F_Text_Grunt2Intro, RocketHideout_B1F_Text_Grunt2Defeat
# 24 "data/maps/RocketHideout_B1F/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B1F_EventScript_Grunt3::
# 29 "data/maps/RocketHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_10, RocketHideout_B1F_Text_Grunt3Intro, RocketHideout_B1F_Text_Grunt3Defeat
# 30 "data/maps/RocketHideout_B1F/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B1F_EventScript_Grunt4::
# 35 "data/maps/RocketHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_11, RocketHideout_B1F_Text_Grunt4Intro, RocketHideout_B1F_Text_Grunt4Defeat
# 36 "data/maps/RocketHideout_B1F/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B1F_EventScript_Grunt5::
# 41 "data/maps/RocketHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_12, RocketHideout_B1F_Text_Grunt5Intro, RocketHideout_B1F_Text_Grunt5Defeat, RocketHideout_B1F_EventScript_DefeatedGrunt5
# 42 "data/maps/RocketHideout_B1F/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B1F_EventScript_DefeatedGrunt5::
# 47 "data/maps/RocketHideout_B1F/scripts.pory"
	call RocketHideout_B1F_EventScript_RemoveBarrier
# 48 "data/maps/RocketHideout_B1F/scripts.pory"
	playse SE_UNLOCK
# 49 "data/maps/RocketHideout_B1F/scripts.pory"
	special DrawWholeMapView
# 50 "data/maps/RocketHideout_B1F/scripts.pory"
	waitse
# 51 "data/maps/RocketHideout_B1F/scripts.pory"
	release
	end


RocketHideout_B1F_EventScript_SetBarrier::
# 56 "data/maps/RocketHideout_B1F/scripts.pory"
	setmetatile 20, 19, METATILE_SilphCo_HideoutBarrier_TopLeft_Floor, 1
# 57 "data/maps/RocketHideout_B1F/scripts.pory"
	setmetatile 21, 19, METATILE_SilphCo_HideoutBarrier_TopRight_Floor, 1
# 58 "data/maps/RocketHideout_B1F/scripts.pory"
	setmetatile 20, 20, METATILE_SilphCo_HideoutBarrier_BottomLeft, 1
# 59 "data/maps/RocketHideout_B1F/scripts.pory"
	setmetatile 21, 20, METATILE_SilphCo_HideoutBarrier_BottomRight, 1
# 60 "data/maps/RocketHideout_B1F/scripts.pory"
	setmetatile 20, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 61 "data/maps/RocketHideout_B1F/scripts.pory"
	setmetatile 21, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	return


RocketHideout_B1F_EventScript_RemoveBarrier::
# 66 "data/maps/RocketHideout_B1F/scripts.pory"
	setmetatile 20, 19, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 67 "data/maps/RocketHideout_B1F/scripts.pory"
	setmetatile 21, 19, METATILE_SilphCo_HideoutFloor, 0
# 68 "data/maps/RocketHideout_B1F/scripts.pory"
	setmetatile 20, 20, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 69 "data/maps/RocketHideout_B1F/scripts.pory"
	setmetatile 21, 20, METATILE_SilphCo_HideoutFloor, 0
# 70 "data/maps/RocketHideout_B1F/scripts.pory"
	setmetatile 20, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 71 "data/maps/RocketHideout_B1F/scripts.pory"
	setmetatile 21, 21, METATILE_SilphCo_HideoutFloor, 0
	return

