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
	release
	end


PewterCity_Museum_2F_EventScript_LittleGirlAfterReward::
# 34 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_CantStopThinkingAboutPikachu
# 35 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_ShowPikachu::
# 41 "data/maps/PewterCity_Museum_2F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 42 "data/maps/PewterCity_Museum_2F/scripts.pory"
	switch VAR_RESULT
# 43 "data/maps/PewterCity_Museum_2F/scripts.pory"
	case DIR_EAST, PewterCity_Museum_2F_EventScript_ShowPikachu_3
# 45 "data/maps/PewterCity_Museum_2F/scripts.pory"
	case DIR_SOUTH, PewterCity_Museum_2F_EventScript_ShowPikachu_4
# 48 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, Common_Movement_FaceDown
PewterCity_Museum_2F_EventScript_ShowPikachu_1:
# 50 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_PikaPikaCuterUpClose
# 52 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_YouMadeHerDay
# 53 "data/maps/PewterCity_Museum_2F/scripts.pory"
	giveitem ITEM_LIGHT_BALL
# 54 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 55 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setflag FLAG_GOT_LIGHT_BALL_PEWTER_MUSEUM
# 56 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setflag FLAG_PEWTER_MUSEUM_PIKACHU_REQUEST
# 57 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end

PewterCity_Museum_2F_EventScript_ShowPikachu_3:
# 44 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_FaceLeft
	goto PewterCity_Museum_2F_EventScript_ShowPikachu_1

PewterCity_Museum_2F_EventScript_ShowPikachu_4:
# 46 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_FaceUp
	goto PewterCity_Museum_2F_EventScript_ShowPikachu_1


PewterCity_Museum_2F_EventScript_BaldingMan::
# 62 "data/maps/PewterCity_Museum_2F/scripts.pory"
	lock
# 63 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_set FLAG_GOT_LIGHT_BALL_PEWTER_MUSEUM, PewterCity_Museum_2F_EventScript_BaldingManAfterReward
# 64 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_set FLAG_PEWTER_MUSEUM_PIKACHU_REQUEST, PewterCity_Museum_2F_EventScript_BaldingManReminder
# 65 "data/maps/PewterCity_Museum_2F/scripts.pory"
	call PewterCity_Museum_2F_EventScript_DadAsksForPikachu
# 66 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_BaldingManReminder::
# 71 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PikachuSoonIPromise
# 72 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, Common_Movement_FacePlayer
# 73 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_RememberToBringPikachu
# 75 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, Common_Movement_FaceDown
# 76 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 77 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_BaldingManAfterReward::
# 82 "data/maps/PewterCity_Museum_2F/scripts.pory"
	faceplayer
# 83 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_DaughterHasntStoppedTalking
# 84 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_DadAsksForPikachu::
# 91 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PikachuSoonIPromise
# 92 "data/maps/PewterCity_Museum_2F/scripts.pory"
	playse SE_PIN
# 93 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadNoticePlayer
# 94 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 95 "data/maps/PewterCity_Museum_2F/scripts.pory"
	checkplayergender
# 96 "data/maps/PewterCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PewterCity_Museum_2F_EventScript_DadAsksForPikachu_2
# 99 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_HeyYoungLady
PewterCity_Museum_2F_EventScript_DadAsksForPikachu_1:
# 101 "data/maps/PewterCity_Museum_2F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 102 "data/maps/PewterCity_Museum_2F/scripts.pory"
	switch VAR_RESULT
# 103 "data/maps/PewterCity_Museum_2F/scripts.pory"
	case DIR_WEST, PewterCity_Museum_2F_EventScript_DadAsksForPikachu_7
# 107 "data/maps/PewterCity_Museum_2F/scripts.pory"
	case DIR_SOUTH, PewterCity_Museum_2F_EventScript_DadAsksForPikachu_8
# 114 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_2F_Movement_PlayerStepAsideFromBelow
# 115 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepAsideFaceUp
PewterCity_Museum_2F_EventScript_DadAsksForPikachu_5:
# 117 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement LOCALID_PLAYER
# 118 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement LOCALID_MUSEUM_2F_BALDING_MAN
# 119 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_CouldYouBringMePikachu
# 120 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepBack
# 121 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 122 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setflag FLAG_PEWTER_MUSEUM_PIKACHU_REQUEST
	return

PewterCity_Museum_2F_EventScript_DadAsksForPikachu_2:
# 97 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_HeyYoungMan
	goto PewterCity_Museum_2F_EventScript_DadAsksForPikachu_1

PewterCity_Museum_2F_EventScript_DadAsksForPikachu_7:
# 105 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_2F_Movement_PlayerStepAsideFromRight
# 106 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepAsideFaceRight
	goto PewterCity_Museum_2F_EventScript_DadAsksForPikachu_5

PewterCity_Museum_2F_EventScript_DadAsksForPikachu_8:
# 109 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_2F_Movement_PlayerStepAsideFromAbove
# 110 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepAsideFaceUp
	goto PewterCity_Museum_2F_EventScript_DadAsksForPikachu_5


PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu::
# 128 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setvar VAR_0x8004, 0
PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_2:
# 129 "data/maps/PewterCity_Museum_2F/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_lt PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_3
# 137 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setvar VAR_RESULT, FALSE
	return

PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_3:
# 130 "data/maps/PewterCity_Museum_2F/scripts.pory"
	specialvar VAR_RESULT, GetPartyMonSpecies
# 131 "data/maps/PewterCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, SPECIES_PIKACHU
	goto_if_eq PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_6
# 135 "data/maps/PewterCity_Museum_2F/scripts.pory"
	addvar VAR_0x8004, 1
	goto PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_2

PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_6:
# 132 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setvar VAR_RESULT, TRUE
	return


# 141 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadNoticePlayer:
# 142 "data/maps/PewterCity_Museum_2F/scripts.pory"
	delay_1
# 143 "data/maps/PewterCity_Museum_2F/scripts.pory"
	delay_4
# 144 "data/maps/PewterCity_Museum_2F/scripts.pory"
	emote_exclamation_mark
# 145 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_player
	step_end

# 148 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadStepAsideFaceRight:
# 149 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 150 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_right
	step_end

# 153 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadStepAsideFaceUp:
# 154 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 155 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_up
	step_end

# 158 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_PlayerStepAsideFromRight:
# 159 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 160 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_left
	step_end

# 163 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_PlayerStepAsideFromAbove:
# 164 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 165 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_down
	step_end

# 169 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_PlayerStepAsideFromBelow:
# 170 "data/maps/PewterCity_Museum_2F/scripts.pory"
	delay_8
# 171 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_up
# 172 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_up
# 173 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 174 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_down
	step_end

# 177 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadStepBack:
# 178 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_left
# 179 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_down
	step_end

PewterCity_Museum_2F_EventScript_SpaceShuttle::
# 183 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_SpaceShuttle, MSGBOX_SIGN
	end


PewterCity_Museum_2F_EventScript_MoonStone::
# 188 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_MeteoriteThatFellOnMtMoon, MSGBOX_SIGN
	end


# 192 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_FaceLeft:
# 193 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_left
	step_end

# 196 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_FaceUp:
# 197 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_up
	step_end
