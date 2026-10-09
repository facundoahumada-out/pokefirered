VermilionCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/VermilionCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/VermilionCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


VermilionCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/VermilionCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_VERMILION_CITY
	end


VermilionCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/VermilionCity_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/VermilionCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/VermilionCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/VermilionCity_PokemonCenter_1F/scripts.pory"
	release
	end


VermilionCity_PokemonCenter_1F_EventScript_Man::
# 20 "data/maps/VermilionCity_PokemonCenter_1F/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking, MSGBOX_NPC
	end


VermilionCity_PokemonCenter_1F_EventScript_Hiker::
# 25 "data/maps/VermilionCity_PokemonCenter_1F/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild, MSGBOX_NPC
	end


VermilionCity_PokemonCenter_1F_EventScript_Youngster::
# 30 "data/maps/VermilionCity_PokemonCenter_1F/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes, MSGBOX_NPC
	end

