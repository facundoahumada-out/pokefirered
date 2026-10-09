MysteryEventClub_EventScript_Woman::
# 4 "data/scripts/mystery_event_club.pory"
	lock
# 5 "data/scripts/mystery_event_club.pory"
	faceplayer
# 6 "data/scripts/mystery_event_club.pory"
	goto_if_eq VAR_TEMP_1, TRUE, EventScript_AlreadyGaveProfile
# 7 "data/scripts/mystery_event_club.pory"
	goto_if_set FLAG_SYS_SET_TRAINER_CARD_PROFILE, EventScript_GivenProfileBefore
# 8 "data/scripts/mystery_event_club.pory"
	msgbox Text_IdLoveToHearYourProfile
# 9 "data/scripts/mystery_event_club.pory"
	goto EventScript_AskForProfile
	end


EventScript_AlreadyGaveProfile:
# 14 "data/scripts/mystery_event_club.pory"
	msgbox Text_TellMoreNextTime
# 15 "data/scripts/mystery_event_club.pory"
	release
	end


EventScript_AskForProfile:
# 20 "data/scripts/mystery_event_club.pory"
	message Text_TellMeWhatsYourProfile
# 21 "data/scripts/mystery_event_club.pory"
	waitmessage
# 22 "data/scripts/mystery_event_club.pory"
	multichoice 18, 6, MULTICHOICE_YES_NO_INFO_2, FALSE
# 23 "data/scripts/mystery_event_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 24 "data/scripts/mystery_event_club.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_AcceptGiveProfile
# 25 "data/scripts/mystery_event_club.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_DeclineGiveProfile
# 26 "data/scripts/mystery_event_club.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_ProfileInfo
# 27 "data/scripts/mystery_event_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, EventScript_DeclineGiveProfile
	end


EventScript_ProfileInfo:
# 32 "data/scripts/mystery_event_club.pory"
	msgbox Text_ExplainProfile
# 33 "data/scripts/mystery_event_club.pory"
	goto EventScript_AskForProfile
	end


EventScript_AcceptGiveProfile:
# 38 "data/scripts/mystery_event_club.pory"
	msgbox Text_WhatsYourProfile
# 39 "data/scripts/mystery_event_club.pory"
	closemessage
# 40 "data/scripts/mystery_event_club.pory"
	goto EventScript_GiveProfile
	end


EventScript_CancelGiveProfile:
# 45 "data/scripts/mystery_event_club.pory"
	msgbox Text_DecidedNotTo
# 46 "data/scripts/mystery_event_club.pory"
	release
	end


EventScript_GaveProfile:
# 51 "data/scripts/mystery_event_club.pory"
	setvar VAR_TEMP_1, TRUE
# 52 "data/scripts/mystery_event_club.pory"
	setvar VAR_0x8004, 0
# 53 "data/scripts/mystery_event_club.pory"
	special ShowEasyChatMessage
# 54 "data/scripts/mystery_event_club.pory"
	waitmessage
# 55 "data/scripts/mystery_event_club.pory"
	delay 80
# 56 "data/scripts/mystery_event_club.pory"
	msgbox Text_ProfileSaysSomethingAboutYou
# 57 "data/scripts/mystery_event_club.pory"
	release
	end


EventScript_DeclineGiveProfile:
# 62 "data/scripts/mystery_event_club.pory"
	msgbox Text_DontBeLikeThat
# 63 "data/scripts/mystery_event_club.pory"
	release
	end


EventScript_GivenProfileBefore:
# 68 "data/scripts/mystery_event_club.pory"
	msgbox Text_HiWeMeetAgain
# 69 "data/scripts/mystery_event_club.pory"
	goto EventScript_AskForNewProfile
	end


EventScript_AskForNewProfile:
# 74 "data/scripts/mystery_event_club.pory"
	message Text_ChangeYourProfile
# 75 "data/scripts/mystery_event_club.pory"
	waitmessage
# 76 "data/scripts/mystery_event_club.pory"
	multichoice 18, 6, MULTICHOICE_YES_NO_INFO_2, FALSE
# 77 "data/scripts/mystery_event_club.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 78 "data/scripts/mystery_event_club.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_AcceptGiveNewProfile
# 79 "data/scripts/mystery_event_club.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_DeclineGiveNewProfile
# 80 "data/scripts/mystery_event_club.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_ProfileInfo2
# 81 "data/scripts/mystery_event_club.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, EventScript_DeclineGiveNewProfile
	end


EventScript_ProfileInfo2:
# 86 "data/scripts/mystery_event_club.pory"
	msgbox Text_ExplainProfile
# 87 "data/scripts/mystery_event_club.pory"
	goto EventScript_AskForNewProfile
	end


EventScript_AcceptGiveNewProfile:
# 92 "data/scripts/mystery_event_club.pory"
	msgbox Text_WhatAreYouLikeNow
# 93 "data/scripts/mystery_event_club.pory"
	closemessage
# 94 "data/scripts/mystery_event_club.pory"
	goto EventScript_GiveProfile
	end


EventScript_DeclineGiveNewProfile:
# 99 "data/scripts/mystery_event_club.pory"
	msgbox Text_LikeProfileWayItIs
# 100 "data/scripts/mystery_event_club.pory"
	release
	end


EventScript_GaveSpecialProfile:
# 105 "data/scripts/mystery_event_club.pory"
	setvar VAR_TEMP_1, TRUE
# 106 "data/scripts/mystery_event_club.pory"
	setvar VAR_0x8004, 0
# 107 "data/scripts/mystery_event_club.pory"
	special ShowEasyChatMessage
# 108 "data/scripts/mystery_event_club.pory"
	waitmessage
# 109 "data/scripts/mystery_event_club.pory"
	delay 80
# 110 "data/scripts/mystery_event_club.pory"
	msgbox Text_HeardThatBefore
# 111 "data/scripts/mystery_event_club.pory"
	release
	end


EventScript_GiveProfile:
# 116 "data/scripts/mystery_event_club.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
# 117 "data/scripts/mystery_event_club.pory"
	call Common_ShowEasyChatScreen
# 118 "data/scripts/mystery_event_club.pory"
	lock
# 119 "data/scripts/mystery_event_club.pory"
	faceplayer
# 120 "data/scripts/mystery_event_club.pory"
	goto_if_eq VAR_0x8004, 0, EventScript_GaveSpecialProfile
# 121 "data/scripts/mystery_event_club.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_CancelGiveProfile
# 122 "data/scripts/mystery_event_club.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_GaveProfile
	end


Text_IdLoveToHearYourProfile:
# 126 "data/scripts/mystery_event_club.pory"
	.string "Hi, glad to meet you!\p"
	.string "…That's unfriendly of you.\n"
	.string "How about saying hi back?\p"
	.string "So, come on, tell me about\n"
	.string "yourself.\p"
	.string "I'd love to hear your profile!$"

Text_TellMeWhatsYourProfile:
# 135 "data/scripts/mystery_event_club.pory"
	.string "Tell me something good about\n"
	.string "yourself. What's your profile?$"

Text_ExplainProfile:
# 140 "data/scripts/mystery_event_club.pory"
	.string "A profile is written using four\n"
	.string "words or phrases.\p"
	.string "There're plenty of words to choose\n"
	.string "from for your profile.\p"
	.string "The words and phrases are placed\n"
	.string "in several convenient groups.\p"
	.string "First, choose a group, then choose\n"
	.string "a word or phrase.\p"
	.string "…It's easier than it sounds.\n"
	.string "Why don't you try it?$"

Text_WhatsYourProfile:
# 153 "data/scripts/mystery_event_club.pory"
	.string "What's your profile?$"

Text_DontBeLikeThat:
# 157 "data/scripts/mystery_event_club.pory"
	.string "Aww… Don't be like that.\n"
	.string "You can tell me your profile.$"

Text_DecidedNotTo:
# 162 "data/scripts/mystery_event_club.pory"
	.string "Oh, you've decided not to?\n"
	.string "You're fickle, aren't you?$"

Text_HiWeMeetAgain:
# 167 "data/scripts/mystery_event_club.pory"
	.string "Hi!\n"
	.string "We meet again!$"

Text_ChangeYourProfile:
# 172 "data/scripts/mystery_event_club.pory"
	.string "Would you like to change your\n"
	.string "profile?$"

Text_WhatAreYouLikeNow:
# 177 "data/scripts/mystery_event_club.pory"
	.string "What are you like now?\n"
	.string "I'd really like to know.$"

Text_LikeProfileWayItIs:
# 182 "data/scripts/mystery_event_club.pory"
	.string "Okay, you like your profile the\n"
	.string "way it is.\p"
	.string "I think so, too.$"

Text_ProfileSaysSomethingAboutYou:
# 188 "data/scripts/mystery_event_club.pory"
	.string "Hmhm…\p"
	.string "Your profile really says something\n"
	.string "about who you are.\p"
	.string "Now that I know you better, it \n"
	.string "makes us better friends than ever!$"

Text_HeardThatBefore:
# 196 "data/scripts/mystery_event_club.pory"
	.string "Oh, I've heard that before…\p"
	.string "My cousin, who lives far away,\n"
	.string "always used to say that, I think.$"

Text_TellMoreNextTime:
# 202 "data/scripts/mystery_event_club.pory"
	.string "Please tell me more about\n"
	.string "yourself next time!$"
