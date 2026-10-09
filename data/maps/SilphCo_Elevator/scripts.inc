SilphCo_Elevator_MapScripts::
	.byte 0


SilphCo_Elevator_EventScript_FloorSelect::
# 4 "data/maps/SilphCo_Elevator/scripts.pory"
	lockall
# 5 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_0x8004, 1
# 6 "data/maps/SilphCo_Elevator/scripts.pory"
	call_if_unset FLAG_TEMP_2, EventScript_GetElevatorFloor
# 7 "data/maps/SilphCo_Elevator/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 8 "data/maps/SilphCo_Elevator/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 9 "data/maps/SilphCo_Elevator/scripts.pory"
	message Text_WantWhichFloor
# 10 "data/maps/SilphCo_Elevator/scripts.pory"
	waitmessage
# 11 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_0x8004, LISTMENU_SILPHCO_FLOORS
# 12 "data/maps/SilphCo_Elevator/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 13 "data/maps/SilphCo_Elevator/scripts.pory"
	special ListMenu
# 14 "data/maps/SilphCo_Elevator/scripts.pory"
	waitstate
# 15 "data/maps/SilphCo_Elevator/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 16 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 0, SilphCo_Elevator_EventScript_To11F
# 17 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 1, SilphCo_Elevator_EventScript_To10F
# 18 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 2, SilphCo_Elevator_EventScript_To9F
# 19 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 3, SilphCo_Elevator_EventScript_To8F
# 20 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 4, SilphCo_Elevator_EventScript_To7F
# 21 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 5, SilphCo_Elevator_EventScript_To6F
# 22 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 6, SilphCo_Elevator_EventScript_To5F
# 23 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 7, SilphCo_Elevator_EventScript_To4F
# 24 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 8, SilphCo_Elevator_EventScript_To3F
# 25 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 9, SilphCo_Elevator_EventScript_To2F
# 26 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 10, SilphCo_Elevator_EventScript_To1F
# 27 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 11, SilphCo_Elevator_EventScript_ExitFloorSelect
# 28 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 127, SilphCo_Elevator_EventScript_ExitFloorSelect
	end


SilphCo_Elevator_EventScript_To1F::
# 33 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_0x8006, 4
# 34 "data/maps/SilphCo_Elevator/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_1F, 255, 22, 3
# 35 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 4, SilphCo_Elevator_EventScript_ExitFloorSelect
# 36 "data/maps/SilphCo_Elevator/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 37 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 4
# 38 "data/maps/SilphCo_Elevator/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end


SilphCo_Elevator_EventScript_To2F::
# 43 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_0x8006, 5
# 44 "data/maps/SilphCo_Elevator/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_2F, 255, 22, 3
# 45 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 5, SilphCo_Elevator_EventScript_ExitFloorSelect
# 46 "data/maps/SilphCo_Elevator/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 47 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 5
# 48 "data/maps/SilphCo_Elevator/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end


SilphCo_Elevator_EventScript_To3F::
# 53 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_0x8006, 6
# 54 "data/maps/SilphCo_Elevator/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_3F, 255, 22, 3
# 55 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 6, SilphCo_Elevator_EventScript_ExitFloorSelect
# 56 "data/maps/SilphCo_Elevator/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 57 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 6
# 58 "data/maps/SilphCo_Elevator/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end


SilphCo_Elevator_EventScript_To4F::
# 63 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_0x8006, 7
# 64 "data/maps/SilphCo_Elevator/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_4F, 255, 22, 3
# 65 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 7, SilphCo_Elevator_EventScript_ExitFloorSelect
# 66 "data/maps/SilphCo_Elevator/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 67 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 7
# 68 "data/maps/SilphCo_Elevator/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end


SilphCo_Elevator_EventScript_To5F::
# 73 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_0x8006, 8
# 74 "data/maps/SilphCo_Elevator/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_5F, 255, 22, 3
# 75 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 8, SilphCo_Elevator_EventScript_ExitFloorSelect
# 76 "data/maps/SilphCo_Elevator/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 77 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 8
# 78 "data/maps/SilphCo_Elevator/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end


SilphCo_Elevator_EventScript_To6F::
# 83 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_0x8006, 9
# 84 "data/maps/SilphCo_Elevator/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_6F, 255, 20, 3
# 85 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 9, SilphCo_Elevator_EventScript_ExitFloorSelect
# 86 "data/maps/SilphCo_Elevator/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 87 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 9
# 88 "data/maps/SilphCo_Elevator/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end


SilphCo_Elevator_EventScript_To7F::
# 93 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_0x8006, 10
# 94 "data/maps/SilphCo_Elevator/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_7F, 255, 23, 3
# 95 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 10, SilphCo_Elevator_EventScript_ExitFloorSelect
# 96 "data/maps/SilphCo_Elevator/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 97 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 10
# 98 "data/maps/SilphCo_Elevator/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end


SilphCo_Elevator_EventScript_To8F::
# 103 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_0x8006, 11
# 104 "data/maps/SilphCo_Elevator/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_8F, 255, 22, 3
# 105 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 11, SilphCo_Elevator_EventScript_ExitFloorSelect
# 106 "data/maps/SilphCo_Elevator/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 107 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 11
# 108 "data/maps/SilphCo_Elevator/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end


SilphCo_Elevator_EventScript_To9F::
# 113 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_0x8006, 12
# 114 "data/maps/SilphCo_Elevator/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_9F, 255, 24, 3
# 115 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 12, SilphCo_Elevator_EventScript_ExitFloorSelect
# 116 "data/maps/SilphCo_Elevator/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 117 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 12
# 118 "data/maps/SilphCo_Elevator/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end


SilphCo_Elevator_EventScript_To10F::
# 123 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_0x8006, 13
# 124 "data/maps/SilphCo_Elevator/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_10F, 255, 13, 3
# 125 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 13, SilphCo_Elevator_EventScript_ExitFloorSelect
# 126 "data/maps/SilphCo_Elevator/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 127 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 13
# 128 "data/maps/SilphCo_Elevator/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end


SilphCo_Elevator_EventScript_To11F::
# 133 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_0x8006, 14
# 134 "data/maps/SilphCo_Elevator/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_11F, 255, 13, 3
# 135 "data/maps/SilphCo_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 14, SilphCo_Elevator_EventScript_ExitFloorSelect
# 136 "data/maps/SilphCo_Elevator/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 137 "data/maps/SilphCo_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 14
# 138 "data/maps/SilphCo_Elevator/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end


SilphCo_Elevator_EventScript_ExitFloorSelect::
# 143 "data/maps/SilphCo_Elevator/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 144 "data/maps/SilphCo_Elevator/scripts.pory"
	releaseall
	end


SilphCo_Elevator_EventScript_MoveElevator::
# 149 "data/maps/SilphCo_Elevator/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 150 "data/maps/SilphCo_Elevator/scripts.pory"
	closemessage
# 151 "data/maps/SilphCo_Elevator/scripts.pory"
	waitse
# 152 "data/maps/SilphCo_Elevator/scripts.pory"
	special AnimateElevator
# 153 "data/maps/SilphCo_Elevator/scripts.pory"
	waitstate
# 154 "data/maps/SilphCo_Elevator/scripts.pory"
	setflag FLAG_TEMP_2
	return

