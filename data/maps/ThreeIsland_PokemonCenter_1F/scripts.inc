ThreeIsland_PokemonCenter_1F_MapScripts::
# 2 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_PokemonCenter_1F_OnTransition
# 3 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ThreeIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_THREE_ISLAND
	end


ThreeIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	release
	end


ThreeIsland_PokemonCenter_1F_EventScript_Sailor::
# 20 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands, MSGBOX_NPC
	end


ThreeIsland_PokemonCenter_1F_EventScript_Lass::
# 25 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest, MSGBOX_NPC
	end


ThreeIsland_PokemonCenter_1F_EventScript_Rocker::
# 30 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto, MSGBOX_NPC
	end

