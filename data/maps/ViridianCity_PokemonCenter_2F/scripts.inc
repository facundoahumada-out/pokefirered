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
	msgbox ViridianCity_PokemonCenter_2F_Text_Callout
# 32 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	closemessage
# 33 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_PokemonCenter_2F_Movement_WalkToCounter
# 34 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	waitmovement 0
# 35 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Welcome1
# 36 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Welcome2
# 37 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Welcome3
# 38 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Welcome4
# 39 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	setflag FLAG_CP_2F_WELCOME_DONE
# 40 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	releaseall
	end


# 44 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
ViridianCity_PokemonCenter_2F_Movement_WalkToCounter:
# 45 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_right
# 46 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_right
# 47 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_right
# 48 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_right
# 49 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_up
# 50 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_up
# 51 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	walk_in_place_faster_up
# 52 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	step_end

ViridianCity_PokemonCenter_2F_EventScript_Obj1::
# 59 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	lock
# 60 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	faceplayer
# 61 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1Greeting
# 62 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	multichoice 0, 0, MULTICHOICE_SERVICE_CORNER, FALSE
# 63 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	switch VAR_RESULT
# 64 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	case 0, ViridianCity_PokemonCenter_2F_EventScript_Obj1_3
# 66 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	case 1, ViridianCity_PokemonCenter_2F_EventScript_Obj1_4
# 69 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye
ViridianCity_PokemonCenter_2F_EventScript_Obj1_1:
	end

ViridianCity_PokemonCenter_2F_EventScript_Obj1_3:
# 65 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto ViridianCity_PokemonCenter_2F_EventScript_RememberMoves
	goto ViridianCity_PokemonCenter_2F_EventScript_Obj1_1

ViridianCity_PokemonCenter_2F_EventScript_Obj1_4:
# 67 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto ViridianCity_PokemonCenter_2F_EventScript_ChangeAbility
	goto ViridianCity_PokemonCenter_2F_EventScript_Obj1_1


ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye::
# 75 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1Bye
# 76 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_RememberMoves::
# 82 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1WhichMon
# 83 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special ChooseMonForMoveRelearner
# 84 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	waitstate
# 85 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye
# 86 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special IsSelectedMonEgg
# 87 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ViridianCity_PokemonCenter_2F_EventScript_CantEgg
# 88 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_0x8005, 0, ViridianCity_PokemonCenter_2F_EventScript_NoMoves
# 89 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto ViridianCity_PokemonCenter_2F_EventScript_TeachMove
	end


ViridianCity_PokemonCenter_2F_EventScript_TeachMove::
# 94 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1TeachWhichMove
# 95 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special TeachMoveRelearnerMove
# 96 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	waitstate
# 97 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 0, ViridianCity_PokemonCenter_2F_EventScript_RememberMoves
# 98 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1Bye
# 99 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_NoMoves::
# 104 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1NoMoves
# 105 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_CantEgg::
# 110 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1CantEgg
# 111 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_ChangeAbility::
# 117 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1WhichMon
# 118 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special ChoosePartyMon
# 119 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	waitstate
# 120 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye
# 121 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special IsSelectedMonEgg
# 122 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ViridianCity_PokemonCenter_2F_EventScript_CantEgg
# 123 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special BufferMonAbilityName
# 124 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1CurrentAbility, MSGBOX_YESNO
# 125 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye
# 126 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special CycleMonAbility
# 127 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_PokemonCenter_2F_EventScript_OnlyOneAbility
# 128 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1AbilityChanged
# 129 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_OnlyOneAbility::
# 134 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1OnlyOneAbility
# 135 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_Obj2::
# 143 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	lock
# 144 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	faceplayer
# 145 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague
# 146 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj2PreLeague
# 147 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague::
# 152 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj2PostLeague, MSGBOX_YESNO
# 153 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague_2
ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague_1:
# 156 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end

ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague_2:
# 154 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto EventScript_StatEditor
	goto ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague_1


ViridianCity_PokemonCenter_2F_EventScript_Colosseum::
# 162 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
	end


ViridianCity_PokemonCenter_2F_EventScript_TradeCenter::
# 167 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
	end


ViridianCity_PokemonCenter_2F_EventScript_RecordCorner::
# 172 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
	end

