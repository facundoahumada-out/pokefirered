SixIsland_DottedHole_1F_MapScripts::
# 2 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_DottedHole_1F_OnTransition
	.byte 0


SixIsland_DottedHole_1F_OnTransition::
# 6 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_DOTTED_HOLE_1F
	end


SixIsland_DottedHole_B1F_EventScript_BrailleUp::
# 11 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	lockall
# 12 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	braillemessage Braille_Text_Up
# 13 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	waitbuttonpress
# 14 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	releaseall
	end


SixIsland_DottedHole_B4F_EventScript_BrailleDown::
# 19 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	lockall
# 20 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	braillemessage Braille_Text_Down
# 21 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	waitbuttonpress
# 22 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	releaseall
	end


SixIsland_DottedHole_B3F_EventScript_BrailleRight::
# 27 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	lockall
# 28 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	braillemessage Braille_Text_Right
# 29 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	waitbuttonpress
# 30 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	releaseall
	end


SixIsland_DottedHole_B2F_EventScript_BrailleLeft::
# 35 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	lockall
# 36 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	braillemessage Braille_Text_Left
# 37 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	waitbuttonpress
# 38 "data/maps/SixIsland_DottedHole_1F/scripts.pory"
	releaseall
	end

