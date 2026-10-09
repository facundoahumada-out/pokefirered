CeladonCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


CeladonCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_CELADON_CITY
	end


CeladonCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	release
	end


CeladonCity_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_PokeFluteAwakensSleepingMons, MSGBOX_NPC
	end


CeladonCity_PokemonCenter_1F_EventScript_CooltrainerF::
# 25 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_RodeHereFromFuchsia, MSGBOX_NPC
	end


CeladonCity_PokemonCenter_1F_EventScript_Youngster::
# 30 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_GoToCyclingRoadIfIHadBike, MSGBOX_NPC
	end

