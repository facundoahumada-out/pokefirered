SilphCo_2F_MapScripts::
# 2 "data/maps/SilphCo_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_2F_OnLoad
	.byte 0


SilphCo_2F_OnLoad::
# 6 "data/maps/SilphCo_2F/scripts.pory"
	call_if_unset FLAG_SILPH_2F_DOOR_1, EventScript_Close2FDoor1
# 7 "data/maps/SilphCo_2F/scripts.pory"
	call_if_unset FLAG_SILPH_2F_DOOR_2, EventScript_Close2FDoor2
	end


SilphCo_2F_EventScript_ThunderWaveTutor::
# 12 "data/maps/SilphCo_2F/scripts.pory"
	goto EventScript_ThunderWaveTutor
	end


SilphCo_2F_EventScript_FloorSign::
# 17 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_2F_EventScript_Connor::
# 22 "data/maps/SilphCo_2F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_CONNOR, SilphCo_2F_Text_ConnorIntro, SilphCo_2F_Text_ConnorDefeat
# 23 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_ConnorPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_2F_EventScript_Jerry::
# 28 "data/maps/SilphCo_2F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JERRY, SilphCo_2F_Text_JerryIntro, SilphCo_2F_Text_JerryDefeat
# 29 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_2F_EventScript_Grunt1::
# 34 "data/maps/SilphCo_2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_23, SilphCo_2F_Text_Grunt1Intro, SilphCo_2F_Text_Grunt1Defeat
# 35 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_2F_EventScript_Grunt2::
# 40 "data/maps/SilphCo_2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_24, SilphCo_2F_Text_Grunt2Intro, SilphCo_2F_Text_Grunt2Defeat
# 41 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

