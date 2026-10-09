Route5_PokemonDayCare_EventScript_DaycareMan::
# 2 "data/scripts/day_care.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 3 "data/scripts/day_care.pory"
	lock
# 4 "data/scripts/day_care.pory"
	faceplayer
# 5 "data/scripts/day_care.pory"
	showmoneybox 0, 0
# 6 "data/scripts/day_care.pory"
	specialvar VAR_RESULT, IsThereMonInRoute5Daycare
# 7 "data/scripts/day_care.pory"
	goto_if_eq VAR_RESULT, TRUE, Route5_PokemonDayCare_EventScript_CheckOnMon
# 8 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_WantMeToRaiseMon, MSGBOX_YESNO
# 9 "data/scripts/day_care.pory"
	goto_if_eq VAR_RESULT, YES, Route5_PokemonDayCare_EventScript_TryGiveMon
# 10 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_ComeAgain
# 11 "data/scripts/day_care.pory"
	goto Route5_PokemonDayCare_EventScript_CloseMoneyBox
	end


Route5_PokemonDayCare_EventScript_TryGiveMon::
# 16 "data/scripts/day_care.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 17 "data/scripts/day_care.pory"
	goto_if_eq VAR_RESULT, 1, Route5_PokemonDayCare_EventScript_OnlyOneMonInParty
# 18 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_WhichMonShouldIRaise
# 19 "data/scripts/day_care.pory"
	fadescreen FADE_TO_BLACK
# 20 "data/scripts/day_care.pory"
	hidemoneybox
# 21 "data/scripts/day_care.pory"
	special ChooseSendDaycareMon
# 22 "data/scripts/day_care.pory"
	waitstate
# 23 "data/scripts/day_care.pory"
	showmoneybox 0, 0
# 24 "data/scripts/day_care.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Route5_PokemonDayCare_EventScript_ComeAgain
# 25 "data/scripts/day_care.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 26 "data/scripts/day_care.pory"
	goto_if_eq VAR_RESULT, 0, Route5_PokemonDayCare_EventScript_OnlyOneAliveMonInParty
# 27 "data/scripts/day_care.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 28 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_LookAfterMonForAWhile
# 29 "data/scripts/day_care.pory"
	waitse
# 30 "data/scripts/day_care.pory"
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
# 31 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_ComeSeeMeInAWhile
# 32 "data/scripts/day_care.pory"
	waitmoncry
# 33 "data/scripts/day_care.pory"
	special PutMonInRoute5Daycare
# 34 "data/scripts/day_care.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 35 "data/scripts/day_care.pory"
	goto Route5_PokemonDayCare_EventScript_CloseMoneyBox
	end


Route5_PokemonDayCare_EventScript_ComeAgain::
# 40 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_ComeAnytimeYouLike
# 41 "data/scripts/day_care.pory"
	goto Route5_PokemonDayCare_EventScript_CloseMoneyBox
	end


Route5_PokemonDayCare_EventScript_OnlyOneMonInParty::
# 46 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_OnlyHaveOneMonWithYou
# 47 "data/scripts/day_care.pory"
	goto Route5_PokemonDayCare_EventScript_CloseMoneyBox
	end


Route5_PokemonDayCare_EventScript_OnlyOneAliveMonInParty::
# 52 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_WhatWillYouBattleWith
# 53 "data/scripts/day_care.pory"
	goto Route5_PokemonDayCare_EventScript_CloseMoneyBox
	end


Route5_PokemonDayCare_EventScript_CheckOnMon::
# 58 "data/scripts/day_care.pory"
	setvar VAR_0x8004, 0
# 59 "data/scripts/day_care.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedForRoute5DaycareMon
# 60 "data/scripts/day_care.pory"
	call_if_ne VAR_RESULT, 0, Route5_PokemonDayCare_EventScript_MonHasGrownByXLevels
# 61 "data/scripts/day_care.pory"
	call_if_eq VAR_RESULT, 0, Route5_PokemonDayCare_EventScript_NotEnoughTime
# 62 "data/scripts/day_care.pory"
	special GetCostToWithdrawRoute5DaycareMon
# 63 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_OweMeXForMonsReturn, MSGBOX_YESNO
# 64 "data/scripts/day_care.pory"
	goto_if_eq VAR_RESULT, YES, Route5_PokemonDayCare_EventScript_TryRetrieveMon
# 65 "data/scripts/day_care.pory"
	goto Route5_PokemonDayCare_EventScript_ComeAgain
	end


Route5_PokemonDayCare_EventScript_MonHasGrownByXLevels::
# 70 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_MonHasGrownByXLevels
	return


Route5_PokemonDayCare_EventScript_NotEnoughTime::
# 75 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_MonNeedsToSpendMoreTime
	return


Route5_PokemonDayCare_EventScript_TryRetrieveMon::
# 80 "data/scripts/day_care.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 81 "data/scripts/day_care.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, Route5_PokemonDayCare_EventScript_NoRoomInParty
# 82 "data/scripts/day_care.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 83 "data/scripts/day_care.pory"
	goto_if_eq VAR_RESULT, TRUE, Route5_PokemonDayCare_EventScript_RetrieveMon
# 84 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_DontHaveEnoughMoney
# 85 "data/scripts/day_care.pory"
	goto Route5_PokemonDayCare_EventScript_CloseMoneyBox
	end


Route5_PokemonDayCare_EventScript_RetrieveMon::
# 90 "data/scripts/day_care.pory"
	setvar VAR_0x8004, 0
# 91 "data/scripts/day_care.pory"
	specialvar VAR_RESULT, TakePokemonFromRoute5Daycare
# 92 "data/scripts/day_care.pory"
	special SubtractMoneyFromVar0x8005
# 93 "data/scripts/day_care.pory"
	updatemoneybox
# 94 "data/scripts/day_care.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 95 "data/scripts/day_care.pory"
	getpartysize
# 96 "data/scripts/day_care.pory"
	subvar VAR_RESULT, 1
# 97 "data/scripts/day_care.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 98 "data/scripts/day_care.pory"
	copyvar VAR_RESULT, VAR_0x8008
# 99 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_ThankYouHeresMon
# 100 "data/scripts/day_care.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 101 "data/scripts/day_care.pory"
	waitse
# 102 "data/scripts/day_care.pory"
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
# 103 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_PlayerGotMonBack
# 104 "data/scripts/day_care.pory"
	call EventScript_RestorePrevTextColor
# 105 "data/scripts/day_care.pory"
	waitmoncry
# 106 "data/scripts/day_care.pory"
	goto Route5_PokemonDayCare_EventScript_CloseMoneyBox
	end


Route5_PokemonDayCare_EventScript_NoRoomInParty::
# 111 "data/scripts/day_care.pory"
	msgbox Route5_PokemonDayCare_Text_YouveGotNoRoomForIt
# 112 "data/scripts/day_care.pory"
	goto Route5_PokemonDayCare_EventScript_CloseMoneyBox
	end


Route5_PokemonDayCare_EventScript_CloseMoneyBox::
# 117 "data/scripts/day_care.pory"
	hidemoneybox
# 118 "data/scripts/day_care.pory"
	release
	end


EventScript_EggHatch::
# 123 "data/scripts/day_care.pory"
	lockall
# 124 "data/scripts/day_care.pory"
	msgbox DayCare_Text_Huh
# 125 "data/scripts/day_care.pory"
	special EggHatch
# 126 "data/scripts/day_care.pory"
	waitstate
# 127 "data/scripts/day_care.pory"
	releaseall
	end

