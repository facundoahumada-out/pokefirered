SafariZone_Center_MapScripts::
# 2 "data/maps/SafariZone_Center/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZone_Center_OnTransition
	.byte 0


SafariZone_Center_OnTransition::
# 6 "data/maps/SafariZone_Center/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SAFARI_ZONE_CENTER
	end


SafariZone_Center_EventScript_RestHouseSign::
# 11 "data/maps/SafariZone_Center/scripts.pory"
	msgbox SafariZone_Center_Text_RestHouse, MSGBOX_SIGN
	end


SafariZone_Center_EventScript_TrainerTips::
# 16 "data/maps/SafariZone_Center/scripts.pory"
	msgbox SafariZone_Center_Text_PressStartToCheckTime, MSGBOX_SIGN
	end


SafariZone_Center_EventScript_AreaSign::
# 21 "data/maps/SafariZone_Center/scripts.pory"
	msgbox SafariZone_Center_Text_CenterArea, MSGBOX_SIGN
	end

