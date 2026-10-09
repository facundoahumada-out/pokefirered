ViridianCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ViridianCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
	end


ViridianCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_1F_EventScript_Boy::
# 20 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown, MSGBOX_NPC
	end


ViridianCity_PokemonCenter_1F_EventScript_Gentleman::
# 25 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC, MSGBOX_NPC
	end


ViridianCity_PokemonCenter_1F_EventScript_Youngster::
# 30 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons, MSGBOX_NPC
	end

