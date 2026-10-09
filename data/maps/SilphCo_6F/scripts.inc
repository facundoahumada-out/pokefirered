SilphCo_6F_MapScripts::
# 2 "data/maps/SilphCo_6F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_6F_OnLoad
	.byte 0


SilphCo_6F_OnLoad::
# 6 "data/maps/SilphCo_6F/scripts.pory"
	call_if_unset FLAG_SILPH_6F_DOOR, EventScript_Close6FDoor
	end


SilphCo_6F_EventScript_WorkerM2::
# 11 "data/maps/SilphCo_6F/scripts.pory"
	lock
# 12 "data/maps/SilphCo_6F/scripts.pory"
	faceplayer
# 13 "data/maps/SilphCo_6F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM2RocketsGone
# 14 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_TargetedSilphForOurMonProducts
# 15 "data/maps/SilphCo_6F/scripts.pory"
	release
	end


SilphCo_6F_EventScript_WorkerM2RocketsGone::
# 20 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder
# 21 "data/maps/SilphCo_6F/scripts.pory"
	release
	end


SilphCo_6F_EventScript_WorkerM3::
# 26 "data/maps/SilphCo_6F/scripts.pory"
	lock
# 27 "data/maps/SilphCo_6F/scripts.pory"
	faceplayer
# 28 "data/maps/SilphCo_6F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM3RocketsGone
# 29 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsTookOverBuilding
# 30 "data/maps/SilphCo_6F/scripts.pory"
	release
	end


SilphCo_6F_EventScript_WorkerM3RocketsGone::
# 35 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_BetterGetBackToWork
# 36 "data/maps/SilphCo_6F/scripts.pory"
	release
	end


SilphCo_6F_EventScript_WorkerM1::
# 41 "data/maps/SilphCo_6F/scripts.pory"
	lock
# 42 "data/maps/SilphCo_6F/scripts.pory"
	faceplayer
# 43 "data/maps/SilphCo_6F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM1RocketsGone
# 44 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_HelpMePlease
# 45 "data/maps/SilphCo_6F/scripts.pory"
	release
	end


SilphCo_6F_EventScript_WorkerM1RocketsGone::
# 50 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_WeGotEngaged
# 51 "data/maps/SilphCo_6F/scripts.pory"
	release
	end


SilphCo_6F_EventScript_WorkerF1::
# 56 "data/maps/SilphCo_6F/scripts.pory"
	lock
# 57 "data/maps/SilphCo_6F/scripts.pory"
	faceplayer
# 58 "data/maps/SilphCo_6F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerF1RocketsGone
# 59 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_ThatManIsSuchACoward
# 60 "data/maps/SilphCo_6F/scripts.pory"
	release
	end


SilphCo_6F_EventScript_WorkerF1RocketsGone::
# 65 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_NeedsMeToLookAfterHim
# 66 "data/maps/SilphCo_6F/scripts.pory"
	release
	end


SilphCo_6F_EventScript_WorkerF2::
# 71 "data/maps/SilphCo_6F/scripts.pory"
	lock
# 72 "data/maps/SilphCo_6F/scripts.pory"
	faceplayer
# 73 "data/maps/SilphCo_6F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerF2RocketsGone
# 74 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsTryingToConquerWorld
# 75 "data/maps/SilphCo_6F/scripts.pory"
	release
	end


SilphCo_6F_EventScript_WorkerF2RocketsGone::
# 80 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsRanAwayBecauseOfYou
# 81 "data/maps/SilphCo_6F/scripts.pory"
	release
	end


SilphCo_6F_EventScript_FloorSign::
# 86 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_6F_EventScript_Taylor::
# 91 "data/maps/SilphCo_6F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TAYLOR, SilphCo_6F_Text_TaylorIntro, SilphCo_6F_Text_TaylorDefeat
# 92 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_6F_EventScript_Grunt1::
# 97 "data/maps/SilphCo_6F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_30, SilphCo_6F_Text_Grunt1Intro, SilphCo_6F_Text_Grunt1Defeat
# 98 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_6F_EventScript_Grunt2::
# 103 "data/maps/SilphCo_6F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_31, SilphCo_6F_Text_Grunt2Intro, SilphCo_6F_Text_Grunt2Defeat
# 104 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

