PewterCity_Museum_2F_MapScripts::
	.byte 0


PewterCity_Museum_2F_EventScript_Man::
# 4 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WhatsSpecialAboutMoonStone, MSGBOX_NPC
	end


PewterCity_Museum_2F_EventScript_OldMan::
# 9 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_BoughtColorTVForMoonLanding, MSGBOX_NPC
	end


PewterCity_Museum_2F_EventScript_Scientist::
# 14 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_RunningSpaceExhibitThisMonth, MSGBOX_NPC
	end


PewterCity_Museum_2F_EventScript_LittleGirl::
# 21 "data/maps/PewterCity_Museum_2F/scripts.pory"
	lock
# 22 "data/maps/PewterCity_Museum_2F/scripts.pory"
	faceplayer
# 23 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_set FLAG_GOT_LIGHT_BALL_PEWTER_MUSEUM, PewterCity_Museum_2F_EventScript_LittleGirlAfterReward
# 24 "data/maps/PewterCity_Museum_2F/scripts.pory"
	call PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu
# 25 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PewterCity_Museum_2F_EventScript_ShowPikachu
# 26 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AskedDaddyToCatchPikachu
# 27 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_LITTLE_GIRL, Common_Movement_FaceRight
# 28 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 29 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_set FLAG_PEWTER_MUSEUM_PIKACHU_REQUEST, PewterCity_Museum_2F_EventScript_LittleGirlEnd
# 30 "data/maps/PewterCity_Museum_2F/scripts.pory"
	call PewterCity_Museum_2F_EventScript_DadAsksForPikachu
# 31 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_LittleGirlEnd::
# 36 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_LittleGirlAfterReward::
# 41 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_CantStopThinkingAboutPikachu
# 42 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_ShowPikachu::
# 48 "data/maps/PewterCity_Museum_2F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 49 "data/maps/PewterCity_Museum_2F/scripts.pory"
	switch VAR_RESULT
# 50 "data/maps/PewterCity_Museum_2F/scripts.pory"
	case DIR_EAST, PewterCity_Museum_2F_EventScript_ShowPikachu_3
# 52 "data/maps/PewterCity_Museum_2F/scripts.pory"
	case DIR_SOUTH, PewterCity_Museum_2F_EventScript_ShowPikachu_4
# 55 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, Common_Movement_FaceDown
PewterCity_Museum_2F_EventScript_ShowPikachu_1:
# 57 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 58 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_PikaPikaCuterUpClose
# 59 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_YouMadeHerDay
# 60 "data/maps/PewterCity_Museum_2F/scripts.pory"
	giveitem ITEM_LIGHT_BALL
# 61 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 62 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setflag FLAG_GOT_LIGHT_BALL_PEWTER_MUSEUM
# 63 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setflag FLAG_PEWTER_MUSEUM_PIKACHU_REQUEST
# 64 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end

PewterCity_Museum_2F_EventScript_ShowPikachu_3:
# 51 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_FaceLeft
	goto PewterCity_Museum_2F_EventScript_ShowPikachu_1

PewterCity_Museum_2F_EventScript_ShowPikachu_4:
# 53 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_FaceUp
	goto PewterCity_Museum_2F_EventScript_ShowPikachu_1


PewterCity_Museum_2F_EventScript_BaldingMan::
# 69 "data/maps/PewterCity_Museum_2F/scripts.pory"
	lock
# 70 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_set FLAG_GOT_LIGHT_BALL_PEWTER_MUSEUM, PewterCity_Museum_2F_EventScript_BaldingManAfterReward
# 71 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_set FLAG_PEWTER_MUSEUM_PIKACHU_REQUEST, PewterCity_Museum_2F_EventScript_BaldingManReminder
# 72 "data/maps/PewterCity_Museum_2F/scripts.pory"
	call PewterCity_Museum_2F_EventScript_DadAsksForPikachu
# 73 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_BaldingManReminder::
# 78 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PikachuSoonIPromise
# 79 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, Common_Movement_FacePlayer
# 80 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_RememberToBringPikachu
# 82 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, Common_Movement_FaceDown
# 83 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 84 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_BaldingManAfterReward::
# 89 "data/maps/PewterCity_Museum_2F/scripts.pory"
	faceplayer
# 90 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_DaughterHasntStoppedTalking
# 91 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_DadAsksForPikachu::
# 98 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PikachuSoonIPromise
# 99 "data/maps/PewterCity_Museum_2F/scripts.pory"
	playse SE_PIN
# 100 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadNoticePlayer
# 101 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/PewterCity_Museum_2F/scripts.pory"
	checkplayergender
# 103 "data/maps/PewterCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PewterCity_Museum_2F_EventScript_DadAsksForPikachu_2
# 106 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_HeyYoungLady
PewterCity_Museum_2F_EventScript_DadAsksForPikachu_1:
# 108 "data/maps/PewterCity_Museum_2F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 109 "data/maps/PewterCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq PewterCity_Museum_2F_EventScript_DadAsksForPikachu_6
# 113 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepRight
# 114 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 115 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_CouldYouBringMePikachu
# 116 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepBack
PewterCity_Museum_2F_EventScript_DadAsksForPikachu_5:
# 118 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 119 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setflag FLAG_PEWTER_MUSEUM_PIKACHU_REQUEST
	return

PewterCity_Museum_2F_EventScript_DadAsksForPikachu_2:
# 104 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_HeyYoungMan
	goto PewterCity_Museum_2F_EventScript_DadAsksForPikachu_1

PewterCity_Museum_2F_EventScript_DadAsksForPikachu_6:
# 110 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_CouldYouBringMePikachu
# 111 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, Common_Movement_FaceDown
	goto PewterCity_Museum_2F_EventScript_DadAsksForPikachu_5


PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu::
# 125 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setvar VAR_0x8004, 0
PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_2:
# 126 "data/maps/PewterCity_Museum_2F/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_lt PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_3
# 134 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setvar VAR_RESULT, FALSE
	return

PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_3:
# 127 "data/maps/PewterCity_Museum_2F/scripts.pory"
	specialvar VAR_RESULT, GetPartyMonSpecies
# 128 "data/maps/PewterCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, SPECIES_PIKACHU
	goto_if_eq PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_6
# 132 "data/maps/PewterCity_Museum_2F/scripts.pory"
	addvar VAR_0x8004, 1
	goto PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_2

PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_6:
# 129 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setvar VAR_RESULT, TRUE
	return


# 138 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadNoticePlayer:
# 139 "data/maps/PewterCity_Museum_2F/scripts.pory"
	delay_1
# 140 "data/maps/PewterCity_Museum_2F/scripts.pory"
	delay_4
# 141 "data/maps/PewterCity_Museum_2F/scripts.pory"
	emote_exclamation_mark
# 142 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_player
	step_end

# 145 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadStepRight:
# 146 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 147 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_player
	step_end

# 150 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadStepBack:
# 151 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_left
# 152 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_down
	step_end

PewterCity_Museum_2F_EventScript_SpaceShuttle::
# 156 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_SpaceShuttle, MSGBOX_SIGN
	end


PewterCity_Museum_2F_EventScript_MoonStone::
# 161 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_MeteoriteThatFellOnMtMoon, MSGBOX_SIGN
	end


# 165 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_FaceLeft:
# 166 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_left
	step_end

# 169 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_FaceUp:
# 170 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_up
	step_end
