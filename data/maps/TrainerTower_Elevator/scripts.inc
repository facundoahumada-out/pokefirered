TrainerTower_Elevator_MapScripts::
# 2 "data/maps/TrainerTower_Elevator/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerTower_OnResume
# 3 "data/maps/TrainerTower_Elevator/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerTower_OnFrame
	.byte 0


TrainerTower_Elevator_EventScript_FloorSelect::
# 7 "data/maps/TrainerTower_Elevator/scripts.pory"
	lockall
# 8 "data/maps/TrainerTower_Elevator/scripts.pory"
	setvar VAR_0x8004, 6
# 9 "data/maps/TrainerTower_Elevator/scripts.pory"
	call_if_unset FLAG_TEMP_2, EventScript_GetElevatorFloor
# 10 "data/maps/TrainerTower_Elevator/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 11 "data/maps/TrainerTower_Elevator/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 12 "data/maps/TrainerTower_Elevator/scripts.pory"
	message Text_WantWhichFloor
# 13 "data/maps/TrainerTower_Elevator/scripts.pory"
	waitmessage
# 14 "data/maps/TrainerTower_Elevator/scripts.pory"
	setvar VAR_0x8004, 6
# 15 "data/maps/TrainerTower_Elevator/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 16 "data/maps/TrainerTower_Elevator/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 17 "data/maps/TrainerTower_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 0, TrainerTower_Elevator_EventScript_FloorSelectFromRoof
# 18 "data/maps/TrainerTower_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 1, TrainerTower_Elevator_EventScript_FloorSelectFromLobby
	end


TrainerTower_Elevator_EventScript_FloorSelectFromRoof::
# 23 "data/maps/TrainerTower_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTICHOICE_ROOFTOP_B1F, 0, FALSE
# 24 "data/maps/TrainerTower_Elevator/scripts.pory"
	goto TrainerTower_Elevator_EventScript_ChooseFloor
	end


TrainerTower_Elevator_EventScript_FloorSelectFromLobby::
# 29 "data/maps/TrainerTower_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTICHOICE_ROOFTOP_B1F, 1, FALSE
# 30 "data/maps/TrainerTower_Elevator/scripts.pory"
	goto TrainerTower_Elevator_EventScript_ChooseFloor
	end


TrainerTower_Elevator_EventScript_ChooseFloor::
# 35 "data/maps/TrainerTower_Elevator/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 36 "data/maps/TrainerTower_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 0, TrainerTower_Elevator_EventScript_SelectRoof
# 37 "data/maps/TrainerTower_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 1, TrainerTower_Elevator_EventScript_SelectLobby
# 38 "data/maps/TrainerTower_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, 2, TrainerTower_Elevator_EventScript_CloseFloorSelect
# 39 "data/maps/TrainerTower_Elevator/scripts.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, TrainerTower_Elevator_EventScript_CloseFloorSelect
	end


TrainerTower_Elevator_EventScript_SelectLobby::
# 44 "data/maps/TrainerTower_Elevator/scripts.pory"
	setvar VAR_0x8006, 3
# 45 "data/maps/TrainerTower_Elevator/scripts.pory"
	setdynamicwarp MAP_TRAINER_TOWER_LOBBY, 17, 8
# 46 "data/maps/TrainerTower_Elevator/scripts.pory"
	goto_if_eq VAR_ELEVATOR_FLOOR, 3, TrainerTower_Elevator_EventScript_CloseFloorSelect
# 47 "data/maps/TrainerTower_Elevator/scripts.pory"
	call TrainerTower_Elevator_EventScript_MoveElevator
# 48 "data/maps/TrainerTower_Elevator/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 3
# 49 "data/maps/TrainerTower_Elevator/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 50 "data/maps/TrainerTower_Elevator/scripts.pory"
	delay 25
# 51 "data/maps/TrainerTower_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Elevator_Movement_ExitElevator
# 52 "data/maps/TrainerTower_Elevator/scripts.pory"
	waitmovement 0
# 53 "data/maps/TrainerTower_Elevator/scripts.pory"
	warp MAP_TRAINER_TOWER_LOBBY, 17, 8
# 54 "data/maps/TrainerTower_Elevator/scripts.pory"
	waitstate
# 55 "data/maps/TrainerTower_Elevator/scripts.pory"
	releaseall
	end


TrainerTower_Elevator_EventScript_SelectRoof::
# 60 "data/maps/TrainerTower_Elevator/scripts.pory"
	goto TrainerTower_Elevator_EventScript_CloseFloorSelect
	end


TrainerTower_Elevator_EventScript_CloseFloorSelect::
# 65 "data/maps/TrainerTower_Elevator/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 66 "data/maps/TrainerTower_Elevator/scripts.pory"
	releaseall
	end


TrainerTower_Elevator_EventScript_MoveElevator::
# 71 "data/maps/TrainerTower_Elevator/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 72 "data/maps/TrainerTower_Elevator/scripts.pory"
	closemessage
# 73 "data/maps/TrainerTower_Elevator/scripts.pory"
	waitse
# 74 "data/maps/TrainerTower_Elevator/scripts.pory"
	special AnimateElevator
# 75 "data/maps/TrainerTower_Elevator/scripts.pory"
	waitstate
# 76 "data/maps/TrainerTower_Elevator/scripts.pory"
	setflag FLAG_TEMP_2
	return


# 80 "data/maps/TrainerTower_Elevator/scripts.pory"
TrainerTower_Elevator_Movement_ExitElevator::
# 81 "data/maps/TrainerTower_Elevator/scripts.pory"
	walk_in_place_faster_down
# 82 "data/maps/TrainerTower_Elevator/scripts.pory"
	delay_16
# 83 "data/maps/TrainerTower_Elevator/scripts.pory"
	walk_down
# 84 "data/maps/TrainerTower_Elevator/scripts.pory"
	walk_right
# 85 "data/maps/TrainerTower_Elevator/scripts.pory"
	walk_right
# 86 "data/maps/TrainerTower_Elevator/scripts.pory"
	walk_down
# 87 "data/maps/TrainerTower_Elevator/scripts.pory"
	step_end
