Route8_WestEntrance_MapScripts::
	.byte 0


Route8_WestEntrance_EventScript_Guard::
# 4 "data/maps/Route8_WestEntrance/scripts.pory"
	msgbox Route8_WestEntrance_Text_HiHowsItGoing, MSGBOX_NPC
	end


Route8_WestEntrance_EventScript_GuardTriggerTop::
# 9 "data/maps/Route8_WestEntrance/scripts.pory"
	lockall
# 10 "data/maps/Route8_WestEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 11 "data/maps/Route8_WestEntrance/scripts.pory"
	goto Route8_WestEntrance_EventScript_GuardTrigger
	end


Route8_WestEntrance_EventScript_GuardTriggerMid::
# 16 "data/maps/Route8_WestEntrance/scripts.pory"
	lockall
# 17 "data/maps/Route8_WestEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/Route8_WestEntrance/scripts.pory"
	goto Route8_WestEntrance_EventScript_GuardTrigger
	end


Route8_WestEntrance_EventScript_GuardTriggerBottom::
# 23 "data/maps/Route8_WestEntrance/scripts.pory"
	lockall
# 24 "data/maps/Route8_WestEntrance/scripts.pory"
	setvar VAR_TEMP_1, 2
# 25 "data/maps/Route8_WestEntrance/scripts.pory"
	goto Route8_WestEntrance_EventScript_GuardTrigger
	end


Route8_WestEntrance_EventScript_GuardTrigger::
# 30 "data/maps/Route8_WestEntrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 31 "data/maps/Route8_WestEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 32 "data/maps/Route8_WestEntrance/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route8_WestEntrance/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route8_WestEntrance_EventScript_GiveTea
# 34 "data/maps/Route8_WestEntrance/scripts.pory"
	msgbox Route8_WestEntrance_Text_ThirstyOnGuardDuty
# 35 "data/maps/Route8_WestEntrance/scripts.pory"
	closemessage
# 36 "data/maps/Route8_WestEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route8_WestEntrance_Movement_BlockPlayerEntry
# 37 "data/maps/Route8_WestEntrance/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route8_WestEntrance/scripts.pory"
	releaseall
	end


Route8_WestEntrance_EventScript_GiveTea::
# 43 "data/maps/Route8_WestEntrance/scripts.pory"
	removeitem ITEM_TEA
# 44 "data/maps/Route8_WestEntrance/scripts.pory"
	goto Route8_WestEntrance_EventScript_GuardDrinkTea
	end


Route8_WestEntrance_EventScript_GiveSodaPop::
# 50 "data/maps/Route8_WestEntrance/scripts.pory"
	removeitem ITEM_SODA_POP
# 51 "data/maps/Route8_WestEntrance/scripts.pory"
	goto Route8_WestEntrance_EventScript_GuardDrinkTea
	end


Route8_WestEntrance_EventScript_GiveLemonade::
# 57 "data/maps/Route8_WestEntrance/scripts.pory"
	removeitem ITEM_LEMONADE
# 58 "data/maps/Route8_WestEntrance/scripts.pory"
	goto Route8_WestEntrance_EventScript_GuardDrinkTea
	end


Route8_WestEntrance_EventScript_GuardDrinkTea::
# 63 "data/maps/Route8_WestEntrance/scripts.pory"
	msgbox Route8_WestEntrance_Text_ThatTeaLooksTasty
# 64 "data/maps/Route8_WestEntrance/scripts.pory"
	closemessage
# 65 "data/maps/Route8_WestEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route8_WestEntrance_EventScript_WalkToGuardTop
# 66 "data/maps/Route8_WestEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route8_WestEntrance_EventScript_WalkToGuardMid
# 67 "data/maps/Route8_WestEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route8_WestEntrance_EventScript_WalkToGuardBottom
# 68 "data/maps/Route8_WestEntrance/scripts.pory"
	msgbox Route8_WestEntrance_Text_ThanksIllShareTeaWithGuards
# 69 "data/maps/Route8_WestEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 70 "data/maps/Route8_WestEntrance/scripts.pory"
	releaseall
	end


Route8_WestEntrance_EventScript_WalkToGuardTop::
# 75 "data/maps/Route8_WestEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route8_WestEntrance_Movement_WalkToGuardTop
# 76 "data/maps/Route8_WestEntrance/scripts.pory"
	waitmovement 0
	return


Route8_WestEntrance_EventScript_WalkToGuardMid::
# 81 "data/maps/Route8_WestEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route8_WestEntrance_Movement_WalkToGuardMid
# 82 "data/maps/Route8_WestEntrance/scripts.pory"
	waitmovement 0
	return


Route8_WestEntrance_EventScript_WalkToGuardBottom::
# 87 "data/maps/Route8_WestEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route8_WestEntrance_Movement_WalkToGuardBottom
# 88 "data/maps/Route8_WestEntrance/scripts.pory"
	waitmovement 0
	return


# 92 "data/maps/Route8_WestEntrance/scripts.pory"
Route8_WestEntrance_Movement_WalkToGuardMid::
# 93 "data/maps/Route8_WestEntrance/scripts.pory"
	walk_up
# 94 "data/maps/Route8_WestEntrance/scripts.pory"
	step_end

# 97 "data/maps/Route8_WestEntrance/scripts.pory"
Route8_WestEntrance_Movement_WalkToGuardBottom::
# 98 "data/maps/Route8_WestEntrance/scripts.pory"
	walk_up
# 99 "data/maps/Route8_WestEntrance/scripts.pory"
	walk_up
# 100 "data/maps/Route8_WestEntrance/scripts.pory"
	step_end

# 103 "data/maps/Route8_WestEntrance/scripts.pory"
Route8_WestEntrance_Movement_WalkToGuardTop::
# 104 "data/maps/Route8_WestEntrance/scripts.pory"
	walk_in_place_up
# 105 "data/maps/Route8_WestEntrance/scripts.pory"
	step_end

# 108 "data/maps/Route8_WestEntrance/scripts.pory"
Route8_WestEntrance_Movement_BlockPlayerEntry::
# 109 "data/maps/Route8_WestEntrance/scripts.pory"
	walk_right
# 110 "data/maps/Route8_WestEntrance/scripts.pory"
	step_end
