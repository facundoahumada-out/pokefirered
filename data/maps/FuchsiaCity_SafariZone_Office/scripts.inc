FuchsiaCity_SafariZone_Office_MapScripts::
	.byte 0


FuchsiaCity_SafariZone_Office_EventScript_Worker1::
# 4 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Office_Text_NicknamedWardenSlowpoke, MSGBOX_NPC
	end


FuchsiaCity_SafariZone_Office_EventScript_Worker2::
# 9 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Office_Text_WardenIsVeryKnowledgeable, MSGBOX_NPC
	end


FuchsiaCity_SafariZone_Office_EventScript_Worker3::
# 14 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Office_Text_CouldntUnderstandWarden, MSGBOX_NPC
	end


FuchsiaCity_SafariZone_Office_EventScript_Worker4::
# 19 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Office_Text_PrizeInSafariZone, MSGBOX_NPC
	end


FuchsiaCity_SafariZone_Office_EventScript_ElementalPunchesTutor::
# 26 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	lock
# 27 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	faceplayer
# 28 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Office_Text_ElementalPunchesIntro
# 29 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	goto_if_set FLAG_TUTOR_ELEMENTAL_PUNCHES, FuchsiaCity_SafariZone_Office_EventScript_ElementalPunchesPaidLesson
# 30 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Office_Text_ShouldITeachMove, MSGBOX_YESNO
# 31 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_SafariZone_Office_EventScript_ElementalPunchesDeclined
# 32 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	call FuchsiaCity_SafariZone_Office_EventScript_ChooseElementalPunch
# 33 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_SafariZone_Office_EventScript_ElementalPunchesDeclined
# 34 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	call EventScript_ChooseMoveTutorMon
# 35 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_SafariZone_Office_EventScript_ElementalPunchesDeclined
# 36 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	setflag FLAG_TUTOR_ELEMENTAL_PUNCHES
# 37 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	goto FuchsiaCity_SafariZone_Office_EventScript_ElementalPunchesTaught
	end


FuchsiaCity_SafariZone_Office_EventScript_ElementalPunchesPaidLesson::
# 42 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	call FuchsiaCity_SafariZone_Office_EventScript_ChooseElementalPunch
# 43 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_SafariZone_Office_EventScript_ElementalPunchesDeclined
# 44 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	call EventScript_PaidMoveTutorLesson
# 45 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_SafariZone_Office_EventScript_ElementalPunchesDeclined
# 46 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	goto FuchsiaCity_SafariZone_Office_EventScript_ElementalPunchesTaught
	end


FuchsiaCity_SafariZone_Office_EventScript_ChooseElementalPunch::
# 52 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	message FuchsiaCity_SafariZone_Office_Text_WhichMoveShouldITeach
# 53 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	waitmessage
# 54 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	multichoice 0, 0, MULTICHOICE_ELEMENTAL_PUNCHES, FALSE
# 56 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge FuchsiaCity_SafariZone_Office_EventScript_ChooseElementalPunch_2
# 60 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 61 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	addvar VAR_0x8005, MOVETUTOR_FIRE_PUNCH
# 62 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	setvar VAR_RESULT, TRUE
	return

FuchsiaCity_SafariZone_Office_EventScript_ChooseElementalPunch_2:
# 57 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	setvar VAR_RESULT, FALSE
	return


FuchsiaCity_SafariZone_Office_EventScript_ElementalPunchesDeclined::
# 67 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Office_Text_ElementalPunchesDeclined
# 68 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	release
	end


FuchsiaCity_SafariZone_Office_EventScript_ElementalPunchesTaught::
# 73 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Office_Text_ElementalPunchesTaught
# 74 "data/maps/FuchsiaCity_SafariZone_Office/scripts.pory"
	release
	end

