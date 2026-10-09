SilphCo_5F_MapScripts::
# 2 "data/maps/SilphCo_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_5F_OnLoad
	.byte 0


SilphCo_5F_OnLoad::
# 6 "data/maps/SilphCo_5F/scripts.pory"
	call_if_unset FLAG_SILPH_5F_DOOR_1, EventScript_Close5FDoor1
# 7 "data/maps/SilphCo_5F/scripts.pory"
	call_if_unset FLAG_SILPH_5F_DOOR_2, EventScript_Close5FDoor2
# 8 "data/maps/SilphCo_5F/scripts.pory"
	call_if_unset FLAG_SILPH_5F_DOOR_3, EventScript_Close5FDoor3
	end


SilphCo_5F_EventScript_WorkerM::
# 13 "data/maps/SilphCo_5F/scripts.pory"
	lock
# 14 "data/maps/SilphCo_5F/scripts.pory"
	faceplayer
# 15 "data/maps/SilphCo_5F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_5F_EventScript_WorkerMRocketsGone
# 16 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_RocketsInUproarAboutIntruder
# 17 "data/maps/SilphCo_5F/scripts.pory"
	release
	end


SilphCo_5F_EventScript_WorkerMRocketsGone::
# 22 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_YoureOurHeroThankYou
# 23 "data/maps/SilphCo_5F/scripts.pory"
	release
	end


SilphCo_5F_EventScript_PokemonReport1::
# 28 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_PorygonFirstVRMon, MSGBOX_SIGN
	end


SilphCo_5F_EventScript_PokemonReport2::
# 33 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_Over350TechniquesConfirmed, MSGBOX_SIGN
	end


SilphCo_5F_EventScript_PokemonReport3::
# 38 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_SomeMonsEvolveWhenTraded, MSGBOX_SIGN
	end


SilphCo_5F_EventScript_FloorSign::
# 43 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_5F_EventScript_Beau::
# 48 "data/maps/SilphCo_5F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_BEAU, SilphCo_5F_Text_BeauIntro, SilphCo_5F_Text_BeauDefeat
# 49 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_5F_EventScript_Grunt1::
# 54 "data/maps/SilphCo_5F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_28, SilphCo_5F_Text_Grunt1Intro, SilphCo_5F_Text_Grunt1Defeat
# 55 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_5F_EventScript_Grunt2::
# 60 "data/maps/SilphCo_5F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_29, SilphCo_5F_Text_Grunt2Intro, SilphCo_5F_Text_Grunt2Defeat
# 61 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_5F_EventScript_Dalton::
# 66 "data/maps/SilphCo_5F/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_DALTON, SilphCo_5F_Text_DaltonIntro, SilphCo_5F_Text_DaltonDefeat
# 67 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
	end

