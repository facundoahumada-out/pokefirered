SevenIsland_House_Room2_MapScripts::
# 2 "data/maps/SevenIsland_House_Room2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_House_Room2_OnTransition
# 3 "data/maps/SevenIsland_House_Room2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SevenIsland_House_Room2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SevenIsland_House_Room2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SevenIsland_House_Room2/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SevenIsland_House_Room2_EventScript_BattleVisitingTrainer
	.2byte 0


SevenIsland_House_Room2_OnTransition::
# 9 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special SetEReaderTrainerGfxId
	end


SevenIsland_House_Room2_EventScript_BattleVisitingTrainer::
# 14 "data/maps/SevenIsland_House_Room2/scripts.pory"
	lockall
# 15 "data/maps/SevenIsland_House_Room2/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room2_Movement_PlayerEnterRoom
# 16 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitmovement 0
# 17 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special BufferEReaderTrainerGreeting
# 18 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox gStringVar4
# 19 "data/maps/SevenIsland_House_Room2/scripts.pory"
	closemessage
# 20 "data/maps/SevenIsland_House_Room2/scripts.pory"
	setvar VAR_0x8004, 2
# 21 "data/maps/SevenIsland_House_Room2/scripts.pory"
	setvar VAR_0x8005, 0
# 22 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special StartSpecialBattle
# 23 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitstate
# 24 "data/maps/SevenIsland_House_Room2/scripts.pory"
	call_if_eq VAR_RESULT, 3, SevenIsland_House_Room2_EventScript_BattleTie
# 25 "data/maps/SevenIsland_House_Room2/scripts.pory"
	call_if_eq VAR_RESULT, 1, SevenIsland_House_Room2_EventScript_BattleWon
# 26 "data/maps/SevenIsland_House_Room2/scripts.pory"
	call_if_eq VAR_RESULT, 2, SevenIsland_House_Room2_EventScript_BattleLost
# 27 "data/maps/SevenIsland_House_Room2/scripts.pory"
	closemessage
# 28 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special HealPlayerParty
# 29 "data/maps/SevenIsland_House_Room2/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room2_Movement_PlayerExitRoom
# 30 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitmovement 0
# 31 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special LoadPlayerParty
# 32 "data/maps/SevenIsland_House_Room2/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/SevenIsland_House_Room2/scripts.pory"
	warp MAP_SEVEN_ISLAND_HOUSE_ROOM1, 4, 1
# 34 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitstate
# 35 "data/maps/SevenIsland_House_Room2/scripts.pory"
	releaseall
	end


SevenIsland_House_Room2_EventScript_BattleTie::
# 40 "data/maps/SevenIsland_House_Room2/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3
# 41 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_MatchEndedUpDraw
	return


SevenIsland_House_Room2_EventScript_BattleWon::
# 46 "data/maps/SevenIsland_House_Room2/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1
# 47 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special ShowFieldMessageStringVar4
# 48 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitmessage
# 49 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitbuttonpress
	return


SevenIsland_House_Room2_EventScript_BattleLost::
# 54 "data/maps/SevenIsland_House_Room2/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2
# 55 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special ShowFieldMessageStringVar4
# 56 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitmessage
# 57 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitbuttonpress
	return


# 61 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Movement_PlayerEnterRoom::
# 62 "data/maps/SevenIsland_House_Room2/scripts.pory"
	walk_down
# 63 "data/maps/SevenIsland_House_Room2/scripts.pory"
	walk_down
# 64 "data/maps/SevenIsland_House_Room2/scripts.pory"
	walk_down
# 65 "data/maps/SevenIsland_House_Room2/scripts.pory"
	walk_right
# 66 "data/maps/SevenIsland_House_Room2/scripts.pory"
	walk_right
# 67 "data/maps/SevenIsland_House_Room2/scripts.pory"
	step_end

# 70 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Movement_PlayerExitRoom::
# 71 "data/maps/SevenIsland_House_Room2/scripts.pory"
	walk_left
# 72 "data/maps/SevenIsland_House_Room2/scripts.pory"
	walk_left
# 73 "data/maps/SevenIsland_House_Room2/scripts.pory"
	walk_up
# 74 "data/maps/SevenIsland_House_Room2/scripts.pory"
	walk_up
# 75 "data/maps/SevenIsland_House_Room2/scripts.pory"
	walk_up
# 76 "data/maps/SevenIsland_House_Room2/scripts.pory"
	walk_up
# 77 "data/maps/SevenIsland_House_Room2/scripts.pory"
	delay_8
# 78 "data/maps/SevenIsland_House_Room2/scripts.pory"
	step_end
