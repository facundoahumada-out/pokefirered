SevenIsland_MapScripts::
# 2 "data/maps/SevenIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_OnTransition
	.byte 0


SevenIsland_OnTransition::
# 6 "data/maps/SevenIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND
	end


SevenIsland_EventScript_IslandSign::
# 11 "data/maps/SevenIsland/scripts.pory"
	msgbox SevenIsland_Text_IslandSign, MSGBOX_SIGN
	end


SevenIsland_EventScript_OldWoman::
# 16 "data/maps/SevenIsland/scripts.pory"
	msgbox SevenIsland_Text_IslandsMadeInSevenDays, MSGBOX_NPC
	end


SevenIsland_EventScript_Scientist::
# 21 "data/maps/SevenIsland/scripts.pory"
	msgbox SevenIsland_Text_IslandVirtuallyUntouched, MSGBOX_NPC
	end

