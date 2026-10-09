Route18_EastEntrance_1F_MapScripts::
# 2 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_EastEntrance_1F_OnTransition
	.byte 0


Route18_EastEntrance_1F_OnTransition::
# 6 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	clearflag FLAG_SYS_ON_CYCLING_ROAD
# 7 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	call_if_set FLAG_GOT_BICYCLE, Route18_EastEntrance_1F_EventScript_DisableNeedBikeTrigger
	end


Route18_EastEntrance_1F_EventScript_DisableNeedBikeTrigger::
# 12 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


Route18_EastEntrance_1F_EventScript_Guard::
# 17 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	msgbox Route18_EastEntrance_1F_Text_CyclingRoadAllUphillFromHere, MSGBOX_NPC
	end


Route18_EastEntrance_1F_EventScript_NeedBikeTriggerTop::
# 22 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	lockall
# 23 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 24 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
	end


Route18_EastEntrance_1F_EventScript_NeedBikeTriggerMidTop::
# 29 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	lockall
# 30 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 31 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
	end


Route18_EastEntrance_1F_EventScript_NeedBikeTriggerMid::
# 36 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	lockall
# 37 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 38 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
	end


Route18_EastEntrance_1F_EventScript_NeedBikeTriggerMidBottom::
# 43 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	lockall
# 44 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	setvar VAR_0x8008, 3
# 45 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
	end


Route18_EastEntrance_1F_EventScript_NeedBikeTriggerBottom::
# 50 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	lockall
# 51 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 52 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
	end


Route18_EastEntrance_1F_EventScript_NeedBikeTrigger::
# 57 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 58 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	msgbox Route18_EastEntrance_1F_Text_ExcuseMe
# 59 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	closemessage
# 60 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 61 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	delay 20
# 63 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterMidTop
# 64 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterMid
# 65 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterMidBottom
# 66 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterBottom
# 67 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	msgbox Route18_EastEntrance_1F_Text_NeedBicycleForCyclingRoad
# 68 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	closemessage
# 69 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Route18_EastEntrance_1F_Movement_WalkRight
# 70 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	releaseall
	end


Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterMidTop::
# 76 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Route18_EastEntrance_1F_Movement_WalkUp
# 77 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	waitmovement 0
	return


Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterMid::
# 82 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Route18_EastEntrance_1F_Movement_WalkUp2
# 83 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	waitmovement 0
	return


Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterMidBottom::
# 88 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Route18_EastEntrance_1F_Movement_WalkUp3
# 89 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	waitmovement 0
	return


Route18_EastEntrance_1F_EventScript_PlayerWalkToCounterBottom::
# 94 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Route18_EastEntrance_1F_Movement_WalkUp4
# 95 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	waitmovement 0
	return


# 99 "data/maps/Route18_EastEntrance_1F/scripts.pory"
Route18_EastEntrance_1F_Movement_WalkUp::
# 100 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	walk_up
# 101 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	step_end

# 104 "data/maps/Route18_EastEntrance_1F/scripts.pory"
Route18_EastEntrance_1F_Movement_WalkUp2::
# 105 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	walk_up
# 106 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	walk_up
# 107 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	step_end

# 110 "data/maps/Route18_EastEntrance_1F/scripts.pory"
Route18_EastEntrance_1F_Movement_WalkUp3::
# 111 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	walk_up
# 112 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	walk_up
# 113 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	walk_up
# 114 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	step_end

# 117 "data/maps/Route18_EastEntrance_1F/scripts.pory"
Route18_EastEntrance_1F_Movement_WalkUp4::
# 118 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	walk_up
# 119 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	walk_up
# 120 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	walk_up
# 121 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	walk_up
# 122 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	step_end

# 125 "data/maps/Route18_EastEntrance_1F/scripts.pory"
Route18_EastEntrance_1F_Movement_WalkRight::
# 126 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	walk_right
# 127 "data/maps/Route18_EastEntrance_1F/scripts.pory"
	step_end
