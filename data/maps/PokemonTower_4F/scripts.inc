PokemonTower_4F_MapScripts::
	.byte 0


PokemonTower_4F_EventScript_Paula::
# 4 "data/maps/PokemonTower_4F/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_PAULA, PokemonTower_4F_Text_PaulaIntro, PokemonTower_4F_Text_PaulaDefeat
# 5 "data/maps/PokemonTower_4F/scripts.pory"
	msgbox PokemonTower_4F_Text_PaulaPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_4F_EventScript_Laurel::
# 10 "data/maps/PokemonTower_4F/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_LAUREL, PokemonTower_4F_Text_LaurelIntro, PokemonTower_4F_Text_LaurelDefeat
# 11 "data/maps/PokemonTower_4F/scripts.pory"
	msgbox PokemonTower_4F_Text_LaurelPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_4F_EventScript_Jody::
# 16 "data/maps/PokemonTower_4F/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_JODY, PokemonTower_4F_Text_JodyIntro, PokemonTower_4F_Text_JodyDefeat
# 17 "data/maps/PokemonTower_4F/scripts.pory"
	msgbox PokemonTower_4F_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
	end

