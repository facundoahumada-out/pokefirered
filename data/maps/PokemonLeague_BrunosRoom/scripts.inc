PokemonLeague_BrunosRoom_MapScripts::
# 2 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_BrunosRoom_OnResume
# 3 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_BrunosRoom_OnLoad
# 4 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_BrunosRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_BrunosRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PokemonLeague_BrunosRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth
	.2byte 0

PokemonLeague_BrunosRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_BrunosRoom_EventScript_EnterRoom
	.2byte 0


PokemonLeague_BrunosRoom_OnResume::
# 13 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setvar VAR_0x8004, 1
# 14 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
	end


PokemonLeague_BrunosRoom_OnLoad::
# 19 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_SetDoorOpen
# 20 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_BrunosRoom_EventScript_CloseEntry
	end


PokemonLeague_BrunosRoom_EventScript_CloseEntry::
# 25 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
	return


PokemonLeague_BrunosRoom_EventScript_SetDoorOpen::
# 30 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
	return


PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth::
# 35 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


PokemonLeague_BrunosRoom_EventScript_EnterRoom::
# 40 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	lockall
# 41 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 42 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 2
# 43 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	releaseall
	end


PokemonLeague_BrunosRoom_EventScript_Bruno::
# 48 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	lock
# 49 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	faceplayer
# 50 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	famechecker FAMECHECKER_BRUNO, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 51 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_PostBattle
# 52 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 0
# 53 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 1
# 54 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_Intro
# 55 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_RematchIntro
# 56 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 57 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 58 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_BrunosRoom_EventScript_Battle
# 59 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_BrunosRoom_EventScript_Rematch
# 60 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 61 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno
	end


PokemonLeague_BrunosRoom_EventScript_Intro::
# 66 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_Intro
	return


PokemonLeague_BrunosRoom_EventScript_RematchIntro::
# 71 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_RematchIntro
	return


PokemonLeague_BrunosRoom_EventScript_Battle::
# 76 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO, PokemonLeague_BrunosRoom_Text_Defeat
	return


PokemonLeague_BrunosRoom_EventScript_Rematch::
# 81 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO_2, PokemonLeague_BrunosRoom_Text_Defeat
	return


PokemonLeague_BrunosRoom_EventScript_PostBattle::
# 86 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 87 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	closemessage
# 88 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 89 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 90 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 91 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 92 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	release
	end


PokemonLeague_BrunosRoom_EventScript_DefeatedBruno::
# 97 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_DEFEATED_BRUNO
# 98 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 99 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 100 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	closemessage
# 101 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 102 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 103 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 104 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 105 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	release
	end


PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft::
# 110 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterLeft
# 111 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement 0
	return


PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight::
# 116 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterRight
# 117 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement 0
	return


PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown::
# 122 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterDown
# 123 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement 0
	return

