FiveIsland_PokemonCenter_1F_MapScripts::
# 2 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_PokemonCenter_1F_OnTransition
# 3 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


FiveIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FIVE_ISLAND
	end


FiveIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	release
	end


FiveIsland_PokemonCenter_1F_EventScript_Chef::
# 20 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	msgbox FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal, MSGBOX_NPC
	end


FiveIsland_PokemonCenter_1F_EventScript_CooltrainerF::
# 25 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	msgbox FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon, MSGBOX_NPC
	end

