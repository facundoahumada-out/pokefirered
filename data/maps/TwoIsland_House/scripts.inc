TwoIsland_House_MapScripts::
	.byte 0


TwoIsland_House_EventScript_MoveManiac::
# 9 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 10 "data/maps/TwoIsland_House/scripts.pory"
	special QuestLog_CutRecording
# 11 "data/maps/TwoIsland_House/scripts.pory"
	lock
# 12 "data/maps/TwoIsland_House/scripts.pory"
	faceplayer
# 13 "data/maps/TwoIsland_House/scripts.pory"
	clearflag FLAG_TEMP_2
# 14 "data/maps/TwoIsland_House/scripts.pory"
	clearflag FLAG_TEMP_3
# 15 "data/maps/TwoIsland_House/scripts.pory"
	clearflag FLAG_TEMP_4
# 16 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_set FLAG_TEMP_1, TwoIsland_House_EventScript_CheckPlayerHasMushrooms
# 17 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_TeachMonMoveForMushroom
# 18 "data/maps/TwoIsland_House/scripts.pory"
	setflag FLAG_TEMP_1
# 19 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms
	end


TwoIsland_House_EventScript_CheckPlayerHasMushrooms::
# 24 "data/maps/TwoIsland_House/scripts.pory"
	checkitem ITEM_BIG_MUSHROOM
# 25 "data/maps/TwoIsland_House/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_SetHasBigMushroom
# 26 "data/maps/TwoIsland_House/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM, 2
# 27 "data/maps/TwoIsland_House/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_SetHasTinyMushrooms
# 28 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_set FLAG_TEMP_2, TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms
# 29 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_set FLAG_TEMP_3, TwoIsland_House_EventScript_CheckAlsoHasBigMushroom
# 30 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
	end


TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms::
# 35 "data/maps/TwoIsland_House/scripts.pory"
	call_if_set FLAG_TEMP_3, TwoIsland_House_EventScript_SetHasBothMushrooms
# 36 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_AskTutorMon
	end


TwoIsland_House_EventScript_CheckAlsoHasBigMushroom::
# 41 "data/maps/TwoIsland_House/scripts.pory"
	call_if_set FLAG_TEMP_2, TwoIsland_House_EventScript_SetHasBothMushrooms
# 42 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_AskTutorMon
	end


TwoIsland_House_EventScript_AskTutorMon::
# 47 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_WantMeToTeachMove, MSGBOX_YESNO
# 48 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_House_EventScript_EndTutorMove
# 49 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	end


TwoIsland_House_EventScript_ChooseMonToTutor::
# 54 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_TutorWhichMon
# 55 "data/maps/TwoIsland_House/scripts.pory"
	special ChooseMonForMoveRelearner
# 56 "data/maps/TwoIsland_House/scripts.pory"
	waitstate
# 57 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, TwoIsland_House_EventScript_EndTutorMove
# 58 "data/maps/TwoIsland_House/scripts.pory"
	special IsSelectedMonEgg
# 59 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_CantTutorEgg
# 60 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8005, 0, TwoIsland_House_EventScript_NoMoveToTutorMon
# 61 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMoveToTeach
	end


TwoIsland_House_EventScript_ChooseMoveToTeach::
# 66 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_TeachWhichMove
# 67 "data/maps/TwoIsland_House/scripts.pory"
	special TeachMoveRelearnerMove
# 68 "data/maps/TwoIsland_House/scripts.pory"
	waitstate
# 69 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8004, 0, TwoIsland_House_EventScript_ChooseMonToTutor
# 70 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_set FLAG_TEMP_4, TwoIsland_House_EventScript_ChooseMushroom
# 71 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_set FLAG_TEMP_2, TwoIsland_House_EventScript_GiveBigMushroom
# 72 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_set FLAG_TEMP_3, TwoIsland_House_EventScript_GiveTinyMushrooms
	end


TwoIsland_House_EventScript_GiveBigMushroom::
# 77 "data/maps/TwoIsland_House/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 78 "data/maps/TwoIsland_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 79 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverOneBigMushroom
# 80 "data/maps/TwoIsland_House/scripts.pory"
	call EventScript_RestorePrevTextColor
# 81 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
	end


TwoIsland_House_EventScript_GiveTinyMushrooms::
# 86 "data/maps/TwoIsland_House/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 2
# 87 "data/maps/TwoIsland_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 88 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverTwoTinyMushrooms
# 89 "data/maps/TwoIsland_House/scripts.pory"
	call EventScript_RestorePrevTextColor
# 90 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
	end


TwoIsland_House_EventScript_ChooseMushroom::
# 95 "data/maps/TwoIsland_House/scripts.pory"
	message TwoIsland_House_Text_IllNeedMushroomOrTwo
# 96 "data/maps/TwoIsland_House/scripts.pory"
	waitmessage
# 97 "data/maps/TwoIsland_House/scripts.pory"
	multichoice 0, 0, MULTICHOICE_MUSHROOMS, TRUE
# 98 "data/maps/TwoIsland_House/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 99 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8000, 0, TwoIsland_House_EventScript_GiveTinyMushrooms
# 100 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8000, 1, TwoIsland_House_EventScript_GiveBigMushroom
	end


TwoIsland_House_EventScript_NoMoveToTutorMon::
# 105 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_NoMoveICanTeachThatMon
# 106 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	end


TwoIsland_House_EventScript_CantTutorEgg::
# 111 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_CantTeachAnEgg
# 112 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	end


TwoIsland_House_EventScript_EndTutorMove::
# 117 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove
# 118 "data/maps/TwoIsland_House/scripts.pory"
	release
	end


TwoIsland_House_EventScript_SetHasBigMushroom::
# 123 "data/maps/TwoIsland_House/scripts.pory"
	setflag FLAG_TEMP_2
	return


TwoIsland_House_EventScript_SetHasTinyMushrooms::
# 128 "data/maps/TwoIsland_House/scripts.pory"
	setflag FLAG_TEMP_3
	return


TwoIsland_House_EventScript_SetHasBothMushrooms::
# 133 "data/maps/TwoIsland_House/scripts.pory"
	setflag FLAG_TEMP_4
	return

