Debug_EventScript_GiveAllTMs::
# 4 "data/scripts/debug.pory"
	checkitem ITEM_TM_CASE
# 5 "data/scripts/debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Debug_EventScript_GiveAllTMs_2
Debug_EventScript_GiveAllTMs_1:
# 8 "data/scripts/debug.pory"
	setvar VAR_0x8004, ITEM_TM01
Debug_EventScript_GiveAllTMs_5:
# 9 "data/scripts/debug.pory"
	compare VAR_0x8004, ITEM_TM93
	goto_if_le Debug_EventScript_GiveAllTMs_6
# 13 "data/scripts/debug.pory"
	playfanfare MUS_OBTAIN_TMHM
# 14 "data/scripts/debug.pory"
	msgbox Debug_EventScript_GiveAllTMs_Text_0
# 15 "data/scripts/debug.pory"
	waitfanfare
	return

Debug_EventScript_GiveAllTMs_2:
# 6 "data/scripts/debug.pory"
	additem ITEM_TM_CASE
	goto Debug_EventScript_GiveAllTMs_1

Debug_EventScript_GiveAllTMs_6:
# 10 "data/scripts/debug.pory"
	additem VAR_0x8004, 1
# 11 "data/scripts/debug.pory"
	addvar VAR_0x8004, 1
	goto Debug_EventScript_GiveAllTMs_5


Debug_EventScript_GiveAllTMs_Text_0:
# 14 "data/scripts/debug.pory"
	.string "DEBUG: Recibiste las MT01-MT93.$"
