PokemonMansion_3F_MapScripts::
# 2 "data/maps/PokemonMansion_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_3F_OnLoad
	.byte 0


PokemonMansion_3F_OnLoad::
# 6 "data/maps/PokemonMansion_3F/scripts.pory"
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_3F
	end


PokemonMansion_3F_EventScript_Statue::
# 11 "data/maps/PokemonMansion_3F/scripts.pory"
	lockall
# 12 "data/maps/PokemonMansion_3F/scripts.pory"
	setvar VAR_0x8004, 2
# 13 "data/maps/PokemonMansion_3F/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 14 "data/maps/PokemonMansion_3F/scripts.pory"
	playse SE_UNLOCK
# 15 "data/maps/PokemonMansion_3F/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/PokemonMansion_3F/scripts.pory"
	waitse
# 17 "data/maps/PokemonMansion_3F/scripts.pory"
	releaseall
	end


PokemonMansion_3F_EventScript_DiaryFeb6th::
# 22 "data/maps/PokemonMansion_3F/scripts.pory"
	msgbox PokemonMansion_1F_Text_MewGaveBirthToMewtwo, MSGBOX_SIGN
	end


PokemonMansion_3F_EventScript_Simon::
# 27 "data/maps/PokemonMansion_3F/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_SIMON, PokemonMansion_1F_Text_SimonIntro, PokemonMansion_1F_Text_SimonDefeat
# 28 "data/maps/PokemonMansion_3F/scripts.pory"
	msgbox PokemonMansion_1F_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion_3F_EventScript_Braydon::
# 33 "data/maps/PokemonMansion_3F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_BRAYDON, PokemonMansion_1F_Text_BraydonIntro, PokemonMansion_1F_Text_BraydonDefeat
# 34 "data/maps/PokemonMansion_3F/scripts.pory"
	msgbox PokemonMansion_1F_Text_BraydonPostBattle, MSGBOX_AUTOCLOSE
	end

