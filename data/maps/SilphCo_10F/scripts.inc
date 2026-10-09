SilphCo_10F_MapScripts::
# 2 "data/maps/SilphCo_10F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_10F_OnLoad
	.byte 0


SilphCo_10F_OnLoad::
# 6 "data/maps/SilphCo_10F/scripts.pory"
	call_if_unset FLAG_SILPH_10F_DOOR, EventScript_Close10FDoor
	end


SilphCo_10F_EventScript_WorkerF::
# 11 "data/maps/SilphCo_10F/scripts.pory"
	lock
# 12 "data/maps/SilphCo_10F/scripts.pory"
	faceplayer
# 13 "data/maps/SilphCo_10F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_10F_EventScript_WorkerFRocketsGone
# 14 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_WaaaImScared
# 15 "data/maps/SilphCo_10F/scripts.pory"
	release
	end


SilphCo_10F_EventScript_WorkerFRocketsGone::
# 20 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_KeepMeCryingASecret
# 21 "data/maps/SilphCo_10F/scripts.pory"
	release
	end


SilphCo_10F_EventScript_FloorSign::
# 26 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_10F_EventScript_Travis::
# 31 "data/maps/SilphCo_10F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TRAVIS, SilphCo_10F_Text_TravisIntro, SilphCo_10F_Text_TravisDefeat
# 32 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_10F_EventScript_Grunt::
# 37 "data/maps/SilphCo_10F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_39, SilphCo_10F_Text_GruntIntro, SilphCo_10F_Text_GruntDefeat
# 38 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end

