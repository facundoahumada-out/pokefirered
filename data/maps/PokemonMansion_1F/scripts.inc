PokemonMansion_1F_MapScripts::
# 2 "data/maps/PokemonMansion_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_1F_OnLoad
# 3 "data/maps/PokemonMansion_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonMansion_1F_OnTransition
	.byte 0


PokemonMansion_1F_OnLoad::
# 7 "data/maps/PokemonMansion_1F/scripts.pory"
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_1F
	end


PokemonMansion_1F_OnTransition::
# 12 "data/maps/PokemonMansion_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_MANSION_1F
	end


PokemonMansion_1F_EventScript_Statue::
# 17 "data/maps/PokemonMansion_1F/scripts.pory"
	lockall
# 18 "data/maps/PokemonMansion_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 19 "data/maps/PokemonMansion_1F/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 20 "data/maps/PokemonMansion_1F/scripts.pory"
	playse SE_UNLOCK
# 21 "data/maps/PokemonMansion_1F/scripts.pory"
	special DrawWholeMapView
# 22 "data/maps/PokemonMansion_1F/scripts.pory"
	waitse
# 23 "data/maps/PokemonMansion_1F/scripts.pory"
	releaseall
	end


PokemonMansion_1F_EventScript_Ted::
# 28 "data/maps/PokemonMansion_1F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TED, PokemonMansion_1F_Text_TedIntro, PokemonMansion_1F_Text_TedDefeat
# 29 "data/maps/PokemonMansion_1F/scripts.pory"
	msgbox PokemonMansion_1F_Text_TedPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion_1F_EventScript_Johnson::
# 34 "data/maps/PokemonMansion_1F/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOHNSON, PokemonMansion_1F_Text_JohnsonIntro, PokemonMansion_1F_Text_JohnsonDefeat
# 35 "data/maps/PokemonMansion_1F/scripts.pory"
	msgbox PokemonMansion_1F_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
	end

