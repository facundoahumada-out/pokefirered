SilphCo_8F_MapScripts::
# 2 "data/maps/SilphCo_8F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_8F_OnLoad
	.byte 0


SilphCo_8F_OnLoad::
# 6 "data/maps/SilphCo_8F/scripts.pory"
	call_if_unset FLAG_SILPH_8F_DOOR, EventScript_Close8FDoor
	end


SilphCo_8F_EventScript_WorkerM::
# 11 "data/maps/SilphCo_8F/scripts.pory"
	lock
# 12 "data/maps/SilphCo_8F/scripts.pory"
	faceplayer
# 13 "data/maps/SilphCo_8F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_8F_EventScript_WorkerMRocketsGone
# 14 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_WonderIfSilphIsFinished
# 15 "data/maps/SilphCo_8F/scripts.pory"
	release
	end


SilphCo_8F_EventScript_WorkerMRocketsGone::
# 20 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_ThanksForSavingUs
# 21 "data/maps/SilphCo_8F/scripts.pory"
	release
	end


SilphCo_8F_EventScript_FloorSign::
# 26 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_8F_EventScript_Parker::
# 31 "data/maps/SilphCo_8F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_PARKER, SilphCo_8F_Text_ParkerIntro, SilphCo_8F_Text_ParkerDefeat
# 32 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_8F_EventScript_Grunt1::
# 37 "data/maps/SilphCo_8F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_32, SilphCo_8F_Text_Grunt1Intro, SilphCo_8F_Text_Grunt1Defeat
# 38 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_8F_EventScript_Grunt2::
# 43 "data/maps/SilphCo_8F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_36, SilphCo_8F_Text_Grunt2Intro, SilphCo_8F_Text_Grunt2Defeat
# 44 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

