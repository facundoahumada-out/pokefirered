FiveIsland_ResortGorgeous_House_MapScripts::
	.byte 0


FiveIsland_ResortGorgeous_House_EventScript_Selphy::
# 6 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 7 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	special QuestLog_CutRecording
# 8 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	lock
# 9 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	faceplayer
# 10 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto_if_set FLAG_TEMP_2, FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest
# 11 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto_if_eq VAR_RESORT_GORGEOUS_REQUESTED_MON, 0xFFFF, FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong
# 12 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto_if_ne VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE, FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon
# 13 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish
# 14 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
	end


FiveIsland_ResortGorgeous_House_EventScript_RequestMon::
# 19 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	special SampleResortGorgeousMonAndReward
# 20 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease
# 21 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	release
	end


FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong::
# 26 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting
# 27 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
	end


FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon::
# 32 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	copyvar VAR_0x8004, VAR_RESORT_GORGEOUS_REQUESTED_MON
# 33 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 34 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon
# 35 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
	end


FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon::
# 40 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	special SampleResortGorgeousMonAndReward
# 41 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou
# 42 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	addobject LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
# 43 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerEnter
# 44 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 45 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 46 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady
# 47 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterUp
# 48 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 49 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 50 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation
# 51 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 52 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid
# 53 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	closemessage
# 54 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth
# 55 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth
# 56 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast
# 57 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest
# 58 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	copyobjectxytoperm LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
# 59 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks
# 60 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	giveitem VAR_RESORT_GORGEOUS_REWARD
# 61 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward
# 62 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	setflag FLAG_TEMP_2
# 63 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
# 64 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	release
	end


FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth::
# 69 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterDown
# 70 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth
# 71 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 72 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 73 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
	return


FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth::
# 78 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth
# 79 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 80 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 81 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
	return


FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast::
# 86 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterLeft
# 87 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast
# 88 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
# 89 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 90 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
	return


FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest::
# 95 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest
# 96 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	waitmovement 0
	return


FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward::
# 101 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 102 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull
# 103 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 104 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing
# 105 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	setflag FLAG_TEMP_2
# 106 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
# 107 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	release
	end


FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest::
# 112 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck
# 113 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	release
	end


# 117 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth::
# 118 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 119 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 120 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 121 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_down
# 122 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_down
# 123 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_down
# 124 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_in_place_faster_right
# 125 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	step_end

# 128 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth::
# 129 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 130 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 131 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_in_place_faster_down
# 132 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	step_end

# 135 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast::
# 136 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 137 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 138 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_left
# 139 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_down
# 140 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	step_end

# 145 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest::
# 146 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_up
# 147 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	step_end

# 150 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
FiveIsland_ResortGorgeous_House_Movement_ButlerEnter::
# 151 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	walk_in_place_down
# 152 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	step_end

FiveIsland_ResortGorgeous_House_EventScript_Butler::
# 157 "data/maps/FiveIsland_ResortGorgeous_House/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun, MSGBOX_NPC
	end

