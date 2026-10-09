PokemonTower_1F_MapScripts::
# 2 "data/maps/PokemonTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonTower_1F_OnTransition
	.byte 0


PokemonTower_1F_OnTransition::
# 6 "data/maps/PokemonTower_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_TOWER_1F
	end


PokemonTower_1F_EventScript_Channeler::
# 11 "data/maps/PokemonTower_1F/scripts.pory"
	msgbox PokemonTower_1F_Text_SenseSpiritsUpToMischief, MSGBOX_NPC
	end


PokemonTower_1F_EventScript_Woman1::
# 16 "data/maps/PokemonTower_1F/scripts.pory"
	msgbox PokemonTower_1F_Text_GrowlitheWhyDidYouDie, MSGBOX_NPC
	end


PokemonTower_1F_EventScript_BaldingMan::
# 21 "data/maps/PokemonTower_1F/scripts.pory"
	msgbox PokemonTower_1F_Text_CameToPrayForDepartedClefairy, MSGBOX_NPC
	end


PokemonTower_1F_EventScript_Woman2::
# 26 "data/maps/PokemonTower_1F/scripts.pory"
	lock
# 27 "data/maps/PokemonTower_1F/scripts.pory"
	faceplayer
# 28 "data/maps/PokemonTower_1F/scripts.pory"
	checkplayergender
# 29 "data/maps/PokemonTower_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, PokemonTower_1F_EventScript_Woman2MalePlayer
# 30 "data/maps/PokemonTower_1F/scripts.pory"
	msgbox PokemonTower_1F_Text_ComeToPayRespectsGirl
# 31 "data/maps/PokemonTower_1F/scripts.pory"
	release
	end


PokemonTower_1F_EventScript_Woman2MalePlayer::
# 36 "data/maps/PokemonTower_1F/scripts.pory"
	msgbox PokemonTower_1F_Text_ComeToPayRespectsSon
# 37 "data/maps/PokemonTower_1F/scripts.pory"
	release
	end


PokemonTower_1F_EventScript_WorkerF::
# 42 "data/maps/PokemonTower_1F/scripts.pory"
	msgbox PokemonTower_1F_Text_ErectedInMemoryOfDeadMons, MSGBOX_NPC
	end

