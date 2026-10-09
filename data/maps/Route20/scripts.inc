Route20_MapScripts::
# 2 "data/maps/Route20/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_OnTransition
	.byte 0


Route20_OnTransition::
# 6 "data/maps/Route20/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB3F
# 7 "data/maps/Route20/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB4F
	end


Route20_EventScript_ResetSeafoamBouldersForB3F::
# 12 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_1
# 13 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_2
# 14 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_1
# 15 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_2
# 16 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_1
# 17 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_2
# 18 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_1
# 19 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_2
	return


Route20_EventScript_ResetSeafoamBouldersForB4F::
# 24 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_3
# 25 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_4
# 26 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_5
# 27 "data/maps/Route20/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_6
# 28 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_1
# 29 "data/maps/Route20/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_2
	return


Route20_EventScript_SeafoamIslandsSign::
# 34 "data/maps/Route20/scripts.pory"
	msgbox Route20_Text_SeafoamIslands, MSGBOX_SIGN
	end

