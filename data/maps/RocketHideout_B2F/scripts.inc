RocketHideout_B2F_MapScripts::
	.byte 0


RocketHideout_B2F_EventScript_Grunt::
# 4 "data/maps/RocketHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_13, RocketHideout_B2F_Text_GruntIntro, RocketHideout_B2F_Text_GruntDefeat
# 5 "data/maps/RocketHideout_B2F/scripts.pory"
	msgbox RocketHideout_B2F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end

