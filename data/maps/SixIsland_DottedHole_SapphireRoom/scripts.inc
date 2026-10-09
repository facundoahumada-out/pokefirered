SixIsland_DottedHole_SapphireRoom_MapScripts::
	.byte 0


SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire::
# 4 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	lock
# 5 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	faceplayer
# 6 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 7 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 8 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	message SixIsland_DottedHole_SapphireRoom_Text_FoundSapphire
# 9 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmessage
# 10 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitfanfare
# 11 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	closemessage
# 12 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setobjectxyperm LOCALID_DOTTED_HOLE_THIEF, 5, 0
# 13 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	addobject LOCALID_DOTTED_HOLE_THIEF
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playse SE_FALL
# 15 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefFallIn
# 16 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 17 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playse SE_M_STRENGTH
# 18 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft
# 19 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft
# 20 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown
# 21 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown
# 22 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8004, 3
# 23 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 24 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8006, 12
# 25 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8007, 3
# 26 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	special ShakeScreen
# 27 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	delay 60
# 28 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireNorth
# 29 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireSouth
# 30 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireEast
# 31 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireWest
# 32 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 33 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_IWasRightInTailingYou
# 34 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	closemessage
# 35 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireNorth
# 36 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireSouth
# 37 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireEast
# 38 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireWest
# 39 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	removeobject LOCALID_SAPPHIRE
# 40 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2
# 41 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2
# 42 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2
# 43 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2
# 44 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_SellToTeamRocketTellPassword
# 45 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	closemessage
# 46 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitNorth
# 47 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitSouth
# 48 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitEast
# 49 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitWest
# 50 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playse SE_EXIT
# 51 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	delay 35
# 52 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	removeobject LOCALID_DOTTED_HOLE_THIEF
# 53 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setflag FLAG_LEARNED_YES_NAH_CHANSEY
# 54 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	release
	end


SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2::
# 60 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 61 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2::
# 66 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 67 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft::
# 72 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 73 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown::
# 78 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 79 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireNorth::
# 84 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft
# 85 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireSouth::
# 90 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft
# 91 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireEast::
# 96 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow
# 97 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireWest::
# 102 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow
# 103 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireNorth::
# 108 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft
# 109 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 110 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 111 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireSouth::
# 116 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft
# 117 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 118 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 119 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireEast::
# 124 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow
# 125 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 126 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 127 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireWest::
# 132 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow
# 133 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 134 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 135 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitNorth::
# 140 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 141 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitNorth
# 142 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitSouth::
# 147 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 148 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitSouth
# 149 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitEast::
# 154 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 155 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest
# 156 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitWest::
# 161 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 162 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest
# 163 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
	return


# 167 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft::
# 168 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_up
# 169 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_up
# 170 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_in_place_faster_right
# 171 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end

# 174 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow::
# 175 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_right
# 176 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_right
# 177 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_in_place_faster_up
# 178 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end

# 181 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft::
# 182 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_right
# 183 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end

# 186 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow::
# 187 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_up
# 188 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end

# 191 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitNorth::
# 192 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_up
# 193 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 194 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 195 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 196 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_down
# 197 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 198 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 199 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end

# 202 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitSouth::
# 203 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_down
# 204 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 205 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 206 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 207 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_up
# 208 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 209 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 210 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end

# 213 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest::
# 214 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 215 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 216 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 217 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 218 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_up
# 219 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end

# 222 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefFallIn::
# 223 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	face_down
# 224 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	disable_anim
# 225 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 226 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 227 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 228 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 229 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 230 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 231 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 232 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 233 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 234 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	restore_anim
# 235 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end

# 238 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit::
# 239 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	delay_16
# 240 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_in_place_faster_right
# 241 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end

SixIsland_DottedHole_SapphireRoom_EventScript_BrailleMessage::
# 245 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	lockall
# 246 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8005, 130
# 247 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_LetTheTwo
# 248 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_Glittering
# 249 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_Stones
# 250 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_OneInRed
# 251 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_OneInBlue
# 252 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_ConnectThe
# 253 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_Past
# 254 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_TwoFriends
# 255 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_Sharing
# 256 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_PowerOpen
# 257 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_AWindowTo
# 258 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_ANewWorld
# 259 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_ThatGlows
# 260 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_TheNext
# 261 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_WorldWaits
# 262 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage Braille_Text_ForYou
# 263 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitbuttonpress
# 264 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	releaseall
	end

