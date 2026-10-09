CeladonCity_Condominiums_RoofRoom_MapScripts::
	.byte 0


CeladonCity_Condominiums_RoofRoom_EventScript_BlackBelt::
# 4 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_TheresNothingIDontKnow, MSGBOX_NPC
	end


CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall::
# 9 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	lock
# 10 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	faceplayer
# 11 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_EEVEE
# 12 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	givemon SPECIES_EEVEE, 25
# 13 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty
# 14 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC
# 15 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 16 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	release
	end


CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveeParty::
# 21 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	removeobject LOCALID_EEVEE_POKEBALL
# 22 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 23 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee
# 24 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	waitmessage
# 25 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	waitfanfare
# 26 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 27 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 28 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
# 29 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 30 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	call EventScript_ChangePokemonNickname
# 31 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
	end


CeladonCity_Condominiums_RoofRoom_EventScript_GetEeveePC::
# 36 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	removeobject LOCALID_EEVEE_POKEBALL
# 37 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 38 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee
# 39 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	waitmessage
# 40 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	waitfanfare
# 41 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 42 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 43 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC
# 44 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 45 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC
	end


CeladonCity_Condominiums_RoofRoom_EventScript_TransferEeveeToPC::
# 50 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	call EventScript_TransferredToPC
# 51 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee
	end


CeladonCity_Condominiums_RoofRoom_EventScript_SetGotEevee::
# 56 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	setflag FLAG_GOT_EEVEE
# 57 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	release
	end


CeladonCity_Condominiums_RoofRoom_EventScript_TMsPamphlet::
# 62 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_PamphletOnTMs, MSGBOX_SIGN
	end


CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard::
# 67 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	lockall
# 68 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_WirelessAdapterLecture
# 69 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading
# 70 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	waitmessage
# 71 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	setvar VAR_0x8004, 4
# 72 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_LINKED_DIRECT_UNION, FALSE
# 73 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 74 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub
# 75 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner
# 76 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom
# 77 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 3, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 78 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
	end


CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading::
# 83 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading
# 84 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	waitmessage
# 85 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_LINKED_DIRECT_UNION, FALSE
# 86 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 87 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub
# 88 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner
# 89 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom
# 90 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 3, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
# 91 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard
	end


CeladonCity_Condominiums_RoofRoom_EventScript_WirelessClub::
# 96 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainWirelessClub
# 97 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
	end


CeladonCity_Condominiums_RoofRoom_EventScript_DirectCorner::
# 102 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainDirectCorner
# 103 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
	end


CeladonCity_Condominiums_RoofRoom_EventScript_UnionRoom::
# 108 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainUnionRoom
# 109 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
	end


CeladonCity_Condominiums_RoofRoom_EventScript_ExitBlackboard::
# 114 "data/maps/CeladonCity_Condominiums_RoofRoom/scripts.pory"
	releaseall
	end

