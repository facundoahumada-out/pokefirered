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
	waitbuttonpress
# 60 "data/maps/Route24/scripts.pory"
	closemessage
# 62 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketSpinFast
# 63 "data/maps/Route24/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route24/scripts.pory"
	setvar VAR_0x8004, LOCALID_ROUTE24_ROCKET
# 66 "data/maps/Route24/scripts.pory"
	setvar VAR_0x8005, OBJ_EVENT_GFX_ROCKET_M
# 67 "data/maps/Route24/scripts.pory"
	callnative Script_SetObjectGraphicsId
# 69 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketSpinSlow
# 70 "data/maps/Route24/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route24/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 72 "data/maps/Route24/scripts.pory"
	message Route24_Text_RocketReveal
# 73 "data/maps/Route24/scripts.pory"
	waitmessage
# 74 "data/maps/Route24/scripts.pory"
	waitbuttonpress
# 75 "data/maps/Route24/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROUTE24_ROCKET
# 76 "data/maps/Route24/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_6, Route24_Text_RocketDefeat
# 77 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_YoudBecomeTopRocketLeader
# 78 "data/maps/Route24/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE24, 1
	return


Route24_EventScript_RocketApproachPlayer::
# 83 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketApproachPlayer
# 84 "data/maps/Route24/scripts.pory"
	waitmovement 0
	return


Route24_EventScript_RocketMotionToPlayer::
# 89 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Common_Movement_WalkInPlaceFasterLeft
# 90 "data/maps/Route24/scripts.pory"
	waitmovement 0
	return


Route24_EventScript_NoRoomForNuggetTrigger::
# 95 "data/maps/Route24/scripts.pory"
	msgbox Route24_Text_YouDontHaveAnyRoom
# 96 "data/maps/Route24/scripts.pory"
	closemessage
# 97 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_PLAYER, Route24_Movement_WalkDown
# 98 "data/maps/Route24/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route24/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route24_EventScript_RocketWalkBackToPos
# 100 "data/maps/Route24/scripts.pory"
	release
	end


Route24_EventScript_RocketWalkBackToPos::
# 105 "data/maps/Route24/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Route24_Movement_RocketWalkBackToPos
# 106 "data/maps/Route24/scripts.pory"
	waitmovement 0
	return


# 110 "data/maps/Route24/scripts.pory"
Route24_Movement_RocketSpinFast:
# 111 "data/maps/Route24/scripts.pory"
	walk_in_place_faster_down
# 112 "data/maps/Route24/scripts.pory"
	walk_in_place_faster_left
# 113 "data/maps/Route24/scripts.pory"
	walk_in_place_faster_up
# 114 "data/maps/Route24/scripts.pory"
	walk_in_place_faster_right
# 115 "data/maps/Route24/scripts.pory"
	step_end

# 118 "data/maps/Route24/scripts.pory"
Route24_Movement_RocketSpinSlow:
# 119 "data/maps/Route24/scripts.pory"
	walk_in_place_faster_down
# 120 "data/maps/Route24/scripts.pory"
	walk_in_place_faster_left
# 121 "data/maps/Route24/scripts.pory"
	walk_in_place_faster_up
# 122 "data/maps/Route24/scripts.pory"
	walk_in_place_faster_right
# 123 "data/maps/Route24/scripts.pory"
	walk_in_place_fast_down
# 124 "data/maps/Route24/scripts.pory"
	walk_in_place_fast_left
# 125 "data/maps/Route24/scripts.pory"
	walk_in_place_fast_up
# 126 "data/maps/Route24/scripts.pory"
	walk_in_place_fast_right
# 127 "data/maps/Route24/scripts.pory"
	walk_in_place_down
# 128 "data/maps/Route24/scripts.pory"
	walk_in_place_left
# 129 "data/maps/Route24/scripts.pory"
	step_end

# 132 "data/maps/Route24/scripts.pory"
Route24_Movement_RocketApproachPlayer::
# 133 "data/maps/Route24/scripts.pory"
	walk_left
# 134 "data/maps/Route24/scripts.pory"
	step_end

# 137 "data/maps/Route24/scripts.pory"
Route24_Movement_RocketWalkBackToPos::
# 138 "data/maps/Route24/scripts.pory"
	walk_right
# 139 "data/maps/Route24/scripts.pory"
	walk_in_place_faster_left
# 140 "data/maps/Route24/scripts.pory"
	step_end

# 143 "data/maps/Route24/scripts.pory"
Route24_Movement_WalkDown::
# 144 "data/maps/Route24/scripts.pory"
	walk_down
# 145 "data/maps/Route24/scripts.pory"
	step_end
