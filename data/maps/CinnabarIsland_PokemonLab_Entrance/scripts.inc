CinnabarIsland_PokemonLab_Entrance_MapScripts::
# 2 "data/maps/CinnabarIsland_PokemonLab_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonLab_Entrance_OnTransition
	.byte 0


CinnabarIsland_PokemonLab_Entrance_OnTransition::
# 6 "data/maps/CinnabarIsland_PokemonLab_Entrance/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1, CinnabarIsland_PokemonLab_Entrance_EventScript_ReadyFossil
	end


CinnabarIsland_PokemonLab_Entrance_EventScript_ReadyFossil::
# 11 "data/maps/CinnabarIsland_PokemonLab_Entrance/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 2
	return


CinnabarIsland_PokemonLab_Entrance_EventScript_Scientist::
# 16 "data/maps/CinnabarIsland_PokemonLab_Entrance/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively, MSGBOX_NPC
	end


CinnabarIsland_PokemonLab_Entrance_EventScript_DrFujiPhoto::
# 21 "data/maps/CinnabarIsland_PokemonLab_Entrance/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji, MSGBOX_SIGN
	end


CinnabarIsland_PokemonLab_Entrance_EventScript_MeetingRoomSign::
# 26 "data/maps/CinnabarIsland_PokemonLab_Entrance/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign, MSGBOX_SIGN
	end


CinnabarIsland_PokemonLab_Entrance_EventScript_RAndDRoomSign::
# 31 "data/maps/CinnabarIsland_PokemonLab_Entrance/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign, MSGBOX_SIGN
	end


CinnabarIsland_PokemonLab_Entrance_EventScript_TestingRoomSign::
# 36 "data/maps/CinnabarIsland_PokemonLab_Entrance/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign, MSGBOX_SIGN
	end

