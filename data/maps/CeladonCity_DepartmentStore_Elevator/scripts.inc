CeladonCity_DepartmentStore_Elevator_MapScripts::
	.byte 0


CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect::
# 4 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	lockall
# 5 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setvar VAR_0x8004, 3
# 6 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	call_if_unset FLAG_TEMP_2, EventScript_GetElevatorFloor
# 7 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 8 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 9 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	message Text_WantWhichFloor
# 10 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	waitmessage
# 11 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setvar VAR_0x8004, 3
# 12 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 13 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 14 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom5F
# 15 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom4F
# 16 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom3F
# 17 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 3, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom2F
# 18 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 4, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom1F
	end


CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom5F::
# 23 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTICHOICE_DEPT_STORE_ELEVATOR, 0, FALSE
# 24 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor
	end


CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom4F::
# 29 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTICHOICE_DEPT_STORE_ELEVATOR, 1, FALSE
# 30 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor
	end


CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom3F::
# 35 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTICHOICE_DEPT_STORE_ELEVATOR, 2, FALSE
# 36 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor
	end


CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom2F::
# 41 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTICHOICE_DEPT_STORE_ELEVATOR, 3, FALSE
# 42 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor
	end


CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom1F::
# 47 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTICHOICE_DEPT_STORE_ELEVATOR, 4, FALSE
# 48 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor
	end


CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor::
# 53 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 54 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_DepartmentStore_Elevator_EventScript_To5F
# 55 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_DepartmentStore_Elevator_EventScript_To4F
# 56 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_DepartmentStore_Elevator_EventScript_To3F
# 57 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 3, CeladonCity_DepartmentStore_Elevator_EventScript_To2F
# 58 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 4, CeladonCity_DepartmentStore_Elevator_EventScript_To1F
# 59 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 5, CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 60 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
	end


CeladonCity_DepartmentStore_Elevator_EventScript_To1F::
# 65 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setvar VAR_0x8006, 4
# 66 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_1F, 255, 6, 1
# 67 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 4, CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 68 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	call CeladonCity_DepartmentStore_Elevator_EventScript_MoveElevator
# 69 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 4
# 70 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
	end


CeladonCity_DepartmentStore_Elevator_EventScript_To2F::
# 75 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setvar VAR_0x8006, 5
# 76 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_2F, 255, 6, 1
# 77 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 5, CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 78 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	call CeladonCity_DepartmentStore_Elevator_EventScript_MoveElevator
# 79 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 5
# 80 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
	end


CeladonCity_DepartmentStore_Elevator_EventScript_To3F::
# 85 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setvar VAR_0x8006, 6
# 86 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_3F, 255, 6, 1
# 87 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 6, CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 88 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	call CeladonCity_DepartmentStore_Elevator_EventScript_MoveElevator
# 89 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 6
# 90 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
	end


CeladonCity_DepartmentStore_Elevator_EventScript_To4F::
# 95 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setvar VAR_0x8006, 7
# 96 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_4F, 255, 6, 1
# 97 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 7, CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 98 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	call CeladonCity_DepartmentStore_Elevator_EventScript_MoveElevator
# 99 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 7
# 100 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
	end


CeladonCity_DepartmentStore_Elevator_EventScript_To5F::
# 105 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setvar VAR_0x8006, 8
# 106 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_5F, 255, 6, 1
# 107 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 8, CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 108 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	call CeladonCity_DepartmentStore_Elevator_EventScript_MoveElevator
# 109 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 8
# 110 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
	end


CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect::
# 115 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 116 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	releaseall
	end


CeladonCity_DepartmentStore_Elevator_EventScript_MoveElevator::
# 121 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 122 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	closemessage
# 123 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	waitse
# 124 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	special AnimateElevator
# 125 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	waitstate
# 126 "data/maps/CeladonCity_DepartmentStore_Elevator/scripts.pory"
	setflag FLAG_TEMP_2
	return

