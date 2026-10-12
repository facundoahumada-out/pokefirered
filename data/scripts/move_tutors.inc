VictoryRoad_2F_EventScript_DoubleEdgeTutor::
# 2 "data/scripts/move_tutors.pory"
	lock
# 3 "data/scripts/move_tutors.pory"
	faceplayer
# 4 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_DOUBLE_EDGE, EventScript_DoubleEdgePaidLesson
# 5 "data/scripts/move_tutors.pory"
	msgbox Text_DoubleEdgeTeach, MSGBOX_YESNO
# 6 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_DoubleEdgeDeclined
# 7 "data/scripts/move_tutors.pory"
	msgbox Text_DoubleEdgeWhichMon
# 8 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_DOUBLE_EDGE
# 9 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 10 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_DoubleEdgeDeclined
# 11 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_DOUBLE_EDGE
# 12 "data/scripts/move_tutors.pory"
	goto EventScript_DoubleEdgeTaught
	end


EventScript_DoubleEdgePaidLesson::
# 17 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_DOUBLE_EDGE
# 18 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 19 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_DoubleEdgeDeclined
# 20 "data/scripts/move_tutors.pory"
	goto EventScript_DoubleEdgeTaught
	end


EventScript_DoubleEdgeDeclined::
# 25 "data/scripts/move_tutors.pory"
	msgbox Text_DoubleEdgeDeclined
# 26 "data/scripts/move_tutors.pory"
	release
	end


EventScript_DoubleEdgeTaught::
# 31 "data/scripts/move_tutors.pory"
	msgbox Text_DoubleEdgeTaught
# 32 "data/scripts/move_tutors.pory"
	release
	end


EventScript_ThunderWaveTutor::
# 37 "data/scripts/move_tutors.pory"
	lock
# 38 "data/scripts/move_tutors.pory"
	faceplayer
# 39 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_THUNDER_WAVE, EventScript_ThunderWavePaidLesson
# 40 "data/scripts/move_tutors.pory"
	msgbox Text_ThunderWaveTeach, MSGBOX_YESNO
# 41 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_ThunderWaveDeclined
# 42 "data/scripts/move_tutors.pory"
	msgbox Text_ThunderWaveWhichMon
# 43 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_THUNDER_WAVE
# 44 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 45 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_ThunderWaveDeclined
# 46 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_THUNDER_WAVE
# 47 "data/scripts/move_tutors.pory"
	goto EventScript_ThunderWaveTaught
	end


EventScript_ThunderWavePaidLesson::
# 52 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_THUNDER_WAVE
# 53 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 54 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_ThunderWaveDeclined
# 55 "data/scripts/move_tutors.pory"
	goto EventScript_ThunderWaveTaught
	end


EventScript_ThunderWaveDeclined::
# 60 "data/scripts/move_tutors.pory"
	msgbox Text_ThunderWaveDeclined
# 61 "data/scripts/move_tutors.pory"
	release
	end


EventScript_ThunderWaveTaught::
# 66 "data/scripts/move_tutors.pory"
	msgbox Text_ThunderWaveTaught
# 67 "data/scripts/move_tutors.pory"
	release
	end


RockTunnel_B1F_EventScript_RockSlideTutor::
# 72 "data/scripts/move_tutors.pory"
	lock
# 73 "data/scripts/move_tutors.pory"
	faceplayer
# 74 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_ROCK_SLIDE, EventScript_RockSlidePaidLesson
# 75 "data/scripts/move_tutors.pory"
	msgbox Text_RockSlideTeach, MSGBOX_YESNO
# 76 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_RockSlideDeclined
# 77 "data/scripts/move_tutors.pory"
	msgbox Text_RockSlideWhichMon
# 78 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_ROCK_SLIDE
# 79 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 80 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_RockSlideDeclined
# 81 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_ROCK_SLIDE
# 82 "data/scripts/move_tutors.pory"
	goto EventScript_RockSlideTaught
	end


EventScript_RockSlidePaidLesson::
# 87 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_ROCK_SLIDE
# 88 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 89 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_RockSlideDeclined
# 90 "data/scripts/move_tutors.pory"
	goto EventScript_RockSlideTaught
	end


EventScript_RockSlideDeclined::
# 95 "data/scripts/move_tutors.pory"
	msgbox Text_RockSlideDeclined
# 96 "data/scripts/move_tutors.pory"
	release
	end


EventScript_RockSlideTaught::
# 101 "data/scripts/move_tutors.pory"
	msgbox Text_RockSlideTaught
# 102 "data/scripts/move_tutors.pory"
	release
	end


MtEmber_Exterior_EventScript_ExplosionTutor::
# 107 "data/scripts/move_tutors.pory"
	lock
# 108 "data/scripts/move_tutors.pory"
	faceplayer
# 109 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_EXPLOSION, EventScript_ExplosionPaidLesson
# 110 "data/scripts/move_tutors.pory"
	msgbox Text_ExplosionTeach, MSGBOX_YESNO
# 111 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_ExplosionDeclined
# 112 "data/scripts/move_tutors.pory"
	msgbox Text_ExplosionWhichMon
# 113 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_EXPLOSION
# 114 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 115 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_ExplosionDeclined
# 116 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_EXPLOSION
# 117 "data/scripts/move_tutors.pory"
	goto EventScript_ExplosionTaught
	end


EventScript_ExplosionPaidLesson::
# 122 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_EXPLOSION
# 123 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 124 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_ExplosionDeclined
# 125 "data/scripts/move_tutors.pory"
	goto EventScript_ExplosionTaught
	end


EventScript_ExplosionDeclined::
# 130 "data/scripts/move_tutors.pory"
	msgbox Text_ExplosionDeclined
# 131 "data/scripts/move_tutors.pory"
	release
	end


EventScript_ExplosionTaught::
# 136 "data/scripts/move_tutors.pory"
	msgbox Text_ExplosionTaught
# 137 "data/scripts/move_tutors.pory"
	release
	end


Route4_EventScript_MegaPunchTutor::
# 142 "data/scripts/move_tutors.pory"
	lock
# 143 "data/scripts/move_tutors.pory"
	faceplayer
# 144 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_MEGA_PUNCH, EventScript_MegaPunchPaidLesson
# 145 "data/scripts/move_tutors.pory"
	msgbox Text_MegaPunchTeach, MSGBOX_YESNO
# 146 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_MegaPunchDeclined
# 147 "data/scripts/move_tutors.pory"
	msgbox Text_MegaPunchWhichMon
# 148 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_MEGA_PUNCH
# 149 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 150 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaPunchDeclined
# 151 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_MEGA_PUNCH
# 152 "data/scripts/move_tutors.pory"
	goto EventScript_MegaPunchTaught
	end


EventScript_MegaPunchPaidLesson::
# 157 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_MEGA_PUNCH
# 158 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 159 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaPunchDeclined
# 160 "data/scripts/move_tutors.pory"
	goto EventScript_MegaPunchTaught
	end


EventScript_MegaPunchDeclined::
# 165 "data/scripts/move_tutors.pory"
	msgbox Text_MegaPunchDeclined
# 166 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MegaPunchTaught::
# 171 "data/scripts/move_tutors.pory"
	msgbox Text_MegaPunchTaught
# 172 "data/scripts/move_tutors.pory"
	release
	end


Route4_EventScript_MegaKickTutor::
# 177 "data/scripts/move_tutors.pory"
	lock
# 178 "data/scripts/move_tutors.pory"
	faceplayer
# 179 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_MEGA_KICK, EventScript_MegaKickPaidLesson
# 180 "data/scripts/move_tutors.pory"
	msgbox Text_MegaKickTeach, MSGBOX_YESNO
# 181 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_MegaKickDeclined
# 182 "data/scripts/move_tutors.pory"
	msgbox Text_MegaKickWhichMon
# 183 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_MEGA_KICK
# 184 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 185 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaKickDeclined
# 186 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_MEGA_KICK
# 187 "data/scripts/move_tutors.pory"
	goto EventScript_MegaKickTaught
	end


EventScript_MegaKickPaidLesson::
# 192 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_MEGA_KICK
# 193 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 194 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaKickDeclined
# 195 "data/scripts/move_tutors.pory"
	goto EventScript_MegaKickTaught
	end


EventScript_MegaKickDeclined::
# 200 "data/scripts/move_tutors.pory"
	msgbox Text_MegaKickDeclined
# 201 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MegaKickTaught::
# 206 "data/scripts/move_tutors.pory"
	msgbox Text_MegaKickTaught
# 207 "data/scripts/move_tutors.pory"
	release
	end


EventScript_DreamEaterTutor::
# 212 "data/scripts/move_tutors.pory"
	lock
# 213 "data/scripts/move_tutors.pory"
	faceplayer
# 214 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_DREAM_EATER, EventScript_DreamEaterPaidLesson
# 215 "data/scripts/move_tutors.pory"
	msgbox Text_DreamEaterTeach, MSGBOX_YESNO
# 216 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_DreamEaterDeclined
# 217 "data/scripts/move_tutors.pory"
	msgbox Text_DreamEaterWhichMon
# 218 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_DREAM_EATER
# 219 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 220 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_DreamEaterDeclined
# 221 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_DREAM_EATER
# 222 "data/scripts/move_tutors.pory"
	goto EventScript_DreamEaterTaught
	end


EventScript_DreamEaterPaidLesson::
# 227 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_DREAM_EATER
# 228 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 229 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_DreamEaterDeclined
# 230 "data/scripts/move_tutors.pory"
	goto EventScript_DreamEaterTaught
	end


EventScript_DreamEaterDeclined::
# 235 "data/scripts/move_tutors.pory"
	msgbox Text_DreamEaterDeclined
# 236 "data/scripts/move_tutors.pory"
	release
	end


EventScript_DreamEaterTaught::
# 241 "data/scripts/move_tutors.pory"
	msgbox Text_DreamEaterTaught
# 242 "data/scripts/move_tutors.pory"
	release
	end


EventScript_SoftboiledTutor::
# 247 "data/scripts/move_tutors.pory"
	lock
# 248 "data/scripts/move_tutors.pory"
	faceplayer
# 249 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_SOFT_BOILED, EventScript_SoftboiledPaidLesson
# 250 "data/scripts/move_tutors.pory"
	msgbox Text_SoftboiledTeach, MSGBOX_YESNO
# 251 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_SoftboiledDeclined
# 252 "data/scripts/move_tutors.pory"
	msgbox Text_SoftboiledWhichMon
# 253 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_SOFT_BOILED
# 254 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 255 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SoftboiledDeclined
# 256 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_SOFT_BOILED
# 257 "data/scripts/move_tutors.pory"
	goto EventScript_SoftboiledTaught
	end


EventScript_SoftboiledPaidLesson::
# 262 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_SOFT_BOILED
# 263 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 264 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SoftboiledDeclined
# 265 "data/scripts/move_tutors.pory"
	goto EventScript_SoftboiledTaught
	end


EventScript_SoftboiledDeclined::
# 270 "data/scripts/move_tutors.pory"
	msgbox Text_SoftboiledDeclined
# 271 "data/scripts/move_tutors.pory"
	release
	end


EventScript_SoftboiledTaught::
# 276 "data/scripts/move_tutors.pory"
	msgbox Text_SoftboiledTaught
# 277 "data/scripts/move_tutors.pory"
	release
	end


FuchsiaCity_EventScript_SubstituteTutor::
# 282 "data/scripts/move_tutors.pory"
	lock
# 283 "data/scripts/move_tutors.pory"
	faceplayer
# 284 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_SUBSTITUTE, EventScript_SubstitutePaidLesson
# 285 "data/scripts/move_tutors.pory"
	msgbox Text_SubstituteTeach, MSGBOX_YESNO
# 286 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_SubstituteDeclined
# 287 "data/scripts/move_tutors.pory"
	msgbox Text_SubstituteWhichMon
# 288 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_SUBSTITUTE
# 289 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 290 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SubstituteDeclined
# 291 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_SUBSTITUTE
# 292 "data/scripts/move_tutors.pory"
	goto EventScript_SubstituteTaught
	end


EventScript_SubstitutePaidLesson::
# 297 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_SUBSTITUTE
# 298 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 299 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SubstituteDeclined
# 300 "data/scripts/move_tutors.pory"
	goto EventScript_SubstituteTaught
	end


EventScript_SubstituteDeclined::
# 305 "data/scripts/move_tutors.pory"
	msgbox Text_SubstituteDeclined
# 306 "data/scripts/move_tutors.pory"
	release
	end


EventScript_SubstituteTaught::
# 311 "data/scripts/move_tutors.pory"
	msgbox Text_SubstituteTaught
# 312 "data/scripts/move_tutors.pory"
	release
	end


SevenIsland_EventScript_SwordsDanceTutor::
# 317 "data/scripts/move_tutors.pory"
	lock
# 318 "data/scripts/move_tutors.pory"
	faceplayer
# 319 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_SWORDS_DANCE, EventScript_SwordsDancePaidLesson
# 320 "data/scripts/move_tutors.pory"
	msgbox Text_SwordsDanceTeach, MSGBOX_YESNO
# 321 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_SwordsDanceDeclined
# 322 "data/scripts/move_tutors.pory"
	msgbox Text_SwordsDanceWhichMon
# 323 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_SWORDS_DANCE
# 324 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 325 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SwordsDanceDeclined
# 326 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_SWORDS_DANCE
# 327 "data/scripts/move_tutors.pory"
	goto EventScript_SwordsDanceTaught
	end


EventScript_SwordsDancePaidLesson::
# 332 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_SWORDS_DANCE
# 333 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 334 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SwordsDanceDeclined
# 335 "data/scripts/move_tutors.pory"
	goto EventScript_SwordsDanceTaught
	end


EventScript_SwordsDanceDeclined::
# 340 "data/scripts/move_tutors.pory"
	msgbox Text_SwordsDanceDeclined
# 341 "data/scripts/move_tutors.pory"
	release
	end


EventScript_SwordsDanceTaught::
# 346 "data/scripts/move_tutors.pory"
	msgbox Text_SwordsDanceTaught
# 347 "data/scripts/move_tutors.pory"
	release
	end


PewterCity_Museum_1F_EventScript_SeismicTossTutor::
# 352 "data/scripts/move_tutors.pory"
	lock
# 353 "data/scripts/move_tutors.pory"
	faceplayer
# 354 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_SEISMIC_TOSS, EventScript_SeismicTossPaidLesson
# 355 "data/scripts/move_tutors.pory"
	msgbox Text_SeismicTossTeach, MSGBOX_YESNO
# 356 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_SeismicTossDeclined
# 357 "data/scripts/move_tutors.pory"
	msgbox Text_SeismicTossWhichMon
# 358 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_SEISMIC_TOSS
# 359 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 360 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SeismicTossDeclined
# 361 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_SEISMIC_TOSS
# 362 "data/scripts/move_tutors.pory"
	goto EventScript_SeismicTossTaught
	end


EventScript_SeismicTossPaidLesson::
# 367 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_SEISMIC_TOSS
# 368 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 369 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SeismicTossDeclined
# 370 "data/scripts/move_tutors.pory"
	goto EventScript_SeismicTossTaught
	end


EventScript_SeismicTossDeclined::
# 375 "data/scripts/move_tutors.pory"
	msgbox Text_SeismicTossDeclined
# 376 "data/scripts/move_tutors.pory"
	release
	end


EventScript_SeismicTossTaught::
# 381 "data/scripts/move_tutors.pory"
	msgbox Text_SeismicTossTaught
# 382 "data/scripts/move_tutors.pory"
	release
	end


EventScript_CounterTutor::
# 387 "data/scripts/move_tutors.pory"
	lock
# 388 "data/scripts/move_tutors.pory"
	faceplayer
# 389 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_COUNTER, EventScript_CounterPaidLesson
# 390 "data/scripts/move_tutors.pory"
	msgbox Text_CounterTeach, MSGBOX_YESNO
# 391 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CounterDeclined
# 392 "data/scripts/move_tutors.pory"
	msgbox Text_CounterWhichMon
# 393 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_COUNTER
# 394 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 395 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_CounterDeclined
# 396 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_COUNTER
# 397 "data/scripts/move_tutors.pory"
	goto EventScript_CounterTaught
	end


EventScript_CounterPaidLesson::
# 402 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_COUNTER
# 403 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 404 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_CounterDeclined
# 405 "data/scripts/move_tutors.pory"
	goto EventScript_CounterTaught
	end


EventScript_CounterDeclined::
# 410 "data/scripts/move_tutors.pory"
	msgbox Text_CounterDeclined
# 411 "data/scripts/move_tutors.pory"
	release
	end


EventScript_CounterTaught::
# 416 "data/scripts/move_tutors.pory"
	msgbox Text_CounterTaught
# 417 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MetronomeTutor::
# 422 "data/scripts/move_tutors.pory"
	lock
# 423 "data/scripts/move_tutors.pory"
	faceplayer
# 424 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_METRONOME, EventScript_MetronomePaidLesson
# 425 "data/scripts/move_tutors.pory"
	msgbox Text_MetronomeTeach, MSGBOX_YESNO
# 426 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_MetronomeDeclined
# 427 "data/scripts/move_tutors.pory"
	msgbox Text_MetronomeWhichMon
# 428 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_METRONOME
# 429 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 430 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_MetronomeDeclined
# 431 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_METRONOME
# 432 "data/scripts/move_tutors.pory"
	goto EventScript_MetronomeTaught
	end


EventScript_MetronomePaidLesson::
# 437 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_METRONOME
# 438 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 439 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_MetronomeDeclined
# 440 "data/scripts/move_tutors.pory"
	goto EventScript_MetronomeTaught
	end


EventScript_MetronomeDeclined::
# 445 "data/scripts/move_tutors.pory"
	msgbox Text_MetronomeDeclined
# 446 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MetronomeTaught::
# 451 "data/scripts/move_tutors.pory"
	msgbox Text_MetronomeTaught
# 452 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MimicTutor::
# 457 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_MIMIC, EventScript_MimicPaidLesson
# 458 "data/scripts/move_tutors.pory"
	msgbox Text_MimicTeach, MSGBOX_YESNO
# 459 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_MimicDeclined
# 460 "data/scripts/move_tutors.pory"
	msgbox Text_MimicWhichMon
# 461 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_MIMIC
# 462 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 463 "data/scripts/move_tutors.pory"
	lock
# 464 "data/scripts/move_tutors.pory"
	faceplayer
# 465 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, EventScript_MimicDeclined
# 466 "data/scripts/move_tutors.pory"
	removeitem ITEM_POKE_DOLL
# 467 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_MIMIC
# 468 "data/scripts/move_tutors.pory"
	goto EventScript_MimicTaught
	end


EventScript_MimicPaidLesson::
# 473 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_MIMIC
# 474 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 475 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_MimicDeclined
# 476 "data/scripts/move_tutors.pory"
	goto EventScript_MimicTaught
	end


EventScript_MimicDeclined::
# 481 "data/scripts/move_tutors.pory"
	msgbox Text_MimicDeclined
# 482 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MimicTaught::
# 487 "data/scripts/move_tutors.pory"
	checkplayergender
# 488 "data/scripts/move_tutors.pory"
	call_if_eq VAR_RESULT, MALE, EventScript_MimicTaughtMale
# 489 "data/scripts/move_tutors.pory"
	call_if_eq VAR_RESULT, FEMALE, EventScript_MimicTaughtFemale
# 490 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MimicTaughtMale::
# 495 "data/scripts/move_tutors.pory"
	msgbox Text_MimicTaughtMale
	return


EventScript_MimicTaughtFemale::
# 500 "data/scripts/move_tutors.pory"
	msgbox Text_MimicTaughtFemale
	return


FourIsland_House1_EventScript_BodySlamTutor::
# 505 "data/scripts/move_tutors.pory"
	lock
# 506 "data/scripts/move_tutors.pory"
	faceplayer
# 507 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_BODY_SLAM, EventScript_BodySlamPaidLesson
# 508 "data/scripts/move_tutors.pory"
	msgbox Text_BodySlamTeach, MSGBOX_YESNO
# 509 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_BodySlamDeclined
# 510 "data/scripts/move_tutors.pory"
	msgbox Text_BodySlamWhichMon
# 511 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_BODY_SLAM
# 512 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 513 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BodySlamDeclined
# 514 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_BODY_SLAM
# 515 "data/scripts/move_tutors.pory"
	goto EventScript_BodySlamTaught
	end


EventScript_BodySlamPaidLesson::
# 520 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_BODY_SLAM
# 521 "data/scripts/move_tutors.pory"
	call EventScript_PaidMoveTutorLesson
# 522 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BodySlamDeclined
# 523 "data/scripts/move_tutors.pory"
	goto EventScript_BodySlamTaught
	end


EventScript_BodySlamDeclined::
# 528 "data/scripts/move_tutors.pory"
	msgbox Text_BodySlamDeclined
# 529 "data/scripts/move_tutors.pory"
	release
	end


EventScript_BodySlamTaught::
# 534 "data/scripts/move_tutors.pory"
	msgbox Text_BodySlamTaught
# 535 "data/scripts/move_tutors.pory"
	release
	end


TwoIsland_CapeBrink_House_EventScript_StarterTutor::
# 540 "data/scripts/move_tutors.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 541 "data/scripts/move_tutors.pory"
	special QuestLog_CutRecording
# 542 "data/scripts/move_tutors.pory"
	lock
# 543 "data/scripts/move_tutors.pory"
	faceplayer
# 544 "data/scripts/move_tutors.pory"
	bufferleadmonspeciesname STR_VAR_1
# 545 "data/scripts/move_tutors.pory"
	msgbox Text_UltimateMoveThatMon
# 546 "data/scripts/move_tutors.pory"
	specialvar VAR_RESULT, CapeBrinkGetMoveToTeachLeadPokemon
# 547 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_NoLeadStarter
# 548 "data/scripts/move_tutors.pory"
	copyvar VAR_0x8009, VAR_0x8005
# 549 "data/scripts/move_tutors.pory"
	call_if_eq VAR_FACING, DIR_NORTH, CapeBrinkTutor_EventScript_JumpInPlaceDown
# 550 "data/scripts/move_tutors.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, CapeBrinkTutor_EventScript_JumpInPlaceUp
# 551 "data/scripts/move_tutors.pory"
	call_if_eq VAR_FACING, DIR_EAST, CapeBrinkTutor_EventScript_JumpInPlaceLeft
# 552 "data/scripts/move_tutors.pory"
	call_if_eq VAR_FACING, DIR_WEST, CapeBrinkTutor_EventScript_JumpInPlaceRight
# 553 "data/scripts/move_tutors.pory"
	msgbox Text_AllowMeToTeachMonUltimateMove, MSGBOX_YESNO
# 554 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, CapeBrinkTutor_EventScript_DeclineMove
# 555 "data/scripts/move_tutors.pory"
	specialvar VAR_RESULT, IsCapeBrinkMoveAlreadyTaught
# 556 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, TRUE, CapeBrinkTutor_EventScript_PaidLesson
# 557 "data/scripts/move_tutors.pory"
	msgbox Text_LetMeConferUltimateMove
# 558 "data/scripts/move_tutors.pory"
	closemessage
# 559 "data/scripts/move_tutors.pory"
	fadescreen FADE_TO_BLACK
# 560 "data/scripts/move_tutors.pory"
	goto CapeBrinkTutor_EventScript_ChooseMon
	return


CapeBrinkTutor_EventScript_PaidLesson::
# 565 "data/scripts/move_tutors.pory"
	showmoneybox 0, 0
# 566 "data/scripts/move_tutors.pory"
	special BufferMoveTutorPrice
# 567 "data/scripts/move_tutors.pory"
	msgbox Text_UltimateMoveTeachAgainForMoney, MSGBOX_YESNO
# 568 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, CapeBrinkTutor_EventScript_PaidLessonDeclined
# 569 "data/scripts/move_tutors.pory"
	specialvar VAR_RESULT, CanPayMoveTutorPrice
# 570 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_PaidLessonNotEnoughMoney
# 571 "data/scripts/move_tutors.pory"
	hidemoneybox
# 572 "data/scripts/move_tutors.pory"
	closemessage
# 573 "data/scripts/move_tutors.pory"
	fadescreen FADE_TO_BLACK
# 574 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 575 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_DeclineMove
# 576 "data/scripts/move_tutors.pory"
	special PayMoveTutorPrice
# 577 "data/scripts/move_tutors.pory"
	showmoneybox 0, 0
# 578 "data/scripts/move_tutors.pory"
	special BufferMoveTutorPrice
# 579 "data/scripts/move_tutors.pory"
	playse SE_SHOP
# 580 "data/scripts/move_tutors.pory"
	msgbox Text_MoveTutorPaid
# 581 "data/scripts/move_tutors.pory"
	waitse
# 582 "data/scripts/move_tutors.pory"
	hidemoneybox
# 583 "data/scripts/move_tutors.pory"
	msgbox Text_MakeBestUseOfMove
# 584 "data/scripts/move_tutors.pory"
	release
	end


CapeBrinkTutor_EventScript_PaidLessonNotEnoughMoney::
# 589 "data/scripts/move_tutors.pory"
	msgbox Text_MoveTutorNotEnoughMoney
# 590 "data/scripts/move_tutors.pory"
	hidemoneybox
# 591 "data/scripts/move_tutors.pory"
	release
	end


CapeBrinkTutor_EventScript_PaidLessonDeclined::
# 596 "data/scripts/move_tutors.pory"
	hidemoneybox
# 597 "data/scripts/move_tutors.pory"
	goto CapeBrinkTutor_EventScript_DeclineMove
	return


CapeBrinkTutor_EventScript_FadeTaughtMove::
# 602 "data/scripts/move_tutors.pory"
	fadescreen FADE_FROM_BLACK
# 603 "data/scripts/move_tutors.pory"
	goto CapeBrinkTutor_EventScript_TaughtMove
	end


CapeBrinkTutor_EventScript_TaughtMove::
# 608 "data/scripts/move_tutors.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 609 "data/scripts/move_tutors.pory"
	specialvar VAR_RESULT, HasLearnedAllMovesFromCapeBrinkTutor
# 610 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, TRUE, CapeBrinkTutor_EventScript_LearnedAllMoves
# 611 "data/scripts/move_tutors.pory"
	msgbox Text_TaughtMove
# 612 "data/scripts/move_tutors.pory"
	release
	end


CapeBrinkTutor_EventScript_LearnedAllMoves::
# 617 "data/scripts/move_tutors.pory"
	msgbox Text_PassedOnEverythingIKnow
# 618 "data/scripts/move_tutors.pory"
	setflag FLAG_LEARNED_ALL_MOVES_AT_CAPE_BRINK
# 619 "data/scripts/move_tutors.pory"
	release
	end


CapeBrinkTutor_EventScript_ChooseMon::
# 624 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 625 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_DeclineMove
# 626 "data/scripts/move_tutors.pory"
	goto CapeBrinkTutor_EventScript_TaughtMove
	end


CapeBrinkTutor_EventScript_JumpInPlaceDown::
# 631 "data/scripts/move_tutors.pory"
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceDown
# 632 "data/scripts/move_tutors.pory"
	waitmovement 0
	return


CapeBrinkTutor_EventScript_JumpInPlaceUp::
# 637 "data/scripts/move_tutors.pory"
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceUp
# 638 "data/scripts/move_tutors.pory"
	waitmovement 0
	return


CapeBrinkTutor_EventScript_JumpInPlaceLeft::
# 643 "data/scripts/move_tutors.pory"
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceLeft
# 644 "data/scripts/move_tutors.pory"
	waitmovement 0
	return


CapeBrinkTutor_EventScript_JumpInPlaceRight::
# 649 "data/scripts/move_tutors.pory"
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceRight
# 650 "data/scripts/move_tutors.pory"
	waitmovement 0
	return


CapeBrinkTutor_EventScript_DeclineMove::
# 655 "data/scripts/move_tutors.pory"
	msgbox Text_YouRejectIt
# 656 "data/scripts/move_tutors.pory"
	release
	end


CapeBrinkTutor_EventScript_NoLeadStarter::
# 661 "data/scripts/move_tutors.pory"
	msgbox Text_JustMistaken
# 662 "data/scripts/move_tutors.pory"
	release
	end


EventScript_ChooseMoveTutorMon::
# 667 "data/scripts/move_tutors.pory"
	special ChooseMonForMoveTutor
# 668 "data/scripts/move_tutors.pory"
	waitstate
# 669 "data/scripts/move_tutors.pory"
	lock
# 670 "data/scripts/move_tutors.pory"
	faceplayer
	return


EventScript_CanOnlyBeLearnedOnce::
# 675 "data/scripts/move_tutors.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 676 "data/scripts/move_tutors.pory"
	special DisableMsgBoxWalkaway
# 677 "data/scripts/move_tutors.pory"
	signmsg
# 678 "data/scripts/move_tutors.pory"
	msgbox Text_MoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
# 679 "data/scripts/move_tutors.pory"
	normalmsg
# 680 "data/scripts/move_tutors.pory"
	call EventScript_RestorePrevTextColor
	return


# 684 "data/scripts/move_tutors.pory"
Movement_JumpInPlaceDown:
# 685 "data/scripts/move_tutors.pory"
	jump_in_place_down
# 686 "data/scripts/move_tutors.pory"
	step_end

# 689 "data/scripts/move_tutors.pory"
Movement_JumpInPlaceUp:
# 690 "data/scripts/move_tutors.pory"
	jump_in_place_up
# 691 "data/scripts/move_tutors.pory"
	step_end

# 694 "data/scripts/move_tutors.pory"
Movement_JumpInPlaceLeft:
# 695 "data/scripts/move_tutors.pory"
	jump_in_place_left
# 696 "data/scripts/move_tutors.pory"
	step_end

# 699 "data/scripts/move_tutors.pory"
Movement_JumpInPlaceRight:
# 700 "data/scripts/move_tutors.pory"
	jump_in_place_right
# 701 "data/scripts/move_tutors.pory"
	step_end

EventScript_PaidMoveTutorLesson::
# 707 "data/scripts/move_tutors.pory"
	showmoneybox 0, 0
# 708 "data/scripts/move_tutors.pory"
	special BufferMoveTutorPrice
# 709 "data/scripts/move_tutors.pory"
	msgbox Text_MoveTutorTeachAgainForMoney, MSGBOX_YESNO
# 710 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_PaidMoveTutorLessonDeclined
# 711 "data/scripts/move_tutors.pory"
	specialvar VAR_RESULT, CanPayMoveTutorPrice
# 712 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_PaidMoveTutorLessonNotEnoughMoney
# 713 "data/scripts/move_tutors.pory"
	msgbox Text_MoveTutorWhichMon
# 714 "data/scripts/move_tutors.pory"
	closemessage
# 715 "data/scripts/move_tutors.pory"
	hidemoneybox
# 716 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 717 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_PaidMoveTutorLessonNotTaught
# 718 "data/scripts/move_tutors.pory"
	special PayMoveTutorPrice
# 719 "data/scripts/move_tutors.pory"
	showmoneybox 0, 0
# 720 "data/scripts/move_tutors.pory"
	special BufferMoveTutorPrice
# 721 "data/scripts/move_tutors.pory"
	playse SE_SHOP
# 722 "data/scripts/move_tutors.pory"
	msgbox Text_MoveTutorPaid
# 723 "data/scripts/move_tutors.pory"
	waitse
# 724 "data/scripts/move_tutors.pory"
	hidemoneybox
# 725 "data/scripts/move_tutors.pory"
	setvar VAR_RESULT, TRUE
	return


EventScript_PaidMoveTutorLessonNotEnoughMoney::
# 730 "data/scripts/move_tutors.pory"
	msgbox Text_MoveTutorNotEnoughMoney
# 731 "data/scripts/move_tutors.pory"
	goto EventScript_PaidMoveTutorLessonDeclined
	return


EventScript_PaidMoveTutorLessonDeclined::
# 735 "data/scripts/move_tutors.pory"
	hidemoneybox
# 736 "data/scripts/move_tutors.pory"
	goto EventScript_PaidMoveTutorLessonNotTaught
	return


EventScript_PaidMoveTutorLessonNotTaught::
# 740 "data/scripts/move_tutors.pory"
	setvar VAR_RESULT, FALSE
	return


Text_MoveTutorTeachAgainForMoney::
# 744 "data/scripts/move_tutors.pory"
	.string "I can teach {STR_VAR_1} to another\n"
	.string "Pokémon for ¥{STR_VAR_2}.\p"
	.string "Would you like that?$"

Text_MoveTutorWhichMon::
# 750 "data/scripts/move_tutors.pory"
	.string "Which Pokémon should learn\n"
	.string "{STR_VAR_1}?$"

Text_MoveTutorNotEnoughMoney::
# 755 "data/scripts/move_tutors.pory"
	.string "Oh, you don't have enough money.$"

Text_MoveTutorPaid::
# 759 "data/scripts/move_tutors.pory"
	.string "{PLAYER} handed over ¥{STR_VAR_2}.$"
