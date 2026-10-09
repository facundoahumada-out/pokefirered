CinnabarIsland_PokemonCenter_1F_MapScripts::
# 2 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonCenter_1F_OnTransition
# 3 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


CinnabarIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
	end


CinnabarIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	release
	end


CinnabarIsland_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_VisitUnionRoom, MSGBOX_NPC
	end


CinnabarIsland_PokemonCenter_1F_EventScript_CooltrainerF::
# 25 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_CinnabarGymLocked, MSGBOX_NPC
	end


CinnabarIsland_PokemonCenter_1F_EventScript_Youngster::
# 30 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_EvolutionCanWaitForNewMoves, MSGBOX_NPC
	end


CinnabarIsland_PokemonCenter_1F_EventScript_Bill::
# 35 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	lock
# 36 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 37 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_ReadyToSailToOneIsland, MSGBOX_YESNO
# 38 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonCenter_1F_EventScript_NotReadyToSail
# 39 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_LetsGo
# 40 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 41 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	playbgm MUS_FOLLOW_ME, 1
# 42 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 43 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 44 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 45 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay 20
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillSouth
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillEast
# 48 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillWest
# 49 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_CINNABAR_POKEMON_CENTER_BILL
# 50 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1
# 51 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 52 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	warp MAP_CINNABAR_ISLAND, 14, 11
# 53 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	waitstate
# 54 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	release
	end


CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillSouth::
# 59 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExit
# 60 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitSouth
# 61 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillEast::
# 66 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast
# 67 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast
# 68 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillWest::
# 73 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExit
# 74 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitWest
# 75 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_PokemonCenter_1F_EventScript_NotReadyToSail::
# 80 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_OhNotDoneYet
# 81 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	release
	end


# 85 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_BillExit::
# 86 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 87 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 88 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 89 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 90 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 91 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 92 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 93 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 94 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	set_invisible
# 95 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 98 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitSouth::
# 99 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 100 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 101 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 102 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 103 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 104 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 105 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 106 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 107 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 108 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 111 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast::
# 112 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 113 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 114 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 115 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 116 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 117 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 118 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 119 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 120 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 121 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 122 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	set_invisible
# 123 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 126 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast::
# 127 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 128 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 129 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 130 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	face_left
# 131 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 132 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 133 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 134 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 135 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 136 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 137 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 138 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 139 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 140 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	set_invisible
# 141 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 144 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitWest::
# 145 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 146 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 147 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 148 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 149 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 150 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 151 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 152 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 153 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 154 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end
