# 1 "data/scripts/pkmn_center_nurse.pory"

# 2 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse::
# 3 "data/scripts/pkmn_center_nurse.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 4 "data/scripts/pkmn_center_nurse.pory"
	message Text_WelcomeWantToHealPkmn
# 5 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 6 "data/scripts/pkmn_center_nurse.pory"
	multichoice 19, 8, MULTICHOICE_YES_NO, FALSE | (TRUE << 1)
# 7 "data/scripts/pkmn_center_nurse.pory"
	switch VAR_RESULT
# 8 "data/scripts/pkmn_center_nurse.pory"
	case 0, EventScript_PkmnCenterNurse_HealPkmn
# 9 "data/scripts/pkmn_center_nurse.pory"
	case 1 EventScript_PkmnCenterNurse_Goodbye
# 10 "data/scripts/pkmn_center_nurse.pory"
	case SCR_MENU_CANCEL, EventScript_PkmnCenterNurse_Goodbye
# 11 "data/scripts/pkmn_center_nurse.pory"
	end
# 12 "data/scripts/pkmn_center_nurse.pory"

# 13 "data/scripts/pkmn_center_nurse.pory"
EventScript_PkmnCenterNurse_HealPkmn::
# 14 "data/scripts/pkmn_center_nurse.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 15 "data/scripts/pkmn_center_nurse.pory"
	message Text_TakeYourPkmnForFewSeconds
# 16 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 17 "data/scripts/pkmn_center_nurse.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 18 "data/scripts/pkmn_center_nurse.pory"
	special SetUsedPkmnCenterQuestLogEvent
# 19 "data/scripts/pkmn_center_nurse.pory"
	goto EventScript_PkmnCenterNurse_CheckTrainerTowerAndUnionRoom
# 20 "data/scripts/pkmn_center_nurse.pory"
	end

EventScript_PkmnCenterNurse_TakeAndHealPkmn::
# 24 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterLeft
# 25 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 26 "data/scripts/pkmn_center_nurse.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 27 "data/scripts/pkmn_center_nurse.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 28 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 29 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 30 "data/scripts/pkmn_center_nurse.pory"
	special HealPlayerParty
	return


EventScript_PkmnCenterNurse_CheckTrainerTowerAndUnionRoom::
# 35 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, IsPlayerNotInTrainerTowerLobby
# 36 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_ReturnPkmn
# 37 "data/scripts/pkmn_center_nurse.pory"
	specialvar VAR_RESULT, BufferUnionRoomPlayerName
# 38 "data/scripts/pkmn_center_nurse.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 39 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 0, EventScript_PkmnCenterNurse_ReturnPkmn
# 40 "data/scripts/pkmn_center_nurse.pory"
	goto_if_eq VAR_0x8008, 1, EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom
	end


EventScript_PkmnCenterNurse_ReturnPkmn::
# 45 "data/scripts/pkmn_center_nurse.pory"
	message Text_RestoredPkmnToFullHealth
# 46 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 47 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_LAST_TALKED, Movement_Bow
# 48 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 49 "data/scripts/pkmn_center_nurse.pory"
	msgbox Text_WeHopeToSeeYouAgain
	return


EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom::
# 54 "data/scripts/pkmn_center_nurse.pory"
	goto_if_set FLAG_SYS_INFORMED_OF_LOCAL_WIRELESS_PLAYER, EventScript_PkmnCenterNurse_ReturnPkmn
# 55 "data/scripts/pkmn_center_nurse.pory"
	msgbox Text_RestoredPkmnToFullHealth
# 56 "data/scripts/pkmn_center_nurse.pory"
	setflag FLAG_SYS_INFORMED_OF_LOCAL_WIRELESS_PLAYER
# 57 "data/scripts/pkmn_center_nurse.pory"
	message Text_PlayerIsPlayingRightNowGoForIt
# 58 "data/scripts/pkmn_center_nurse.pory"
	waitmessage
# 59 "data/scripts/pkmn_center_nurse.pory"
	applymovement VAR_LAST_TALKED, Movement_Bow
# 60 "data/scripts/pkmn_center_nurse.pory"
	waitmovement 0
# 61 "data/scripts/pkmn_center_nurse.pory"
	msgbox Text_WeHopeToSeeYouAgain
	return


EventScript_PkmnCenterNurse_Goodbye::
# 66 "data/scripts/pkmn_center_nurse.pory"
	msgbox Text_WeHopeToSeeYouAgain
	return


# 70 "data/scripts/pkmn_center_nurse.pory"
Movement_Bow::
# 71 "data/scripts/pkmn_center_nurse.pory"
	nurse_joy_bow
# 72 "data/scripts/pkmn_center_nurse.pory"
	delay_4
# 73 "data/scripts/pkmn_center_nurse.pory"
	step_end
