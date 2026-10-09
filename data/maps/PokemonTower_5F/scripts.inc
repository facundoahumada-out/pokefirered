PokemonTower_5F_MapScripts::
	.byte 0


PokemonTower_5F_EventScript_Channeler::
# 4 "data/maps/PokemonTower_5F/scripts.pory"
	msgbox PokemonTower_5F_Text_RestHereInPurifiedSpace, MSGBOX_NPC
	end


PokemonTower_5F_EventScript_PurifiedZone::
# 9 "data/maps/PokemonTower_5F/scripts.pory"
	lockall
# 10 "data/maps/PokemonTower_5F/scripts.pory"
	fadescreen FADE_TO_WHITE
# 11 "data/maps/PokemonTower_5F/scripts.pory"
	special HealPlayerParty
# 12 "data/maps/PokemonTower_5F/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 13 "data/maps/PokemonTower_5F/scripts.pory"
	msgbox PokemonTower_5F_Text_PurifiedZoneMonsFullyHealed
# 14 "data/maps/PokemonTower_5F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/PokemonTower_5F/scripts.pory"
	releaseall
	end


PokemonTower_5F_EventScript_ExitPurifiedZone::
# 20 "data/maps/PokemonTower_5F/scripts.pory"
	lockall
# 21 "data/maps/PokemonTower_5F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 22 "data/maps/PokemonTower_5F/scripts.pory"
	releaseall
	end


PokemonTower_5F_EventScript_Tammy::
# 27 "data/maps/PokemonTower_5F/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_TAMMY, PokemonTower_5F_Text_TammyIntro, PokemonTower_5F_Text_TammyDefeat
# 28 "data/maps/PokemonTower_5F/scripts.pory"
	msgbox PokemonTower_5F_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_5F_EventScript_Ruth::
# 33 "data/maps/PokemonTower_5F/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_RUTH, PokemonTower_5F_Text_RuthIntro, PokemonTower_5F_Text_RuthDefeat
# 34 "data/maps/PokemonTower_5F/scripts.pory"
	msgbox PokemonTower_5F_Text_RuthPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_5F_EventScript_Karina::
# 39 "data/maps/PokemonTower_5F/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_KARINA, PokemonTower_5F_Text_KarinaIntro, PokemonTower_5F_Text_KarinaDefeat
# 40 "data/maps/PokemonTower_5F/scripts.pory"
	msgbox PokemonTower_5F_Text_KarinaPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_5F_EventScript_Janae::
# 45 "data/maps/PokemonTower_5F/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_JANAE, PokemonTower_5F_Text_JanaeIntro, PokemonTower_5F_Text_JanaeDefeat
# 46 "data/maps/PokemonTower_5F/scripts.pory"
	msgbox PokemonTower_5F_Text_JanaePostBattle, MSGBOX_AUTOCLOSE
	end

