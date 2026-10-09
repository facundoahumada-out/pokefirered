SevenIsland_PokemonCenter_1F_MapScripts::
# 2 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_PokemonCenter_1F_OnTransition
# 3 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


SevenIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
	end


SevenIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	release
	end


SevenIsland_PokemonCenter_1F_EventScript_OldMan::
# 20 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections, MSGBOX_NPC
	end


SevenIsland_PokemonCenter_1F_EventScript_Sailor::
# 25 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere, MSGBOX_NPC
	end


SevenIsland_PokemonCenter_1F_EventScript_Beauty::
# 30 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower, MSGBOX_NPC
	end

