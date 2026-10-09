Std_MsgboxNPC::
# 2 "data/scripts/std_msgbox.pory"
	lock
# 3 "data/scripts/std_msgbox.pory"
	faceplayer
# 4 "data/scripts/std_msgbox.pory"
	message 0x0
# 5 "data/scripts/std_msgbox.pory"
	waitmessage
# 6 "data/scripts/std_msgbox.pory"
	waitbuttonpress
# 7 "data/scripts/std_msgbox.pory"
	release
	return


Std_MsgboxSign::
# 12 "data/scripts/std_msgbox.pory"
	lockall
# 13 "data/scripts/std_msgbox.pory"
	message 0x0
# 14 "data/scripts/std_msgbox.pory"
	waitmessage
# 15 "data/scripts/std_msgbox.pory"
	waitbuttonpress
# 16 "data/scripts/std_msgbox.pory"
	releaseall
	return


Std_MsgboxDefault::
# 21 "data/scripts/std_msgbox.pory"
	message 0x0
# 22 "data/scripts/std_msgbox.pory"
	waitmessage
# 23 "data/scripts/std_msgbox.pory"
	waitbuttonpress
	return


Std_MsgboxYesNo::
# 28 "data/scripts/std_msgbox.pory"
	message 0x0
# 29 "data/scripts/std_msgbox.pory"
	waitmessage
# 30 "data/scripts/std_msgbox.pory"
	yesnobox 20, 8
	return


Std_ReceivedItem::
# 35 "data/scripts/std_msgbox.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 36 "data/scripts/std_msgbox.pory"
	call_if_eq VAR_0x8002, MUS_LEVEL_UP, EventScript_ReceivedItemFanfare1
# 37 "data/scripts/std_msgbox.pory"
	call_if_eq VAR_0x8002, MUS_OBTAIN_KEY_ITEM, EventScript_ReceivedItemFanfare2
# 38 "data/scripts/std_msgbox.pory"
	message 0x0
# 39 "data/scripts/std_msgbox.pory"
	waitmessage
# 40 "data/scripts/std_msgbox.pory"
	waitfanfare
# 41 "data/scripts/std_msgbox.pory"
	call_if_eq VAR_0x8002, MUS_LEVEL_UP, EventScript_ReceivedItemWaitFanfare
# 42 "data/scripts/std_msgbox.pory"
	putitemaway VAR_0x8000, VAR_0x8001
# 43 "data/scripts/std_msgbox.pory"
	call EventScript_RestorePrevTextColor
	return


EventScript_ReceivedItemFanfare1::
# 48 "data/scripts/std_msgbox.pory"
	playfanfare MUS_LEVEL_UP
	return


EventScript_ReceivedItemFanfare2::
# 53 "data/scripts/std_msgbox.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
	return


EventScript_ReceivedItemWaitFanfare::
# 58 "data/scripts/std_msgbox.pory"
	delay 50
	return


EventScript_UnusedReturn::
	return


EventScript_AskSaveGame::
# 67 "data/scripts/std_msgbox.pory"
	special Field_AskSaveTheGame
# 68 "data/scripts/std_msgbox.pory"
	waitstate
	return

