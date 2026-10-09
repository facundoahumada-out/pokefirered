FuchsiaCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/FuchsiaCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/FuchsiaCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


FuchsiaCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/FuchsiaCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FUCHSIA_CITY
	end


FuchsiaCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/FuchsiaCity_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/FuchsiaCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/FuchsiaCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/FuchsiaCity_PokemonCenter_1F/scripts.pory"
	release
	end


FuchsiaCity_PokemonCenter_1F_EventScript_Man::
# 20 "data/maps/FuchsiaCity_PokemonCenter_1F/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_CantBecomeGoodTrainerWithOneMon, MSGBOX_NPC
	end


FuchsiaCity_PokemonCenter_1F_EventScript_CooltrainerF::
# 25 "data/maps/FuchsiaCity_PokemonCenter_1F/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian, MSGBOX_NPC
	end


FuchsiaCity_PokemonCenter_1F_EventScript_Youngster::
# 30 "data/maps/FuchsiaCity_PokemonCenter_1F/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex, MSGBOX_NPC
	end

