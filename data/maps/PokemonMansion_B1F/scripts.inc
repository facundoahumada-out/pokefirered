PokemonMansion_B1F_MapScripts::
# 2 "data/maps/PokemonMansion_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_B1F_OnLoad
	.byte 0


PokemonMansion_B1F_OnLoad::
# 6 "data/maps/PokemonMansion_B1F/scripts.pory"
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_B1F
	end


PokemonMansion_B1F_EventScript_Statue::
# 11 "data/maps/PokemonMansion_B1F/scripts.pory"
	lockall
# 12 "data/maps/PokemonMansion_B1F/scripts.pory"
	setvar VAR_0x8004, 3
# 13 "data/maps/PokemonMansion_B1F/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 14 "data/maps/PokemonMansion_B1F/scripts.pory"
	playse SE_UNLOCK
# 15 "data/maps/PokemonMansion_B1F/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/PokemonMansion_B1F/scripts.pory"
	waitse
# 17 "data/maps/PokemonMansion_B1F/scripts.pory"
	releaseall
	end


PokemonMansion_B1F_EventScript_DiarySep1st::
# 22 "data/maps/PokemonMansion_B1F/scripts.pory"
	msgbox PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful, MSGBOX_SIGN
	end


PokemonMansion_B1F_EventScript_Lewis::
# 27 "data/maps/PokemonMansion_B1F/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_LEWIS, PokemonMansion_B1F_Text_LewisIntro, PokemonMansion_B1F_Text_LewisDefeat
# 28 "data/maps/PokemonMansion_B1F/scripts.pory"
	msgbox PokemonMansion_B1F_Text_LewisPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion_B1F_EventScript_Ivan::
# 33 "data/maps/PokemonMansion_B1F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_IVAN, PokemonMansion_B1F_Text_IvanIntro, PokemonMansion_B1F_Text_IvanDefeat
# 34 "data/maps/PokemonMansion_B1F/scripts.pory"
	msgbox PokemonMansion_B1F_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end

