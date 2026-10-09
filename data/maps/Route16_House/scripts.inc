Route16_House_MapScripts::
	.byte 0


Route16_House_EventScript_Woman::
# 4 "data/maps/Route16_House/scripts.pory"
	lock
# 5 "data/maps/Route16_House/scripts.pory"
	faceplayer
# 6 "data/maps/Route16_House/scripts.pory"
	goto_if_set FLAG_GOT_HM02, Route16_House_EventScript_AlreadyGotHM02
# 7 "data/maps/Route16_House/scripts.pory"
	msgbox Route16_House_Text_FoundMySecretRetreat
# 8 "data/maps/Route16_House/scripts.pory"
	checkitemspace ITEM_HM02
# 9 "data/maps/Route16_House/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route16_House_EventScript_NoRoomForHM02
# 10 "data/maps/Route16_House/scripts.pory"
	giveitem_msg Route16_House_Text_ReceivedHM02FromGirl, ITEM_HM02
# 11 "data/maps/Route16_House/scripts.pory"
	msgbox Route16_House_Text_ExplainHM02
# 12 "data/maps/Route16_House/scripts.pory"
	setflag FLAG_GOT_HM02
# 13 "data/maps/Route16_House/scripts.pory"
	release
	end


Route16_House_EventScript_NoRoomForHM02::
# 18 "data/maps/Route16_House/scripts.pory"
	msgbox Route16_House_Text_DontHaveAnyRoomForThis
# 19 "data/maps/Route16_House/scripts.pory"
	release
	end


Route16_House_EventScript_AlreadyGotHM02::
# 24 "data/maps/Route16_House/scripts.pory"
	msgbox Route16_House_Text_ExplainHM02
# 25 "data/maps/Route16_House/scripts.pory"
	release
	end


Route16_House_EventScript_Fearow::
# 30 "data/maps/Route16_House/scripts.pory"
	lock
# 31 "data/maps/Route16_House/scripts.pory"
	faceplayer
# 32 "data/maps/Route16_House/scripts.pory"
	waitse
# 33 "data/maps/Route16_House/scripts.pory"
	playmoncry SPECIES_FEAROW, CRY_MODE_NORMAL
# 34 "data/maps/Route16_House/scripts.pory"
	msgbox Route16_House_Text_Fearow
# 35 "data/maps/Route16_House/scripts.pory"
	waitmoncry
# 36 "data/maps/Route16_House/scripts.pory"
	release
	end

