SilphCo_4F_MapScripts::
# 2 "data/maps/SilphCo_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_4F_OnLoad
	.byte 0


SilphCo_4F_OnLoad::
# 6 "data/maps/SilphCo_4F/scripts.pory"
	call_if_unset FLAG_SILPH_4F_DOOR_1, EventScript_Close4FDoor1
# 7 "data/maps/SilphCo_4F/scripts.pory"
	call_if_unset FLAG_SILPH_4F_DOOR_2, EventScript_Close4FDoor2
	end


SilphCo_4F_EventScript_WorkerM::
# 12 "data/maps/SilphCo_4F/scripts.pory"
	lock
# 13 "data/maps/SilphCo_4F/scripts.pory"
	faceplayer
# 14 "data/maps/SilphCo_4F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_4F_EventScript_WorkerMRocketsGone
# 15 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_CantYouSeeImHiding
# 16 "data/maps/SilphCo_4F/scripts.pory"
	release
	end


SilphCo_4F_EventScript_WorkerMRocketsGone::
# 21 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_TeamRocketIsGone
# 22 "data/maps/SilphCo_4F/scripts.pory"
	release
	end


SilphCo_4F_EventScript_FloorSign::
# 27 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_4F_EventScript_Rodney::
# 32 "data/maps/SilphCo_4F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_RODNEY, SilphCo_4F_Text_RodneyIntro, SilphCo_4F_Text_RodneyDefeat
# 33 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_4F_EventScript_Grunt1::
# 38 "data/maps/SilphCo_4F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_26, SilphCo_4F_Text_Grunt1Intro, SilphCo_4F_Text_Grunt1Defeat
# 39 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_4F_EventScript_Grunt2::
# 44 "data/maps/SilphCo_4F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_27, SilphCo_4F_Text_Grunt2Intro, SilphCo_4F_Text_Grunt2Defeat
# 45 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

