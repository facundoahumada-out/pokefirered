FiveIsland_MapScripts::
# 2 "data/maps/FiveIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_OnTransition
	.byte 0


FiveIsland_OnTransition::
# 6 "data/maps/FiveIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND
	end


FiveIsland_EventScript_IslandSign::
# 11 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_Text_IslandSign, MSGBOX_SIGN
	end


FiveIsland_EventScript_BugCatcher::
# 16 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_Text_WeirdBuildingInMeadow, MSGBOX_NPC
	end


FiveIsland_EventScript_Fisher::
# 21 "data/maps/FiveIsland/scripts.pory"
	msgbox FiveIsland_Text_BeenGettingBusierAroundHere, MSGBOX_NPC
	end

