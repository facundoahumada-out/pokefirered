CeruleanCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


CeruleanCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_CERULEAN_CITY
	end


CeruleanCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	release
	end


CeruleanCity_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac, MSGBOX_NPC
	end


CeruleanCity_PokemonCenter_1F_EventScript_Rocker::
# 25 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons, MSGBOX_NPC
	end


CeruleanCity_PokemonCenter_1F_EventScript_Youngster::
# 30 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	lock
# 31 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 32 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 1
# 33 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons
# 34 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	release
	end


CeruleanCity_PokemonCenter_1F_EventScript_Lass::
# 39 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs, MSGBOX_NPC
	end

