SixIsland_RuinValley_MapScripts::
# 2 "data/maps/SixIsland_RuinValley/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SixIsland_RuinValley_OnLoad
	.byte 0


SixIsland_RuinValley_OnLoad::
# 6 "data/maps/SixIsland_RuinValley/scripts.pory"
	call_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_OpenDottedHoleDoor
	end


SixIsland_RuinValley_EventScript_OpenDottedHoleDoor::
# 11 "data/maps/SixIsland_RuinValley/scripts.pory"
	setmetatile 24, 24, METATILE_SeviiIslands67_DottedHoleDoor_Open, 0
	return


SixIsland_RuinValley_EventScript_Scientist::
# 16 "data/maps/SixIsland_RuinValley/scripts.pory"
	lock
# 17 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CantFigureOutHowToGetInside
# 18 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FacePlayer
# 19 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 20 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_IFoundThisPlace
# 21 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FaceOriginalDirection
# 22 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 23 "data/maps/SixIsland_RuinValley/scripts.pory"
	release
	end


SixIsland_RuinValley_EventScript_DottedHoleDoor::
# 28 "data/maps/SixIsland_RuinValley/scripts.pory"
	lockall
# 29 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_DottedHoleDoorOpen
# 30 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CheckDoorMoreThoroughly, MSGBOX_YESNO
# 31 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor
# 32 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_SeveralDotsOnTheDoor
# 33 "data/maps/SixIsland_RuinValley/scripts.pory"
	braillemessage Braille_Text_Cut
# 34 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitbuttonpress
# 35 "data/maps/SixIsland_RuinValley/scripts.pory"
	releaseall
	end


SixIsland_RuinValley_EventScript_DottedHoleDoorOpen::
# 40 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_DoorIsOpen
# 41 "data/maps/SixIsland_RuinValley/scripts.pory"
	releaseall
	end


SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor::
# 46 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_LeftDoorAlone
# 47 "data/maps/SixIsland_RuinValley/scripts.pory"
	releaseall
	end

