CinnabarIsland_PokemonCenter_2F_MapScripts::
# 2 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarIsland_PokemonCenter_2F_OnFrame
# 3 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 4 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 5 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
	.byte 0


# 8 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
CinnabarIsland_PokemonCenter_2F_OnFrame:
# 10 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ViridianCity_PokemonCenter_2F_EventScript_WelcomeCheck
# 11 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1, CableClub_EventScript_Tutorial
# 12 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_SINGLE_BATTLE, CableClub_EventScript_ExitLinkRoom
# 13 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_DOUBLE_BATTLE, CableClub_EventScript_ExitLinkRoom
# 14 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MULTI_BATTLE, CableClub_EventScript_ExitLinkRoom
# 15 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_TRADE_CENTER, CableClub_EventScript_ExitTradeCenter
# 16 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_UNION_ROOM, CableClub_EventScript_ExitUnionRoom
# 17 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_BERRY_CRUSH, CableClub_EventScript_ExitLinkRoom
# 18 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
# 19 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	.2byte 0

CinnabarIsland_PokemonCenter_2F_EventScript_Colosseum::
# 24 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
	end


CinnabarIsland_PokemonCenter_2F_EventScript_TradeCenter::
# 29 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
	end


CinnabarIsland_PokemonCenter_2F_EventScript_RecordCorner::
# 34 "data/maps/CinnabarIsland_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
	end

