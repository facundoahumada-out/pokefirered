SaffronCity_MrPsychicsHouse_MapScripts::
	.byte 0


SaffronCity_MrPsychicsHouse_EventScript_MrPsychic::
# 4 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	lock
# 5 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	faceplayer
# 6 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	goto_if_set FLAG_GOT_TM29_FROM_MR_PSYCHIC, SaffronCity_MrPsychicsHouse_EventScript_AlreadyGotTM29
# 7 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_YouWantedThis
# 8 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	checkitemspace ITEM_TM29
# 9 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_MrPsychicsHouse_EventScript_NoRoomForTM29
# 10 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	giveitem_msg SaffronCity_MrPsychicsHouse_Text_ReceivedTM29FromMrPsychic, ITEM_TM29
# 11 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_ExplainTM29
# 12 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	setflag FLAG_GOT_TM29_FROM_MR_PSYCHIC
# 13 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	release
	end


SaffronCity_MrPsychicsHouse_EventScript_NoRoomForTM29::
# 18 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_YouveNoRoom
# 19 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	release
	end


SaffronCity_MrPsychicsHouse_EventScript_AlreadyGotTM29::
# 24 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_ExplainTM29
# 25 "data/maps/SaffronCity_MrPsychicsHouse/scripts.pory"
	release
	end

