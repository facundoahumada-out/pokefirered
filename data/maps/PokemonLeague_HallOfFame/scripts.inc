PokemonLeague_HallOfFame_MapScripts::
# 2 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_HallOfFame_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_HallOfFame_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

PokemonLeague_HallOfFame_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_EnterRoom
	.2byte 0

PokemonLeague_HallOfFame_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth
	.2byte 0


PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth::
# 11 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


PokemonLeague_HallOfFame_EventScript_EnterRoom::
# 16 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	lockall
# 17 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 18 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_HallOfFame_Movement_EnterRoom
# 19 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitmovement 0
# 20 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_PROF_OAK, Common_Movement_WalkInPlaceFasterLeft
# 21 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 22 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitmovement 0
# 23 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	delay 18
# 24 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	msgbox PokemonLeague_HallOfFame_Text_OakCongratulations
# 25 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	closemessage
# 26 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 27 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 28 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitmovement 0
# 29 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	delay 20
# 30 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 31 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 32 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	delay 40
# 33 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	setvar VAR_TEMP_1, 1
# 34 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	call EventScript_SetDefeatedEliteFourFlagsVars
# 35 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
# 36 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 37 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	special EnterHallOfFame
# 38 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitstate
# 39 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	releaseall
	end


# 43 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_Movement_EnterRoom::
# 44 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 45 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 46 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 47 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 48 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 49 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 50 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 51 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 52 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	step_end
