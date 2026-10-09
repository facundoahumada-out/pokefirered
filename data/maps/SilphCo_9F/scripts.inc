SilphCo_9F_MapScripts::
# 2 "data/maps/SilphCo_9F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_9F_OnLoad
	.byte 0


SilphCo_9F_OnLoad::
# 6 "data/maps/SilphCo_9F/scripts.pory"
	call_if_unset FLAG_SILPH_9F_DOOR_1, EventScript_Close9FDoor1
# 7 "data/maps/SilphCo_9F/scripts.pory"
	call_if_unset FLAG_SILPH_9F_DOOR_2, EventScript_Close9FDoor2
# 8 "data/maps/SilphCo_9F/scripts.pory"
	call_if_unset FLAG_SILPH_9F_DOOR_3, EventScript_Close9FDoor3
# 9 "data/maps/SilphCo_9F/scripts.pory"
	call_if_unset FLAG_SILPH_9F_DOOR_4, EventScript_Close9FDoor4
	end


SilphCo_9F_EventScript_HealWoman::
# 14 "data/maps/SilphCo_9F/scripts.pory"
	lock
# 15 "data/maps/SilphCo_9F/scripts.pory"
	faceplayer
# 16 "data/maps/SilphCo_9F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_9F_EventScript_HealWomanRocketsGone
# 17 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_YouShouldTakeQuickNap
# 18 "data/maps/SilphCo_9F/scripts.pory"
	closemessage
# 19 "data/maps/SilphCo_9F/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 20 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_DontGiveUp
# 21 "data/maps/SilphCo_9F/scripts.pory"
	release
	end


SilphCo_9F_EventScript_HealWomanRocketsGone::
# 26 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_ThankYouSoMuch
# 27 "data/maps/SilphCo_9F/scripts.pory"
	release
	end


SilphCo_9F_EventScript_FloorSign::
# 32 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_9F_EventScript_Ed::
# 37 "data/maps/SilphCo_9F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_ED, SilphCo_9F_Text_EdIntro, SilphCo_9F_Text_EdDefeat
# 38 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_EdPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_9F_EventScript_Grunt1::
# 43 "data/maps/SilphCo_9F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_37, SilphCo_9F_Text_Grunt1Intro, SilphCo_9F_Text_Grunt1Defeat
# 44 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_9F_EventScript_Grunt2::
# 49 "data/maps/SilphCo_9F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_38, SilphCo_9F_Text_Grunt2Intro, SilphCo_9F_Text_Grunt2Defeat
# 50 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

