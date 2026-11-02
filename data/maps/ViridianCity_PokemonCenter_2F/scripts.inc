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
	msgbox ViridianCity_PokemonCenter_2F_Text_Welcome1
# 32 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Welcome2
# 33 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Welcome3
# 34 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Welcome4
# 35 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	setflag FLAG_CP_2F_WELCOME_DONE
# 36 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	releaseall
	end


ViridianCity_PokemonCenter_2F_EventScript_Obj1::
# 44 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	lock
# 45 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	faceplayer
# 46 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1Greeting
# 47 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	multichoice 0, 0, MULTICHOICE_SERVICE_CORNER, FALSE
# 48 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	case 0, ViridianCity_PokemonCenter_2F_EventScript_Obj1_3
# 51 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	case 1, ViridianCity_PokemonCenter_2F_EventScript_Obj1_4
# 54 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye
ViridianCity_PokemonCenter_2F_EventScript_Obj1_1:
	end

ViridianCity_PokemonCenter_2F_EventScript_Obj1_3:
# 50 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto ViridianCity_PokemonCenter_2F_EventScript_RememberMoves
	goto ViridianCity_PokemonCenter_2F_EventScript_Obj1_1

ViridianCity_PokemonCenter_2F_EventScript_Obj1_4:
# 52 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto ViridianCity_PokemonCenter_2F_EventScript_ChangeAbility
	goto ViridianCity_PokemonCenter_2F_EventScript_Obj1_1


ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye::
# 60 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1Bye
# 61 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_RememberMoves::
# 67 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1WhichMon
# 68 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special ChooseMonForMoveRelearner
# 69 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	waitstate
# 70 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye
# 71 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special IsSelectedMonEgg
# 72 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ViridianCity_PokemonCenter_2F_EventScript_CantEgg
# 73 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_0x8005, 0, ViridianCity_PokemonCenter_2F_EventScript_NoMoves
# 74 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto ViridianCity_PokemonCenter_2F_EventScript_TeachMove
	end


ViridianCity_PokemonCenter_2F_EventScript_TeachMove::
# 79 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1TeachWhichMove
# 80 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special TeachMoveRelearnerMove
# 81 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	waitstate
# 82 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 0, ViridianCity_PokemonCenter_2F_EventScript_RememberMoves
# 83 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1Bye
# 84 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_NoMoves::
# 89 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1NoMoves
# 90 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_CantEgg::
# 95 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1CantEgg
# 96 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_ChangeAbility::
# 102 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1WhichMon
# 103 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special ChoosePartyMon
# 104 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	waitstate
# 105 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye
# 106 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special IsSelectedMonEgg
# 107 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ViridianCity_PokemonCenter_2F_EventScript_CantEgg
# 108 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special BufferMonAbilityName
# 109 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1CurrentAbility, MSGBOX_YESNO
# 110 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_PokemonCenter_2F_EventScript_Obj1Bye
# 111 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	special CycleMonAbility
# 112 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_PokemonCenter_2F_EventScript_OnlyOneAbility
# 113 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1AbilityChanged
# 114 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_OnlyOneAbility::
# 119 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj1OnlyOneAbility
# 120 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_Obj2::
# 128 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	lock
# 129 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	faceplayer
# 130 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague
# 131 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj2PreLeague
# 132 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end


ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague::
# 137 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_2F_Text_Obj2PostLeague, MSGBOX_YESNO
# 138 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague_2
ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague_1:
# 141 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	release
	end

ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague_2:
# 139 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	goto EventScript_StatEditor
	goto ViridianCity_PokemonCenter_2F_EventScript_Obj2PostLeague_1


ViridianCity_PokemonCenter_2F_EventScript_Colosseum::
# 147 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
	end


ViridianCity_PokemonCenter_2F_EventScript_TradeCenter::
# 152 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
	end


ViridianCity_PokemonCenter_2F_EventScript_RecordCorner::
# 157 "data/maps/ViridianCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
	end

