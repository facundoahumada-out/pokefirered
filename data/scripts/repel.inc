EventScript_RepelWoreOff::
# 2 "data/scripts/repel.pory"
	lockall
# 3 "data/scripts/repel.pory"
	checkitem VAR_REPEL_LAST_USED, 1
# 4 "data/scripts/repel.pory"
	callnative Cycle_Through_Repels
# 5 "data/scripts/repel.pory"
	compare VAR_RESULT, FALSE
# 6 "data/scripts/repel.pory"
	goto_if_eq EventScript_RepelWoreOff_NoMoreRepels
# 7 "data/scripts/repel.pory"
	msgbox Text_RepelWoreOff_UseAnother, MSGBOX_YESNO
# 8 "data/scripts/repel.pory"
	compare VAR_RESULT, 0
# 9 "data/scripts/repel.pory"
	goto_if_eq EventScript_RepelWoreOff_ChooseNo
# 10 "data/scripts/repel.pory"
	copyvar VAR_0x8004, VAR_REPEL_LAST_USED
# 11 "data/scripts/repel.pory"
	callnative ItemId_GetHoldEffectParam_Script
# 12 "data/scripts/repel.pory"
	copyvar VAR_REPEL_STEP_COUNT, VAR_RESULT
# 13 "data/scripts/repel.pory"
	bufferitemname 1, VAR_REPEL_LAST_USED
# 14 "data/scripts/repel.pory"
	removeitem VAR_REPEL_LAST_USED, 1
# 15 "data/scripts/repel.pory"
	playse SE_REPEL
# 16 "data/scripts/repel.pory"
	msgbox gText_PlayerUsedRepel, MSGBOX_SIGN
# 17 "data/scripts/repel.pory"
	goto EventScript_RepelWoreOff_End
	return


EventScript_RepelWoreOff_ChooseNo:
# 21 "data/scripts/repel.pory"
	closemessage
# 22 "data/scripts/repel.pory"
	goto EventScript_RepelWoreOff_End
	return


EventScript_RepelWoreOff_NoMoreRepels:
# 26 "data/scripts/repel.pory"
	msgbox Text_RepelWoreOff, MSGBOX_SIGN
# 27 "data/scripts/repel.pory"
EventScript_RepelWoreOff_End:
# 28 "data/scripts/repel.pory"
	releaseall
	end


Text_RepelWoreOff::
# 32 "data/scripts/repel.pory"
	.string "REPEL's effect wore off…$"

Text_RepelWoreOff_UseAnother::
# 36 "data/scripts/repel.pory"
	.string "REPEL's effect wore off…\n"
	.string "Use another?$"
