Route24_MapScripts::
	.byte 0


Route24_EventScript_Rocket::
# 4 "data/maps/Route24/scripts.pory"
	lock
# 5 "data/maps/Route24/scripts.pory"
	faceplayer
# 6 "data/maps/Route24/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ROUTE24, 1, Route24_EventScript_RocketPostBattle
# 7 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_JustEarnedFabulousPrize
# 8 "data/maps/Route24/scripts.pory"
	checkitemspace ITEM_NUGGET
# 9 "data/maps/Route24/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNugget
# 10 "data/maps/Route24/scripts.pory"
	call Route24_EventScript_BattleRocket
# 11 "data/maps/Route24/scripts.pory"
	release
	end


Route24_EventScript_NoRoomForNugget::
# 16 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_YouDontHaveAnyRoom
# 17 "data/maps/Route24/scripts.pory"
	release
	end


Route24_EventScript_RocketPostBattle::
# 22 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_YoudBecomeTopRocketLeader
# 23 "data/maps/Route24/scripts.pory"
	release
	end


Route24_EventScript_RocketTriggerLeft::
# 28 "data/maps/Route24/scripts.pory"
	lockall
# 29 "data/maps/Route24/scripts.pory"
	setvar VAR_TEMP_1, 0
# 30 "data/maps/Route24/scripts.pory"
	goto Route24_EventScript_RocketTrigger
	end


Route24_EventScript_RocketTriggerRight::
# 35 "data/maps/Route24/scripts.pory"
	lockall
# 36 "data/maps/Route24/scripts.pory"
	setvar VAR_TEMP_1, 1
# 37 "data/maps/Route24/scripts.pory"
	goto Route24_EventScript_RocketTrigger
	end


Route24_EventScript_RocketTrigger::
# 42 "data/maps/Route24/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 43 "data/maps/Route24/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketApproachPlayer
# 44 "data/maps/Route24/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route24_EventScript_RocketMotionToPlayer
# 45 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 46 "data/maps/Route24/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_JustEarnedFabulousPrize
# 48 "data/maps/Route24/scripts.pory"
	checkitemspace ITEM_NUGGET
# 49 "data/maps/Route24/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route24_EventScript_NoRoomForNuggetTrigger
# 50 "data/maps/Route24/scripts.pory"
	call Route24_EventScript_BattleRocket
# 51 "data/maps/Route24/scripts.pory"
	releaseall
	end


Route24_EventScript_BattleRocket::
# 56 "data/maps/Route24/scripts.pory"
	giveitem_msg Route24_Text_ReceivedNuggetFromMysteryTrainer, ITEM_NUGGET
# 57 "data/maps/Route24/scripts.pory"
	message Route24_Text_JoinTeamRocket
# 58 "data/maps/Route24/scripts.pory"
	waitmessage
# 59 "data/maps/Route24/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 60 "data/maps/Route24/scripts.pory"
	waitbuttonpress
# 61 "data/maps/Route24/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROUTE24_ROCKET
# 62 "data/maps/Route24/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_6, Route24_Text_RocketDefeat
# 63 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_YoudBecomeTopRocketLeader
# 64 "data/maps/Route24/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE24, 1
	return


Route24_EventScript_RocketApproachPlayer::
# 69 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketApproachPlayer
# 70 "data/maps/Route24/scripts.pory"
	waitmovement 0
	return


Route24_EventScript_RocketMotionToPlayer::
# 75 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Common_Movement_WalkInPlaceFasterLeft
# 76 "data/maps/Route24/scripts.pory"
	waitmovement 0
	return


Route24_EventScript_NoRoomForNuggetTrigger::
# 81 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_YouDontHaveAnyRoom
# 82 "data/maps/Route24/scripts.pory"
	closemessage
# 83 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_PLAYER, Route24_Movement_WalkDown
# 84 "data/maps/Route24/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route24/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketWalkBackToPos
# 86 "data/maps/Route24/scripts.pory"
	release
	end


Route24_EventScript_RocketWalkBackToPos::
# 91 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketWalkBackToPos
# 92 "data/maps/Route24/scripts.pory"
	waitmovement 0
	return


# 96 "data/maps/Route24/scripts.pory"
Route24_Movement_RocketApproachPlayer::
# 97 "data/maps/Route24/scripts.pory"
	walk_left
# 98 "data/maps/Route24/scripts.pory"
	step_end

# 101 "data/maps/Route24/scripts.pory"
Route24_Movement_RocketWalkBackToPos::
# 102 "data/maps/Route24/scripts.pory"
	walk_right
# 103 "data/maps/Route24/scripts.pory"
	walk_in_place_faster_left
# 104 "data/maps/Route24/scripts.pory"
	step_end

# 107 "data/maps/Route24/scripts.pory"
Route24_Movement_WalkDown::
# 108 "data/maps/Route24/scripts.pory"
	walk_down
# 109 "data/maps/Route24/scripts.pory"
	step_end
