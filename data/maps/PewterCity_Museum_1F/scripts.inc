PewterCity_Museum_1F_MapScripts::
	.byte 0


PewterCity_Museum_1F_EventScript_Scientist1::
# 4 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lock
# 5 "data/maps/PewterCity_Museum_1F/scripts.pory"
	faceplayer
# 6 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 7 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_SOUTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 8 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
# 9 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PleaseEnjoyYourself
# 10 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_Scientist1BehindCounter::
# 15 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs, MSGBOX_YESNO
# 16 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter
# 17 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Museum_1F_EventScript_ExplainAmber
	end


PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter::
# 22 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberContainsGeneticMatter
# 23 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 24 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_ExplainAmber::
# 30 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberIsFossilizedSap
# 31 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 32 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerLeft::
# 38 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 39 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 40 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 41 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 42 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerMid::
# 47 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 48 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 49 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 50 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 51 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerRight::
# 56 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 57 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 58 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 59 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTrigger::
# 65 "data/maps/PewterCity_Museum_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 66 "data/maps/PewterCity_Museum_1F/scripts.pory"
	showmoneybox 0, 0
# 67 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Its50YForChildsTicket, MSGBOX_YESNO
# 68 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_TryPayForTicket
# 69 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ComeAgain
# 70 "data/maps/PewterCity_Museum_1F/scripts.pory"
	closemessage
# 71 "data/maps/PewterCity_Museum_1F/scripts.pory"
	hidemoneybox
# 72 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 73 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_EventScript_TryPayForTicket::
# 79 "data/maps/PewterCity_Museum_1F/scripts.pory"
	checkmoney 50
# 80 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_EventScript_NotEnoughMoney
# 81 "data/maps/PewterCity_Museum_1F/scripts.pory"
	closemessage
# 82 "data/maps/PewterCity_Museum_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft
# 83 "data/maps/PewterCity_Museum_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid
# 84 "data/maps/PewterCity_Museum_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight
# 85 "data/maps/PewterCity_Museum_1F/scripts.pory"
	playse SE_SHOP
# 86 "data/maps/PewterCity_Museum_1F/scripts.pory"
	removemoney 50
# 87 "data/maps/PewterCity_Museum_1F/scripts.pory"
	updatemoneybox
# 88 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitse
# 89 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Right50YThankYou
# 90 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 1
# 91 "data/maps/PewterCity_Museum_1F/scripts.pory"
	hidemoneybox
# 92 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft::
# 97 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterLeft
# 98 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid::
# 103 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterMid
# 104 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight::
# 109 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterRight
# 110 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_NotEnoughMoney::
# 115 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveEnoughMoney
# 116 "data/maps/PewterCity_Museum_1F/scripts.pory"
	closemessage
# 117 "data/maps/PewterCity_Museum_1F/scripts.pory"
	hidemoneybox
# 118 "data/maps/PewterCity_Museum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 119 "data/maps/PewterCity_Museum_1F/scripts.pory"
	waitmovement 0
# 120 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


# 124 "data/maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ForcePlayerExit::
# 125 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_down
# 126 "data/maps/PewterCity_Museum_1F/scripts.pory"
	step_end

# 129 "data/maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterLeft::
# 130 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_right
# 131 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_right
# 132 "data/maps/PewterCity_Museum_1F/scripts.pory"
	delay_8
# 133 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_in_place_right
# 134 "data/maps/PewterCity_Museum_1F/scripts.pory"
	step_end

# 137 "data/maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterMid::
# 138 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_right
# 139 "data/maps/PewterCity_Museum_1F/scripts.pory"
	delay_8
# 140 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_in_place_right
# 141 "data/maps/PewterCity_Museum_1F/scripts.pory"
	step_end

# 144 "data/maps/PewterCity_Museum_1F/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterRight::
# 145 "data/maps/PewterCity_Museum_1F/scripts.pory"
	delay_8
# 146 "data/maps/PewterCity_Museum_1F/scripts.pory"
	walk_in_place_right
# 147 "data/maps/PewterCity_Museum_1F/scripts.pory"
	step_end

PewterCity_Museum_1F_EventScript_Scientist2::
# 151 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_OldMan::
# 156 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_OldAmberScientist::
# 161 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lock
# 162 "data/maps/PewterCity_Museum_1F/scripts.pory"
	faceplayer
# 163 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_set FLAG_GOT_OLD_AMBER, PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber
# 164 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WantYouToGetAmberExamined
# 165 "data/maps/PewterCity_Museum_1F/scripts.pory"
	checkitemspace ITEM_OLD_AMBER
# 166 "data/maps/PewterCity_Museum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_EventScript_NoRoomForOldAmber
# 167 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setflag FLAG_GOT_OLD_AMBER
# 168 "data/maps/PewterCity_Museum_1F/scripts.pory"
	removeobject LOCALID_OLD_AMBER
# 169 "data/maps/PewterCity_Museum_1F/scripts.pory"
	giveitem_msg PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan, ITEM_OLD_AMBER, 1, MUS_OBTAIN_KEY_ITEM
# 170 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_NoRoomForOldAmber::
# 175 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveSpaceForThis
# 176 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber::
# 181 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_GetOldAmberChecked
# 182 "data/maps/PewterCity_Museum_1F/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_OldAmber::
# 187 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_BeautifulPieceOfAmber, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_AerodactylFossil::
# 192 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 193 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_AERODACTYL
# 194 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_0x8005, 10
# 195 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_0x8006, 3
# 196 "data/maps/PewterCity_Museum_1F/scripts.pory"
	special OpenMuseumFossilPic
# 197 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AerodactylFossil
# 198 "data/maps/PewterCity_Museum_1F/scripts.pory"
	special CloseMuseumFossilPic
# 199 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_EventScript_KabutopsFossil::
# 204 "data/maps/PewterCity_Museum_1F/scripts.pory"
	lockall
# 205 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_KABUTOPS
# 206 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_0x8005, 10
# 207 "data/maps/PewterCity_Museum_1F/scripts.pory"
	setvar VAR_0x8006, 3
# 208 "data/maps/PewterCity_Museum_1F/scripts.pory"
	special OpenMuseumFossilPic
# 209 "data/maps/PewterCity_Museum_1F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_KabutopsFossil
# 210 "data/maps/PewterCity_Museum_1F/scripts.pory"
	special CloseMuseumFossilPic
# 211 "data/maps/PewterCity_Museum_1F/scripts.pory"
	releaseall
	end

