TwoIsland_PokemonCenter_1F_MapScripts::
# 2 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
# 3 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


TwoIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_TWO_ISLAND
	end


TwoIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	release
	end


TwoIsland_PokemonCenter_1F_EventScript_GBAKid::
# 20 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	msgbox TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner, MSGBOX_NPC
	end


TwoIsland_PokemonCenter_1F_EventScript_BugCatcher::
# 25 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	msgbox TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape, MSGBOX_NPC
	end

