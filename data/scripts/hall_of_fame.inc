EventScript_SetDefeatedEliteFourFlagsVars::
# 2 "data/scripts/hall_of_fame.pory"
	clearflag FLAG_HIDE_POSTGAME_GOSSIPERS
# 3 "data/scripts/hall_of_fame.pory"
	call EventScript_ResetEliteFour
# 4 "data/scripts/hall_of_fame.pory"
	special Script_UpdateTrainerFanClubGameClear
# 5 "data/scripts/hall_of_fame.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 6 "data/scripts/hall_of_fame.pory"
	call_if_eq VAR_RESULT, FALSE, EventScript_SetReadyTryGiveNationalDexScene
# 7 "data/scripts/hall_of_fame.pory"
	call EventScript_ResetLegendaries
	return


EventScript_SetReadyTryGiveNationalDexScene::
# 12 "data/scripts/hall_of_fame.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 2
	return


EventScript_ResetLegendaries::
# 17 "data/scripts/hall_of_fame.pory"
	clearflag FLAG_LUGIA_FLEW_AWAY
# 18 "data/scripts/hall_of_fame.pory"
	clearflag FLAG_HO_OH_FLEW_AWAY
# 19 "data/scripts/hall_of_fame.pory"
	clearflag FLAG_DEOXYS_FLEW_AWAY
	return


EventScript_ResetEliteFourEnd::
# 24 "data/scripts/hall_of_fame.pory"
	call EventScript_ResetEliteFour
	end


EventScript_ResetEliteFour::
# 29 "data/scripts/hall_of_fame.pory"
	clearflag FLAG_DEFEATED_LORELEI
# 30 "data/scripts/hall_of_fame.pory"
	clearflag FLAG_DEFEATED_BRUNO
# 31 "data/scripts/hall_of_fame.pory"
	clearflag FLAG_DEFEATED_AGATHA
# 32 "data/scripts/hall_of_fame.pory"
	clearflag FLAG_DEFEATED_LANCE
# 33 "data/scripts/hall_of_fame.pory"
	clearflag FLAG_DEFEATED_CHAMP
# 34 "data/scripts/hall_of_fame.pory"
	cleartrainerflag TRAINER_CHAMPION_FIRST_SQUIRTLE
# 35 "data/scripts/hall_of_fame.pory"
	cleartrainerflag TRAINER_CHAMPION_FIRST_BULBASAUR
# 36 "data/scripts/hall_of_fame.pory"
	cleartrainerflag TRAINER_CHAMPION_FIRST_CHARMANDER
# 37 "data/scripts/hall_of_fame.pory"
	cleartrainerflag TRAINER_CHAMPION_REMATCH_SQUIRTLE
# 38 "data/scripts/hall_of_fame.pory"
	cleartrainerflag TRAINER_CHAMPION_REMATCH_BULBASAUR
# 39 "data/scripts/hall_of_fame.pory"
	cleartrainerflag TRAINER_CHAMPION_REMATCH_CHARMANDER
# 40 "data/scripts/hall_of_fame.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 0
	return

