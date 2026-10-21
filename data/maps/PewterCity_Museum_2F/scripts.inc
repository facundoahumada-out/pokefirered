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
	msgbox PewterCity_Museum_2F_Text_YouMadeHerDay
# 56 "data/maps/PewterCity_Museum_2F/scripts.pory"
	giveitem ITEM_LIGHT_BALL
# 57 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 58 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setflag FLAG_GOT_LIGHT_BALL_PEWTER_MUSEUM
# 59 "data/maps/PewterCity_Museum_2F/scripts.pory"
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
# 64 "data/maps/PewterCity_Museum_2F/scripts.pory"
	lock
# 65 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_set FLAG_GOT_LIGHT_BALL_PEWTER_MUSEUM, PewterCity_Museum_2F_EventScript_BaldingManAfterReward
# 66 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_set FLAG_PEWTER_MUSEUM_PIKACHU_REQUEST, PewterCity_Museum_2F_EventScript_BaldingManReminder
# 67 "data/maps/PewterCity_Museum_2F/scripts.pory"
	call PewterCity_Museum_2F_EventScript_DadAsksForPikachu
# 68 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_BaldingManReminder::
# 73 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PikachuSoonIPromise
# 74 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, Common_Movement_FacePlayer
# 75 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_RememberToBringPikachu
# 77 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, Common_Movement_FaceDown
# 78 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_BaldingManAfterReward::
# 84 "data/maps/PewterCity_Museum_2F/scripts.pory"
	faceplayer
# 85 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_DaughterHasntStoppedTalking
# 86 "data/maps/PewterCity_Museum_2F/scripts.pory"
	release
	end


PewterCity_Museum_2F_EventScript_DadAsksForPikachu::
# 93 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PikachuSoonIPromise
# 94 "data/maps/PewterCity_Museum_2F/scripts.pory"
	playse SE_PIN
# 95 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadNoticePlayer
# 96 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/PewterCity_Museum_2F/scripts.pory"
	checkplayergender
# 98 "data/maps/PewterCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PewterCity_Museum_2F_EventScript_DadAsksForPikachu_2
# 101 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_HeyYoungLady
PewterCity_Museum_2F_EventScript_DadAsksForPikachu_1:
# 103 "data/maps/PewterCity_Museum_2F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 104 "data/maps/PewterCity_Museum_2F/scripts.pory"
	switch VAR_RESULT
# 105 "data/maps/PewterCity_Museum_2F/scripts.pory"
	case DIR_WEST, PewterCity_Museum_2F_EventScript_DadAsksForPikachu_7
# 109 "data/maps/PewterCity_Museum_2F/scripts.pory"
	case DIR_SOUTH, PewterCity_Museum_2F_EventScript_DadAsksForPikachu_8
# 116 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_2F_Movement_PlayerStepAsideFromBelow
# 117 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepAsideFaceUp
PewterCity_Museum_2F_EventScript_DadAsksForPikachu_5:
# 119 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement LOCALID_PLAYER
# 120 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement LOCALID_MUSEUM_2F_BALDING_MAN
# 121 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_CouldYouBringMePikachu
# 122 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepBack
# 123 "data/maps/PewterCity_Museum_2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setflag FLAG_PEWTER_MUSEUM_PIKACHU_REQUEST
	return

PewterCity_Museum_2F_EventScript_DadAsksForPikachu_2:
# 99 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_Text_HeyYoungMan
	goto PewterCity_Museum_2F_EventScript_DadAsksForPikachu_1

PewterCity_Museum_2F_EventScript_DadAsksForPikachu_7:
# 107 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_2F_Movement_PlayerStepAsideFromRight
# 108 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepAsideFaceRight
	goto PewterCity_Museum_2F_EventScript_DadAsksForPikachu_5

PewterCity_Museum_2F_EventScript_DadAsksForPikachu_8:
# 111 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_2F_Movement_PlayerStepAsideFromAbove
# 112 "data/maps/PewterCity_Museum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_BALDING_MAN, PewterCity_Museum_2F_Movement_DadStepAsideFaceUp
	goto PewterCity_Museum_2F_EventScript_DadAsksForPikachu_5


PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu::
# 130 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setvar VAR_0x8004, 0
PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_2:
# 131 "data/maps/PewterCity_Museum_2F/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_lt PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_3
# 139 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setvar VAR_RESULT, FALSE
	return

PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_3:
# 132 "data/maps/PewterCity_Museum_2F/scripts.pory"
	specialvar VAR_RESULT, GetPartyMonSpecies
# 133 "data/maps/PewterCity_Museum_2F/scripts.pory"
	compare VAR_RESULT, SPECIES_PIKACHU
	goto_if_eq PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_6
# 137 "data/maps/PewterCity_Museum_2F/scripts.pory"
	addvar VAR_0x8004, 1
	goto PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_2

PewterCity_Museum_2F_EventScript_CheckPartyHasPikachu_6:
# 134 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setvar VAR_RESULT, TRUE
	return


# 143 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadNoticePlayer:
# 144 "data/maps/PewterCity_Museum_2F/scripts.pory"
	delay_1
# 145 "data/maps/PewterCity_Museum_2F/scripts.pory"
	delay_4
# 146 "data/maps/PewterCity_Museum_2F/scripts.pory"
	emote_exclamation_mark
# 147 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_player
	step_end

# 150 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadStepAsideFaceRight:
# 151 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 152 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_right
	step_end

# 155 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadStepAsideFaceUp:
# 156 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 157 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_up
	step_end

# 160 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_PlayerStepAsideFromRight:
# 161 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 162 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_left
	step_end

# 165 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_PlayerStepAsideFromAbove:
# 166 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 167 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_down
	step_end

# 171 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_PlayerStepAsideFromBelow:
# 172 "data/maps/PewterCity_Museum_2F/scripts.pory"
	delay_8
# 173 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_up
# 174 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_up
# 175 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_right
# 176 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_down
	step_end

# 179 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_DadStepBack:
# 180 "data/maps/PewterCity_Museum_2F/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_down
	step_end

PewterCity_Museum_2F_EventScript_SpaceShuttle::
# 185 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_SpaceShuttle, MSGBOX_SIGN
	end


PewterCity_Museum_2F_EventScript_MoonStone::
# 190 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_MeteoriteThatFellOnMtMoon, MSGBOX_SIGN
	end


# 194 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_FaceLeft:
# 195 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_left
	step_end

# 198 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_Movement_FaceUp:
# 199 "data/maps/PewterCity_Museum_2F/scripts.pory"
	face_up
	step_end
