PokemonMansion_2F_MapScripts::
# 2 "data/maps/PokemonMansion_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_2F_OnLoad
	.byte 0


PokemonMansion_2F_OnLoad::
# 6 "data/maps/PokemonMansion_2F/scripts.pory"
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_2F
	end


PokemonMansion_2F_EventScript_Statue::
# 11 "data/maps/PokemonMansion_2F/scripts.pory"
	lockall
# 12 "data/maps/PokemonMansion_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 13 "data/maps/PokemonMansion_2F/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 14 "data/maps/PokemonMansion_2F/scripts.pory"
	playse SE_UNLOCK
# 15 "data/maps/PokemonMansion_2F/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/PokemonMansion_2F/scripts.pory"
	waitse
# 17 "data/maps/PokemonMansion_2F/scripts.pory"
	releaseall
	end


PokemonMansion_2F_EventScript_DiaryJuly5th::
# 22 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle, MSGBOX_SIGN
	end


PokemonMansion_2F_EventScript_DiaryJuly10th::
# 27 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_ChristenedDiscoveredMonMew, MSGBOX_SIGN
	end


PokemonMansion_2F_EventScript_Arnie::
# 32 "data/maps/PokemonMansion_2F/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_ARNIE, PokemonMansion_1F_Text_ArnieIntro, PokemonMansion_1F_Text_ArnieDefeat
# 33 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_ArniePostBattle, MSGBOX_AUTOCLOSE
	end

