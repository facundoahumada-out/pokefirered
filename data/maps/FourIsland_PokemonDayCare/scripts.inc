FourIsland_PokemonDayCare_MapScripts::
	.byte 0


FourIsland_PokemonDayCare_EventScript_DaycareWoman::
# 4 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 5 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	lock
# 6 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	faceplayer
# 7 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 8 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, FourIsland_PokemonDayCare_EggWaiting
# 9 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_OneMonInDaycare
# 10 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, FourIsland_PokemonDayCare_TwoMonsInDaycare
# 11 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WouldYouLikeUsToRaiseMon, MSGBOX_YESNO
# 12 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 13 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_FineThenComeAgain
# 14 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
	end


FourIsland_PokemonDayCare_GiveMonToRaise::
# 19 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 20 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, 1, FourIsland_PokemonDayCare_OnlyOneMonInParty
# 21 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WhichMonShouldWeRaise
# 22 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special ChooseSendDaycareMon
# 24 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 25 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FourIsland_PokemonDayCare_ComeAgain
# 26 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 27 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FourIsland_PokemonDayCare_OnlyOneAliveMonInParty
# 28 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 29 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitse
# 30 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
# 31 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WellRaiseYourMon
# 32 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmoncry
# 33 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 34 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 35 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 36 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_CanRaiseOneMore
# 37 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
	end


FourIsland_PokemonDayCare_ComeAgain::
# 42 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 43 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
	end


FourIsland_PokemonDayCare_CanRaiseOneMore::
# 48 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 49 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 50 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
	end


FourIsland_PokemonDayCare_OnlyOneMonInParty::
# 55 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_YouHaveJustOneMon
# 56 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
	end


FourIsland_PokemonDayCare_OnlyOneAliveMonInParty::
# 61 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WhatWillYouBattleWith
# 62 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
	end


FourIsland_PokemonDayCare_EggWaiting::
# 67 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_HusbandWasLookingForYou
# 68 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
	end


FourIsland_PokemonDayCare_MonHasGrownXLevels::
# 73 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_YourMonHasGrownXLevels
	return


FourIsland_PokemonDayCare_DisplayLevelsGained::
# 78 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 79 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call_if_ne VAR_RESULT, 0, FourIsland_PokemonDayCare_MonHasGrownXLevels
	return


FourIsland_PokemonDayCare_OneMonInDaycare::
# 84 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 85 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 0
# 86 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 87 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 88 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 89 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 90 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 91 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
	end


FourIsland_PokemonDayCare_TryRetrieveMon::
# 96 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 97 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FourIsland_PokemonDayCare_NoRoomInParty
# 98 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 99 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 0
# 100 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_CostPrompt
# 101 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special ShowDaycareLevelMenu
# 102 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 103 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 104 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU, FourIsland_PokemonDayCare_ComeAgain
# 105 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_CostPrompt
	end


FourIsland_PokemonDayCare_CostPrompt::
# 110 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special GetDaycareCost
# 111 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ItWillCostX, MSGBOX_YESNO
# 112 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_CheckEnoughMoney
# 113 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
	end


FourIsland_PokemonDayCare_CheckEnoughMoney::
# 118 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 119 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FourIsland_PokemonDayCare_RetrieveMon
# 120 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_NotEnoughMoney
# 121 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
	end


FourIsland_PokemonDayCare_RetrieveMon::
# 126 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_DAYCARE_WOMAN, FourIsland_PokemonDayCare_Movement_RetrieveMon
# 127 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmovement 0
# 128 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 129 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 130 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	playse SE_RS_SHOP
# 131 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 132 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitse
# 133 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
# 134 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 135 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TookBackMon
# 136 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call EventScript_RestorePrevTextColor
# 137 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmoncry
# 138 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 139 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_AskRetrieveOtherMon
# 140 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
	end


FourIsland_PokemonDayCare_AskRetrieveOtherMon::
# 145 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 146 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 147 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
	end


FourIsland_PokemonDayCare_NoRoomInParty::
# 152 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_YourPartyIsFull
# 153 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
	end


# 157 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Movement_RetrieveMon::
# 158 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 159 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 160 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	face_right
# 161 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 162 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 163 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	face_left
# 164 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 165 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 166 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	face_up
# 167 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	walk_slower_up
# 168 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	set_invisible
# 169 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 170 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 171 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 172 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 173 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 174 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	face_down
# 175 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	set_visible
# 176 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	walk_slower_down
# 177 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	step_end

FourIsland_PokemonDayCare_EventScript_UnusedEnd::
	end


FourIsland_PokemonDayCare_TwoMonsInDaycare::
# 186 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 187 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 0
# 188 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 189 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 1
# 190 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 191 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 192 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 193 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 194 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
	end


FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon::
# 200 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special ShowDaycareLevelMenu
# 201 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 202 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, 2, FourIsland_PokemonDayCare_ComeAgain
# 203 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 204 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 205 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 206 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 207 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
	end

