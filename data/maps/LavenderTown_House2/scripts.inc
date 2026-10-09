LavenderTown_House2_MapScripts::
	.byte 0


LavenderTown_House2_EventScript_NameRater::
# 4 "data/maps/LavenderTown_House2/scripts.pory"
	lock
# 5 "data/maps/LavenderTown_House2/scripts.pory"
	faceplayer
# 6 "data/maps/LavenderTown_House2/scripts.pory"
	msgbox LavenderTown_House2_Text_WantMeToRateNicknames, MSGBOX_YESNO
# 7 "data/maps/LavenderTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LavenderTown_House2_EventScript_ChooseMon
# 8 "data/maps/LavenderTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavenderTown_House2_EventScript_DontRateNickname
	end


LavenderTown_House2_EventScript_ChooseMon::
# 13 "data/maps/LavenderTown_House2/scripts.pory"
	msgbox LavenderTown_House2_Text_CritiqueWhichMonsNickname
# 14 "data/maps/LavenderTown_House2/scripts.pory"
	special ChoosePartyMon
# 15 "data/maps/LavenderTown_House2/scripts.pory"
	waitstate
# 16 "data/maps/LavenderTown_House2/scripts.pory"
	goto_if_lt VAR_0x8004, PARTY_SIZE, LavenderTown_House2_EventScript_CheckCanRateMon
# 17 "data/maps/LavenderTown_House2/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, LavenderTown_House2_EventScript_DontRateNickname
	end


LavenderTown_House2_EventScript_DontRateNickname::
# 22 "data/maps/LavenderTown_House2/scripts.pory"
	msgbox LavenderTown_House2_Text_ISeeComeVisitAgain
# 23 "data/maps/LavenderTown_House2/scripts.pory"
	release
	end


LavenderTown_House2_EventScript_CheckCanRateMon::
# 28 "data/maps/LavenderTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetPartyMonSpecies
# 29 "data/maps/LavenderTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, LavenderTown_House2_EventScript_CantNicknameEgg
# 30 "data/maps/LavenderTown_House2/scripts.pory"
	special BufferMonNickname
# 31 "data/maps/LavenderTown_House2/scripts.pory"
	special IsMonOTIDNotPlayers
# 32 "data/maps/LavenderTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_CantNicknameTradeMon
# 33 "data/maps/LavenderTown_House2/scripts.pory"
	specialvar VAR_RESULT, IsMonOTNameNotPlayers
# 34 "data/maps/LavenderTown_House2/scripts.pory"
	special BufferMonNickname
# 35 "data/maps/LavenderTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_CantNicknameTradeMon
# 36 "data/maps/LavenderTown_House2/scripts.pory"
	msgbox LavenderTown_House2_Text_GiveItANicerName, MSGBOX_YESNO
# 37 "data/maps/LavenderTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LavenderTown_House2_EventScript_ChooseNewNickname
# 38 "data/maps/LavenderTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavenderTown_House2_EventScript_DontRateNickname
	end


LavenderTown_House2_EventScript_CantNicknameEgg::
# 43 "data/maps/LavenderTown_House2/scripts.pory"
	msgbox LavenderTown_House2_Text_ThatIsMerelyAnEgg
# 44 "data/maps/LavenderTown_House2/scripts.pory"
	release
	end


LavenderTown_House2_EventScript_CantNicknameTradeMon::
# 49 "data/maps/LavenderTown_House2/scripts.pory"
	msgbox LavenderTown_House2_Text_TrulyImpeccableName
# 50 "data/maps/LavenderTown_House2/scripts.pory"
	release
	end


LavenderTown_House2_EventScript_ChooseNewNickname::
# 55 "data/maps/LavenderTown_House2/scripts.pory"
	msgbox LavenderTown_House2_Text_WhatShallNewNicknameBe
# 56 "data/maps/LavenderTown_House2/scripts.pory"
	call EventScript_ChangePokemonNickname
# 57 "data/maps/LavenderTown_House2/scripts.pory"
	specialvar VAR_RESULT, NameRaterWasNicknameChanged
# 58 "data/maps/LavenderTown_House2/scripts.pory"
	special BufferMonNickname
# 59 "data/maps/LavenderTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_ChoseNewNickname
# 60 "data/maps/LavenderTown_House2/scripts.pory"
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName
# 61 "data/maps/LavenderTown_House2/scripts.pory"
	release
	end


LavenderTown_House2_EventScript_ChoseNewNickname::
# 66 "data/maps/LavenderTown_House2/scripts.pory"
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsName
# 67 "data/maps/LavenderTown_House2/scripts.pory"
	release
	end

