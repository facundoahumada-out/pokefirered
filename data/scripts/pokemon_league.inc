PokemonLeague_EventScript_OpenDoor::
# 2 "data/scripts/pokemon_league.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay32
# 3 "data/scripts/pokemon_league.pory"
	waitmovement 0
# 4 "data/scripts/pokemon_league.pory"
	playse SE_RS_DOOR
# 5 "data/scripts/pokemon_league.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 6 "data/scripts/pokemon_league.pory"
	special DrawWholeMapView
# 7 "data/scripts/pokemon_league.pory"
	setflag FLAG_TEMP_4
	return


PokemonLeague_EventScript_EnterRoom::
# 12 "data/scripts/pokemon_league.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp5
# 13 "data/scripts/pokemon_league.pory"
	waitmovement 0
# 14 "data/scripts/pokemon_league.pory"
	setflag FLAG_TEMP_2
# 15 "data/scripts/pokemon_league.pory"
	playse SE_UNLOCK
# 16 "data/scripts/pokemon_league.pory"
	call PokemonLeague_EventScript_CloseEntry
# 17 "data/scripts/pokemon_league.pory"
	special DrawWholeMapView
	return


PokemonLeague_EventScript_SetDoorOpen::
# 22 "data/scripts/pokemon_league.pory"
	setmetatile 6, 1, METATILE_PokemonLeague_Door_Top_Open, 1
# 23 "data/scripts/pokemon_league.pory"
	setmetatile 6, 2, METATILE_PokemonLeague_Door_Mid_Open, 0
	return


PokemonLeague_EventScript_PreventExit::
# 28 "data/scripts/pokemon_league.pory"
	lockall
# 29 "data/scripts/pokemon_league.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 30 "data/scripts/pokemon_league.pory"
	msgbox Text_VoiceRangOutDontRunAway
# 31 "data/scripts/pokemon_league.pory"
	closemessage
# 32 "data/scripts/pokemon_league.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_Movement_ForcePlayerIn
# 33 "data/scripts/pokemon_league.pory"
	waitmovement 0
# 34 "data/scripts/pokemon_league.pory"
	releaseall
	end


PokemonLeague_EventScript_OpenDoorLance::
# 39 "data/scripts/pokemon_league.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay32
# 40 "data/scripts/pokemon_league.pory"
	waitmovement 0
# 41 "data/scripts/pokemon_league.pory"
	playse SE_RS_DOOR
# 42 "data/scripts/pokemon_league.pory"
	setmetatile 6, 4, METATILE_PokemonLeague_Door_Top_Open, 1
# 43 "data/scripts/pokemon_league.pory"
	setmetatile 6, 5, METATILE_PokemonLeague_Door_Mid_Open, 0
# 44 "data/scripts/pokemon_league.pory"
	special DrawWholeMapView
# 45 "data/scripts/pokemon_league.pory"
	setflag FLAG_TEMP_4
	return


PokemonLeague_EventScript_SetDoorOpenLance::
# 50 "data/scripts/pokemon_league.pory"
	setmetatile 6, 4, METATILE_PokemonLeague_Door_Top_Open, 1
# 51 "data/scripts/pokemon_league.pory"
	setmetatile 6, 5, METATILE_PokemonLeague_Door_Mid_Open, 0
	return


PokemonLeague_EventScript_CloseEntry::
# 56 "data/scripts/pokemon_league.pory"
	setmetatile 5, 11, METATILE_PokemonLeague_Entry_TopLeft_Closed, 1
# 57 "data/scripts/pokemon_league.pory"
	setmetatile 6, 11, METATILE_PokemonLeague_Entry_TopMid_Closed, 1
# 58 "data/scripts/pokemon_league.pory"
	setmetatile 7, 11, METATILE_PokemonLeague_Entry_TopRight_Closed, 1
# 59 "data/scripts/pokemon_league.pory"
	setmetatile 5, 12, METATILE_PokemonLeague_Entry_BottomLeft_Closed, 1
# 60 "data/scripts/pokemon_league.pory"
	setmetatile 6, 12, METATILE_PokemonLeague_Entry_BottomMid_Closed, 1
# 61 "data/scripts/pokemon_league.pory"
	setmetatile 7, 12, METATILE_PokemonLeague_Entry_BottomRight_Closed, 1
	return


# 65 "data/scripts/pokemon_league.pory"
PokemonLeague_Movement_ForcePlayerIn::
# 66 "data/scripts/pokemon_league.pory"
	walk_up
# 67 "data/scripts/pokemon_league.pory"
	step_end

PokemonLeague_EventScript_DoLightingEffect::
# 71 "data/scripts/pokemon_league.pory"
	special DoPokemonLeagueLightingEffect
	return

