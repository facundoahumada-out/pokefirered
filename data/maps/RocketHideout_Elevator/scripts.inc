RocketHideout_Elevator_MapScripts::
	.byte 0


RocketHideout_Elevator_EventScript_FloorSelect::
# 4 "data/maps/RocketHideout_Elevator/scripts.pory"
	lockall
# 5 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto_if_unset FLAG_CAN_USE_ROCKET_HIDEOUT_LIFT, RocketHideout_Elevator_EventScript_NeedKey
# 6 "data/maps/RocketHideout_Elevator/scripts.pory"
	setvar VAR_0x8004, 2
# 7 "data/maps/RocketHideout_Elevator/scripts.pory"
	call_if_unset FLAG_TEMP_2, EventScript_GetElevatorFloor
# 8 "data/maps/RocketHideout_Elevator/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 9 "data/maps/RocketHideout_Elevator/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 10 "data/maps/RocketHideout_Elevator/scripts.pory"
	message Text_WantWhichFloor
# 11 "data/maps/RocketHideout_Elevator/scripts.pory"
	waitmessage
# 12 "data/maps/RocketHideout_Elevator/scripts.pory"
	setvar VAR_0x8004, 2
# 13 "data/maps/RocketHideout_Elevator/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 14 "data/maps/RocketHideout_Elevator/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 15 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 0, RocketHideout_Elevator_EventScript_FloorSelectFromB1F
# 16 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 1, RocketHideout_Elevator_EventScript_FloorSelectFromB2F
# 17 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 2, RocketHideout_Elevator_EventScript_FloorSelectFromB4F
	end


RocketHideout_Elevator_EventScript_FloorSelectFromB1F::
# 22 "data/maps/RocketHideout_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTICHOICE_ROCKET_HIDEOUT_ELEVATOR, 0, FALSE
# 23 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ChooseFloor
	end


RocketHideout_Elevator_EventScript_FloorSelectFromB2F::
# 28 "data/maps/RocketHideout_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTICHOICE_ROCKET_HIDEOUT_ELEVATOR, 1, FALSE
# 29 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ChooseFloor
	end


RocketHideout_Elevator_EventScript_FloorSelectFromB4F::
# 34 "data/maps/RocketHideout_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTICHOICE_ROCKET_HIDEOUT_ELEVATOR, 2, FALSE
# 35 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ChooseFloor
	end


RocketHideout_Elevator_EventScript_ChooseFloor::
# 40 "data/maps/RocketHideout_Elevator/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 41 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 0, RocketHideout_Elevator_EventScript_ToB1F
# 42 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 1, RocketHideout_Elevator_EventScript_ToB2F
# 43 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 2, RocketHideout_Elevator_EventScript_ToB4F
# 44 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 3, RocketHideout_Elevator_EventScript_ExitFloorSelect
# 45 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 127, RocketHideout_Elevator_EventScript_ExitFloorSelect
	end


RocketHideout_Elevator_EventScript_ToB1F::
# 50 "data/maps/RocketHideout_Elevator/scripts.pory"
	setvar VAR_0x8006, 3
# 51 "data/maps/RocketHideout_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_HIDEOUT_B1F, 255, 24, 25
# 52 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 3, RocketHideout_Elevator_EventScript_ExitFloorSelect
# 53 "data/maps/RocketHideout_Elevator/scripts.pory"
	call RocketHideout_Elevator_EventScript_MoveElevator
# 54 "data/maps/RocketHideout_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 3
# 55 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end


RocketHideout_Elevator_EventScript_ToB2F::
# 60 "data/maps/RocketHideout_Elevator/scripts.pory"
	setvar VAR_0x8006, 2
# 61 "data/maps/RocketHideout_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_HIDEOUT_B2F, 255, 28, 16
# 62 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 2, RocketHideout_Elevator_EventScript_ExitFloorSelect
# 63 "data/maps/RocketHideout_Elevator/scripts.pory"
	call RocketHideout_Elevator_EventScript_MoveElevator
# 64 "data/maps/RocketHideout_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 2
# 65 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end


RocketHideout_Elevator_EventScript_ToB4F::
# 70 "data/maps/RocketHideout_Elevator/scripts.pory"
	setvar VAR_0x8006, 0
# 71 "data/maps/RocketHideout_Elevator/scripts.pory"
	setdynamicwarp MAP_ROCKET_HIDEOUT_B4F, 255, 20, 23
# 72 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 0, RocketHideout_Elevator_EventScript_ExitFloorSelect
# 73 "data/maps/RocketHideout_Elevator/scripts.pory"
	call RocketHideout_Elevator_EventScript_MoveElevator
# 74 "data/maps/RocketHideout_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 0
# 75 "data/maps/RocketHideout_Elevator/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end


RocketHideout_Elevator_EventScript_ExitFloorSelect::
# 80 "data/maps/RocketHideout_Elevator/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 81 "data/maps/RocketHideout_Elevator/scripts.pory"
	releaseall
	end


RocketHideout_Elevator_EventScript_MoveElevator::
# 86 "data/maps/RocketHideout_Elevator/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 87 "data/maps/RocketHideout_Elevator/scripts.pory"
	closemessage
# 88 "data/maps/RocketHideout_Elevator/scripts.pory"
	waitse
# 89 "data/maps/RocketHideout_Elevator/scripts.pory"
	special AnimateElevator
# 90 "data/maps/RocketHideout_Elevator/scripts.pory"
	waitstate
# 91 "data/maps/RocketHideout_Elevator/scripts.pory"
	setflag FLAG_TEMP_2
	return


RocketHideout_Elevator_EventScript_NeedKey::
# 96 "data/maps/RocketHideout_Elevator/scripts.pory"
	msgbox RocketHideout_Elevator_Text_AppearsToNeedAKey
# 97 "data/maps/RocketHideout_Elevator/scripts.pory"
	releaseall
	end

