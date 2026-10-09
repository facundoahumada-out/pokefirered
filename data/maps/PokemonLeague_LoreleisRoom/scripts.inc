PokemonLeague_LoreleisRoom_MapScripts::
# 2 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_LoreleisRoom_OnResume
# 3 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LoreleisRoom_OnLoad
# 4 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_LoreleisRoom_OnTransition
# 5 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_LoreleisRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LoreleisRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PokemonLeague_LoreleisRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth
	.2byte 0

PokemonLeague_LoreleisRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 0, PokemonLeague_LoreleisRoom_EventScript_EnterRoom
	.2byte 0


PokemonLeague_LoreleisRoom_OnResume::
# 14 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setvar VAR_0x8004, 0
# 15 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
	end


PokemonLeague_LoreleisRoom_OnLoad::
# 20 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen
# 21 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_LoreleisRoom_EventScript_CloseEntry
	end


PokemonLeague_LoreleisRoom_EventScript_CloseEntry::
# 26 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
	return


PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen::
# 31 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
	return


PokemonLeague_LoreleisRoom_OnTransition::
# 36 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
	end


PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth::
# 41 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


PokemonLeague_LoreleisRoom_EventScript_EnterRoom::
# 46 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	lockall
# 47 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 48 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 1
# 49 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	releaseall
	end


PokemonLeague_LoreleisRoom_EventScript_Lorelei::
# 54 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	lock
# 55 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	faceplayer
# 56 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	famechecker FAMECHECKER_LORELEI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 57 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_PostBattle
# 58 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 0
# 59 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 1
# 60 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_LoreleisRoom_EventScript_Intro
# 61 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_LoreleisRoom_EventScript_RematchIntro
# 62 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 63 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 64 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_LoreleisRoom_EventScript_Battle
# 65 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_LoreleisRoom_EventScript_Rematch
# 66 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 67 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei
	end


PokemonLeague_LoreleisRoom_EventScript_Intro::
# 72 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_Intro
	return


PokemonLeague_LoreleisRoom_EventScript_RematchIntro::
# 77 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_RematchIntro
	return


PokemonLeague_LoreleisRoom_EventScript_Battle::
# 82 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI, PokemonLeague_LoreleisRoom_Text_Defeat
	return


PokemonLeague_LoreleisRoom_EventScript_Rematch::
# 87 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI_2, PokemonLeague_LoreleisRoom_Text_Defeat
	return


PokemonLeague_LoreleisRoom_EventScript_PostBattle::
# 92 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 93 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	release
	end


PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei::
# 98 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_DEFEATED_LORELEI
# 99 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 100 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 101 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	release
	end

