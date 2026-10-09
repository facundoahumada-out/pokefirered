EventScript_CutTree::
# 2 "data/scripts/field_moves.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 3 "data/scripts/field_moves.pory"
	lockall
# 4 "data/scripts/field_moves.pory"
	goto_if_unset FLAG_BADGE02_GET, EventScript_CantCutTree
# 5 "data/scripts/field_moves.pory"
	checkpartymove MOVE_CUT
# 6 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantCutTree
# 7 "data/scripts/field_moves.pory"
	setfieldeffectargument 0, VAR_RESULT
# 8 "data/scripts/field_moves.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 9 "data/scripts/field_moves.pory"
	buffermovename STR_VAR_2, MOVE_CUT
# 10 "data/scripts/field_moves.pory"
	msgbox Text_CutTreeDown, MSGBOX_YESNO
# 11 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_DontCutTree
# 12 "data/scripts/field_moves.pory"
	msgbox Text_MonUsedMove
# 13 "data/scripts/field_moves.pory"
	closemessage
# 14 "data/scripts/field_moves.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
# 15 "data/scripts/field_moves.pory"
	waitstate
# 16 "data/scripts/field_moves.pory"
	goto EventScript_CutTreeDown
	end


EventScript_FldEffCut::
# 21 "data/scripts/field_moves.pory"
	lockall
# 22 "data/scripts/field_moves.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
# 23 "data/scripts/field_moves.pory"
	waitstate
# 24 "data/scripts/field_moves.pory"
	goto EventScript_CutTreeDown
	end


EventScript_CutTreeDown::
# 29 "data/scripts/field_moves.pory"
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
# 30 "data/scripts/field_moves.pory"
	waitmovement 0
# 31 "data/scripts/field_moves.pory"
	removeobject VAR_LAST_TALKED
# 32 "data/scripts/field_moves.pory"
	releaseall
	end


# 36 "data/scripts/field_moves.pory"
Movement_CutTreeDown::
# 37 "data/scripts/field_moves.pory"
	cut_tree
# 38 "data/scripts/field_moves.pory"
	step_end

EventScript_CantCutTree::
# 42 "data/scripts/field_moves.pory"
	msgbox Text_TreeCanBeCutDown, MSGBOX_SIGN
# 43 "data/scripts/field_moves.pory"
	releaseall
	end


EventScript_DontCutTree::
# 48 "data/scripts/field_moves.pory"
	closemessage
# 49 "data/scripts/field_moves.pory"
	releaseall
	end


EventScript_RockSmash::
# 69 "data/scripts/field_moves.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 70 "data/scripts/field_moves.pory"
	lockall
# 71 "data/scripts/field_moves.pory"
	goto_if_unset FLAG_BADGE06_GET, EventScript_CantSmashRock
# 72 "data/scripts/field_moves.pory"
	checkpartymove MOVE_ROCK_SMASH
# 73 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
# 74 "data/scripts/field_moves.pory"
	setfieldeffectargument 0, VAR_RESULT
# 75 "data/scripts/field_moves.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 76 "data/scripts/field_moves.pory"
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
# 77 "data/scripts/field_moves.pory"
	msgbox Text_UseRockSmash, MSGBOX_YESNO
# 78 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_DontSmashRock
# 79 "data/scripts/field_moves.pory"
	msgbox Text_MonUsedMove
# 80 "data/scripts/field_moves.pory"
	closemessage
# 81 "data/scripts/field_moves.pory"
	dofieldeffect FLDEFF_USE_ROCK_SMASH
# 82 "data/scripts/field_moves.pory"
	waitstate
# 83 "data/scripts/field_moves.pory"
	goto EventScript_UseRockSmash
	end


EventScript_FldEffRockSmash::
# 88 "data/scripts/field_moves.pory"
	lockall
# 89 "data/scripts/field_moves.pory"
	dofieldeffect FLDEFF_USE_ROCK_SMASH
# 90 "data/scripts/field_moves.pory"
	waitstate
# 91 "data/scripts/field_moves.pory"
	goto EventScript_UseRockSmash
	end


EventScript_UseRockSmash::
# 96 "data/scripts/field_moves.pory"
	applymovement VAR_LAST_TALKED, Movement_BreakRock
# 97 "data/scripts/field_moves.pory"
	waitmovement 0
# 98 "data/scripts/field_moves.pory"
	removeobject VAR_LAST_TALKED
# 99 "data/scripts/field_moves.pory"
	special RockSmashWildEncounter
# 100 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_RockSmashNoEncounter
# 101 "data/scripts/field_moves.pory"
	waitstate
# 102 "data/scripts/field_moves.pory"
	releaseall
	end


EventScript_RockSmashNoEncounter::
# 107 "data/scripts/field_moves.pory"
	releaseall
	end


# 111 "data/scripts/field_moves.pory"
Movement_BreakRock::
# 112 "data/scripts/field_moves.pory"
	rock_smash_break
# 113 "data/scripts/field_moves.pory"
	step_end

EventScript_CantSmashRock::
# 117 "data/scripts/field_moves.pory"
	msgbox Text_MonMaySmashRock, MSGBOX_SIGN
	end


EventScript_DontSmashRock::
# 122 "data/scripts/field_moves.pory"
	closemessage
# 123 "data/scripts/field_moves.pory"
	releaseall
	end


EventScript_StrengthBoulder::
# 138 "data/scripts/field_moves.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 139 "data/scripts/field_moves.pory"
	lockall
# 140 "data/scripts/field_moves.pory"
	goto_if_unset FLAG_BADGE04_GET, EventScript_CantMoveBoulder
# 141 "data/scripts/field_moves.pory"
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_AlreadyUsedStrength
# 142 "data/scripts/field_moves.pory"
	checkpartymove MOVE_STRENGTH
# 143 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantMoveBoulder
# 144 "data/scripts/field_moves.pory"
	setfieldeffectargument 0, VAR_RESULT
# 145 "data/scripts/field_moves.pory"
	msgbox Text_UseStrength, MSGBOX_YESNO
# 146 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_DontUseStrength
# 147 "data/scripts/field_moves.pory"
	closemessage
# 148 "data/scripts/field_moves.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 149 "data/scripts/field_moves.pory"
	waitstate
# 150 "data/scripts/field_moves.pory"
	goto EventScript_UseStrength
	end


EventScript_FldEffStrength::
# 155 "data/scripts/field_moves.pory"
	lockall
# 156 "data/scripts/field_moves.pory"
	dofieldeffect FLDEFF_USE_STRENGTH
# 157 "data/scripts/field_moves.pory"
	waitstate
# 158 "data/scripts/field_moves.pory"
	goto EventScript_UseStrength
	end


EventScript_UseStrength::
# 163 "data/scripts/field_moves.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 164 "data/scripts/field_moves.pory"
	msgbox Text_MonUsedStrengthCanMoveBoulders, MSGBOX_SIGN
	end


EventScript_CantMoveBoulder::
# 169 "data/scripts/field_moves.pory"
	msgbox Text_MonMayPushBoulder, MSGBOX_SIGN
	end


EventScript_AlreadyUsedStrength::
# 174 "data/scripts/field_moves.pory"
	msgbox Text_StrengthMadeMovingBouldersPossible, MSGBOX_SIGN
	end


EventScript_DontUseStrength::
# 179 "data/scripts/field_moves.pory"
	closemessage
# 180 "data/scripts/field_moves.pory"
	releaseall
	end


EventScript_Waterfall::
# 207 "data/scripts/field_moves.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 208 "data/scripts/field_moves.pory"
	lockall
# 209 "data/scripts/field_moves.pory"
	checkpartymove MOVE_WATERFALL
# 210 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_WaterCrashingDown
# 211 "data/scripts/field_moves.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 212 "data/scripts/field_moves.pory"
	setfieldeffectargument 0, VAR_RESULT
# 213 "data/scripts/field_moves.pory"
	msgbox Text_UseWaterfall, MSGBOX_YESNO
# 214 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
# 215 "data/scripts/field_moves.pory"
	msgbox Text_MonUsedWaterfall
# 216 "data/scripts/field_moves.pory"
	dofieldeffect FLDEFF_USE_WATERFALL
# 217 "data/scripts/field_moves.pory"
	goto EventScript_EndWaterfall
	return


EventScript_CantUseWaterfall::
# 221 "data/scripts/field_moves.pory"
	lockall
# 222 "data/scripts/field_moves.pory"
EventScript_WaterCrashingDown:
# 223 "data/scripts/field_moves.pory"
	msgbox Text_WallOfWaterCrashingDown
# 224 "data/scripts/field_moves.pory"
EventScript_EndWaterfall:
# 225 "data/scripts/field_moves.pory"
	releaseall
	end


EventScript_DeepWater::
# 245 "data/scripts/field_moves.pory"
	lockall
# 246 "data/scripts/field_moves.pory"
	checkpartymove MOVE_DIVE
# 247 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_MayGoUnderwater
# 248 "data/scripts/field_moves.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 249 "data/scripts/field_moves.pory"
	setfieldeffectargument 0, VAR_RESULT
# 250 "data/scripts/field_moves.pory"
	setfieldeffectargument 1, 1
# 251 "data/scripts/field_moves.pory"
	msgbox Text_SeaIsDeepUseDive, MSGBOX_YESNO
# 252 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndDive
# 253 "data/scripts/field_moves.pory"
	msgbox Text_MonUsedDive
# 254 "data/scripts/field_moves.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 255 "data/scripts/field_moves.pory"
	goto EventScript_EndDive
	return


EventScript_CantDive::
# 259 "data/scripts/field_moves.pory"
	lockall
# 260 "data/scripts/field_moves.pory"
EventScript_MayGoUnderwater:
# 261 "data/scripts/field_moves.pory"
	msgbox Text_MonMayGoUnderwater
# 262 "data/scripts/field_moves.pory"
EventScript_EndDive:
# 263 "data/scripts/field_moves.pory"
	releaseall
	end


EventScript_TrySurface::
# 268 "data/scripts/field_moves.pory"
	lockall
# 269 "data/scripts/field_moves.pory"
	checkpartymove MOVE_DIVE
# 270 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSurface
# 271 "data/scripts/field_moves.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 272 "data/scripts/field_moves.pory"
	setfieldeffectargument 0, VAR_RESULT
# 273 "data/scripts/field_moves.pory"
	setfieldeffectargument 1, 1
# 274 "data/scripts/field_moves.pory"
	msgbox Text_LightFilteringUseDive, MSGBOX_YESNO
# 275 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndSurface
# 276 "data/scripts/field_moves.pory"
	msgbox Text_MonUsedDive
# 277 "data/scripts/field_moves.pory"
	dofieldeffect FLDEFF_USE_DIVE
# 278 "data/scripts/field_moves.pory"
	goto EventScript_EndSurface
	return


EventScript_CantSurface::
# 282 "data/scripts/field_moves.pory"
	lockall
# 283 "data/scripts/field_moves.pory"
	msgbox Text_MonMaySurface
# 284 "data/scripts/field_moves.pory"
	goto EventScript_EndSurface
	return


EventScript_ObstacleCantSurface::
# 288 "data/scripts/field_moves.pory"
	lockall
# 289 "data/scripts/field_moves.pory"
	msgbox Text_DiveCantBeUsedHere
# 290 "data/scripts/field_moves.pory"
EventScript_EndSurface:
# 291 "data/scripts/field_moves.pory"
	releaseall
	end


EventScript_FailSweetScent::
# 325 "data/scripts/field_moves.pory"
	msgbox Text_LooksLikeNothingHere, MSGBOX_SIGN
	end


EventScript_UseRockClimb::
# 334 "data/scripts/field_moves.pory"
	lockall
# 335 "data/scripts/field_moves.pory"
	specialvar VAR_RESULT, GetRockClimbUsableMonPartyIndex
# 336 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantRockClimb
# 337 "data/scripts/field_moves.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 338 "data/scripts/field_moves.pory"
	setfieldeffectargument 0, VAR_RESULT
# 339 "data/scripts/field_moves.pory"
	msgbox Text_WantToRockClimb, MSGBOX_YESNO
# 340 "data/scripts/field_moves.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_EndRockClimb
# 341 "data/scripts/field_moves.pory"
	msgbox Text_MonUsedRockClimb
# 342 "data/scripts/field_moves.pory"
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
# 343 "data/scripts/field_moves.pory"
	goto EventScript_EndRockClimb
	return


EventScript_CantRockClimb::
# 347 "data/scripts/field_moves.pory"
	msgbox Text_CantRockClimb
# 348 "data/scripts/field_moves.pory"
EventScript_EndRockClimb:
# 349 "data/scripts/field_moves.pory"
	releaseall
	end


Text_CutTreeDown::
# 53 "data/scripts/field_moves.pory"
	.string "This tree looks like it can be CUT\n"
	.string "down!\p"
	.string "Would you like to CUT it?$"

Text_MonUsedMove::
# 59 "data/scripts/field_moves.pory"
	.string "{STR_VAR_1} used {STR_VAR_2}!$"

Text_TreeCanBeCutDown::
# 63 "data/scripts/field_moves.pory"
	.string "This tree looks like it can be CUT\n"
	.string "down!$"

Text_UseRockSmash::
# 127 "data/scripts/field_moves.pory"
	.string "This rock appears to be breakable.\n"
	.string "Would you like to use ROCK SMASH?$"

Text_MonMaySmashRock::
# 132 "data/scripts/field_moves.pory"
	.string "It's a rugged rock, but a POKéMON\n"
	.string "may be able to smash it.$"

Text_UseStrength::
# 184 "data/scripts/field_moves.pory"
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.\p"
	.string "Would you like to use STRENGTH?$"

Text_MonUsedStrengthCanMoveBoulders::
# 190 "data/scripts/field_moves.pory"
	.string "{STR_VAR_1} used STRENGTH!\p"
	.string "{STR_VAR_1}'s STRENGTH made it\n"
	.string "possible to move boulders around!$"

Text_MonMayPushBoulder::
# 196 "data/scripts/field_moves.pory"
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.$"

Text_StrengthMadeMovingBouldersPossible::
# 201 "data/scripts/field_moves.pory"
	.string "STRENGTH made it possible to move\n"
	.string "boulders around.$"

Text_WallOfWaterCrashingDown::
# 229 "data/scripts/field_moves.pory"
	.string "A wall of water is crashing down\n"
	.string "with a mighty roar.$"

Text_UseWaterfall::
# 234 "data/scripts/field_moves.pory"
	.string "It's a large waterfall.\n"
	.string "Would you like to use WATERFALL?$"

Text_MonUsedWaterfall::
# 239 "data/scripts/field_moves.pory"
	.string "{STR_VAR_1} used WATERFALL.$"

Text_MonMayGoUnderwater::
# 295 "data/scripts/field_moves.pory"
	.string "The sea is deep here. A POKéMON\n"
	.string "may be able to go underwater.$"

Text_SeaIsDeepUseDive::
# 300 "data/scripts/field_moves.pory"
	.string "The sea is deep here.\n"
	.string "Would you like to use DIVE?$"

Text_MonUsedDive::
# 305 "data/scripts/field_moves.pory"
	.string "{STR_VAR_1} used DIVE.$"

Text_MonMaySurface::
# 309 "data/scripts/field_moves.pory"
	.string "Light is filtering down from above.\n"
	.string "A POKéMON may be able to surface.$"

Text_LightFilteringUseDive::
# 314 "data/scripts/field_moves.pory"
	.string "Light is filtering down from above.\n"
	.string "Would you like to use DIVE?$"

Text_DiveCantBeUsedHere::
# 319 "data/scripts/field_moves.pory"
	.string "There is an obstacle above.\n"
	.string "DIVE can't be used here.$"

Text_LooksLikeNothingHere::
# 329 "data/scripts/field_moves.pory"
	.string "Looks like there's nothing here…$"

Text_WantToRockClimb::
# 353 "data/scripts/field_moves.pory"
	.string "The cliff is steep.\n"
	.string "Would you like to use ROCK CLIMB?$"

Text_MonUsedRockClimb::
# 358 "data/scripts/field_moves.pory"
	.string "{STR_VAR_1} used ROCK CLIMB!$"

Text_CantRockClimb::
# 362 "data/scripts/field_moves.pory"
	.string "The cliff is steep.\n"
	.string "A POKéMON may be able to climb it.$"
