EventScript_Questionnaire::
# 2 "data/scripts/questionnaire.pory"
	lockall
# 3 "data/scripts/questionnaire.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 4 "data/scripts/questionnaire.pory"
	msgbox Text_FillOutQuestionnaire, MSGBOX_YESNO
# 5 "data/scripts/questionnaire.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_DeclineQuestionnaire
# 6 "data/scripts/questionnaire.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_QUESTIONNAIRE
# 7 "data/scripts/questionnaire.pory"
	call Common_ShowEasyChatScreen
# 8 "data/scripts/questionnaire.pory"
	lock
# 9 "data/scripts/questionnaire.pory"
	faceplayer
# 10 "data/scripts/questionnaire.pory"
	specialvar VAR_0x8008, GetMartClerkObjectId
# 11 "data/scripts/questionnaire.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 12 "data/scripts/questionnaire.pory"
	goto_if_eq VAR_0x8004, 0, EventScript_EnableMysteryGift
# 13 "data/scripts/questionnaire.pory"
	goto_if_eq VAR_RESULT, 0, EventScript_DeclineQuestionnaire
# 14 "data/scripts/questionnaire.pory"
	goto_if_eq VAR_RESULT, 1, EventScript_TookQuestionnaire
	end


EventScript_EnableMysteryGift::
# 19 "data/scripts/questionnaire.pory"
	applymovement VAR_0x8008, Common_Movement_FaceDown
# 20 "data/scripts/questionnaire.pory"
	waitmovement 0
# 21 "data/scripts/questionnaire.pory"
	playse SE_PIN
# 22 "data/scripts/questionnaire.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 23 "data/scripts/questionnaire.pory"
	waitmovement 0
# 24 "data/scripts/questionnaire.pory"
	applymovement VAR_0x8008, Common_Movement_Delay48
# 25 "data/scripts/questionnaire.pory"
	waitmovement 0
# 26 "data/scripts/questionnaire.pory"
	msgbox Text_YouKnowThoseWords
# 27 "data/scripts/questionnaire.pory"
	setflag FLAG_SYS_MYSTERY_GIFT_ENABLED
# 28 "data/scripts/questionnaire.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 29 "data/scripts/questionnaire.pory"
	special DisableMsgBoxWalkaway
# 30 "data/scripts/questionnaire.pory"
	signmsg
# 31 "data/scripts/questionnaire.pory"
	msgbox Text_YouCanAccessMysteryGift
# 32 "data/scripts/questionnaire.pory"
	normalmsg
# 33 "data/scripts/questionnaire.pory"
	releaseall
	end


EventScript_DeclineQuestionnaire::
# 38 "data/scripts/questionnaire.pory"
	releaseall
	end


EventScript_TookQuestionnaire::
# 43 "data/scripts/questionnaire.pory"
	applymovement VAR_0x8008, Common_Movement_FaceDown
# 44 "data/scripts/questionnaire.pory"
	waitmovement 0
# 45 "data/scripts/questionnaire.pory"
	msgbox Text_QuestionnaireThankYou
# 46 "data/scripts/questionnaire.pory"
	releaseall
	end

