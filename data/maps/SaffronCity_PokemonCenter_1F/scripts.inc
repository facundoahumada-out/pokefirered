SaffronCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


SaffronCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SAFFRON_CITY
	end


SaffronCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	release
	end


SaffronCity_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame, MSGBOX_NPC
	end


SaffronCity_PokemonCenter_1F_EventScript_Woman::
# 25 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies, MSGBOX_NPC
	end


SaffronCity_PokemonCenter_1F_EventScript_Youngster::
# 30 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	lock
# 31 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 32 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SILPH_CO_11F, 1, SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone
# 33 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets
# 34 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	release
	end


SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone::
# 39 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff
# 40 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	release
	end

