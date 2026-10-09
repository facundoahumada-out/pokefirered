FuchsiaCity_SafariZone_Entrance_MapScripts::
# 2 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FuchsiaCity_SafariZone_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FuchsiaCity_SafariZone_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 1, FuchsiaCity_SafariZone_Entrance_EventScript_ExitWarpIn
# 4 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 2, FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly
# 5 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 3, FuchsiaCity_SafariZone_Entrance_EventScript_ExitWalkIn
	.2byte 0


FuchsiaCity_SafariZone_Entrance_EventScript_ExitWalkIn::
# 11 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	lockall
# 12 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 13 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_ApproachCounter
# 14 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	waitmovement 0
# 15 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_CatchFairShareComeAgain
# 16 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	closemessage
# 17 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_Exit2
# 18 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	waitmovement 0
# 19 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	special ExitSafariMode
# 20 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 0
# 21 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	releaseall
	end


FuchsiaCity_SafariZone_Entrance_EventScript_ExitWarpIn::
# 27 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	lockall
# 28 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 29 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_CatchFairShareComeAgain
# 30 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	closemessage
# 31 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_Exit
# 32 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	waitmovement 0
# 33 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	special ExitSafariMode
# 34 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 0
# 35 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	releaseall
	end


FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly::
# 41 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	lockall
# 42 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 43 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_GoingToLeaveSafariZoneEarly, MSGBOX_YESNO
# 44 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_SafariZone_Entrance_EventScript_ReturnToSafariZone
# 45 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_PleaseReturnSafariBalls
# 46 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	closemessage
# 47 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_Exit
# 48 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	waitmovement 0
# 49 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	special ExitSafariMode
# 50 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 0
# 51 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	releaseall
	end


FuchsiaCity_SafariZone_Entrance_EventScript_ReturnToSafariZone::
# 56 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_GoodLuck
# 57 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	closemessage
# 58 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_ReEnter
# 59 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	waitmovement 0
# 60 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	warp MAP_SAFARI_ZONE_CENTER, 26, 30
# 61 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	waitstate
	end


# 65 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_Exit::
# 66 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_down
# 67 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_down
# 68 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	step_end

# 71 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_ReEnter::
# 72 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_up
# 73 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	step_end

# 76 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_Exit2::
# 77 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_down
# 78 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_down
# 79 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	step_end

# 82 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_ApproachCounter::
# 83 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_down
# 84 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	delay_8
# 85 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	step_end

FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerMid::
# 89 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	lockall
# 90 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	setvar VAR_TEMP_2, 0
# 91 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone
	end


FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerRight::
# 96 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	lockall
# 97 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	setvar VAR_TEMP_2, 1
# 98 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone
	end


FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerLeft::
# 103 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	lockall
# 104 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	setvar VAR_TEMP_2, 2
# 105 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone
	end


FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone::
# 110 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 111 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_WelcomeToSafariZone
# 112 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 113 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	waitmovement 0
# 114 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	showmoneybox 0, 0
# 115 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_PlaySafariGameFor500, MSGBOX_YESNO
# 116 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone
# 117 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_OkayPleaseComeAgain
# 118 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack
	end


FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone::
# 123 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	call FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons
# 124 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	checkmoney 500
# 125 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_SafariZone_Entrance_EventScript_NotEnoughMoney
# 126 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	removemoney 500
# 127 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	updatemoneybox
# 128 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_ThatllBe500WeOnlyUseSpecialBalls
# 129 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 130 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 131 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	message FuchsiaCity_SafariZone_Entrance_Text_PlayerReceived30SafariBalls
# 132 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	waitfanfare
# 133 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	call EventScript_RestorePrevTextColor
# 134 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_CallYouOnPAWhenYouRunOut
# 135 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	closemessage
# 136 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	hidemoneybox
# 137 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	call_if_eq VAR_TEMP_2, 0, FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneMid
# 138 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneRight
# 139 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneLeft
# 140 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	special EnterSafariMode
# 141 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 2
# 142 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	warp MAP_SAFARI_ZONE_CENTER, 255, 26, 30
# 143 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	waitstate
	end


FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneRight::
# 148 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneRight
# 149 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	waitmovement 0
	return


FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneMid::
# 154 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneMid
# 155 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	waitmovement 0
	return


FuchsiaCity_SafariZone_Entrance_EventScript_EnterSafariZoneLeft::
# 160 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneLeft
# 161 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	waitmovement 0
	return


FuchsiaCity_SafariZone_Entrance_EventScript_CheckSpaceForMons::
# 166 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	getpartysize
# 167 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	goto_if_ne VAR_RESULT, PARTY_SIZE, EventScript_Return
# 168 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	specialvar VAR_RESULT, IsThereRoomInAnyBoxForMorePokemon
# 169 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_Return
# 170 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox SafariZone_Text_ExcuseMeYourPCBoxIsFull
# 171 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack
	end


FuchsiaCity_SafariZone_Entrance_EventScript_NotEnoughMoney::
# 176 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_OopsNotEnoughMoney
# 177 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack
	end


FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack::
# 182 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	closemessage
# 183 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	hidemoneybox
# 184 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_Movement_ForceBack
# 185 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	waitmovement 0
# 186 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	releaseall
	end


# 190 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_ForceBack::
# 191 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_down
# 192 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	step_end

# 195 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneMid::
# 196 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_up
# 197 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_up
# 198 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	step_end

# 201 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneRight::
# 202 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_up
# 203 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_left
# 204 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_up
# 205 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	step_end

# 208 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
FuchsiaCity_SafariZone_Entrance_Movement_EnterSafariZoneLeft::
# 209 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_up
# 210 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_right
# 211 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	walk_up
# 212 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	step_end

FuchsiaCity_SafariZone_Entrance_EventScript_InfoAttendant::
# 216 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	lock
# 217 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	faceplayer
# 218 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_FirstTimeAtSafariZone, MSGBOX_YESNO
# 219 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_SafariZone_Entrance_EventScript_ExplainSafariZone
# 220 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_SorryYoureARegularHere
# 221 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	release
	end


FuchsiaCity_SafariZone_Entrance_EventScript_ExplainSafariZone::
# 226 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_ExplainSafariZone
# 227 "data/maps/FuchsiaCity_SafariZone_Entrance/scripts.pory"
	release
	end

