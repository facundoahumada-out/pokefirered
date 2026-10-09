SevenIsland_House_Room1_MapScripts::
# 4 "data/maps/SevenIsland_House_Room1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_House_Room1_OnTransition
# 5 "data/maps/SevenIsland_House_Room1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SevenIsland_House_Room1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SevenIsland_House_Room1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/SevenIsland_House_Room1/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
# 7 "data/maps/SevenIsland_House_Room1/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
# 8 "data/maps/SevenIsland_House_Room1/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
	.2byte 0


SevenIsland_House_Room1_OnTransition::
# 13 "data/maps/SevenIsland_House_Room1/scripts.pory"
	special ValidateEReaderTrainer
# 14 "data/maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_RESULT, 0, SevenIsland_House_Room1_EventScript_SetTrainerVisitingLayout
# 15 "data/maps/SevenIsland_House_Room1/scripts.pory"
	call_if_ne VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0, SevenIsland_House_Room1_EventScript_MoveOldWomanToDoor
	end


SevenIsland_House_Room1_EventScript_SetTrainerVisitingLayout::
# 20 "data/maps/SevenIsland_House_Room1/scripts.pory"
	setvar VAR_TEMP_1, TRUE
# 21 "data/maps/SevenIsland_House_Room1/scripts.pory"
	setobjectxyperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, 4, 2
# 22 "data/maps/SevenIsland_House_Room1/scripts.pory"
	setobjectmovementtype LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN
# 23 "data/maps/SevenIsland_House_Room1/scripts.pory"
	setmaplayoutindex LAYOUT_SEVEN_ISLAND_HOUSE_ROOM1_DOOR_OPEN
	return


SevenIsland_House_Room1_EventScript_MoveOldWomanToDoor::
# 28 "data/maps/SevenIsland_House_Room1/scripts.pory"
	setobjectxyperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, 3, 2
# 29 "data/maps/SevenIsland_House_Room1/scripts.pory"
	setobjectmovementtype LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
	return


SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle::
# 34 "data/maps/SevenIsland_House_Room1/scripts.pory"
	lockall
# 35 "data/maps/SevenIsland_House_Room1/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 36 "data/maps/SevenIsland_House_Room1/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerReEnterRoom
# 37 "data/maps/SevenIsland_House_Room1/scripts.pory"
	waitmovement 0
# 38 "data/maps/SevenIsland_House_Room1/scripts.pory"
	applymovement LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, SevenIsland_House_Room1_Movement_OldWomanWalkBehindPlayer
# 39 "data/maps/SevenIsland_House_Room1/scripts.pory"
	waitmovement 0
# 40 "data/maps/SevenIsland_House_Room1/scripts.pory"
	copyobjectxytoperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN
# 41 "data/maps/SevenIsland_House_Room1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 42 "data/maps/SevenIsland_House_Room1/scripts.pory"
	waitmovement 0
# 43 "data/maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1, SevenIsland_House_Room1_EventScript_BattleWonComment
# 44 "data/maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2, SevenIsland_House_Room1_EventScript_BattleLostComment
# 45 "data/maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3, SevenIsland_House_Room1_EventScript_BattleTiedComment
# 46 "data/maps/SevenIsland_House_Room1/scripts.pory"
	special LoadPlayerParty
# 47 "data/maps/SevenIsland_House_Room1/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0
# 48 "data/maps/SevenIsland_House_Room1/scripts.pory"
	releaseall
	end


SevenIsland_House_Room1_EventScript_BattleWonComment::
# 53 "data/maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_AstoundingBattle
	return


SevenIsland_House_Room1_EventScript_BattleLostComment::
# 58 "data/maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_FeelYourDisappointment
	return


SevenIsland_House_Room1_EventScript_BattleTiedComment::
# 63 "data/maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_DrawWasIt
	return


# 67 "data/maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerReEnterRoom::
# 68 "data/maps/SevenIsland_House_Room1/scripts.pory"
	walk_down
# 69 "data/maps/SevenIsland_House_Room1/scripts.pory"
	step_end

# 72 "data/maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_OldWomanWalkBehindPlayer::
# 73 "data/maps/SevenIsland_House_Room1/scripts.pory"
	walk_right
# 74 "data/maps/SevenIsland_House_Room1/scripts.pory"
	walk_in_place_faster_down
# 75 "data/maps/SevenIsland_House_Room1/scripts.pory"
	step_end

SevenIsland_House_Room1_EventScript_OldWoman::
# 79 "data/maps/SevenIsland_House_Room1/scripts.pory"
	lock
# 80 "data/maps/SevenIsland_House_Room1/scripts.pory"
	faceplayer
# 81 "data/maps/SevenIsland_House_Room1/scripts.pory"
	special ValidateEReaderTrainer
# 82 "data/maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_RESULT, 1, SevenIsland_House_Room1_EventScript_InvalidVisitingTrainer
# 83 "data/maps/SevenIsland_House_Room1/scripts.pory"
	goto_if_eq VAR_TEMP_1, TRUE, SevenIsland_House_Room1_EventScript_TrainerVisiting
# 84 "data/maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles
# 85 "data/maps/SevenIsland_House_Room1/scripts.pory"
	release
	end


SevenIsland_House_Room1_EventScript_InvalidVisitingTrainer::
# 90 "data/maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles
# 91 "data/maps/SevenIsland_House_Room1/scripts.pory"
	release
	end


SevenIsland_House_Room1_EventScript_TrainerVisiting::
# 96 "data/maps/SevenIsland_House_Room1/scripts.pory"
	special SavePlayerParty
# 97 "data/maps/SevenIsland_House_Room1/scripts.pory"
	special BufferEReaderTrainerName
# 98 "data/maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_ChallengeVisitingTrainer, MSGBOX_YESNO
# 99 "data/maps/SevenIsland_House_Room1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SevenIsland_House_Room1_EventScript_DeclineBattle
# 100 "data/maps/SevenIsland_House_Room1/scripts.pory"
	call SevenIsland_House_Room1_EventScript_ChooseParty
# 101 "data/maps/SevenIsland_House_Room1/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SevenIsland_House_Room1_EventScript_DeclineBattle
# 102 "data/maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_SaveProgressBeforeBattle, MSGBOX_YESNO
# 103 "data/maps/SevenIsland_House_Room1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SevenIsland_House_Room1_EventScript_DeclineBattle
# 104 "data/maps/SevenIsland_House_Room1/scripts.pory"
	special LoadPlayerParty
# 105 "data/maps/SevenIsland_House_Room1/scripts.pory"
	call EventScript_AskSaveGame
# 106 "data/maps/SevenIsland_House_Room1/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SevenIsland_House_Room1_EventScript_DeclineBattle
# 107 "data/maps/SevenIsland_House_Room1/scripts.pory"
	special SavePlayerParty
# 108 "data/maps/SevenIsland_House_Room1/scripts.pory"
	special ReducePlayerPartyToThree
# 109 "data/maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_DontHoldAnythingBack
# 110 "data/maps/SevenIsland_House_Room1/scripts.pory"
	closemessage
# 111 "data/maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SevenIsland_House_Room1_EventScript_EnterBattleRoomNorth
# 112 "data/maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SevenIsland_House_Room1_EventScript_EnterBattleRoomEast
# 113 "data/maps/SevenIsland_House_Room1/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SevenIsland_House_Room1_EventScript_EnterBattleRoomWest
# 114 "data/maps/SevenIsland_House_Room1/scripts.pory"
	warp MAP_SEVEN_ISLAND_HOUSE_ROOM2, 3, 1
# 115 "data/maps/SevenIsland_House_Room1/scripts.pory"
	waitstate
# 116 "data/maps/SevenIsland_House_Room1/scripts.pory"
	release
	end


SevenIsland_House_Room1_EventScript_DeclineBattle::
# 121 "data/maps/SevenIsland_House_Room1/scripts.pory"
	special LoadPlayerParty
# 122 "data/maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OhYouWontBattle
# 123 "data/maps/SevenIsland_House_Room1/scripts.pory"
	release
	end


SevenIsland_House_Room1_EventScript_ChooseParty::
# 128 "data/maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_LimitThreeMonsPerSide
# 129 "data/maps/SevenIsland_House_Room1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 130 "data/maps/SevenIsland_House_Room1/scripts.pory"
	special ChooseHalfPartyForBattle
# 131 "data/maps/SevenIsland_House_Room1/scripts.pory"
	waitstate
	return


SevenIsland_House_Room1_EventScript_EnterBattleRoomNorth::
# 136 "data/maps/SevenIsland_House_Room1/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft
# 137 "data/maps/SevenIsland_House_Room1/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomNorth
# 138 "data/maps/SevenIsland_House_Room1/scripts.pory"
	waitmovement 0
	return


SevenIsland_House_Room1_EventScript_EnterBattleRoomEast::
# 143 "data/maps/SevenIsland_House_Room1/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideRight
# 144 "data/maps/SevenIsland_House_Room1/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomEast
# 145 "data/maps/SevenIsland_House_Room1/scripts.pory"
	waitmovement 0
	return


SevenIsland_House_Room1_EventScript_EnterBattleRoomWest::
# 150 "data/maps/SevenIsland_House_Room1/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft
# 151 "data/maps/SevenIsland_House_Room1/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomWest
# 152 "data/maps/SevenIsland_House_Room1/scripts.pory"
	waitmovement 0
	return


# 156 "data/maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomNorth::
# 157 "data/maps/SevenIsland_House_Room1/scripts.pory"
	delay_16
# 158 "data/maps/SevenIsland_House_Room1/scripts.pory"
	walk_up
# 159 "data/maps/SevenIsland_House_Room1/scripts.pory"
	walk_up
# 160 "data/maps/SevenIsland_House_Room1/scripts.pory"
	step_end

# 163 "data/maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomEast::
# 164 "data/maps/SevenIsland_House_Room1/scripts.pory"
	delay_16
# 165 "data/maps/SevenIsland_House_Room1/scripts.pory"
	walk_right
# 166 "data/maps/SevenIsland_House_Room1/scripts.pory"
	walk_up
# 167 "data/maps/SevenIsland_House_Room1/scripts.pory"
	step_end

# 170 "data/maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomWest::
# 171 "data/maps/SevenIsland_House_Room1/scripts.pory"
	delay_16
# 172 "data/maps/SevenIsland_House_Room1/scripts.pory"
	walk_left
# 173 "data/maps/SevenIsland_House_Room1/scripts.pory"
	walk_up
# 174 "data/maps/SevenIsland_House_Room1/scripts.pory"
	step_end

# 177 "data/maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft::
# 178 "data/maps/SevenIsland_House_Room1/scripts.pory"
	walk_left
# 179 "data/maps/SevenIsland_House_Room1/scripts.pory"
	walk_in_place_faster_right
# 180 "data/maps/SevenIsland_House_Room1/scripts.pory"
	step_end

# 183 "data/maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_Movement_OldWomanMoveAsideRight::
# 184 "data/maps/SevenIsland_House_Room1/scripts.pory"
	walk_right
# 185 "data/maps/SevenIsland_House_Room1/scripts.pory"
	walk_in_place_faster_left
# 186 "data/maps/SevenIsland_House_Room1/scripts.pory"
	step_end

SevenIsland_House_Room1_EventScript_Box::
# 190 "data/maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_SlightBreezeAroundBox, MSGBOX_SIGN
	end

