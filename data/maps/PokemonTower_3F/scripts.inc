PokemonTower_3F_MapScripts::
	.byte 0


PokemonTower_3F_EventScript_Patricia::
# 4 "data/maps/PokemonTower_3F/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_PATRICIA, PokemonTower_3F_Text_PatriciaIntro, PokemonTower_3F_Text_PatriciaDefeat
# 5 "data/maps/PokemonTower_3F/scripts.pory"
	msgbox PokemonTower_3F_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_3F_EventScript_Carly::
# 10 "data/maps/PokemonTower_3F/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_CARLY, PokemonTower_3F_Text_CarlyIntro, PokemonTower_3F_Text_CarlyDefeat
# 11 "data/maps/PokemonTower_3F/scripts.pory"
	msgbox PokemonTower_3F_Text_CarlyPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_3F_EventScript_Hope::
# 16 "data/maps/PokemonTower_3F/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_HOPE, PokemonTower_3F_Text_HopeIntro, PokemonTower_3F_Text_HopeDefeat
# 17 "data/maps/PokemonTower_3F/scripts.pory"
	msgbox PokemonTower_3F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
	end

