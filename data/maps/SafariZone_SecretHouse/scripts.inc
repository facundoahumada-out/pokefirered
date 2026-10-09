SafariZone_SecretHouse_MapScripts::
	.byte 0


SafariZone_SecretHouse_EventScript_Attendant::
# 4 "data/maps/SafariZone_SecretHouse/scripts.pory"
	lock
# 5 "data/maps/SafariZone_SecretHouse/scripts.pory"
	faceplayer
# 6 "data/maps/SafariZone_SecretHouse/scripts.pory"
	goto_if_set FLAG_GOT_HM03, SafariZone_SecretHouse_EventScript_ExplainSurf
# 7 "data/maps/SafariZone_SecretHouse/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_CongratsYouveWon
# 8 "data/maps/SafariZone_SecretHouse/scripts.pory"
	checkitemspace ITEM_HM03
# 9 "data/maps/SafariZone_SecretHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SafariZone_SecretHouse_EventScript_NoRoomForHM03
# 10 "data/maps/SafariZone_SecretHouse/scripts.pory"
	giveitem_msg SafariZone_SecretHouse_Text_ReceivedHM03FromAttendant, ITEM_HM03
# 11 "data/maps/SafariZone_SecretHouse/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_ExplainSurf
# 12 "data/maps/SafariZone_SecretHouse/scripts.pory"
	setflag FLAG_GOT_HM03
# 13 "data/maps/SafariZone_SecretHouse/scripts.pory"
	release
	end


SafariZone_SecretHouse_EventScript_NoRoomForHM03::
# 18 "data/maps/SafariZone_SecretHouse/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_DontHaveRoomForPrize
# 19 "data/maps/SafariZone_SecretHouse/scripts.pory"
	release
	end


SafariZone_SecretHouse_EventScript_ExplainSurf::
# 24 "data/maps/SafariZone_SecretHouse/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_ExplainSurf
# 25 "data/maps/SafariZone_SecretHouse/scripts.pory"
	release
	end

