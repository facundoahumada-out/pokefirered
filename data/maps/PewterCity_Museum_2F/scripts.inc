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
# 22 "data/maps/PewterCity_Museum_2F/scripts.pory"
	lock
# 23 "data/maps/PewterCity_Museum_2F/scripts.pory"
	faceplayer
# 24 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_set FLAG_GOT_LIGHT_BALL_PEWTER_MUSEUM, PewterCity_Museum_2F_EventScript_LittleGirlAfterReward
# 25 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_set FLAG_PEWTER_MUSEUM_PIKACHU_REQUEST, PewterCity_Museum_2F_EventScript_LittleGirl_2
PewterCity_Museum_2F_EventScript_LittleGirl_1:
# 29 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AskedDaddyToCatchPikachu
# 30 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_LITTLE_GIRL, Common_Movement_FaceRight
# 31 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 32 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end

PewterCity_Museum_2F_EventScript_LittleGirl_2:
# 26 "data/maps/PewterCity_Museum_2F/scripts.pory"
	call PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu
# 27 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PewterCity_Museum_2F_EventScript_ShowPikachu
	goto PewterCity_Museum_2F_EventScript_LittleGirl_1


PewterCity_Museum_2F_EventScript_LittleGirlAfterReward::
# 37 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_CantStopThinkingAboutPikachu
# 38 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_ShowPikachu::
# 44 "data/maps/PewterCity_Museum_2F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 45 "data/maps/PewterCity_Museum_2F/scripts.pory"
	switch VAR_RESULT
# 46 "data/maps/PewterCity_Museum_2F/scripts.pory"
	case DIR_EAST, PewterCity_Museum_2F_EventScript_ShowPikachu_3
# 48 "data/maps/PewterCity_Museum_2F/scripts.pory"
	case DIR_SOUTH, PewterCity_Museum_2F_EventScript_ShowPikachu_4
# 51 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, Common_Movement_FaceDown
PewterCity_Museum_2F_EventScript_ShowPikachu_1:
# 53 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 54 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_PikaPikaCuterUpClose
# 55 "data/maps/PewterCity_Museum_2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 56 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_YouMadeHerDay
# 57 "data/maps/PewterCity_Museum_2F/scripts.pory"
	giveitem ITEM_LIGHT_BALL
# 58 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 59 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setflag FLAG_GOT_LIGHT_BALL_PEWTER_MUSEUM
# 60 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end

PewterCity_Museum_2F_EventScript_ShowPikachu_3:
# 47 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_FaceLeft
	goto PewterCity_Museum_2F_EventScript_ShowPikachu_1

PewterCity_Museum_2F_EventScript_ShowPikachu_4:
# 49 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_FaceUp
	goto PewterCity_Museum_2F_EventScript_ShowPikachu_1


PewterCity_Museum_2F_EventScript_BaldingMan::
# 65 "data/maps/PewterCity_Museum_2F/scripts.pory"
	lock
# 66 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_set FLAG_GOT_LIGHT_BALL_PEWTER_MUSEUM, PewterCity_Museum_2F_EventScript_BaldingManAfterReward
# 67 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_set FLAG_PEWTER_MUSEUM_PIKACHU_REQUEST, PewterCity_Museum_2F_EventScript_BaldingManReminder
# 68 "data/maps/PewterCity_Museum_2F/scripts.pory"
	call PewterCity_Museum_2F_EventScript_DadAsksForPikachu
# 69 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_BaldingManReminder::
# 74 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PikachuSoonIPromise
# 75 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, Common_Movement_FacePlayer
# 76 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 77 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_RememberToBringPikachu
# 78 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, Common_Movement_FaceDown
# 79 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_BaldingManAfterReward::
# 85 "data/maps/PewterCity_Museum_2F/scripts.pory"
	faceplayer
# 86 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_DaughterHasntStoppedTalking
# 87 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_DadAsksForPikachu::
# 94 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PikachuSoonIPromise
# 95 "data/maps/PewterCity_Museum_2F/scripts.pory"
	playse SE_PIN
# 96 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadNoticePlayer
# 97 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 98 "data/maps/PewterCity_Museum_2F/scripts.pory"
	checkplayergender
# 99 "data/maps/PewterCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PewterCity_Museum_2F_EventScript_DadAsksForPikachu_2
# 102 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_HeyYoungLady
PewterCity_Museum_2F_EventScript_DadAsksForPikachu_1:
# 104 "data/maps/PewterCity_Museum_2F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 105 "data/maps/PewterCity_Museum_2F/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/PewterCity_Museum_2F/scripts.pory"
	case DIR_WEST, PewterCity_Museum_2F_EventScript_DadAsksForPikachu_7
# 110 "data/maps/PewterCity_Museum_2F/scripts.pory"
	case DIR_SOUTH, PewterCity_Museum_2F_EventScript_DadAsksForPikachu_8
# 117 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_2F_Movement_PlayerStepAsideFromBelow
# 118 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepAsideFaceUp
PewterCity_Museum_2F_EventScript_DadAsksForPikachu_5:
# 120 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement LOCALID_PLAYER
# 121 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement LOCALID_MUSEUM_2F_BALDING_MAN
# 122 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_CouldYouBringMePikachu
# 123 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepBack
# 124 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setflag FLAG_PEWTER_MUSEUM_PIKACHU_REQUEST
	return

PewterCity_Museum_2F_EventScript_DadAsksForPikachu_2:
# 100 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_HeyYoungMan
	goto PewterCity_Museum_2F_EventScript_DadAsksForPikachu_1

PewterCity_Museum_2F_EventScript_DadAsksForPikachu_7:
# 108 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_2F_Movement_PlayerStepAsideFromRight
# 109 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepAsideFaceRight
	goto PewterCity_Museum_2F_EventScript_DadAsksForPikachu_5

PewterCity_Museum_2F_EventScript_DadAsksForPikachu_8:
# 112 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_2F_Movement_PlayerStepAsideFromAbove
# 113 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepAsideFaceUp
	goto PewterCity_Museum_2F_EventScript_DadAsksForPikachu_5


PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu::
# 131 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setvar VAR_0x8004, 0
PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_2:
# 132 "data/maps/PewterCity_Museum_2F/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_lt PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_3
# 140 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setvar VAR_RESULT, FALSE
	return

PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_3:
# 133 "data/maps/PewterCity_Museum_2F/scripts.pory"
	specialvar VAR_RESULT, GetPartyMonSpecies
# 134 "data/maps/PewterCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, SPECIES_PIKACHU
	goto_if_eq PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_6
# 138 "data/maps/PewterCity_Museum_2F/scripts.pory"
	addvar VAR_0x8004, 1
	goto PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_2

PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_6:
# 135 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setvar VAR_RESULT, TRUE
	return


# 144 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadNoticePlayer:
# 145 "data/maps/PewterCity_Museum_2F/scripts.pory"
	delay_1
# 146 "data/maps/PewterCity_Museum_2F/scripts.pory"
	delay_4
# 147 "data/maps/PewterCity_Museum_2F/scripts.pory"
	emote_exclamation_mark
# 148 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_player
	step_end

# 151 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadStepAsideFaceRight:
# 152 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 153 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_right
	step_end

# 156 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadStepAsideFaceUp:
# 157 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 158 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_up
	step_end

# 161 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_PlayerStepAsideFromRight:
# 162 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 163 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_left
	step_end

# 166 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_PlayerStepAsideFromAbove:
# 167 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 168 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_down
	step_end

# 172 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_PlayerStepAsideFromBelow:
# 173 "data/maps/PewterCity_Museum_2F/scripts.pory"
	delay_8
# 174 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_up
# 175 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_up
# 176 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 177 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_down
	step_end

# 180 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadStepBack:
# 181 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_left
# 182 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_down
	step_end

PewterCity_Museum_2F_EventScript_SpaceShuttle::
# 186 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_SpaceShuttle, MSGBOX_SIGN
	end


PewterCity_Museum_2F_EventScript_MoonStone::
# 191 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_MeteoriteThatFellOnMtMoon, MSGBOX_SIGN
	end


# 195 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_FaceLeft:
# 196 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_left
	step_end

# 199 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_FaceUp:
# 200 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_up
	step_end
