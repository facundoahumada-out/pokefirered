# 1 "data/scripts/hole.pory"

# 2 "data/scripts/hole.pory"
@ Unused
# 3 "data/scripts/hole.pory"
EventScript_CheckFallDownHole::
# 4 "data/scripts/hole.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, EventScript_FallDownHole
# 5 "data/scripts/hole.pory"
	.2byte 0
# 6 "data/scripts/hole.pory"

# 7 "data/scripts/hole.pory"
@ Unused
# 8 "data/scripts/hole.pory"
EventScript_FixCrackedGround::
# 9 "data/scripts/hole.pory"
	copyvar VAR_ICE_STEP_COUNT, 1
# 10 "data/scripts/hole.pory"
	end

EventScript_FallDownHole::
# 14 "data/scripts/hole.pory"
	lockall
# 15 "data/scripts/hole.pory"
	delay 20
# 16 "data/scripts/hole.pory"
	applymovement LOCALID_PLAYER, Movement_SetInvisible
# 17 "data/scripts/hole.pory"
	waitmovement 0
# 18 "data/scripts/hole.pory"
	playse SE_FALL
# 19 "data/scripts/hole.pory"
	delay 60
# 20 "data/scripts/hole.pory"
	warphole MAP_UNDEFINED
# 21 "data/scripts/hole.pory"
	waitstate
	end


EventScript_DoFallWarp::
# 27 "data/scripts/hole.pory"
	lockall
# 28 "data/scripts/hole.pory"
	delay 20
# 29 "data/scripts/hole.pory"
	applymovement LOCALID_PLAYER, Movement_SetInvisible
# 30 "data/scripts/hole.pory"
	waitmovement 0
# 31 "data/scripts/hole.pory"
	playse SE_FALL
# 32 "data/scripts/hole.pory"
	delay 60
# 33 "data/scripts/hole.pory"
	special DoFallWarp
# 34 "data/scripts/hole.pory"
	waitstate
	end


# 38 "data/scripts/hole.pory"
Movement_SetInvisible:
# 39 "data/scripts/hole.pory"
	set_invisible
# 40 "data/scripts/hole.pory"
	step_end
