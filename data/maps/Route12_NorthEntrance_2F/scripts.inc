Route12_NorthEntrance_2F_MapScripts::
	.byte 0


Route12_NorthEntrance_2F_EventScript_LeftBinoculars::
# 4 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_TheresManFishing, MSGBOX_SIGN
	end


Route12_NorthEntrance_2F_EventScript_RightBinoculars::
# 9 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_ItsPokemonTower, MSGBOX_SIGN
	end


Route12_NorthEntrance_2F_EventScript_Lass::
# 14 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	lock
# 15 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	faceplayer
# 16 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	goto_if_set FLAG_GOT_TM27, Route12_NorthEntrance_2F_EventScript_ExplainTM27
# 17 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	checkplayergender
# 18 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route12_NorthEntrance_2F_EventScript_TakeTMMale
# 19 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route12_NorthEntrance_2F_EventScript_TakeTMFemale
# 20 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	checkitemspace ITEM_TM27
# 21 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route12_NorthEntrance_2F_EventScript_NoRoomForTM27
# 22 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	giveitem_msg Route12_NorthEntrance_2F_Text_ReceivedTM27FromLittleGirl, ITEM_TM27
# 23 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
# 24 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	setflag FLAG_GOT_TM27
# 25 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	release
	end


Route12_NorthEntrance_2F_EventScript_TakeTMMale::
# 30 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreMale
	return


Route12_NorthEntrance_2F_EventScript_TakeTMFemale::
# 35 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreFemale
	return


Route12_NorthEntrance_2F_EventScript_NoRoomForTM27::
# 40 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_DontHaveRoomForThis
# 41 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	release
	end


Route12_NorthEntrance_2F_EventScript_ExplainTM27::
# 46 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
# 47 "data/maps/Route12_NorthEntrance_2F/scripts.pory"
	release
	end

