Route7_EastEntrance_MapScripts::
	.byte 0


Route7_EastEntrance_EventScript_Guard::
# 4 "data/maps/Route7_EastEntrance/scripts.pory"
	msgbox Route7_EastEntrance_Text_HiHowsItGoing, MSGBOX_NPC
	end


Route7_EastEntrance_EventScript_GuardTriggerTop::
# 9 "data/maps/Route7_EastEntrance/scripts.pory"
	lockall
# 10 "data/maps/Route7_EastEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 11 "data/maps/Route7_EastEntrance/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardTrigger
	end


Route7_EastEntrance_EventScript_GuardTriggerMid::
# 16 "data/maps/Route7_EastEntrance/scripts.pory"
	lockall
# 17 "data/maps/Route7_EastEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/Route7_EastEntrance/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardTrigger
	end


Route7_EastEntrance_EventScript_GuardTriggerBottom::
# 23 "data/maps/Route7_EastEntrance/scripts.pory"
	lockall
# 24 "data/maps/Route7_EastEntrance/scripts.pory"
	setvar VAR_TEMP_1, 2
# 25 "data/maps/Route7_EastEntrance/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardTrigger
	end


Route7_EastEntrance_EventScript_GuardTrigger::
# 30 "data/maps/Route7_EastEntrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 31 "data/maps/Route7_EastEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 32 "data/maps/Route7_EastEntrance/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route7_EastEntrance/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route7_EastEntrance_EventScript_GiveTea
# 34 "data/maps/Route7_EastEntrance/scripts.pory"
	msgbox Route7_EastEntrance_Text_ThirstyOnGuardDuty
# 35 "data/maps/Route7_EastEntrance/scripts.pory"
	closemessage
# 36 "data/maps/Route7_EastEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_BlockPlayerEntry
# 37 "data/maps/Route7_EastEntrance/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route7_EastEntrance/scripts.pory"
	releaseall
	end


Route7_EastEntrance_EventScript_GiveTea::
# 43 "data/maps/Route7_EastEntrance/scripts.pory"
	removeitem ITEM_TEA
# 44 "data/maps/Route7_EastEntrance/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardDrinkTea
	end


Route7_EastEntrance_EventScript_GuardDrinkTea::
# 49 "data/maps/Route7_EastEntrance/scripts.pory"
	msgbox Route7_EastEntrance_Text_ThatTeaLooksTasty
# 50 "data/maps/Route7_EastEntrance/scripts.pory"
	closemessage
# 51 "data/maps/Route7_EastEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route7_EastEntrance_WalkToGuardTop
# 52 "data/maps/Route7_EastEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route7_EastEntrance_WalkToGuardMid
# 53 "data/maps/Route7_EastEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route7_EastEntrance_WalkToGuardBottom
# 54 "data/maps/Route7_EastEntrance/scripts.pory"
	msgbox Route7_EastEntrance_Text_ThanksIllShareTeaWithGuards
# 55 "data/maps/Route7_EastEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 56 "data/maps/Route7_EastEntrance/scripts.pory"
	releaseall
	end


Route7_EastEntrance_WalkToGuardTop::
# 61 "data/maps/Route7_EastEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_WalkToGuardTop
# 62 "data/maps/Route7_EastEntrance/scripts.pory"
	waitmovement 0
	return


Route7_EastEntrance_WalkToGuardMid::
# 67 "data/maps/Route7_EastEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_WalkToGuardMid
# 68 "data/maps/Route7_EastEntrance/scripts.pory"
	waitmovement 0
	return


Route7_EastEntrance_WalkToGuardBottom::
# 73 "data/maps/Route7_EastEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_WalkToGuardBottom
# 74 "data/maps/Route7_EastEntrance/scripts.pory"
	waitmovement 0
	return


# 78 "data/maps/Route7_EastEntrance/scripts.pory"
Route7_EastEntrance_Movement_WalkToGuardMid::
# 79 "data/maps/Route7_EastEntrance/scripts.pory"
	walk_up
# 80 "data/maps/Route7_EastEntrance/scripts.pory"
	step_end

# 83 "data/maps/Route7_EastEntrance/scripts.pory"
Route7_EastEntrance_Movement_WalkToGuardBottom::
# 84 "data/maps/Route7_EastEntrance/scripts.pory"
	walk_up
# 85 "data/maps/Route7_EastEntrance/scripts.pory"
	walk_up
# 86 "data/maps/Route7_EastEntrance/scripts.pory"
	step_end

# 89 "data/maps/Route7_EastEntrance/scripts.pory"
Route7_EastEntrance_Movement_WalkToGuardTop::
# 90 "data/maps/Route7_EastEntrance/scripts.pory"
	walk_in_place_up
# 91 "data/maps/Route7_EastEntrance/scripts.pory"
	step_end

# 94 "data/maps/Route7_EastEntrance/scripts.pory"
Route7_EastEntrance_Movement_BlockPlayerEntry::
# 95 "data/maps/Route7_EastEntrance/scripts.pory"
	walk_left
# 96 "data/maps/Route7_EastEntrance/scripts.pory"
	step_end
