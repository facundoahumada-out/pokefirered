LavenderTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/LavenderTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_PokemonCenter_1F_OnTransition
# 3 "data/maps/LavenderTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


LavenderTown_PokemonCenter_1F_OnTransition::
# 7 "data/maps/LavenderTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LAVENDER_TOWN
	end


LavenderTown_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/LavenderTown_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/LavenderTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/LavenderTown_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/LavenderTown_PokemonCenter_1F/scripts.pory"
	release
	end


LavenderTown_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/LavenderTown_PokemonCenter_1F/scripts.pory"
	msgbox LavenderTown_PokemonCenter_1F_Text_RocketsDoAnythingForMoney, MSGBOX_NPC
	end


LavenderTown_PokemonCenter_1F_EventScript_Lass::
# 25 "data/maps/LavenderTown_PokemonCenter_1F/scripts.pory"
	msgbox LavenderTown_PokemonCenter_1F_Text_CubonesMotherKilledByRockets, MSGBOX_NPC
	end


LavenderTown_PokemonCenter_1F_EventScript_Youngster::
# 30 "data/maps/LavenderTown_PokemonCenter_1F/scripts.pory"
	msgbox LavenderTown_PokemonCenter_1F_Text_PeoplePayForCuboneSkulls, MSGBOX_NPC
	end

