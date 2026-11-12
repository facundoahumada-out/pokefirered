ViridianCity_PokemonCenter_2F_MapScripts::
# 2 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ViridianCity_PokemonCenter_2F_OnFrame
# 3 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 4 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 5 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
	.byte 0


# 8 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_OnFrame:
# 10 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, ViridianCity_PokemonCenter_2F_EventScript_WelcomeCheck
# 11 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1, CableClub_EventScript_Tutorial
# 12 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_SINGLE_BATTLE, CableClub_EventScript_ExitLinkRoom
# 13 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_DOUBLE_BATTLE, CableClub_EventScript_ExitLinkRoom
# 14 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MULTI_BATTLE, CableClub_EventScript_ExitLinkRoom
# 15 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_TRADE_CENTER, CableClub_EventScript_ExitTradeCenter
# 16 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_UNION_ROOM, CableClub_EventScript_ExitUnionRoom
# 17 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_BERRY_CRUSH, CableClub_EventScript_ExitLinkRoom
# 18 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
# 19 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	.2byte 0

ViridianCity_PokemonCenter_2F_EventScript_WelcomeCheck::
# 26 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 27 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_set FLAG_CP_2F_WELCOME_DONE, EventScript_Return
# 28 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	lockall
# 29 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 30 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	waitmovement 0
# 31 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_WelcomeCallOver
# 32 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	closemessage
# 33 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_PokemonCenter_2F_Movement_WalkToCounter
# 34 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	waitmovement 0
# 35 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Welcome
# 36 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	setflag FLAG_CP_2F_WELCOME_DONE
# 37 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	releaseall
	end


# 41 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_Movement_WalkToCounter:
# 42 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_right
# 43 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_right
# 44 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_right
# 45 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_right
# 46 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_up
# 47 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_up
# 48 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_in_place_faster_up
# 49 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	step_end

ViridianCity_PokemonCenter_2F_EventScript_Obj1::
# 56 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	lock
# 57 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	faceplayer
# 58 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1Greeting
# 59 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	multichoice 0, 0, MULTICHOICE_SERVICE_CORNER, FALSE
# 60 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	switch VAR_RESULT
# 61 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	case 0, ViridianCity_PokemonCenter_2F_EventScript_Obj1_3
# 63 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	case 1, ViridianCity_PokemonCenter_2F_EventScript_Obj1_4
# 66 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye
ViridianCity_PokemonCenter_2F_EventScript_Obj1_1:
	end

ViridianCity_PokemonCenter_2F_EventScript_Obj1_3:
# 62 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto ViridianCity_PokemonCenter_2F_EventScript_RememberMoves
	goto ViridianCity_PokemonCenter_2F_EventScript_Obj1_1

ViridianCity_PokemonCenter_2F_EventScript_Obj1_4:
# 64 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto ViridianCity_PokemonCenter_2F_EventScript_ChangeAbility
	goto ViridianCity_PokemonCenter_2F_EventScript_Obj1_1


ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye::
# 72 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1Bye
# 73 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_RememberMoves::
# 79 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1WhichMon
# 80 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special ChooseMonForMoveRelearner
# 81 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	waitstate
# 82 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye
# 83 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special IsSelectedMonEgg
# 84 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ViridianCity_PokemonCenter_2F_EventScript_CantEgg
# 85 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_0x8005, 0, ViridianCity_PokemonCenter_2F_EventScript_NoMoves
# 86 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto ViridianCity_PokemonCenter_2F_EventScript_TeachMove
	end


ViridianCity_PokemonCenter_2F_EventScript_TeachMove::
# 91 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1TeachWhichMove
# 92 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special TeachMoveRelearnerMove
# 93 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	waitstate
# 94 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 0, ViridianCity_PokemonCenter_2F_EventScript_RememberMoves
# 95 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1Bye
# 96 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_NoMoves::
# 101 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1NoMoves
# 102 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_CantEgg::
# 107 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1CantEgg
# 108 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_ChangeAbility::
# 114 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1WhichMon
# 115 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special ChoosePartyMon
# 116 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	waitstate
# 117 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye
# 118 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special IsSelectedMonEgg
# 119 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ViridianCity_PokemonCenter_2F_EventScript_CantEgg
# 120 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special BufferMonAbilityName
# 121 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1CurrentAbility, MSGBOX_YESNO
# 122 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye
# 123 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special CycleMonAbility
# 124 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_PokemonCenter_2F_EventScript_OnlyOneAbility
# 125 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1AbilityChanged
# 126 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_OnlyOneAbility::
# 131 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1OnlyOneAbility
# 132 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_Obj2::
# 140 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	lock
# 141 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	faceplayer
# 142 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague
# 143 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj2PreLeague
# 144 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague::
# 149 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj2PostLeague, MSGBOX_YESNO
# 150 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague_2
ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague_1:
# 153 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end

ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague_2:
# 151 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto EventScript_StatEditor
	goto ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague_1


ViridianCity_PokemonCenter_2F_EventScript_Colosseum::
# 159 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
	end


ViridianCity_PokemonCenter_2F_EventScript_TradeCenter::
# 164 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
	end


ViridianCity_PokemonCenter_2F_EventScript_RecordCorner::
# 169 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
	end

