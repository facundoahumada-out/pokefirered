SaffronCity_PokemonTrainerFanClub_MapScripts::
# 5 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonTrainerFanClub_OnTransition
# 2 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_PokemonTrainerFanClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SaffronCity_PokemonTrainerFanClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
	.2byte 0


SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
# 9 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lockall
# 10 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 11 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_WalkInPlaceFasterDown
# 12 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 13 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	playse SE_PIN
# 14 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_ExclamationMark
# 15 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 16 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_Delay48
# 17 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 18 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HuhYou
# 19 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	closemessage
# 20 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
# 21 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 22 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 23 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 24 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow
# 25 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2
# 26 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	releaseall
	end


# 30 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer::
# 31 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_16
# 32 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 33 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 34 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_16
# 35 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 36 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 37 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 38 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end

# 42 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_FanApproachPlayer::
# 43 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 44 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 45 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 46 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 47 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 48 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 49 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 50 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end

# 54 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlWatchPlayer::
# 55 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 56 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 57 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 58 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 59 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 60 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 61 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end

# 65 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlMoveCloserToPlayer::
# 66 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 67 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_right
# 68 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end

# 72 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlHideFromPlayer::
# 73 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	jump_in_place_right
# 74 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 75 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 76 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_right
# 77 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 78 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end

SaffronCity_PokemonTrainerFanClub_OnTransition::
# 82 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting
# 83 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2, SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
	end


SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
# 88 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_TryLoseFansFromPlayTime
# 89 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 90 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 91 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable
# 92 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 93 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 94 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 95 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 96 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 97 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable
# 98 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 99 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 100 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 101 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 102 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 103 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 104 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 105 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 106 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 107 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 108 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 109 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 110 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 111 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 112 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
	end


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable::
# 117 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, 5, 2
# 118 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, MOVEMENT_TYPE_FACE_UP
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable::
# 123 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, 7, 4
# 124 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, MOVEMENT_TYPE_FACE_LEFT
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable::
# 129 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, 2, 2
# 130 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, MOVEMENT_TYPE_FACE_UP
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
# 135 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, 3, 4
# 136 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, MOVEMENT_TYPE_FACE_RIGHT
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
# 141 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_ROCKER, 4, 6
# 142 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_ROCKER, MOVEMENT_TYPE_FACE_UP
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
# 147 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_WOMAN, 10, 3
# 148 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_WOMAN, MOVEMENT_TYPE_FACE_UP
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
# 153 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BEAUTY, 7, 5
# 154 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BEAUTY, MOVEMENT_TYPE_FACE_LEFT
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
# 159 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, 9, 6
# 160 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, MOVEMENT_TYPE_FACE_LEFT
	return


SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting::
# 165 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 166 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 167 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 168 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 169 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
	end


SaffronCity_PokemonTrainerFanClub_EventScript_CrushGirl::
# 174 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 175 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 176 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 177 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 178 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_CrushGirlPlayerNotChampion
# 179 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 180 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_CrushGirlPlayersFan
# 181 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 182 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_CrushGirlOnlyNonFan
# 183 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore
# 184 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_CrushGirlPlayersFan::
# 189 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 190 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_CrushGirlOnlyFan
# 191 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou
# 192 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_CrushGirlOnlyFan::
# 197 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou
# 198 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_CrushGirlOnlyNonFan::
# 203 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe
# 204 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_CrushGirlPlayerNotChampion::
# 209 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling
# 210 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl::
# 215 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 216 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 217 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 218 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 219 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion
# 220 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 221 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan
# 222 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 223 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan
# 224 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina
# 225 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan::
# 230 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 231 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan
# 232 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay
# 233 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan::
# 238 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan
# 239 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan::
# 244 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan
# 245 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion::
# 250 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay
# 251 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_Youngster::
# 256 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 257 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 258 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 259 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 260 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion
# 261 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 262 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan
# 263 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 264 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan
# 265 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero
# 266 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan::
# 271 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 272 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan
# 273 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts
# 274 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan::
# 279 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou
# 280 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan::
# 285 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd
# 286 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion::
# 291 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool
# 292 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman::
# 297 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 298 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 299 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 300 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 301 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion
# 302 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 303 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan
# 304 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 305 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan
# 306 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre
# 307 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan::
# 312 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 313 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan
# 314 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle
# 315 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan::
# 320 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence
# 321 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan::
# 326 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo
# 327 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion::
# 332 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning
# 333 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_Woman::
# 338 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 339 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 340 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 341 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 342 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 343 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan
# 344 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 345 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan
# 346 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire
# 347 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan::
# 352 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 353 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan
# 354 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle
# 355 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan::
# 360 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan
# 361 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan::
# 366 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou
# 367 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_Rocker::
# 372 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 373 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 374 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 375 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 376 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 377 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan
# 378 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 379 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan
# 380 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks
# 381 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan::
# 386 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 387 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan
# 388 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool
# 389 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan::
# 394 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans
# 395 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan::
# 400 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan
# 401 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_Beauty::
# 406 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 407 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 408 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 409 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 410 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 411 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan
# 412 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 413 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan
# 414 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity
# 415 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan::
# 420 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 421 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan
# 422 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing
# 423 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan::
# 428 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan
# 429 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan::
# 434 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart
# 435 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt::
# 440 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 441 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 442 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 443 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 444 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 445 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan
# 446 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 447 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, ( NUM_TRAINER_FAN_CLUB_MEMBERS - 1 ), SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan
# 448 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect
# 449 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan::
# 454 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 455 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan
# 456 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational
# 457 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan::
# 462 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan
# 463 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end


SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan::
# 468 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster
# 469 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
	end

