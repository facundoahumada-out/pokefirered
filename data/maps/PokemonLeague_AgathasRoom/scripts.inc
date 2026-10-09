PokemonLeague_AgathasRoom_MapScripts::
# 2 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_AgathasRoom_OnResume
# 3 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_AgathasRoom_OnLoad
# 4 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_AgathasRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_AgathasRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PokemonLeague_AgathasRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth
	.2byte 0

PokemonLeague_AgathasRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_AgathasRoom_EventScript_EnterRoom
	.2byte 0


PokemonLeague_AgathasRoom_OnResume::
# 13 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	setvar VAR_0x8004, 2
# 14 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
	end


PokemonLeague_AgathasRoom_OnLoad::
# 19 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_EventScript_SetDoorOpen
# 20 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 3, PokemonLeague_AgathasRoom_EventScript_CloseEntry
	end


PokemonLeague_AgathasRoom_EventScript_CloseEntry::
# 25 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
	return


PokemonLeague_AgathasRoom_EventScript_SetDoorOpen::
# 30 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
	return


PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth::
# 35 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


PokemonLeague_AgathasRoom_EventScript_EnterRoom::
# 40 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	lockall
# 41 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 42 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 3
# 43 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	releaseall
	end


PokemonLeague_AgathasRoom_EventScript_Agatha::
# 48 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	lock
# 49 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	faceplayer
# 50 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	famechecker FAMECHECKER_AGATHA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 51 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_EventScript_PostBattle
# 52 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	famechecker FAMECHECKER_AGATHA, 0
# 53 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	famechecker FAMECHECKER_AGATHA, 4
# 54 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	famechecker FAMECHECKER_OAK, 4
# 55 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_AgathasRoom_EventScript_Intro
# 56 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_AgathasRoom_EventScript_RematchIntro
# 57 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 58 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 59 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_AgathasRoom_EventScript_Battle
# 60 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_AgathasRoom_EventScript_Rematch
# 61 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 62 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	goto PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha
	end


PokemonLeague_AgathasRoom_EventScript_Intro::
# 67 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_Intro
	return


PokemonLeague_AgathasRoom_EventScript_RematchIntro::
# 72 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_RematchIntro
	return


PokemonLeague_AgathasRoom_EventScript_Battle::
# 77 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA, PokemonLeague_AgathasRoom_Text_Defeat
	return


PokemonLeague_AgathasRoom_EventScript_Rematch::
# 82 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA_2, PokemonLeague_AgathasRoom_Text_Defeat
	return


PokemonLeague_AgathasRoom_EventScript_PostBattle::
# 87 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
# 88 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	release
	end


PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha::
# 93 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	setflag FLAG_DEFEATED_AGATHA
# 94 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 95 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
# 96 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	release
	end

