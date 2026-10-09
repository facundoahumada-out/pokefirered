SixIsland_MapScripts::
# 2 "data/maps/SixIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_OnTransition
	.byte 0


SixIsland_OnTransition::
# 6 "data/maps/SixIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND
	end


SixIsland_EventScript_Hiker::
# 11 "data/maps/SixIsland/scripts.pory"
	msgbox SixIsland_Text_ThatWayToWaterPathRuinValley, MSGBOX_NPC
	end


SixIsland_EventScript_Boy::
# 16 "data/maps/SixIsland/scripts.pory"
	msgbox SixIsland_Text_SkyAtNightIsFantastic, MSGBOX_NPC
	end


SixIsland_EventScript_IslandSign::
# 21 "data/maps/SixIsland/scripts.pory"
	msgbox SixIsland_Text_IslandSign, MSGBOX_SIGN
	end

