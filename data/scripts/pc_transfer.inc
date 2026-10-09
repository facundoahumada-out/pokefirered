EventScript_GetGiftMonPartySlot::
# 2 "data/scripts/pc_transfer.pory"
	getpartysize
# 3 "data/scripts/pc_transfer.pory"
	subvar VAR_RESULT, 1
# 4 "data/scripts/pc_transfer.pory"
	copyvar VAR_0x8004, VAR_RESULT
	return


EventScript_NameReceivedBoxMon::
# 9 "data/scripts/pc_transfer.pory"
	fadescreen FADE_TO_BLACK
# 10 "data/scripts/pc_transfer.pory"
	special ChangeBoxPokemonNickname
# 11 "data/scripts/pc_transfer.pory"
	waitstate
# 12 "data/scripts/pc_transfer.pory"
	lock
# 13 "data/scripts/pc_transfer.pory"
	faceplayer
	return


EventScript_TransferredToPC::
# 18 "data/scripts/pc_transfer.pory"
	bufferboxname STR_VAR_1, VAR_PC_BOX_TO_SEND_MON
# 19 "data/scripts/pc_transfer.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_1
# 20 "data/scripts/pc_transfer.pory"
	call_if_unset FLAG_SYS_NOT_SOMEONES_PC, EventScript_TransferredSomeonesPC
# 21 "data/scripts/pc_transfer.pory"
	call_if_set FLAG_SYS_NOT_SOMEONES_PC, EventScript_TransferredBillsPC
	return


EventScript_TransferredSomeonesPC::
# 26 "data/scripts/pc_transfer.pory"
	specialvar VAR_RESULT, ShouldShowBoxWasFullMessage
# 27 "data/scripts/pc_transfer.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_TransferredSomeonesPCBoxFull
# 28 "data/scripts/pc_transfer.pory"
	msgbox Text_MonSentToBoxInSomeonesPC
	return


EventScript_TransferredSomeonesPCBoxFull::
# 33 "data/scripts/pc_transfer.pory"
	specialvar VAR_RESULT, GetPCBoxToSendMon
# 34 "data/scripts/pc_transfer.pory"
	bufferboxname STR_VAR_3, VAR_RESULT
# 35 "data/scripts/pc_transfer.pory"
	msgbox Text_MonSentToBoxSomeonesBoxFull
	return


EventScript_TransferredBillsPC::
# 40 "data/scripts/pc_transfer.pory"
	specialvar VAR_RESULT, ShouldShowBoxWasFullMessage
# 41 "data/scripts/pc_transfer.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_TransferredBillsPCBoxFull
# 42 "data/scripts/pc_transfer.pory"
	msgbox Text_MonSentToBoxInBillsPC
	return


EventScript_TransferredBillsPCBoxFull::
# 47 "data/scripts/pc_transfer.pory"
	specialvar VAR_RESULT, GetPCBoxToSendMon
# 48 "data/scripts/pc_transfer.pory"
	bufferboxname STR_VAR_3, VAR_RESULT
# 49 "data/scripts/pc_transfer.pory"
	msgbox Text_MonSentToBoxBillsBoxFull
	return

