ViridianCity_School_MapScripts::
	.byte 0


ViridianCity_School_EventScript_Lass::
# 4 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 5 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 6 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TryingToMemorizeNotes
# 7 "data/maps/ViridianCity_School/scripts.pory"
	closemessage
# 8 "data/maps/ViridianCity_School/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
# 9 "data/maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 10 "data/maps/ViridianCity_School/scripts.pory"
	release
	end


ViridianCity_School_EventScript_Woman::
# 15 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 16 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 17 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ReadBlackboardCarefully
# 18 "data/maps/ViridianCity_School/scripts.pory"
	closemessage
# 19 "data/maps/ViridianCity_School/scripts.pory"
	applymovement LOCALID_SCHOOL_WOMAN, Common_Movement_FaceOriginalDirection
# 20 "data/maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 21 "data/maps/ViridianCity_School/scripts.pory"
	release
	end


ViridianCity_School_EventScript_Notebook::
# 26 "data/maps/ViridianCity_School/scripts.pory"
	lockall
# 27 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFirstPage
# 28 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 29 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 30 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookSecondPage
# 31 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 32 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 33 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookThirdPage
# 34 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 35 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 36 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFourthPage
# 37 "data/maps/ViridianCity_School/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
# 38 "data/maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 39 "data/maps/ViridianCity_School/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 40 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_HeyDontLookAtMyNotes
# 41 "data/maps/ViridianCity_School/scripts.pory"
	releaseall
	end


ViridianCity_School_EventScript_StopReadingNotebook::
# 46 "data/maps/ViridianCity_School/scripts.pory"
	releaseall
	end


ViridianCity_School_EventScript_Blackboard::
# 51 "data/maps/ViridianCity_School/scripts.pory"
	lockall
# 52 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_BlackboardListsStatusProblems
# 53 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end


ViridianCity_School_EventScript_ChooseBlackboardTopic::
# 58 "data/maps/ViridianCity_School/scripts.pory"
	message ViridianCity_School_Text_ReadWhichTopic
# 59 "data/maps/ViridianCity_School/scripts.pory"
	waitmessage
# 60 "data/maps/ViridianCity_School/scripts.pory"
	multichoicegrid 7, 1, MULTICHOICE_TRAINER_SCHOOL_WHITEBOARD, 3, FALSE
# 61 "data/maps/ViridianCity_School/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 62 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_0x8000, 0, ViridianCity_School_EventScript_ReadSleep
# 63 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_0x8000, 1, ViridianCity_School_EventScript_ReadPoison
# 64 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_0x8000, 2, ViridianCity_School_EventScript_ReadParalysis
# 65 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_0x8000, 3, ViridianCity_School_EventScript_ReadBurn
# 66 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_0x8000, 4, ViridianCity_School_EventScript_ReadFreeze
# 67 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_0x8000, 5, ViridianCity_School_EventScript_ExitBlackboard
# 68 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_0x8000, 127, ViridianCity_School_EventScript_ExitBlackboard
	end


ViridianCity_School_EventScript_ReadSleep::
# 73 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainSleep
# 74 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end


ViridianCity_School_EventScript_ReadBurn::
# 79 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainBurn
# 80 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end


ViridianCity_School_EventScript_ReadPoison::
# 85 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainPoison
# 86 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end


ViridianCity_School_EventScript_ReadFreeze::
# 91 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainFreeze
# 92 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end


ViridianCity_School_EventScript_ReadParalysis::
# 97 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainParalysis
# 98 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end


ViridianCity_School_EventScript_ExitBlackboard::
# 103 "data/maps/ViridianCity_School/scripts.pory"
	releaseall
	end

