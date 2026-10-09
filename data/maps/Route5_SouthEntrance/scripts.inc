Route5_SouthEntrance_MapScripts::
	.byte 0


Route5_SouthEntrance_EventScript_Guard::
# 4 "data/maps/Route5_SouthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_HiHowsItGoing, MSGBOX_NPC
	end


Route5_SouthEntrance_EventScript_GuardTriggerLeft::
# 9 "data/maps/Route5_SouthEntrance/scripts.pory"
	lockall
# 10 "data/maps/Route5_SouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 11 "data/maps/Route5_SouthEntrance/scripts.pory"
	goto Route5_SouthEntrance_EventScript_GuardTrigger
	end


Route5_SouthEntrance_EventScript_GuardTriggerMid::
# 16 "data/maps/Route5_SouthEntrance/scripts.pory"
	lockall
# 17 "data/maps/Route5_SouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/Route5_SouthEntrance/scripts.pory"
	goto Route5_SouthEntrance_EventScript_GuardTrigger
	end


Route5_SouthEntrance_EventScript_GuardTriggerRight::
# 23 "data/maps/Route5_SouthEntrance/scripts.pory"
	lockall
# 24 "data/maps/Route5_SouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 2
# 25 "data/maps/Route5_SouthEntrance/scripts.pory"
	goto Route5_SouthEntrance_EventScript_GuardTrigger
	end


Route5_SouthEntrance_EventScript_GuardTrigger::
# 30 "data/maps/Route5_SouthEntrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 31 "data/maps/Route5_SouthEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 32 "data/maps/Route5_SouthEntrance/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route5_SouthEntrance/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route5_SouthEntrance_EventScript_GiveTea
# 34 "data/maps/Route5_SouthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThirstyOnGuardDuty
# 35 "data/maps/Route5_SouthEntrance/scripts.pory"
	closemessage
# 36 "data/maps/Route5_SouthEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route5_SouthEntrance_Movement_BlockPlayerEntry
# 37 "data/maps/Route5_SouthEntrance/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route5_SouthEntrance/scripts.pory"
	releaseall
	end


Route5_SouthEntrance_EventScript_GiveTea::
# 43 "data/maps/Route5_SouthEntrance/scripts.pory"
	removeitem ITEM_TEA
# 44 "data/maps/Route5_SouthEntrance/scripts.pory"
	goto Route5_SouthEntrance_EventScript_GuardDrinkTea
	end


Route5_SouthEntrance_EventScript_GuardDrinkTea::
# 49 "data/maps/Route5_SouthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThatTeaLooksTasty
# 50 "data/maps/Route5_SouthEntrance/scripts.pory"
	closemessage
# 51 "data/maps/Route5_SouthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route5_SouthEntrance_EventScript_WalkToGuardLeft
# 52 "data/maps/Route5_SouthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route5_SouthEntrance_EventScript_WalkToGuardMid
# 53 "data/maps/Route5_SouthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route5_SouthEntrance_EventScript_WalkToGuardRight
# 54 "data/maps/Route5_SouthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThanksIllShareTeaWithGuards
# 55 "data/maps/Route5_SouthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 56 "data/maps/Route5_SouthEntrance/scripts.pory"
	releaseall
	end


Route5_SouthEntrance_EventScript_WalkToGuardLeft::
# 61 "data/maps/Route5_SouthEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route5_SouthEntrance_Movement_WalkToGuardLeft
# 62 "data/maps/Route5_SouthEntrance/scripts.pory"
	waitmovement 0
	return


Route5_SouthEntrance_EventScript_WalkToGuardMid::
# 67 "data/maps/Route5_SouthEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route5_SouthEntrance_Movement_WalkToGuardMid
# 68 "data/maps/Route5_SouthEntrance/scripts.pory"
	waitmovement 0
	return


Route5_SouthEntrance_EventScript_WalkToGuardRight::
# 73 "data/maps/Route5_SouthEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route5_SouthEntrance_Movement_WalkToGuardRight
# 74 "data/maps/Route5_SouthEntrance/scripts.pory"
	waitmovement 0
	return


# 78 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_Movement_WalkToGuardMid::
# 79 "data/maps/Route5_SouthEntrance/scripts.pory"
	walk_left
# 80 "data/maps/Route5_SouthEntrance/scripts.pory"
	step_end

# 83 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_Movement_WalkToGuardRight::
# 84 "data/maps/Route5_SouthEntrance/scripts.pory"
	walk_left
# 85 "data/maps/Route5_SouthEntrance/scripts.pory"
	walk_left
# 86 "data/maps/Route5_SouthEntrance/scripts.pory"
	step_end

# 89 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_Movement_WalkToGuardLeft::
# 90 "data/maps/Route5_SouthEntrance/scripts.pory"
	walk_in_place_left
# 91 "data/maps/Route5_SouthEntrance/scripts.pory"
	step_end

# 94 "data/maps/Route5_SouthEntrance/scripts.pory"
Route5_SouthEntrance_Movement_BlockPlayerEntry::
# 95 "data/maps/Route5_SouthEntrance/scripts.pory"
	walk_up
# 96 "data/maps/Route5_SouthEntrance/scripts.pory"
	step_end
