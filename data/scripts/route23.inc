Route23_EventScript_MissingBoulderBadge::
# 2 "data/scripts/route23.pory"
	msgbox Text_OnlySkilledTrainersAllowedThrough
# 3 "data/scripts/route23.pory"
	playse SE_BOO
# 4 "data/scripts/route23.pory"
	msgbox Text_CantLetYouPass
# 5 "data/scripts/route23.pory"
	release
	end


Route23_EventScript_MissingBadge::
# 10 "data/scripts/route23.pory"
	message Text_OnlyPassWithBadgeDontHaveYet
# 11 "data/scripts/route23.pory"
	waitmessage
# 12 "data/scripts/route23.pory"
	playse SE_BOO
# 13 "data/scripts/route23.pory"
	waitbuttonpress
# 14 "data/scripts/route23.pory"
	closemessage
# 15 "data/scripts/route23.pory"
	waitse
# 16 "data/scripts/route23.pory"
	release
	end


Route23_EventScript_AlreadyRecognizedBoulderBadge::
# 21 "data/scripts/route23.pory"
	message Text_OhThatsBadgeGoRightAhead
# 22 "data/scripts/route23.pory"
	waitmessage
# 23 "data/scripts/route23.pory"
	playfanfare MUS_LEVEL_UP
# 24 "data/scripts/route23.pory"
	waitfanfare
# 25 "data/scripts/route23.pory"
	waitbuttonpress
# 26 "data/scripts/route23.pory"
	release
	end


Route23_EventScript_AlreadyRecognizedBadge::
# 31 "data/scripts/route23.pory"
	msgbox Text_OnlyPassWithBadgeOhGoAhead
# 32 "data/scripts/route23.pory"
	release
	end


Route22_NorthEntrance_EventScript_BadgeGuard::
# 38 "data/scripts/route23.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE23, VAR_TEMP_1, Route23_EventScript_AlreadyRecognizedBoulderBadge
# 39 "data/scripts/route23.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 40 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 1, Route23_EventScript_CheckBoulderBadge
# 41 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 2, Route23_EventScript_CheckCascadeBadge
# 42 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 3, Route23_EventScript_CheckThunderBadge
# 43 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 4, Route23_EventScript_CheckRainbowBadge
# 44 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 5, Route23_EventScript_CheckSoulBadge
# 45 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 6, Route23_EventScript_CheckMarshBadge
# 46 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 7, Route23_EventScript_CheckVolcanoBadge
# 47 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 8, Route23_EventScript_CheckEarthBadge
	end


Route23_EventScript_BadgeGuard::
# 52 "data/scripts/route23.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE23, VAR_TEMP_1, Route23_EventScript_AlreadyRecognizedBadge
# 53 "data/scripts/route23.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 54 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 1, Route23_EventScript_CheckBoulderBadge
# 55 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 2, Route23_EventScript_CheckCascadeBadge
# 56 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 3, Route23_EventScript_CheckThunderBadge
# 57 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 4, Route23_EventScript_CheckRainbowBadge
# 58 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 5, Route23_EventScript_CheckSoulBadge
# 59 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 6, Route23_EventScript_CheckMarshBadge
# 60 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 7, Route23_EventScript_CheckVolcanoBadge
# 61 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 8, Route23_EventScript_CheckEarthBadge
	end


Route23_EventScript_CheckBoulderBadge::
# 66 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE01_GET, Route23_EventScript_RecognizeBoulderBadge
# 67 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBoulderBadge
	end


Route23_EventScript_CheckCascadeBadge::
# 72 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE02_GET, Route23_EventScript_RecognizeBadge
# 73 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadge
	end


Route23_EventScript_CheckThunderBadge::
# 78 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE03_GET, Route23_EventScript_RecognizeBadge
# 79 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadge
	end


Route23_EventScript_CheckRainbowBadge::
# 84 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE04_GET, Route23_EventScript_RecognizeBadge
# 85 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadge
	end


Route23_EventScript_CheckSoulBadge::
# 90 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE05_GET, Route23_EventScript_RecognizeBadge
# 91 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadge
	end


Route23_EventScript_CheckMarshBadge::
# 96 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE06_GET, Route23_EventScript_RecognizeBadge
# 97 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadge
	end


Route23_EventScript_CheckVolcanoBadge::
# 102 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE07_GET, Route23_EventScript_RecognizeBadge
# 103 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadge
	end


Route23_EventScript_CheckEarthBadge::
# 108 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE08_GET, Route23_EventScript_RecognizeBadge
# 109 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadge
	end


Route23_EventScript_RecognizeBoulderBadge::
# 114 "data/scripts/route23.pory"
	message Text_OhThatsBadgeGoRightAhead
# 115 "data/scripts/route23.pory"
	waitmessage
# 116 "data/scripts/route23.pory"
	playfanfare MUS_LEVEL_UP
# 117 "data/scripts/route23.pory"
	waitfanfare
# 118 "data/scripts/route23.pory"
	waitbuttonpress
# 119 "data/scripts/route23.pory"
	copyvar VAR_MAP_SCENE_ROUTE23, VAR_TEMP_1
# 120 "data/scripts/route23.pory"
	release
	end


Route23_EventScript_RecognizeBadge::
# 125 "data/scripts/route23.pory"
	msgbox Text_OnlyPassWithBadgeOhGoAhead
# 126 "data/scripts/route23.pory"
	copyvar VAR_MAP_SCENE_ROUTE23, VAR_TEMP_1
# 127 "data/scripts/route23.pory"
	release
	end


Route23_EventScript_BadgeGuardTrigger::
# 132 "data/scripts/route23.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 133 "data/scripts/route23.pory"
	applymovement VAR_0x8009, Common_Movement_WalkInPlaceFasterLeft
# 134 "data/scripts/route23.pory"
	waitmovement 0
# 135 "data/scripts/route23.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 136 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 1, Route23_EventScript_CheckBoulderBadgeTrigger
# 137 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 2, Route23_EventScript_CheckCascadeBadgeTrigger
# 138 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 3, Route23_EventScript_CheckThunderBadgeTrigger
# 139 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 4, Route23_EventScript_CheckRainbowBadgeTrigger
# 140 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 5, Route23_EventScript_CheckSoulBadgeTrigger
# 141 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 6, Route23_EventScript_CheckMarshBadgeTrigger
# 142 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 7, Route23_EventScript_CheckVolcanoBadgeTrigger
# 143 "data/scripts/route23.pory"
	goto_if_eq VAR_0x8000, 8, Route23_EventScript_CheckEarthBadgeTrigger
	end


Route23_EventScript_CheckBoulderBadgeTrigger::
# 148 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE01_GET, Route23_EventScript_RecognizeBoulderBadgeTrigger
# 149 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBoulderBadgeTrigger
	end


Route23_EventScript_CheckCascadeBadgeTrigger::
# 154 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE02_GET, Route23_EventScript_RecognizeBadgeTrigger
# 155 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadgeTrigger
	end


Route23_EventScript_CheckThunderBadgeTrigger::
# 160 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE03_GET, Route23_EventScript_RecognizeBadgeTrigger
# 161 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadgeTrigger
	end


Route23_EventScript_CheckRainbowBadgeTrigger::
# 166 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE04_GET, Route23_EventScript_RecognizeBadgeTrigger
# 167 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadgeTrigger
	end


Route23_EventScript_CheckSoulBadgeTrigger::
# 172 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE05_GET, Route23_EventScript_RecognizeBadgeTrigger
# 173 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadgeTrigger
	end


Route23_EventScript_CheckMarshBadgeTrigger::
# 178 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE06_GET, Route23_EventScript_RecognizeBadgeTrigger
# 179 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadgeTrigger
	end


Route23_EventScript_CheckVolcanoBadgeTrigger::
# 184 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE07_GET, Route23_EventScript_RecognizeBadgeTrigger
# 185 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadgeTrigger
	end


Route23_EventScript_CheckEarthBadgeTrigger::
# 190 "data/scripts/route23.pory"
	goto_if_set FLAG_BADGE08_GET, Route23_EventScript_RecognizeBadgeTrigger
# 191 "data/scripts/route23.pory"
	goto Route23_EventScript_MissingBadgeTrigger
	end


Route23_EventScript_MissingBoulderBadgeTrigger::
# 196 "data/scripts/route23.pory"
	msgbox Text_OnlySkilledTrainersAllowedThrough
# 197 "data/scripts/route23.pory"
	playse SE_BOO
# 198 "data/scripts/route23.pory"
	msgbox Text_CantLetYouPass
# 199 "data/scripts/route23.pory"
	closemessage
# 200 "data/scripts/route23.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_WalkDown
# 201 "data/scripts/route23.pory"
	applymovement VAR_0x8009, Common_Movement_WalkInPlaceFasterDown
# 202 "data/scripts/route23.pory"
	waitmovement 0
# 203 "data/scripts/route23.pory"
	releaseall
	end


Route23_EventScript_MissingBadgeTrigger::
# 208 "data/scripts/route23.pory"
	message Text_OnlyPassWithBadgeDontHaveYet
# 209 "data/scripts/route23.pory"
	waitmessage
# 210 "data/scripts/route23.pory"
	playse SE_BOO
# 211 "data/scripts/route23.pory"
	waitbuttonpress
# 212 "data/scripts/route23.pory"
	closemessage
# 213 "data/scripts/route23.pory"
	waitse
# 214 "data/scripts/route23.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_WalkDown
# 215 "data/scripts/route23.pory"
	applymovement VAR_0x8009, Common_Movement_WalkInPlaceFasterDown
# 216 "data/scripts/route23.pory"
	waitmovement 0
# 217 "data/scripts/route23.pory"
	releaseall
	end


Route23_EventScript_RecognizeBoulderBadgeTrigger::
# 222 "data/scripts/route23.pory"
	message Text_OhThatsBadgeGoRightAhead
# 223 "data/scripts/route23.pory"
	waitmessage
# 224 "data/scripts/route23.pory"
	playfanfare MUS_LEVEL_UP
# 225 "data/scripts/route23.pory"
	waitfanfare
# 226 "data/scripts/route23.pory"
	waitbuttonpress
# 227 "data/scripts/route23.pory"
	copyvar VAR_MAP_SCENE_ROUTE23, VAR_TEMP_1
# 228 "data/scripts/route23.pory"
	releaseall
	end


Route23_EventScript_RecognizeBadgeTrigger::
# 233 "data/scripts/route23.pory"
	msgbox Text_OnlyPassWithBadgeOhGoAhead
# 234 "data/scripts/route23.pory"
	copyvar VAR_MAP_SCENE_ROUTE23, VAR_TEMP_1
# 235 "data/scripts/route23.pory"
	releaseall
	end


# 239 "data/scripts/route23.pory"
Route23_Movement_WalkDown::
# 240 "data/scripts/route23.pory"
	walk_down
# 241 "data/scripts/route23.pory"
	step_end
