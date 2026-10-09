VictoryRoad_2F_EventScript_DoubleEdgeTutor::
# 2 "data/scripts/move_tutors.pory"
	lock
# 3 "data/scripts/move_tutors.pory"
	faceplayer
# 4 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_DOUBLE_EDGE, EventScript_DoubleEdgeTaught
# 5 "data/scripts/move_tutors.pory"
	msgbox Text_DoubleEdgeTeach, MSGBOX_YESNO
# 6 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_DoubleEdgeDeclined
# 7 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 8 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_DoubleEdgeDeclined
# 9 "data/scripts/move_tutors.pory"
	msgbox Text_DoubleEdgeWhichMon
# 10 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_DOUBLE_EDGE
# 11 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 12 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_DoubleEdgeDeclined
# 13 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_DOUBLE_EDGE
# 14 "data/scripts/move_tutors.pory"
	goto EventScript_DoubleEdgeTaught
	end


EventScript_DoubleEdgeDeclined::
# 19 "data/scripts/move_tutors.pory"
	msgbox Text_DoubleEdgeDeclined
# 20 "data/scripts/move_tutors.pory"
	release
	end


EventScript_DoubleEdgeTaught::
# 25 "data/scripts/move_tutors.pory"
	msgbox Text_DoubleEdgeTaught
# 26 "data/scripts/move_tutors.pory"
	release
	end


EventScript_ThunderWaveTutor::
# 31 "data/scripts/move_tutors.pory"
	lock
# 32 "data/scripts/move_tutors.pory"
	faceplayer
# 33 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_THUNDER_WAVE, EventScript_ThunderWaveTaught
# 34 "data/scripts/move_tutors.pory"
	msgbox Text_ThunderWaveTeach, MSGBOX_YESNO
# 35 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_ThunderWaveDeclined
# 36 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 37 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_ThunderWaveDeclined
# 38 "data/scripts/move_tutors.pory"
	msgbox Text_ThunderWaveWhichMon
# 39 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_THUNDER_WAVE
# 40 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 41 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_ThunderWaveDeclined
# 42 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_THUNDER_WAVE
# 43 "data/scripts/move_tutors.pory"
	goto EventScript_ThunderWaveTaught
	end


EventScript_ThunderWaveDeclined::
# 48 "data/scripts/move_tutors.pory"
	msgbox Text_ThunderWaveDeclined
# 49 "data/scripts/move_tutors.pory"
	release
	end


EventScript_ThunderWaveTaught::
# 54 "data/scripts/move_tutors.pory"
	msgbox Text_ThunderWaveTaught
# 55 "data/scripts/move_tutors.pory"
	release
	end


RockTunnel_B1F_EventScript_RockSlideTutor::
# 60 "data/scripts/move_tutors.pory"
	lock
# 61 "data/scripts/move_tutors.pory"
	faceplayer
# 62 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_ROCK_SLIDE, EventScript_RockSlideTaught
# 63 "data/scripts/move_tutors.pory"
	msgbox Text_RockSlideTeach, MSGBOX_YESNO
# 64 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_RockSlideDeclined
# 65 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 66 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_RockSlideDeclined
# 67 "data/scripts/move_tutors.pory"
	msgbox Text_RockSlideWhichMon
# 68 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_ROCK_SLIDE
# 69 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 70 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_RockSlideDeclined
# 71 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_ROCK_SLIDE
# 72 "data/scripts/move_tutors.pory"
	goto EventScript_RockSlideTaught
	end


EventScript_RockSlideDeclined::
# 77 "data/scripts/move_tutors.pory"
	msgbox Text_RockSlideDeclined
# 78 "data/scripts/move_tutors.pory"
	release
	end


EventScript_RockSlideTaught::
# 83 "data/scripts/move_tutors.pory"
	msgbox Text_RockSlideTaught
# 84 "data/scripts/move_tutors.pory"
	release
	end


MtEmber_Exterior_EventScript_ExplosionTutor::
# 89 "data/scripts/move_tutors.pory"
	lock
# 90 "data/scripts/move_tutors.pory"
	faceplayer
# 91 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_EXPLOSION, EventScript_ExplosionTaught
# 92 "data/scripts/move_tutors.pory"
	msgbox Text_ExplosionTeach, MSGBOX_YESNO
# 93 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_ExplosionDeclined
# 94 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 95 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_ExplosionDeclined
# 96 "data/scripts/move_tutors.pory"
	msgbox Text_ExplosionWhichMon
# 97 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_EXPLOSION
# 98 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 99 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_ExplosionDeclined
# 100 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_EXPLOSION
# 101 "data/scripts/move_tutors.pory"
	goto EventScript_ExplosionTaught
	end


EventScript_ExplosionDeclined::
# 106 "data/scripts/move_tutors.pory"
	msgbox Text_ExplosionDeclined
# 107 "data/scripts/move_tutors.pory"
	release
	end


EventScript_ExplosionTaught::
# 112 "data/scripts/move_tutors.pory"
	msgbox Text_ExplosionTaught
# 113 "data/scripts/move_tutors.pory"
	release
	end


Route4_EventScript_MegaPunchTutor::
# 118 "data/scripts/move_tutors.pory"
	lock
# 119 "data/scripts/move_tutors.pory"
	faceplayer
# 120 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_MEGA_PUNCH, EventScript_MegaPunchTaught
# 121 "data/scripts/move_tutors.pory"
	msgbox Text_MegaPunchTeach, MSGBOX_YESNO
# 122 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_MegaPunchDeclined
# 123 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 124 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_MegaPunchDeclined
# 125 "data/scripts/move_tutors.pory"
	msgbox Text_MegaPunchWhichMon
# 126 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_MEGA_PUNCH
# 127 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 128 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaPunchDeclined
# 129 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_MEGA_PUNCH
# 130 "data/scripts/move_tutors.pory"
	goto EventScript_MegaPunchTaught
	end


EventScript_MegaPunchDeclined::
# 135 "data/scripts/move_tutors.pory"
	msgbox Text_MegaPunchDeclined
# 136 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MegaPunchTaught::
# 141 "data/scripts/move_tutors.pory"
	msgbox Text_MegaPunchTaught
# 142 "data/scripts/move_tutors.pory"
	release
	end


Route4_EventScript_MegaKickTutor::
# 147 "data/scripts/move_tutors.pory"
	lock
# 148 "data/scripts/move_tutors.pory"
	faceplayer
# 149 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_MEGA_KICK, EventScript_MegaKickTaught
# 150 "data/scripts/move_tutors.pory"
	msgbox Text_MegaKickTeach, MSGBOX_YESNO
# 151 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_MegaKickDeclined
# 152 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 153 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_MegaKickDeclined
# 154 "data/scripts/move_tutors.pory"
	msgbox Text_MegaKickWhichMon
# 155 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_MEGA_KICK
# 156 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 157 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaKickDeclined
# 158 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_MEGA_KICK
# 159 "data/scripts/move_tutors.pory"
	goto EventScript_MegaKickTaught
	end


EventScript_MegaKickDeclined::
# 164 "data/scripts/move_tutors.pory"
	msgbox Text_MegaKickDeclined
# 165 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MegaKickTaught::
# 170 "data/scripts/move_tutors.pory"
	msgbox Text_MegaKickTaught
# 171 "data/scripts/move_tutors.pory"
	release
	end


EventScript_DreamEaterTutor::
# 176 "data/scripts/move_tutors.pory"
	lock
# 177 "data/scripts/move_tutors.pory"
	faceplayer
# 178 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_DREAM_EATER, EventScript_DreamEaterTaught
# 179 "data/scripts/move_tutors.pory"
	msgbox Text_DreamEaterTeach, MSGBOX_YESNO
# 180 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_DreamEaterDeclined
# 181 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 182 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_DreamEaterDeclined
# 183 "data/scripts/move_tutors.pory"
	msgbox Text_DreamEaterWhichMon
# 184 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_DREAM_EATER
# 185 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 186 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_DreamEaterDeclined
# 187 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_DREAM_EATER
# 188 "data/scripts/move_tutors.pory"
	goto EventScript_DreamEaterTaught
	end


EventScript_DreamEaterDeclined::
# 193 "data/scripts/move_tutors.pory"
	msgbox Text_DreamEaterDeclined
# 194 "data/scripts/move_tutors.pory"
	release
	end


EventScript_DreamEaterTaught::
# 199 "data/scripts/move_tutors.pory"
	msgbox Text_DreamEaterTaught
# 200 "data/scripts/move_tutors.pory"
	release
	end


EventScript_SoftboiledTutor::
# 205 "data/scripts/move_tutors.pory"
	lock
# 206 "data/scripts/move_tutors.pory"
	faceplayer
# 207 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_SOFT_BOILED, EventScript_SoftboiledTaught
# 208 "data/scripts/move_tutors.pory"
	msgbox Text_SoftboiledTeach, MSGBOX_YESNO
# 209 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_SoftboiledDeclined
# 210 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 211 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_SoftboiledDeclined
# 212 "data/scripts/move_tutors.pory"
	msgbox Text_SoftboiledWhichMon
# 213 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_SOFT_BOILED
# 214 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 215 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SoftboiledDeclined
# 216 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_SOFT_BOILED
# 217 "data/scripts/move_tutors.pory"
	goto EventScript_SoftboiledTaught
	end


EventScript_SoftboiledDeclined::
# 222 "data/scripts/move_tutors.pory"
	msgbox Text_SoftboiledDeclined
# 223 "data/scripts/move_tutors.pory"
	release
	end


EventScript_SoftboiledTaught::
# 228 "data/scripts/move_tutors.pory"
	msgbox Text_SoftboiledTaught
# 229 "data/scripts/move_tutors.pory"
	release
	end


FuchsiaCity_EventScript_SubstituteTutor::
# 234 "data/scripts/move_tutors.pory"
	lock
# 235 "data/scripts/move_tutors.pory"
	faceplayer
# 236 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_SUBSTITUTE, EventScript_SubstituteTaught
# 237 "data/scripts/move_tutors.pory"
	msgbox Text_SubstituteTeach, MSGBOX_YESNO
# 238 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_SubstituteDeclined
# 239 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 240 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_SubstituteDeclined
# 241 "data/scripts/move_tutors.pory"
	msgbox Text_SubstituteWhichMon
# 242 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_SUBSTITUTE
# 243 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 244 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SubstituteDeclined
# 245 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_SUBSTITUTE
# 246 "data/scripts/move_tutors.pory"
	goto EventScript_SubstituteTaught
	end


EventScript_SubstituteDeclined::
# 251 "data/scripts/move_tutors.pory"
	msgbox Text_SubstituteDeclined
# 252 "data/scripts/move_tutors.pory"
	release
	end


EventScript_SubstituteTaught::
# 257 "data/scripts/move_tutors.pory"
	msgbox Text_SubstituteTaught
# 258 "data/scripts/move_tutors.pory"
	release
	end


SevenIsland_EventScript_SwordsDanceTutor::
# 263 "data/scripts/move_tutors.pory"
	lock
# 264 "data/scripts/move_tutors.pory"
	faceplayer
# 265 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_SWORDS_DANCE, EventScript_SwordsDanceTaught
# 266 "data/scripts/move_tutors.pory"
	msgbox Text_SwordsDanceTeach, MSGBOX_YESNO
# 267 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_SwordsDanceDeclined
# 268 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 269 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_SwordsDanceDeclined
# 270 "data/scripts/move_tutors.pory"
	msgbox Text_SwordsDanceWhichMon
# 271 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_SWORDS_DANCE
# 272 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 273 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SwordsDanceDeclined
# 274 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_SWORDS_DANCE
# 275 "data/scripts/move_tutors.pory"
	goto EventScript_SwordsDanceTaught
	end


EventScript_SwordsDanceDeclined::
# 280 "data/scripts/move_tutors.pory"
	msgbox Text_SwordsDanceDeclined
# 281 "data/scripts/move_tutors.pory"
	release
	end


EventScript_SwordsDanceTaught::
# 286 "data/scripts/move_tutors.pory"
	msgbox Text_SwordsDanceTaught
# 287 "data/scripts/move_tutors.pory"
	release
	end


PewterCity_Museum_1F_EventScript_SeismicTossTutor::
# 292 "data/scripts/move_tutors.pory"
	lock
# 293 "data/scripts/move_tutors.pory"
	faceplayer
# 294 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_SEISMIC_TOSS, EventScript_SeismicTossTaught
# 295 "data/scripts/move_tutors.pory"
	msgbox Text_SeismicTossTeach, MSGBOX_YESNO
# 296 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_SeismicTossDeclined
# 297 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 298 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_SeismicTossDeclined
# 299 "data/scripts/move_tutors.pory"
	msgbox Text_SeismicTossWhichMon
# 300 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_SEISMIC_TOSS
# 301 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 302 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SeismicTossDeclined
# 303 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_SEISMIC_TOSS
# 304 "data/scripts/move_tutors.pory"
	goto EventScript_SeismicTossTaught
	end


EventScript_SeismicTossDeclined::
# 309 "data/scripts/move_tutors.pory"
	msgbox Text_SeismicTossDeclined
# 310 "data/scripts/move_tutors.pory"
	release
	end


EventScript_SeismicTossTaught::
# 315 "data/scripts/move_tutors.pory"
	msgbox Text_SeismicTossTaught
# 316 "data/scripts/move_tutors.pory"
	release
	end


EventScript_CounterTutor::
# 321 "data/scripts/move_tutors.pory"
	lock
# 322 "data/scripts/move_tutors.pory"
	faceplayer
# 323 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_COUNTER, EventScript_CounterTaught
# 324 "data/scripts/move_tutors.pory"
	msgbox Text_CounterTeach, MSGBOX_YESNO
# 325 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CounterDeclined
# 326 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 327 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CounterDeclined
# 328 "data/scripts/move_tutors.pory"
	msgbox Text_CounterWhichMon
# 329 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_COUNTER
# 330 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 331 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_CounterDeclined
# 332 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_COUNTER
# 333 "data/scripts/move_tutors.pory"
	goto EventScript_CounterTaught
	end


EventScript_CounterDeclined::
# 338 "data/scripts/move_tutors.pory"
	msgbox Text_CounterDeclined
# 339 "data/scripts/move_tutors.pory"
	release
	end


EventScript_CounterTaught::
# 344 "data/scripts/move_tutors.pory"
	msgbox Text_CounterTaught
# 345 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MetronomeTutor::
# 350 "data/scripts/move_tutors.pory"
	lock
# 351 "data/scripts/move_tutors.pory"
	faceplayer
# 352 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_METRONOME, EventScript_MetronomeTaught
# 353 "data/scripts/move_tutors.pory"
	msgbox Text_MetronomeTeach, MSGBOX_YESNO
# 354 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_MetronomeDeclined
# 355 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 356 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_MetronomeDeclined
# 357 "data/scripts/move_tutors.pory"
	msgbox Text_MetronomeWhichMon
# 358 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_METRONOME
# 359 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 360 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_MetronomeDeclined
# 361 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_METRONOME
# 362 "data/scripts/move_tutors.pory"
	goto EventScript_MetronomeTaught
	end


EventScript_MetronomeDeclined::
# 367 "data/scripts/move_tutors.pory"
	msgbox Text_MetronomeDeclined
# 368 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MetronomeTaught::
# 373 "data/scripts/move_tutors.pory"
	msgbox Text_MetronomeTaught
# 374 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MimicTutor::
# 379 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_MIMIC, EventScript_MimicTaught
# 380 "data/scripts/move_tutors.pory"
	msgbox Text_MimicTeach, MSGBOX_YESNO
# 381 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_MimicDeclined
# 382 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 383 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_MimicDeclined
# 384 "data/scripts/move_tutors.pory"
	msgbox Text_MimicWhichMon
# 385 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_MIMIC
# 386 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 387 "data/scripts/move_tutors.pory"
	lock
# 388 "data/scripts/move_tutors.pory"
	faceplayer
# 389 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, EventScript_MimicDeclined
# 390 "data/scripts/move_tutors.pory"
	removeitem ITEM_POKE_DOLL
# 391 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_MIMIC
# 392 "data/scripts/move_tutors.pory"
	goto EventScript_MimicTaught
	end


EventScript_MimicDeclined::
# 397 "data/scripts/move_tutors.pory"
	msgbox Text_MimicDeclined
# 398 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MimicTaught::
# 403 "data/scripts/move_tutors.pory"
	checkplayergender
# 404 "data/scripts/move_tutors.pory"
	call_if_eq VAR_RESULT, MALE, EventScript_MimicTaughtMale
# 405 "data/scripts/move_tutors.pory"
	call_if_eq VAR_RESULT, FEMALE, EventScript_MimicTaughtFemale
# 406 "data/scripts/move_tutors.pory"
	release
	end


EventScript_MimicTaughtMale::
# 411 "data/scripts/move_tutors.pory"
	msgbox Text_MimicTaughtMale
	return


EventScript_MimicTaughtFemale::
# 416 "data/scripts/move_tutors.pory"
	msgbox Text_MimicTaughtFemale
	return


FourIsland_House1_EventScript_BodySlamTutor::
# 421 "data/scripts/move_tutors.pory"
	lock
# 422 "data/scripts/move_tutors.pory"
	faceplayer
# 423 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TUTOR_BODY_SLAM, EventScript_BodySlamTaught
# 424 "data/scripts/move_tutors.pory"
	msgbox Text_BodySlamTeach, MSGBOX_YESNO
# 425 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_BodySlamDeclined
# 426 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 427 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_BodySlamDeclined
# 428 "data/scripts/move_tutors.pory"
	msgbox Text_BodySlamWhichMon
# 429 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVETUTOR_BODY_SLAM
# 430 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 431 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BodySlamDeclined
# 432 "data/scripts/move_tutors.pory"
	setflag FLAG_TUTOR_BODY_SLAM
# 433 "data/scripts/move_tutors.pory"
	goto EventScript_BodySlamTaught
	end


EventScript_BodySlamDeclined::
# 438 "data/scripts/move_tutors.pory"
	msgbox Text_BodySlamDeclined
# 439 "data/scripts/move_tutors.pory"
	release
	end


EventScript_BodySlamTaught::
# 444 "data/scripts/move_tutors.pory"
	msgbox Text_BodySlamTaught
# 445 "data/scripts/move_tutors.pory"
	release
	end


TwoIsland_CapeBrink_House_EventScript_StarterTutor::
# 450 "data/scripts/move_tutors.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 451 "data/scripts/move_tutors.pory"
	special QuestLog_CutRecording
# 452 "data/scripts/move_tutors.pory"
	lock
# 453 "data/scripts/move_tutors.pory"
	faceplayer
# 454 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_LEARNED_ALL_MOVES_AT_CAPE_BRINK, CapeBrinkTutor_EventScript_TaughtAllMoves
# 455 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_TEMP_2, CapeBrinkTutor_EventScript_MoveJustTaught
# 456 "data/scripts/move_tutors.pory"
	bufferleadmonspeciesname STR_VAR_1
# 457 "data/scripts/move_tutors.pory"
	msgbox Text_UltimateMoveThatMon
# 458 "data/scripts/move_tutors.pory"
	specialvar VAR_RESULT, CapeBrinkGetMoveToTeachLeadPokemon
# 459 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_NoLeadStarter
# 460 "data/scripts/move_tutors.pory"
	copyvar VAR_0x8009, VAR_0x8005
# 461 "data/scripts/move_tutors.pory"
	call_if_eq VAR_FACING, DIR_NORTH, CapeBrinkTutor_EventScript_JumpInPlaceDown
# 462 "data/scripts/move_tutors.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, CapeBrinkTutor_EventScript_JumpInPlaceUp
# 463 "data/scripts/move_tutors.pory"
	call_if_eq VAR_FACING, DIR_EAST, CapeBrinkTutor_EventScript_JumpInPlaceLeft
# 464 "data/scripts/move_tutors.pory"
	call_if_eq VAR_FACING, DIR_WEST, CapeBrinkTutor_EventScript_JumpInPlaceRight
# 465 "data/scripts/move_tutors.pory"
	msgbox Text_AllowMeToTeachMonUltimateMove, MSGBOX_YESNO
# 466 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, CapeBrinkTutor_EventScript_DeclineMove
# 467 "data/scripts/move_tutors.pory"
	call EventScript_CanOnlyBeLearnedOnce
# 468 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, CapeBrinkTutor_EventScript_DeclineMove
# 469 "data/scripts/move_tutors.pory"
	msgbox Text_LetMeConferUltimateMove
# 470 "data/scripts/move_tutors.pory"
	closemessage
# 471 "data/scripts/move_tutors.pory"
	fadescreen FADE_TO_BLACK
# 472 "data/scripts/move_tutors.pory"
	goto CapeBrinkTutor_EventScript_ChooseMon
	return


CapeBrinkTutor_EventScript_FadeTaughtMove::
# 477 "data/scripts/move_tutors.pory"
	fadescreen FADE_FROM_BLACK
# 478 "data/scripts/move_tutors.pory"
	goto CapeBrinkTutor_EventScript_TaughtMove
	end


CapeBrinkTutor_EventScript_MoveJustTaught::
# 483 "data/scripts/move_tutors.pory"
	msgbox Text_MakeBestUseOfMove
# 484 "data/scripts/move_tutors.pory"
	release
	end


CapeBrinkTutor_EventScript_TaughtAllMoves::
# 489 "data/scripts/move_tutors.pory"
	msgbox Text_FeelRejuvenated
# 490 "data/scripts/move_tutors.pory"
	release
	end


CapeBrinkTutor_EventScript_TaughtMove::
# 495 "data/scripts/move_tutors.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 496 "data/scripts/move_tutors.pory"
	specialvar VAR_RESULT, HasLearnedAllMovesFromCapeBrinkTutor
# 497 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, TRUE, CapeBrinkTutor_EventScript_LearnedAllMoves
# 498 "data/scripts/move_tutors.pory"
	msgbox Text_TaughtMove
# 499 "data/scripts/move_tutors.pory"
	setflag FLAG_TEMP_2
# 500 "data/scripts/move_tutors.pory"
	release
	end


CapeBrinkTutor_EventScript_LearnedAllMoves::
# 505 "data/scripts/move_tutors.pory"
	msgbox Text_PassedOnEverythingIKnow
# 506 "data/scripts/move_tutors.pory"
	setflag FLAG_LEARNED_ALL_MOVES_AT_CAPE_BRINK
# 507 "data/scripts/move_tutors.pory"
	release
	end


CapeBrinkTutor_EventScript_ChooseMon::
# 512 "data/scripts/move_tutors.pory"
	call EventScript_ChooseMoveTutorMon
# 513 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_DeclineMove
# 514 "data/scripts/move_tutors.pory"
	goto CapeBrinkTutor_EventScript_TaughtMove
	end


CapeBrinkTutor_EventScript_JumpInPlaceDown::
# 519 "data/scripts/move_tutors.pory"
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceDown
# 520 "data/scripts/move_tutors.pory"
	waitmovement 0
	return


CapeBrinkTutor_EventScript_JumpInPlaceUp::
# 525 "data/scripts/move_tutors.pory"
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceUp
# 526 "data/scripts/move_tutors.pory"
	waitmovement 0
	return


CapeBrinkTutor_EventScript_JumpInPlaceLeft::
# 531 "data/scripts/move_tutors.pory"
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceLeft
# 532 "data/scripts/move_tutors.pory"
	waitmovement 0
	return


CapeBrinkTutor_EventScript_JumpInPlaceRight::
# 537 "data/scripts/move_tutors.pory"
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceRight
# 538 "data/scripts/move_tutors.pory"
	waitmovement 0
	return


CapeBrinkTutor_EventScript_DeclineMove::
# 543 "data/scripts/move_tutors.pory"
	msgbox Text_YouRejectIt
# 544 "data/scripts/move_tutors.pory"
	release
	end


CapeBrinkTutor_EventScript_NoLeadStarter::
# 549 "data/scripts/move_tutors.pory"
	msgbox Text_JustMistaken
# 550 "data/scripts/move_tutors.pory"
	release
	end


EventScript_ChooseMoveTutorMon::
# 555 "data/scripts/move_tutors.pory"
	special ChooseMonForMoveTutor
# 556 "data/scripts/move_tutors.pory"
	waitstate
# 557 "data/scripts/move_tutors.pory"
	lock
# 558 "data/scripts/move_tutors.pory"
	faceplayer
	return


EventScript_CanOnlyBeLearnedOnce::
# 563 "data/scripts/move_tutors.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 564 "data/scripts/move_tutors.pory"
	special DisableMsgBoxWalkaway
# 565 "data/scripts/move_tutors.pory"
	signmsg
# 566 "data/scripts/move_tutors.pory"
	msgbox Text_MoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
# 567 "data/scripts/move_tutors.pory"
	normalmsg
# 568 "data/scripts/move_tutors.pory"
	call EventScript_RestorePrevTextColor
	return


# 572 "data/scripts/move_tutors.pory"
Movement_JumpInPlaceDown:
# 573 "data/scripts/move_tutors.pory"
	jump_in_place_down
# 574 "data/scripts/move_tutors.pory"
	step_end

# 577 "data/scripts/move_tutors.pory"
Movement_JumpInPlaceUp:
# 578 "data/scripts/move_tutors.pory"
	jump_in_place_up
# 579 "data/scripts/move_tutors.pory"
	step_end

# 582 "data/scripts/move_tutors.pory"
Movement_JumpInPlaceLeft:
# 583 "data/scripts/move_tutors.pory"
	jump_in_place_left
# 584 "data/scripts/move_tutors.pory"
	step_end

# 587 "data/scripts/move_tutors.pory"
Movement_JumpInPlaceRight:
# 588 "data/scripts/move_tutors.pory"
	jump_in_place_right
# 589 "data/scripts/move_tutors.pory"
	step_end
