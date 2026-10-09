Route3_EventScript_Ben::
# 2 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_YOUNGSTER_BEN, Route3_Text_BenIntro, Route3_Text_BenDefeat
# 3 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 4 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route3_EventScript_BenRematch
# 5 "data/scripts/trainers.pory"
	msgbox Route3_Text_BenPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_BenRematch::
# 10 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_YOUNGSTER_BEN, Route3_Text_BenRematchIntro, Route3_Text_BenDefeat
# 11 "data/scripts/trainers.pory"
	msgbox Route3_Text_BenPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Calvin::
# 16 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_YOUNGSTER_CALVIN, Route3_Text_CalvinIntro, Route3_Text_CalvinDefeat
# 17 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 18 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route3_EventScript_CalvinRematch
# 19 "data/scripts/trainers.pory"
	msgbox Route3_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_CalvinRematch::
# 24 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_YOUNGSTER_CALVIN, Route3_Text_CalvinRematchIntro, Route3_Text_CalvinDefeat
# 25 "data/scripts/trainers.pory"
	msgbox Route3_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Colton::
# 30 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_COLTON, Route3_Text_ColtonIntro, Route3_Text_ColtonDefeat
# 31 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 32 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route3_EventScript_ColtonRematch
# 33 "data/scripts/trainers.pory"
	msgbox Route3_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_ColtonRematch::
# 38 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BUG_CATCHER_COLTON, Route3_Text_ColtonRematchIntro, Route3_Text_ColtonDefeat
# 39 "data/scripts/trainers.pory"
	msgbox Route3_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Greg::
# 44 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_GREG, Route3_Text_GregIntro, Route3_Text_GregDefeat
# 45 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 46 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route3_EventScript_GregRematch
# 47 "data/scripts/trainers.pory"
	msgbox Route3_Text_GregPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_GregRematch::
# 52 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BUG_CATCHER_GREG, Route3_Text_GregRematchIntro, Route3_Text_GregDefeat
# 53 "data/scripts/trainers.pory"
	msgbox Route3_Text_GregPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_James::
# 58 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_JAMES, Route3_Text_JamesIntro, Route3_Text_JamesDefeat
# 59 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 60 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route3_EventScript_JamesRematch
# 61 "data/scripts/trainers.pory"
	msgbox Route3_Text_JamesPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_JamesRematch::
# 66 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BUG_CATCHER_JAMES, Route3_Text_JamesRematchIntro, Route3_Text_JamesDefeat
# 67 "data/scripts/trainers.pory"
	msgbox Route3_Text_JamesPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Janice::
# 72 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_LASS_JANICE, Route3_Text_JaniceIntro, Route3_Text_JaniceDefeat
# 73 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 74 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route3_EventScript_JaniceRematch
# 75 "data/scripts/trainers.pory"
	msgbox Route3_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_JaniceRematch::
# 80 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_LASS_JANICE, Route3_Text_JaniceRematchIntro, Route3_Text_JaniceDefeat
# 81 "data/scripts/trainers.pory"
	msgbox Route3_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Sally::
# 86 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_LASS_SALLY, Route3_Text_SallyIntro, Route3_Text_SallyDefeat
# 87 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 88 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route3_EventScript_SallyRematch
# 89 "data/scripts/trainers.pory"
	msgbox Route3_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_SallyRematch::
# 94 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_LASS_SALLY, Route3_Text_SallyRematchIntro, Route3_Text_SallyDefeat
# 95 "data/scripts/trainers.pory"
	msgbox Route3_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Robin::
# 100 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_LASS_ROBIN, Route3_Text_RobinIntro, Route3_Text_RobinDefeat
# 101 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 102 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route3_EventScript_RobinRematch
# 103 "data/scripts/trainers.pory"
	msgbox Route3_Text_RobinPostBattle, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_RobinRematch::
# 108 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_LASS_ROBIN, Route3_Text_RobinRematchIntro, Route3_Text_RobinDefeat
# 109 "data/scripts/trainers.pory"
	msgbox Route3_Text_RobinPostBattle, MSGBOX_AUTOCLOSE
	end


Route4_EventScript_Crissy::
# 114 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_LASS_CRISSY, Route4_Text_CrissyIntro, Route4_Text_CrissyDefeat
# 115 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 116 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route4_EventScript_CrissyRematch
# 117 "data/scripts/trainers.pory"
	msgbox Route4_Text_CrissyPostBattle, MSGBOX_AUTOCLOSE
	end


Route4_EventScript_CrissyRematch::
# 122 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_LASS_CRISSY, Route4_Text_CrissyRematchIntro, Route4_Text_CrissyDefeat
# 123 "data/scripts/trainers.pory"
	msgbox Route4_Text_CrissyPostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_Timmy::
# 128 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_YOUNGSTER_TIMMY, Route24_Text_TimmyIntro, Route24_Text_TimmyDefeat
# 129 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 130 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route24_EventScript_TimmyRematch
# 131 "data/scripts/trainers.pory"
	msgbox Route24_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_TimmyRematch::
# 136 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_YOUNGSTER_TIMMY, Route24_Text_TimmyRematchIntro, Route24_Text_TimmyDefeat
# 137 "data/scripts/trainers.pory"
	msgbox Route24_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_Cale::
# 142 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_CALE, Route24_Text_CaleIntro, Route24_Text_CaleDefeat
# 143 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 144 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route24_EventScript_CaleRematch
# 145 "data/scripts/trainers.pory"
	msgbox Route24_Text_CalePostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_CaleRematch::
# 150 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BUG_CATCHER_CALE, Route24_Text_CaleRematchIntro, Route24_Text_CaleDefeat
# 151 "data/scripts/trainers.pory"
	msgbox Route24_Text_CalePostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_Reli::
# 156 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_LASS_RELI, Route24_Text_ReliIntro, Route24_Text_ReliDefeat
# 157 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 158 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route24_EventScript_ReliRematch
# 159 "data/scripts/trainers.pory"
	msgbox Route24_Text_ReliPostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_ReliRematch::
# 164 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_LASS_RELI, Route24_Text_ReliRematchIntro, Route24_Text_ReliDefeat
# 165 "data/scripts/trainers.pory"
	msgbox Route24_Text_ReliPostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_Ali::
# 170 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_LASS_ALI, Route24_Text_AliIntro, Route24_Text_AliDefeat
# 171 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 172 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route24_EventScript_AliRematch
# 173 "data/scripts/trainers.pory"
	msgbox Route24_Text_AliPostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_AliRematch::
# 178 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_LASS_ALI, Route24_Text_AliRematchIntro, Route24_Text_AliDefeat
# 179 "data/scripts/trainers.pory"
	msgbox Route24_Text_AliPostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_Shane::
# 184 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CAMPER_SHANE, Route24_Text_ShaneIntro, Route24_Text_ShaneDefeat
# 185 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 186 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route24_EventScript_ShaneRematch
# 187 "data/scripts/trainers.pory"
	msgbox Route24_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_ShaneRematch::
# 192 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CAMPER_SHANE, Route24_Text_ShaneRematchIntro, Route24_Text_ShaneDefeat
# 193 "data/scripts/trainers.pory"
	msgbox Route24_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_Ethan::
# 198 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CAMPER_ETHAN, Route24_Text_EthanIntro, Route24_Text_EthanDefeat
# 199 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 200 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route24_EventScript_EthanRematch
# 201 "data/scripts/trainers.pory"
	msgbox Route24_Text_EthanPostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_EthanRematch::
# 206 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CAMPER_ETHAN, Route24_Text_EthanRematchIntro, Route24_Text_EthanDefeat
# 207 "data/scripts/trainers.pory"
	msgbox Route24_Text_EthanPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_Joey::
# 212 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOEY, Route25_Text_JoeyIntro, Route25_Text_JoeyDefeat
# 213 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 214 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route25_EventScript_JoeyRematch
# 215 "data/scripts/trainers.pory"
	msgbox Route25_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_JoeyRematch::
# 220 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_YOUNGSTER_JOEY, Route25_Text_JoeyRematchIntro, Route25_Text_JoeyDefeat
# 221 "data/scripts/trainers.pory"
	msgbox Route25_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_Dan::
# 226 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_YOUNGSTER_DAN, Route25_Text_DanIntro, Route25_Text_DanDefeat
# 227 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 228 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route25_EventScript_DanRematch
# 229 "data/scripts/trainers.pory"
	msgbox Route25_Text_DanPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_DanRematch::
# 234 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_YOUNGSTER_DAN, Route25_Text_DanRematchIntro, Route25_Text_DanDefeat
# 235 "data/scripts/trainers.pory"
	msgbox Route25_Text_DanPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_Chad::
# 240 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_YOUNGSTER_CHAD, Route25_Text_ChadIntro, Route25_Text_ChadDefeat
# 241 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 242 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route25_EventScript_ChadRematch
# 243 "data/scripts/trainers.pory"
	msgbox Route25_Text_ChadPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_ChadRematch::
# 248 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_YOUNGSTER_CHAD, Route25_Text_ChadRematchIntro, Route25_Text_ChadDefeat
# 249 "data/scripts/trainers.pory"
	msgbox Route25_Text_ChadPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_Kelsey::
# 254 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_KELSEY, Route25_Text_KelseyIntro, Route25_Text_KelseyDefeat
# 255 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 256 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route25_EventScript_KelseyRematch
# 257 "data/scripts/trainers.pory"
	msgbox Route25_Text_KelseyPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_KelseyRematch::
# 262 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_KELSEY, Route25_Text_KelseyRematchIntro, Route25_Text_KelseyDefeat
# 263 "data/scripts/trainers.pory"
	msgbox Route25_Text_KelseyPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_Haley::
# 268 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_LASS_HALEY, Route25_Text_HaleyIntro, Route25_Text_HaleyDefeat
# 269 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 270 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route25_EventScript_HaleyRematch
# 271 "data/scripts/trainers.pory"
	msgbox Route25_Text_HaleyPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_HaleyRematch::
# 276 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_LASS_HALEY, Route25_Text_HaleyRematchIntro, Route25_Text_HaleyDefeat
# 277 "data/scripts/trainers.pory"
	msgbox Route25_Text_HaleyPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_Franklin::
# 282 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_HIKER_FRANKLIN, Route25_Text_FranklinIntro, Route25_Text_FranklinDefeat
# 283 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 284 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route25_EventScript_FranklinRematch
# 285 "data/scripts/trainers.pory"
	msgbox Route25_Text_FranklinPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_FranklinRematch::
# 290 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_HIKER_FRANKLIN, Route25_Text_FranklinRematchIntro, Route25_Text_FranklinDefeat
# 291 "data/scripts/trainers.pory"
	msgbox Route25_Text_FranklinPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_Nob::
# 296 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_HIKER_NOB, Route25_Text_NobIntro, Route25_Text_NobDefeat
# 297 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 298 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route25_EventScript_NobRematch
# 299 "data/scripts/trainers.pory"
	msgbox Route25_Text_NobPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_NobRematch::
# 304 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_HIKER_NOB, Route25_Text_NobRematchIntro, Route25_Text_NobDefeat
# 305 "data/scripts/trainers.pory"
	msgbox Route25_Text_NobPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_Wayne::
# 310 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_HIKER_WAYNE, Route25_Text_WayneIntro, Route25_Text_WayneDefeat
# 311 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 312 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route25_EventScript_WayneRematch
# 313 "data/scripts/trainers.pory"
	msgbox Route25_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_WayneRematch::
# 318 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_HIKER_WAYNE, Route25_Text_WayneRematchIntro, Route25_Text_WayneDefeat
# 319 "data/scripts/trainers.pory"
	msgbox Route25_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_Flint::
# 324 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CAMPER_FLINT, Route25_Text_FlintIntro, Route25_Text_FlintDefeat
# 325 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 326 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route25_EventScript_FlintRematch
# 327 "data/scripts/trainers.pory"
	msgbox Route25_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
	end


Route25_EventScript_FlintRematch::
# 332 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CAMPER_FLINT, Route25_Text_FlintRematchIntro, Route25_Text_FlintDefeat
# 333 "data/scripts/trainers.pory"
	msgbox Route25_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
	end


Route6_EventScript_Keigo::
# 338 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_KEIGO, Route6_Text_KeigoIntro, Route6_Text_KeigoDefeat
# 339 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 340 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route6_EventScript_KeigoRematch
# 341 "data/scripts/trainers.pory"
	msgbox Route6_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
	end


Route6_EventScript_KeigoRematch::
# 346 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BUG_CATCHER_KEIGO, Route6_Text_KeigoRematchIntro, Route6_Text_KeigoDefeat
# 347 "data/scripts/trainers.pory"
	msgbox Route6_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
	end


Route6_EventScript_Elijah::
# 352 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ELIJAH, Route6_Text_ElijahIntro, Route6_Text_ElijahDefeat
# 353 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 354 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route6_EventScript_ElijahRematch
# 355 "data/scripts/trainers.pory"
	msgbox Route6_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
	end


Route6_EventScript_ElijahRematch::
# 360 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BUG_CATCHER_ELIJAH, Route6_Text_ElijahRematchIntro, Route6_Text_ElijahDefeat
# 361 "data/scripts/trainers.pory"
	msgbox Route6_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
	end


Route6_EventScript_Ricky::
# 366 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CAMPER_RICKY, Route6_Text_RickyIntro, Route6_Text_RickyDefeat
# 367 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 368 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route6_EventScript_RickyRematch
# 369 "data/scripts/trainers.pory"
	msgbox Route6_Text_RickyPostBattle, MSGBOX_AUTOCLOSE
	end


Route6_EventScript_RickyRematch::
# 374 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CAMPER_RICKY, Route6_Text_RickyRematchIntro, Route6_Text_RickyDefeat
# 375 "data/scripts/trainers.pory"
	msgbox Route6_Text_RickyPostBattle, MSGBOX_AUTOCLOSE
	end


Route6_EventScript_Jeff::
# 380 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CAMPER_JEFF, Route6_Text_JeffIntro, Route6_Text_JeffDefeat
# 381 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 382 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route6_EventScript_JeffRematch
# 383 "data/scripts/trainers.pory"
	msgbox Route6_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
	end


Route6_EventScript_JeffRematch::
# 388 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CAMPER_JEFF, Route6_Text_JeffRematchIntro, Route6_Text_JeffDefeat
# 389 "data/scripts/trainers.pory"
	msgbox Route6_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
	end


Route6_EventScript_Nancy::
# 394 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_NANCY, Route6_Text_NancyIntro, Route6_Text_NancyDefeat
# 395 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 396 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route6_EventScript_NancyRematch
# 397 "data/scripts/trainers.pory"
	msgbox Route6_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
	end


Route6_EventScript_NancyRematch::
# 402 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_NANCY, Route6_Text_NancyRematchIntro, Route6_Text_NancyDefeat
# 403 "data/scripts/trainers.pory"
	msgbox Route6_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
	end


Route6_EventScript_Isabelle::
# 408 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_ISABELLE, Route6_Text_IsabelleIntro, Route6_Text_IsabelleDefeat
# 409 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 410 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route6_EventScript_IsabelleRematch
# 411 "data/scripts/trainers.pory"
	msgbox Route6_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
	end


Route6_EventScript_IsabelleRematch::
# 416 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_ISABELLE, Route6_Text_IsabelleRematchIntro, Route6_Text_IsabelleDefeat
# 417 "data/scripts/trainers.pory"
	msgbox Route6_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_Eddie::
# 422 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_YOUNGSTER_EDDIE, Route11_Text_EddieIntro, Route11_Text_EddieDefeat
# 423 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 424 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route11_EventScript_EddieRematch
# 425 "data/scripts/trainers.pory"
	msgbox Route11_Text_EddiePostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_EddieRematch::
# 430 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_YOUNGSTER_EDDIE, Route11_Text_EddieRematchIntro, Route11_Text_EddieDefeat
# 431 "data/scripts/trainers.pory"
	msgbox Route11_Text_EddiePostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_Dillon::
# 436 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_YOUNGSTER_DILLON, Route11_Text_DillonIntro, Route11_Text_DillonDefeat
# 437 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 438 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route11_EventScript_DillonRematch
# 439 "data/scripts/trainers.pory"
	msgbox Route11_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_DillonRematch::
# 444 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_YOUNGSTER_DILLON, Route11_Text_DillonRematchIntro, Route11_Text_DillonDefeat
# 445 "data/scripts/trainers.pory"
	msgbox Route11_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_Yasu::
# 450 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_YOUNGSTER_YASU, Route11_Text_YasuIntro, Route11_Text_YasuDefeat
# 451 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 452 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route11_EventScript_YasuRematch
# 453 "data/scripts/trainers.pory"
	msgbox Route11_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_YasuRematch::
# 458 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_YOUNGSTER_YASU, Route11_Text_YasuRematchIntro, Route11_Text_YasuDefeat
# 459 "data/scripts/trainers.pory"
	msgbox Route11_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_Dave::
# 464 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_YOUNGSTER_DAVE, Route11_Text_DaveIntro, Route11_Text_DaveDefeat
# 465 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 466 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route11_EventScript_DaveRematch
# 467 "data/scripts/trainers.pory"
	msgbox Route11_Text_DavePostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_DaveRematch::
# 472 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_YOUNGSTER_DAVE, Route11_Text_DaveRematchIntro, Route11_Text_DaveDefeat
# 473 "data/scripts/trainers.pory"
	msgbox Route11_Text_DavePostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_Braxton::
# 478 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_ENGINEER_BRAXTON, Route11_Text_BraxtonIntro, Route11_Text_BraxtonDefeat
# 479 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 480 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route11_EventScript_BraxtonRematch
# 481 "data/scripts/trainers.pory"
	msgbox Route11_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_BraxtonRematch::
# 486 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_ENGINEER_BRAXTON, Route11_Text_BraxtonRematchIntro, Route11_Text_BraxtonDefeat
# 487 "data/scripts/trainers.pory"
	msgbox Route11_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_Bernie::
# 492 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_ENGINEER_BERNIE, Route11_Text_BernieIntro, Route11_Text_BernieDefeat
# 493 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 494 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route11_EventScript_BernieRematch
# 495 "data/scripts/trainers.pory"
	msgbox Route11_Text_BerniePostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_BernieRematch::
# 500 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_ENGINEER_BERNIE, Route11_Text_BernieRematchIntro, Route11_Text_BernieDefeat
# 501 "data/scripts/trainers.pory"
	msgbox Route11_Text_BerniePostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_Hugo::
# 506 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_GAMER_HUGO, Route11_Text_HugoIntro, Route11_Text_HugoDefeat
# 507 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 508 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route11_EventScript_HugoRematch
# 509 "data/scripts/trainers.pory"
	msgbox Route11_Text_HugoPostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_HugoRematch::
# 514 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_GAMER_HUGO, Route11_Text_HugoRematchIntro, Route11_Text_HugoDefeat
# 515 "data/scripts/trainers.pory"
	msgbox Route11_Text_HugoPostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_Jasper::
# 520 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_GAMER_JASPER, Route11_Text_JasperIntro, Route11_Text_JasperDefeat
# 521 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 522 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route11_EventScript_JasperRematch
# 523 "data/scripts/trainers.pory"
	msgbox Route11_Text_JasperPostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_JasperRematch::
# 528 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_GAMER_JASPER, Route11_Text_JasperRematchIntro, Route11_Text_JasperDefeat
# 529 "data/scripts/trainers.pory"
	msgbox Route11_Text_JasperPostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_Dirk::
# 534 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_GAMER_DIRK, Route11_Text_DirkIntro, Route11_Text_DirkDefeat
# 535 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 536 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route11_EventScript_DirkRematch
# 537 "data/scripts/trainers.pory"
	msgbox Route11_Text_DirkPostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_DirkRematch::
# 542 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_GAMER_DIRK, Route11_Text_DirkRematchIntro, Route11_Text_DirkDefeat
# 543 "data/scripts/trainers.pory"
	msgbox Route11_Text_DirkPostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_Darian::
# 548 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_GAMER_DARIAN, Route11_Text_DarianIntro, Route11_Text_DarianDefeat
# 549 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 550 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route11_EventScript_DarianRematch
# 551 "data/scripts/trainers.pory"
	msgbox Route11_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
	end


Route11_EventScript_DarianRematch::
# 556 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_GAMER_DARIAN, Route11_Text_DarianRematchIntro, Route11_Text_DarianDefeat
# 557 "data/scripts/trainers.pory"
	msgbox Route11_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_Brent::
# 562 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_BRENT, Route9_Text_BrentIntro, Route9_Text_BrentDefeat
# 563 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 564 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route9_EventScript_BrentRematch
# 565 "data/scripts/trainers.pory"
	msgbox Route9_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_BrentRematch::
# 570 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BUG_CATCHER_BRENT, Route9_Text_BrentRematchIntro, Route9_Text_BrentDefeat
# 571 "data/scripts/trainers.pory"
	msgbox Route9_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_Conner::
# 576 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_CONNER, Route9_Text_ConnerIntro, Route9_Text_ConnerDefeat
# 577 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 578 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route9_EventScript_ConnerRematch
# 579 "data/scripts/trainers.pory"
	msgbox Route9_Text_ConnerPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_ConnerRematch::
# 584 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BUG_CATCHER_CONNER, Route9_Text_ConnerRematchIntro, Route9_Text_ConnerDefeat
# 585 "data/scripts/trainers.pory"
	msgbox Route9_Text_ConnerPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_Chris::
# 590 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CAMPER_CHRIS, Route9_Text_ChrisIntro, Route9_Text_ChrisDefeat
# 591 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 592 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route9_EventScript_ChrisRematch
# 593 "data/scripts/trainers.pory"
	msgbox Route9_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_ChrisRematch::
# 598 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CAMPER_CHRIS, Route9_Text_ChrisRematchIntro, Route9_Text_ChrisDefeat
# 599 "data/scripts/trainers.pory"
	msgbox Route9_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_Drew::
# 604 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CAMPER_DREW, Route9_Text_DrewIntro, Route9_Text_DrewDefeat
# 605 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 606 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route9_EventScript_DrewRematch
# 607 "data/scripts/trainers.pory"
	msgbox Route9_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_DrewRematch::
# 612 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CAMPER_DREW, Route9_Text_DrewRematchIntro, Route9_Text_DrewDefeat
# 613 "data/scripts/trainers.pory"
	msgbox Route9_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_Alicia::
# 618 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_ALICIA, Route9_Text_AliciaIntro, Route9_Text_AliciaDefeat
# 619 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 620 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route9_EventScript_AliciaRematch
# 621 "data/scripts/trainers.pory"
	msgbox Route9_Text_AliciaPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_AliciaRematch::
# 626 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_ALICIA, Route9_Text_AliciaRematchIntro, Route9_Text_AliciaDefeat
# 627 "data/scripts/trainers.pory"
	msgbox Route9_Text_AliciaPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_Caitlin::
# 632 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_CAITLIN, Route9_Text_CaitlinIntro, Route9_Text_CaitlinDefeat
# 633 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 634 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route9_EventScript_CaitlinRematch
# 635 "data/scripts/trainers.pory"
	msgbox Route9_Text_CaitlinPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_CaitlinRematch::
# 640 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_CAITLIN, Route9_Text_CaitlinRematchIntro, Route9_Text_CaitlinDefeat
# 641 "data/scripts/trainers.pory"
	msgbox Route9_Text_CaitlinPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_Alan::
# 646 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_HIKER_ALAN, Route9_Text_AlanIntro, Route9_Text_AlanDefeat
# 647 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 648 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route9_EventScript_AlanRematch
# 649 "data/scripts/trainers.pory"
	msgbox Route9_Text_AlanPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_AlanRematch::
# 654 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_HIKER_ALAN, Route9_Text_AlanRematchIntro, Route9_Text_AlanDefeat
# 655 "data/scripts/trainers.pory"
	msgbox Route9_Text_AlanPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_Brice::
# 660 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_HIKER_BRICE, Route9_Text_BriceIntro, Route9_Text_BriceDefeat
# 661 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 662 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route9_EventScript_BriceRematch
# 663 "data/scripts/trainers.pory"
	msgbox Route9_Text_BricePostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_BriceRematch::
# 668 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_HIKER_BRICE, Route9_Text_BriceRematchIntro, Route9_Text_BriceDefeat
# 669 "data/scripts/trainers.pory"
	msgbox Route9_Text_BricePostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_Jeremy::
# 674 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_HIKER_JEREMY, Route9_Text_JeremyIntro, Route9_Text_JeremyDefeat
# 675 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 676 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route9_EventScript_JeremyRematch
# 677 "data/scripts/trainers.pory"
	msgbox Route9_Text_JeremyPostBattle, MSGBOX_AUTOCLOSE
	end


Route9_EventScript_JeremyRematch::
# 682 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_HIKER_JEREMY, Route9_Text_JeremyRematchIntro, Route9_Text_JeremyDefeat
# 683 "data/scripts/trainers.pory"
	msgbox Route9_Text_JeremyPostBattle, MSGBOX_AUTOCLOSE
	end


Route10_EventScript_Heidi::
# 688 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_HEIDI, Route10_Text_HeidiIntro, Route10_Text_HeidiDefeat
# 689 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 690 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route10_EventScript_HeidiRematch
# 691 "data/scripts/trainers.pory"
	msgbox Route10_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
	end


Route10_EventScript_HeidiRematch::
# 696 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_HEIDI, Route10_Text_HeidiRematchIntro, Route10_Text_HeidiDefeat
# 697 "data/scripts/trainers.pory"
	msgbox Route10_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
	end


Route10_EventScript_Carol::
# 702 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_CAROL, Route10_Text_CarolIntro, Route10_Text_CarolDefeat
# 703 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 704 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route10_EventScript_CarolRematch
# 705 "data/scripts/trainers.pory"
	msgbox Route10_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
	end


Route10_EventScript_CarolRematch::
# 710 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_CAROL, Route10_Text_CarolRematchIntro, Route10_Text_CarolDefeat
# 711 "data/scripts/trainers.pory"
	msgbox Route10_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
	end


Route10_EventScript_Mark::
# 716 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_POKEMANIAC_MARK, Route10_Text_MarkIntro, Route10_Text_MarkDefeat
# 717 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 718 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route10_EventScript_MarkRematch
# 719 "data/scripts/trainers.pory"
	msgbox Route10_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
	end


Route10_EventScript_MarkRematch::
# 724 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_POKEMANIAC_MARK, Route10_Text_MarkRematchIntro, Route10_Text_MarkDefeat
# 725 "data/scripts/trainers.pory"
	msgbox Route10_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
	end


Route10_EventScript_Herman::
# 730 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_POKEMANIAC_HERMAN, Route10_Text_HermanIntro, Route10_Text_HermanDefeat
# 731 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 732 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route10_EventScript_HermanRematch
# 733 "data/scripts/trainers.pory"
	msgbox Route10_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
	end


Route10_EventScript_HermanRematch::
# 738 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_POKEMANIAC_HERMAN, Route10_Text_HermanRematchIntro, Route10_Text_HermanDefeat
# 739 "data/scripts/trainers.pory"
	msgbox Route10_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
	end


Route10_EventScript_Clark::
# 744 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_HIKER_CLARK, Route10_Text_ClarkIntro, Route10_Text_ClarkDefeat
# 745 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 746 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route10_EventScript_ClarkRematch
# 747 "data/scripts/trainers.pory"
	msgbox Route10_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
	end


Route10_EventScript_ClarkRematch::
# 752 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_HIKER_CLARK, Route10_Text_ClarkRematchIntro, Route10_Text_ClarkDefeat
# 753 "data/scripts/trainers.pory"
	msgbox Route10_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
	end


Route10_EventScript_Trent::
# 758 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_HIKER_TRENT, Route10_Text_TrentIntro, Route10_Text_TrentDefeat
# 759 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 760 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route10_EventScript_TrentRematch
# 761 "data/scripts/trainers.pory"
	msgbox Route10_Text_TrentPostBattle, MSGBOX_AUTOCLOSE
	end


Route10_EventScript_TrentRematch::
# 766 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_HIKER_TRENT, Route10_Text_TrentRematchIntro, Route10_Text_TrentDefeat
# 767 "data/scripts/trainers.pory"
	msgbox Route10_Text_TrentPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_Paige::
# 772 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_LASS_PAIGE, Route8_Text_PaigeIntro, Route8_Text_PaigeDefeat
# 773 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 774 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route8_EventScript_PaigeRematch
# 775 "data/scripts/trainers.pory"
	msgbox Route8_Text_PaigePostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_PaigeRematch::
# 780 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_LASS_PAIGE, Route8_Text_PaigeRematchIntro, Route8_Text_PaigeDefeat
# 781 "data/scripts/trainers.pory"
	msgbox Route8_Text_PaigePostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_Andrea::
# 786 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_LASS_ANDREA, Route8_Text_AndreaIntro, Route8_Text_AndreaDefeat
# 787 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 788 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route8_EventScript_AndreaRematch
# 789 "data/scripts/trainers.pory"
	msgbox Route8_Text_AndreaPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_AndreaRematch::
# 794 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_LASS_ANDREA, Route8_Text_AndreaRematchIntro, Route8_Text_AndreaDefeat
# 795 "data/scripts/trainers.pory"
	msgbox Route8_Text_AndreaPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_Megan::
# 800 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_LASS_MEGAN, Route8_Text_MeganIntro, Route8_Text_MeganDefeat
# 801 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 802 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route8_EventScript_MeganRematch
# 803 "data/scripts/trainers.pory"
	msgbox Route8_Text_MeganPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_MeganRematch::
# 808 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_LASS_MEGAN, Route8_Text_MeganRematchIntro, Route8_Text_MeganDefeat
# 809 "data/scripts/trainers.pory"
	msgbox Route8_Text_MeganPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_Julia::
# 814 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_LASS_JULIA, Route8_Text_JuliaIntro, Route8_Text_JuliaDefeat
# 815 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 816 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route8_EventScript_JuliaRematch
# 817 "data/scripts/trainers.pory"
	msgbox Route8_Text_JuliaPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_JuliaRematch::
# 822 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_LASS_JULIA, Route8_Text_JuliaRematchIntro, Route8_Text_JuliaDefeat
# 823 "data/scripts/trainers.pory"
	msgbox Route8_Text_JuliaPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_Aidan::
# 828 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SUPER_NERD_AIDAN, Route8_Text_AidanIntro, Route8_Text_AidanDefeat
# 829 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 830 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route8_EventScript_AidanRematch
# 831 "data/scripts/trainers.pory"
	msgbox Route8_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_AidanRematch::
# 836 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SUPER_NERD_AIDAN, Route8_Text_AidanRematchIntro, Route8_Text_AidanDefeat
# 837 "data/scripts/trainers.pory"
	msgbox Route8_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_Glenn::
# 842 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SUPER_NERD_GLENN, Route8_Text_GlennIntro, Route8_Text_GlennDefeat
# 843 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 844 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route8_EventScript_GlennRematch
# 845 "data/scripts/trainers.pory"
	msgbox Route8_Text_GlennPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_GlennRematch::
# 850 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SUPER_NERD_GLENN, Route8_Text_GlennRematchIntro, Route8_Text_GlennDefeat
# 851 "data/scripts/trainers.pory"
	msgbox Route8_Text_GlennPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_Leslie::
# 856 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SUPER_NERD_LESLIE, Route8_Text_LeslieIntro, Route8_Text_LeslieDefeat
# 857 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 858 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route8_EventScript_LeslieRematch
# 859 "data/scripts/trainers.pory"
	msgbox Route8_Text_LesliePostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_LeslieRematch::
# 864 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SUPER_NERD_LESLIE, Route8_Text_LeslieRematchIntro, Route8_Text_LeslieDefeat
# 865 "data/scripts/trainers.pory"
	msgbox Route8_Text_LesliePostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_Stan::
# 870 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_GAMER_STAN, Route8_Text_StanIntro, Route8_Text_StanDefeat
# 871 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 872 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route8_EventScript_StanRematch
# 873 "data/scripts/trainers.pory"
	msgbox Route8_Text_StanPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_StanRematch::
# 878 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_GAMER_STAN, Route8_Text_StanRematchIntro, Route8_Text_StanDefeat
# 879 "data/scripts/trainers.pory"
	msgbox Route8_Text_StanPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_Rich::
# 884 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_GAMER_RICH, Route8_Text_RichIntro, Route8_Text_RichDefeat
# 885 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 886 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route8_EventScript_RichRematch
# 887 "data/scripts/trainers.pory"
	msgbox Route8_Text_RichPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_RichRematch::
# 892 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_GAMER_RICH, Route8_Text_RichRematchIntro, Route8_Text_RichDefeat
# 893 "data/scripts/trainers.pory"
	msgbox Route8_Text_RichPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_Eli::
# 898 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_TWINS_ELI_ANNE, Route8_Text_EliIntro, Route8_Text_EliDefeat, Route8_Text_EliNotEnoughMons
# 899 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 900 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route8_EventScript_EliRematch
# 901 "data/scripts/trainers.pory"
	msgbox Route8_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_EliRematch::
# 906 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_TWINS_ELI_ANNE, Route8_Text_EliRematchIntro, Route8_Text_EliDefeat, Route8_Text_EliNotEnoughMons
# 907 "data/scripts/trainers.pory"
	msgbox Route8_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_Anne::
# 912 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_TWINS_ELI_ANNE, Route8_Text_AnneIntro, Route8_Text_AnneDefeat, Route8_Text_AnneNotEnoughMons
# 913 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 914 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route8_EventScript_AnneRematch
# 915 "data/scripts/trainers.pory"
	msgbox Route8_Text_AnnePostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_AnneRematch::
# 920 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_TWINS_ELI_ANNE, Route8_Text_AnneRematchIntro, Route8_Text_AnneDefeat, Route8_Text_AnneNotEnoughMons
# 921 "data/scripts/trainers.pory"
	msgbox Route8_Text_AnnePostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_Ricardo::
# 926 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_RICARDO, Route8_Text_RicardoIntro, Route8_Text_RicardoDefeat
# 927 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 928 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route8_EventScript_RicardoRematch
# 929 "data/scripts/trainers.pory"
	msgbox Route8_Text_RicardoPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_RicardoRematch::
# 934 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_RICARDO, Route8_Text_RicardoRematchIntro, Route8_Text_RicardoDefeat
# 935 "data/scripts/trainers.pory"
	msgbox Route8_Text_RicardoPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_Jaren::
# 940 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_JAREN, Route8_Text_JarenIntro, Route8_Text_JarenDefeat
# 941 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 942 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route8_EventScript_JarenRematch
# 943 "data/scripts/trainers.pory"
	msgbox Route8_Text_JarenPostBattle, MSGBOX_AUTOCLOSE
	end


Route8_EventScript_JarenRematch::
# 948 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_JAREN, Route8_Text_JarenRematchIntro, Route8_Text_JarenDefeat
# 949 "data/scripts/trainers.pory"
	msgbox Route8_Text_JarenPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_Ned::
# 954 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_FISHERMAN_NED, Route12_Text_NedIntro, Route12_Text_NedDefeat
# 955 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 956 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route12_EventScript_NedRematch
# 957 "data/scripts/trainers.pory"
	msgbox Route12_Text_NedPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_NedRematch::
# 962 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_FISHERMAN_NED, Route12_Text_NedRematchIntro, Route12_Text_NedDefeat
# 963 "data/scripts/trainers.pory"
	msgbox Route12_Text_NedPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_Chip::
# 968 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_FISHERMAN_CHIP, Route12_Text_ChipIntro, Route12_Text_ChipDefeat
# 969 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 970 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route12_EventScript_ChipRematch
# 971 "data/scripts/trainers.pory"
	msgbox Route12_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_ChipRematch::
# 976 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_FISHERMAN_CHIP, Route12_Text_ChipRematchIntro, Route12_Text_ChipDefeat
# 977 "data/scripts/trainers.pory"
	msgbox Route12_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_Hank::
# 982 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_FISHERMAN_HANK, Route12_Text_HankIntro, Route12_Text_HankDefeat
# 983 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 984 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route12_EventScript_HankRematch
# 985 "data/scripts/trainers.pory"
	msgbox Route12_Text_HankPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_HankRematch::
# 990 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_FISHERMAN_HANK, Route12_Text_HankRematchIntro, Route12_Text_HankDefeat
# 991 "data/scripts/trainers.pory"
	msgbox Route12_Text_HankPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_Elliot::
# 996 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_FISHERMAN_ELLIOT, Route12_Text_ElliotIntro, Route12_Text_ElliotDefeat
# 997 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 998 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route12_EventScript_ElliotRematch
# 999 "data/scripts/trainers.pory"
	msgbox Route12_Text_ElliotPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_ElliotRematch::
# 1004 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_FISHERMAN_ELLIOT, Route12_Text_ElliotRematchIntro, Route12_Text_ElliotDefeat
# 1005 "data/scripts/trainers.pory"
	msgbox Route12_Text_ElliotPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_Andrew::
# 1010 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_FISHERMAN_ANDREW, Route12_Text_AndrewIntro, Route12_Text_AndrewDefeat
# 1011 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1012 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route12_EventScript_AndrewRematch
# 1013 "data/scripts/trainers.pory"
	msgbox Route12_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_AndrewRematch::
# 1018 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_FISHERMAN_ANDREW, Route12_Text_AndrewRematchIntro, Route12_Text_AndrewDefeat
# 1019 "data/scripts/trainers.pory"
	msgbox Route12_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_Luca::
# 1024 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_ROCKER_LUCA, Route12_Text_LucaIntro, Route12_Text_LucaDefeat
# 1025 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1026 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route12_EventScript_LucaRematch
# 1027 "data/scripts/trainers.pory"
	msgbox Route12_Text_LucaPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_LucaRematch::
# 1032 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_ROCKER_LUCA, Route12_Text_LucaRematchIntro, Route12_Text_LucaDefeat
# 1033 "data/scripts/trainers.pory"
	msgbox Route12_Text_LucaPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_Justin::
# 1038 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CAMPER_JUSTIN, Route12_Text_JustinIntro, Route12_Text_JustinDefeat
# 1039 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1040 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route12_EventScript_JustinRematch
# 1041 "data/scripts/trainers.pory"
	msgbox Route12_Text_JustinPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_JustinRematch::
# 1046 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CAMPER_JUSTIN, Route12_Text_JustinRematchIntro, Route12_Text_JustinDefeat
# 1047 "data/scripts/trainers.pory"
	msgbox Route12_Text_JustinPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_Jes::
# 1052 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_YOUNG_COUPLE_GIA_JES, Route12_Text_JesIntro, Route12_Text_JesDefeat, Route12_Text_JesNotEnoughMons
# 1053 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1054 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route12_EventScript_JesRematch
# 1055 "data/scripts/trainers.pory"
	msgbox Route12_Text_JesPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_JesRematch::
# 1060 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_YOUNG_COUPLE_GIA_JES, Route12_Text_JesRematchIntro, Route12_Text_JesDefeat, Route12_Text_JesNotEnoughMons
# 1061 "data/scripts/trainers.pory"
	msgbox Route12_Text_JesPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_Gia::
# 1066 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_YOUNG_COUPLE_GIA_JES, Route12_Text_GiaIntro, Route12_Text_GiaDefeat, Route12_Text_GiaNotEnoughMons
# 1067 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1068 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route12_EventScript_GiaRematch
# 1069 "data/scripts/trainers.pory"
	msgbox Route12_Text_GiaPostBattle, MSGBOX_AUTOCLOSE
	end


Route12_EventScript_GiaRematch::
# 1074 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_YOUNG_COUPLE_GIA_JES, Route12_Text_GiaRematchIntro, Route12_Text_GiaDefeat, Route12_Text_GiaNotEnoughMons
# 1075 "data/scripts/trainers.pory"
	msgbox Route12_Text_GiaPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_Jared::
# 1080 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_JARED, Route13_Text_JaredIntro, Route13_Text_JaredDefeat
# 1081 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1082 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route13_EventScript_JaredRematch
# 1083 "data/scripts/trainers.pory"
	msgbox Route13_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_JaredRematch::
# 1088 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_JARED, Route13_Text_JaredRematchIntro, Route13_Text_JaredDefeat
# 1089 "data/scripts/trainers.pory"
	msgbox Route13_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_Lola::
# 1094 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BEAUTY_LOLA, Route13_Text_LolaIntro, Route13_Text_LolaDefeat
# 1095 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1096 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route13_EventScript_LolaRematch
# 1097 "data/scripts/trainers.pory"
	msgbox Route13_Text_LolaPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_LolaRematch::
# 1102 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BEAUTY_LOLA, Route13_Text_LolaRematchIntro, Route13_Text_LolaDefeat
# 1103 "data/scripts/trainers.pory"
	msgbox Route13_Text_LolaPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_Sheila::
# 1108 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BEAUTY_SHEILA, Route13_Text_SheilaIntro, Route13_Text_SheilaDefeat
# 1109 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1110 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route13_EventScript_SheilaRematch
# 1111 "data/scripts/trainers.pory"
	msgbox Route13_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_SheilaRematch::
# 1116 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BEAUTY_SHEILA, Route13_Text_SheilaRematchIntro, Route13_Text_SheilaDefeat
# 1117 "data/scripts/trainers.pory"
	msgbox Route13_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_Sebastian::
# 1122 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_SEBASTIAN, Route13_Text_SebastianIntro, Route13_Text_SebastianDefeat
# 1123 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1124 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route13_EventScript_SebastianRematch
# 1125 "data/scripts/trainers.pory"
	msgbox Route13_Text_SebastianPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_SebastianRematch::
# 1130 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_SEBASTIAN, Route13_Text_SebastianRematchIntro, Route13_Text_SebastianDefeat
# 1131 "data/scripts/trainers.pory"
	msgbox Route13_Text_SebastianPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_Perry::
# 1136 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_PERRY, Route13_Text_PerryIntro, Route13_Text_PerryDefeat
# 1137 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1138 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route13_EventScript_PerryRematch
# 1139 "data/scripts/trainers.pory"
	msgbox Route13_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_PerryRematch::
# 1144 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_PERRY, Route13_Text_PerryRematchIntro, Route13_Text_PerryDefeat
# 1145 "data/scripts/trainers.pory"
	msgbox Route13_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_Robert::
# 1150 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_ROBERT, Route13_Text_RobertIntro, Route13_Text_RobertDefeat
# 1151 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1152 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route13_EventScript_RobertRematch
# 1153 "data/scripts/trainers.pory"
	msgbox Route13_Text_RobertPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_RobertRematch::
# 1158 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_ROBERT, Route13_Text_RobertRematchIntro, Route13_Text_RobertDefeat
# 1159 "data/scripts/trainers.pory"
	msgbox Route13_Text_RobertPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_Alma::
# 1164 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_ALMA, Route13_Text_AlmaIntro, Route13_Text_AlmaDefeat
# 1165 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1166 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route13_EventScript_AlmaRematch
# 1167 "data/scripts/trainers.pory"
	msgbox Route13_Text_AlmaPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_AlmaRematch::
# 1172 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_ALMA, Route13_Text_AlmaRematchIntro, Route13_Text_AlmaDefeat
# 1173 "data/scripts/trainers.pory"
	msgbox Route13_Text_AlmaPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_Susie::
# 1178 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_SUSIE, Route13_Text_SusieIntro, Route13_Text_SusieDefeat
# 1179 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1180 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route13_EventScript_SusieRematch
# 1181 "data/scripts/trainers.pory"
	msgbox Route13_Text_SusiePostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_SusieRematch::
# 1186 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_SUSIE, Route13_Text_SusieRematchIntro, Route13_Text_SusieDefeat
# 1187 "data/scripts/trainers.pory"
	msgbox Route13_Text_SusiePostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_Valerie::
# 1192 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_VALERIE, Route13_Text_ValerieIntro, Route13_Text_ValerieDefeat
# 1193 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1194 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route13_EventScript_ValerieRematch
# 1195 "data/scripts/trainers.pory"
	msgbox Route13_Text_ValeriePostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_ValerieRematch::
# 1200 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_VALERIE, Route13_Text_ValerieRematchIntro, Route13_Text_ValerieDefeat
# 1201 "data/scripts/trainers.pory"
	msgbox Route13_Text_ValeriePostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_Gwen::
# 1206 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_GWEN, Route13_Text_GwenIntro, Route13_Text_GwenDefeat
# 1207 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1208 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route13_EventScript_GwenRematch
# 1209 "data/scripts/trainers.pory"
	msgbox Route13_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
	end


Route13_EventScript_GwenRematch::
# 1214 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_GWEN, Route13_Text_GwenRematchIntro, Route13_Text_GwenDefeat
# 1215 "data/scripts/trainers.pory"
	msgbox Route13_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_Malik::
# 1220 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_MALIK, Route14_Text_MalikIntro, Route14_Text_MalikDefeat
# 1221 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1222 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_MalikRematch
# 1223 "data/scripts/trainers.pory"
	msgbox Route14_Text_MalikPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_MalikRematch::
# 1228 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_MALIK, Route14_Text_MalikRematchIntro, Route14_Text_MalikDefeat
# 1229 "data/scripts/trainers.pory"
	msgbox Route14_Text_MalikPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_Lukas::
# 1234 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_LUKAS, Route14_Text_LukasIntro, Route14_Text_LukasDefeat
# 1235 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1236 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_LukasRematch
# 1237 "data/scripts/trainers.pory"
	msgbox Route14_Text_LukasPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_LukasRematch::
# 1242 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_LUKAS, Route14_Text_LukasRematchIntro, Route14_Text_LukasDefeat
# 1243 "data/scripts/trainers.pory"
	msgbox Route14_Text_LukasPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_Isaac::
# 1248 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_ISAAC, Route14_Text_IsaacIntro, Route14_Text_IsaacDefeat
# 1249 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1250 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_IsaacRematch
# 1251 "data/scripts/trainers.pory"
	msgbox Route14_Text_IsaacPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_IsaacRematch::
# 1256 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_ISAAC, Route14_Text_IsaacRematchIntro, Route14_Text_IsaacDefeat
# 1257 "data/scripts/trainers.pory"
	msgbox Route14_Text_IsaacPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_Gerald::
# 1262 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_GERALD, Route14_Text_GeraldIntro, Route14_Text_GeraldDefeat
# 1263 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1264 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_GeraldRematch
# 1265 "data/scripts/trainers.pory"
	msgbox Route14_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_GeraldRematch::
# 1270 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_GERALD, Route14_Text_GeraldRematchIntro, Route14_Text_GeraldDefeat
# 1271 "data/scripts/trainers.pory"
	msgbox Route14_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_Donald::
# 1276 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_DONALD, Route14_Text_DonaldIntro, Route14_Text_DonaldDefeat
# 1277 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1278 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_DonaldRematch
# 1279 "data/scripts/trainers.pory"
	msgbox Route14_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_DonaldRematch::
# 1284 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_DONALD, Route14_Text_DonaldRematchIntro, Route14_Text_DonaldDefeat
# 1285 "data/scripts/trainers.pory"
	msgbox Route14_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_Benny::
# 1290 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_BENNY, Route14_Text_BennyIntro, Route14_Text_BennyDefeat
# 1291 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1292 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_BennyRematch
# 1293 "data/scripts/trainers.pory"
	msgbox Route14_Text_BennyPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_BennyRematch::
# 1298 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_BENNY, Route14_Text_BennyRematchIntro, Route14_Text_BennyDefeat
# 1299 "data/scripts/trainers.pory"
	msgbox Route14_Text_BennyPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_Carter::
# 1304 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_CARTER, Route14_Text_CarterIntro, Route14_Text_CarterDefeat
# 1305 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1306 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_CarterRematch
# 1307 "data/scripts/trainers.pory"
	msgbox Route14_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_CarterRematch::
# 1312 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_CARTER, Route14_Text_CarterRematchIntro, Route14_Text_CarterDefeat
# 1313 "data/scripts/trainers.pory"
	msgbox Route14_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_Mitch::
# 1318 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_MITCH, Route14_Text_MitchIntro, Route14_Text_MitchDefeat
# 1319 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1320 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_MitchRematch
# 1321 "data/scripts/trainers.pory"
	msgbox Route14_Text_MitchPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_MitchRematch::
# 1326 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_MITCH, Route14_Text_MitchRematchIntro, Route14_Text_MitchDefeat
# 1327 "data/scripts/trainers.pory"
	msgbox Route14_Text_MitchPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_Beck::
# 1332 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_BECK, Route14_Text_BeckIntro, Route14_Text_BeckDefeat
# 1333 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1334 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_BeckRematch
# 1335 "data/scripts/trainers.pory"
	msgbox Route14_Text_BeckPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_BeckRematch::
# 1340 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_BECK, Route14_Text_BeckRematchIntro, Route14_Text_BeckDefeat
# 1341 "data/scripts/trainers.pory"
	msgbox Route14_Text_BeckPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_Marlon::
# 1346 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_MARLON, Route14_Text_MarlonIntro, Route14_Text_MarlonDefeat
# 1347 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1348 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_MarlonRematch
# 1349 "data/scripts/trainers.pory"
	msgbox Route14_Text_MarlonPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_MarlonRematch::
# 1354 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_MARLON, Route14_Text_MarlonRematchIntro, Route14_Text_MarlonDefeat
# 1355 "data/scripts/trainers.pory"
	msgbox Route14_Text_MarlonPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_Kiri::
# 1360 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_TWINS_KIRI_JAN, Route14_Text_KiriIntro, Route14_Text_KiriDefeat, Route14_Text_KiriNotEnoughMons
# 1361 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1362 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_KiriRematch
# 1363 "data/scripts/trainers.pory"
	msgbox Route14_Text_KiriPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_KiriRematch::
# 1368 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_TWINS_KIRI_JAN, Route14_Text_KiriRematchIntro, Route14_Text_KiriDefeat, Route14_Text_KiriNotEnoughMons
# 1369 "data/scripts/trainers.pory"
	msgbox Route14_Text_KiriPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_Jan::
# 1374 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_TWINS_KIRI_JAN, Route14_Text_JanIntro, Route14_Text_JanDefeat, Route14_Text_JanNotEnoughMons
# 1375 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1376 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_JanRematch
# 1377 "data/scripts/trainers.pory"
	msgbox Route14_Text_JanPostBattle, MSGBOX_AUTOCLOSE
	end


Route14_EventScript_JanRematch::
# 1382 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_TWINS_KIRI_JAN, Route14_Text_JanRematchIntro, Route14_Text_JanDefeat, Route14_Text_JanNotEnoughMons
# 1383 "data/scripts/trainers.pory"
	msgbox Route14_Text_JanPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_Ernest::
# 1388 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_ERNEST, Route15_Text_ErnestIntro, Route15_Text_ErnestDefeat
# 1389 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1390 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_ErnestRematch
# 1391 "data/scripts/trainers.pory"
	msgbox Route15_Text_ErnestPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_ErnestRematch::
# 1396 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_ERNEST, Route15_Text_ErnestRematchIntro, Route15_Text_ErnestDefeat
# 1397 "data/scripts/trainers.pory"
	msgbox Route15_Text_ErnestPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_Alex::
# 1402 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_ALEX, Route15_Text_AlexIntro, Route15_Text_AlexDefeat
# 1403 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1404 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_AlexRematch
# 1405 "data/scripts/trainers.pory"
	msgbox Route15_Text_AlexPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_AlexRematch::
# 1410 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_ALEX, Route15_Text_AlexRematchIntro, Route15_Text_AlexDefeat
# 1411 "data/scripts/trainers.pory"
	msgbox Route15_Text_AlexPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_Grace::
# 1416 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BEAUTY_GRACE, Route15_Text_GraceIntro, Route15_Text_GraceDefeat
# 1417 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1418 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_GraceRematch
# 1419 "data/scripts/trainers.pory"
	msgbox Route15_Text_GracePostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_GraceRematch::
# 1424 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BEAUTY_GRACE, Route15_Text_GraceRematchIntro, Route15_Text_GraceDefeat
# 1425 "data/scripts/trainers.pory"
	msgbox Route15_Text_GracePostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_Olivia::
# 1430 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BEAUTY_OLIVIA, Route15_Text_OliviaIntro, Route15_Text_OliviaDefeat
# 1431 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1432 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_OliviaRematch
# 1433 "data/scripts/trainers.pory"
	msgbox Route15_Text_OliviaPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_OliviaRematch::
# 1438 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BEAUTY_OLIVIA, Route15_Text_OliviaRematchIntro, Route15_Text_OliviaDefeat
# 1439 "data/scripts/trainers.pory"
	msgbox Route15_Text_OliviaPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_Edwin::
# 1444 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_EDWIN, Route15_Text_EdwinIntro, Route15_Text_EdwinDefeat
# 1445 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1446 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_EdwinRematch
# 1447 "data/scripts/trainers.pory"
	msgbox Route15_Text_EdwinPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_EdwinRematch::
# 1452 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_EDWIN, Route15_Text_EdwinRematchIntro, Route15_Text_EdwinDefeat
# 1453 "data/scripts/trainers.pory"
	msgbox Route15_Text_EdwinPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_Chester::
# 1458 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_CHESTER, Route15_Text_ChesterIntro, Route15_Text_ChesterDefeat
# 1459 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1460 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_ChesterRematch
# 1461 "data/scripts/trainers.pory"
	msgbox Route15_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_ChesterRematch::
# 1466 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_CHESTER, Route15_Text_ChesterRematchIntro, Route15_Text_ChesterDefeat
# 1467 "data/scripts/trainers.pory"
	msgbox Route15_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_Yazmin::
# 1472 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_YAZMIN, Route15_Text_YazminIntro, Route15_Text_YazminDefeat
# 1473 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1474 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_YazminRematch
# 1475 "data/scripts/trainers.pory"
	msgbox Route15_Text_YazminPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_YazminRematch::
# 1480 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_YAZMIN, Route15_Text_YazminRematchIntro, Route15_Text_YazminDefeat
# 1481 "data/scripts/trainers.pory"
	msgbox Route15_Text_YazminPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_Kindra::
# 1486 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_KINDRA, Route15_Text_KindraIntro, Route15_Text_KindraDefeat
# 1487 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1488 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_KindraRematch
# 1489 "data/scripts/trainers.pory"
	msgbox Route15_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_KindraRematch::
# 1494 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_KINDRA, Route15_Text_KindraRematchIntro, Route15_Text_KindraDefeat
# 1495 "data/scripts/trainers.pory"
	msgbox Route15_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_Becky::
# 1500 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_BECKY, Route15_Text_BeckyIntro, Route15_Text_BeckyDefeat
# 1501 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1502 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_BeckyRematch
# 1503 "data/scripts/trainers.pory"
	msgbox Route15_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_BeckyRematch::
# 1508 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_BECKY, Route15_Text_BeckyRematchIntro, Route15_Text_BeckyDefeat
# 1509 "data/scripts/trainers.pory"
	msgbox Route15_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_Celia::
# 1514 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_CELIA, Route15_Text_CeliaIntro, Route15_Text_CeliaDefeat
# 1515 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1516 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_CeliaRematch
# 1517 "data/scripts/trainers.pory"
	msgbox Route15_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_CeliaRematch::
# 1522 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_CELIA, Route15_Text_CeliaRematchIntro, Route15_Text_CeliaDefeat
# 1523 "data/scripts/trainers.pory"
	msgbox Route15_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_Mya::
# 1528 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_CRUSH_KIN_RON_MYA, Route15_Text_MyaIntro, Route15_Text_MyaDefeat, Route15_Text_MyaNotEnoughMons
# 1529 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1530 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_MyaRematch
# 1531 "data/scripts/trainers.pory"
	msgbox Route15_Text_MyaPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_MyaRematch::
# 1536 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_CRUSH_KIN_RON_MYA, Route15_Text_MyaRematchIntro, Route15_Text_MyaDefeat, Route15_Text_MyaNotEnoughMons
# 1537 "data/scripts/trainers.pory"
	msgbox Route15_Text_MyaPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_Ron::
# 1542 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_CRUSH_KIN_RON_MYA, Route15_Text_RonIntro, Route15_Text_RonDefeat, Route15_Text_RonNotEnoughMons
# 1543 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1544 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_RonRematch
# 1545 "data/scripts/trainers.pory"
	msgbox Route15_Text_RonPostBattle, MSGBOX_AUTOCLOSE
	end


Route15_EventScript_RonRematch::
# 1550 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_CRUSH_KIN_RON_MYA, Route15_Text_RonRematchIntro, Route15_Text_RonDefeat, Route15_Text_RonNotEnoughMons
# 1551 "data/scripts/trainers.pory"
	msgbox Route15_Text_RonPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_Lao::
# 1556 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_LAO, Route16_Text_LaoIntro, Route16_Text_LaoDefeat
# 1557 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1558 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route16_EventScript_LaoRematch
# 1559 "data/scripts/trainers.pory"
	msgbox Route16_Text_LaoPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_LaoRematch::
# 1564 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_LAO, Route16_Text_LaoRematchIntro, Route16_Text_LaoDefeat
# 1565 "data/scripts/trainers.pory"
	msgbox Route16_Text_LaoPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_Hideo::
# 1570 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_HIDEO, Route16_Text_HideoIntro, Route16_Text_HideoDefeat
# 1571 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1572 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route16_EventScript_HideoRematch
# 1573 "data/scripts/trainers.pory"
	msgbox Route16_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_HideoRematch::
# 1578 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_HIDEO, Route16_Text_HideoRematchIntro, Route16_Text_HideoDefeat
# 1579 "data/scripts/trainers.pory"
	msgbox Route16_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_Ruben::
# 1584 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_RUBEN, Route16_Text_RubenIntro, Route16_Text_RubenDefeat
# 1585 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1586 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route16_EventScript_RubenRematch
# 1587 "data/scripts/trainers.pory"
	msgbox Route16_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_RubenRematch::
# 1592 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_RUBEN, Route16_Text_RubenRematchIntro, Route16_Text_RubenDefeat
# 1593 "data/scripts/trainers.pory"
	msgbox Route16_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_Koji::
# 1598 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CUE_BALL_KOJI, Route16_Text_KojiIntro, Route16_Text_KojiDefeat
# 1599 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1600 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route16_EventScript_KojiRematch
# 1601 "data/scripts/trainers.pory"
	msgbox Route16_Text_KojiPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_KojiRematch::
# 1606 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CUE_BALL_KOJI, Route16_Text_KojiRematchIntro, Route16_Text_KojiDefeat
# 1607 "data/scripts/trainers.pory"
	msgbox Route16_Text_KojiPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_Luke::
# 1612 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CUE_BALL_LUKE, Route16_Text_LukeIntro, Route16_Text_LukeDefeat
# 1613 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1614 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route16_EventScript_LukeRematch
# 1615 "data/scripts/trainers.pory"
	msgbox Route16_Text_LukePostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_LukeRematch::
# 1620 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CUE_BALL_LUKE, Route16_Text_LukeRematchIntro, Route16_Text_LukeDefeat
# 1621 "data/scripts/trainers.pory"
	msgbox Route16_Text_LukePostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_Camron::
# 1626 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CUE_BALL_CAMRON, Route16_Text_CamronIntro, Route16_Text_CamronDefeat
# 1627 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1628 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route16_EventScript_CamronRematch
# 1629 "data/scripts/trainers.pory"
	msgbox Route16_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_CamronRematch::
# 1634 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CUE_BALL_CAMRON, Route16_Text_CamronRematchIntro, Route16_Text_CamronDefeat
# 1635 "data/scripts/trainers.pory"
	msgbox Route16_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_Jed::
# 1640 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_YOUNG_COUPLE_LEA_JED, Route16_Text_JedIntro, Route16_Text_JedDefeat, Route16_Text_JedNotEnoughMons
# 1641 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1642 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route16_EventScript_JedRematch
# 1643 "data/scripts/trainers.pory"
	msgbox Route16_Text_JedPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_JedRematch::
# 1648 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_YOUNG_COUPLE_LEA_JED, Route16_Text_JedRematchIntro, Route16_Text_JedDefeat, Route16_Text_JedNotEnoughMons
# 1649 "data/scripts/trainers.pory"
	msgbox Route16_Text_JedPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_Lea::
# 1654 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_YOUNG_COUPLE_LEA_JED, Route16_Text_LeaIntro, Route16_Text_LeaDefeat, Route16_Text_LeaNotEnoughMons
# 1655 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1656 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route16_EventScript_LeaRematch
# 1657 "data/scripts/trainers.pory"
	msgbox Route16_Text_LeaPostBattle, MSGBOX_AUTOCLOSE
	end


Route16_EventScript_LeaRematch::
# 1662 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_YOUNG_COUPLE_LEA_JED, Route16_Text_LeaRematchIntro, Route16_Text_LeaDefeat, Route16_Text_LeaNotEnoughMons
# 1663 "data/scripts/trainers.pory"
	msgbox Route16_Text_LeaPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_Billy::
# 1668 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_BILLY, Route17_Text_BillyIntro, Route17_Text_BillyDefeat
# 1669 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1670 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_BillyRematch
# 1671 "data/scripts/trainers.pory"
	msgbox Route17_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_BillyRematch::
# 1676 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_BILLY, Route17_Text_BillyRematchIntro, Route17_Text_BillyDefeat
# 1677 "data/scripts/trainers.pory"
	msgbox Route17_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_Nikolas::
# 1682 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_NIKOLAS, Route17_Text_NikolasIntro, Route17_Text_NikolasDefeat
# 1683 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1684 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_NikolasRematch
# 1685 "data/scripts/trainers.pory"
	msgbox Route17_Text_NikolasPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_NikolasRematch::
# 1690 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_NIKOLAS, Route17_Text_NikolasRematchIntro, Route17_Text_NikolasDefeat
# 1691 "data/scripts/trainers.pory"
	msgbox Route17_Text_NikolasPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_Jaxon::
# 1696 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_JAXON, Route17_Text_JaxonIntro, Route17_Text_JaxonDefeat
# 1697 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1698 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_JaxonRematch
# 1699 "data/scripts/trainers.pory"
	msgbox Route17_Text_JaxonPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_JaxonRematch::
# 1704 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_JAXON, Route17_Text_JaxonRematchIntro, Route17_Text_JaxonDefeat
# 1705 "data/scripts/trainers.pory"
	msgbox Route17_Text_JaxonPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_William::
# 1710 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_WILLIAM, Route17_Text_WilliamIntro, Route17_Text_WilliamDefeat
# 1711 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1712 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_WilliamRematch
# 1713 "data/scripts/trainers.pory"
	msgbox Route17_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_WilliamRematch::
# 1718 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_WILLIAM, Route17_Text_WilliamRematchIntro, Route17_Text_WilliamDefeat
# 1719 "data/scripts/trainers.pory"
	msgbox Route17_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_Raul::
# 1724 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CUE_BALL_RAUL, Route17_Text_RaulIntro, Route17_Text_RaulDefeat
# 1725 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1726 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_RaulRematch
# 1727 "data/scripts/trainers.pory"
	msgbox Route17_Text_RaulPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_RaulRematch::
# 1732 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CUE_BALL_RAUL, Route17_Text_RaulRematchIntro, Route17_Text_RaulDefeat
# 1733 "data/scripts/trainers.pory"
	msgbox Route17_Text_RaulPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_Isaiah::
# 1738 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CUE_BALL_ISAIAH, Route17_Text_IsaiahIntro, Route17_Text_IsaiahDefeat
# 1739 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1740 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_IsaiahRematch
# 1741 "data/scripts/trainers.pory"
	msgbox Route17_Text_IsaiahPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_IsaiahRematch::
# 1746 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CUE_BALL_ISAIAH, Route17_Text_IsaiahRematchIntro, Route17_Text_IsaiahDefeat
# 1747 "data/scripts/trainers.pory"
	msgbox Route17_Text_IsaiahPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_Zeek::
# 1752 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CUE_BALL_ZEEK, Route17_Text_ZeekIntro, Route17_Text_ZeekDefeat
# 1753 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1754 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_ZeekRematch
# 1755 "data/scripts/trainers.pory"
	msgbox Route17_Text_ZeekPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_ZeekRematch::
# 1760 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CUE_BALL_ZEEK, Route17_Text_ZeekRematchIntro, Route17_Text_ZeekDefeat
# 1761 "data/scripts/trainers.pory"
	msgbox Route17_Text_ZeekPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_Jamal::
# 1766 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CUE_BALL_JAMAL, Route17_Text_JamalIntro, Route17_Text_JamalDefeat
# 1767 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1768 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_JamalRematch
# 1769 "data/scripts/trainers.pory"
	msgbox Route17_Text_JamalPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_JamalRematch::
# 1774 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CUE_BALL_JAMAL, Route17_Text_JamalRematchIntro, Route17_Text_JamalDefeat
# 1775 "data/scripts/trainers.pory"
	msgbox Route17_Text_JamalPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_Corey::
# 1780 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CUE_BALL_COREY, Route17_Text_CoreyIntro, Route17_Text_CoreyDefeat
# 1781 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1782 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_CoreyRematch
# 1783 "data/scripts/trainers.pory"
	msgbox Route17_Text_CoreyPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_CoreyRematch::
# 1788 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CUE_BALL_COREY, Route17_Text_CoreyRematchIntro, Route17_Text_CoreyDefeat
# 1789 "data/scripts/trainers.pory"
	msgbox Route17_Text_CoreyPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_Virgil::
# 1794 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIKER_VIRGIL, Route17_Text_VirgilIntro, Route17_Text_VirgilDefeat
# 1795 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1796 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_VirgilRematch
# 1797 "data/scripts/trainers.pory"
	msgbox Route17_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end


Route17_EventScript_VirgilRematch::
# 1802 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIKER_VIRGIL, Route17_Text_VirgilRematchIntro, Route17_Text_VirgilDefeat
# 1803 "data/scripts/trainers.pory"
	msgbox Route17_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end


Route18_EventScript_Wilton::
# 1808 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_WILTON, Route18_Text_WiltonIntro, Route18_Text_WiltonDefeat
# 1809 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1810 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route18_EventScript_WiltonRematch
# 1811 "data/scripts/trainers.pory"
	msgbox Route18_Text_WiltonPostBattle, MSGBOX_AUTOCLOSE
	end


Route18_EventScript_WiltonRematch::
# 1816 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_WILTON, Route18_Text_WiltonRematchIntro, Route18_Text_WiltonDefeat
# 1817 "data/scripts/trainers.pory"
	msgbox Route18_Text_WiltonPostBattle, MSGBOX_AUTOCLOSE
	end


Route18_EventScript_Ramiro::
# 1822 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_RAMIRO, Route18_Text_RamiroIntro, Route18_Text_RamiroDefeat
# 1823 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1824 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route18_EventScript_RamiroRematch
# 1825 "data/scripts/trainers.pory"
	msgbox Route18_Text_RamiroPostBattle, MSGBOX_AUTOCLOSE
	end


Route18_EventScript_RamiroRematch::
# 1830 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_RAMIRO, Route18_Text_RamiroRematchIntro, Route18_Text_RamiroDefeat
# 1831 "data/scripts/trainers.pory"
	msgbox Route18_Text_RamiroPostBattle, MSGBOX_AUTOCLOSE
	end


Route18_EventScript_Jacob::
# 1836 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_JACOB, Route18_Text_JacobIntro, Route18_Text_JacobDefeat
# 1837 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1838 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route18_EventScript_JacobRematch
# 1839 "data/scripts/trainers.pory"
	msgbox Route18_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
	end


Route18_EventScript_JacobRematch::
# 1844 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_JACOB, Route18_Text_JacobRematchIntro, Route18_Text_JacobDefeat
# 1845 "data/scripts/trainers.pory"
	msgbox Route18_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_Richard::
# 1850 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_RICHARD, Route19_Text_RichardIntro, Route19_Text_RichardDefeat
# 1851 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1852 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route19_EventScript_RichardRematch
# 1853 "data/scripts/trainers.pory"
	msgbox Route19_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_RichardRematch::
# 1858 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_RICHARD, Route19_Text_RichardRematchIntro, Route19_Text_RichardDefeat
# 1859 "data/scripts/trainers.pory"
	msgbox Route19_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_Reece::
# 1864 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_REECE, Route19_Text_ReeceIntro, Route19_Text_ReeceDefeat
# 1865 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1866 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route19_EventScript_ReeceRematch
# 1867 "data/scripts/trainers.pory"
	msgbox Route19_Text_ReecePostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_ReeceRematch::
# 1872 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_REECE, Route19_Text_ReeceRematchIntro, Route19_Text_ReeceDefeat
# 1873 "data/scripts/trainers.pory"
	msgbox Route19_Text_ReecePostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_Matthew::
# 1878 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_MATTHEW, Route19_Text_MatthewIntro, Route19_Text_MatthewDefeat
# 1879 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1880 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route19_EventScript_MatthewRematch
# 1881 "data/scripts/trainers.pory"
	msgbox Route19_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_MatthewRematch::
# 1886 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_MATTHEW, Route19_Text_MatthewRematchIntro, Route19_Text_MatthewDefeat
# 1887 "data/scripts/trainers.pory"
	msgbox Route19_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_Douglas::
# 1892 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_DOUGLAS, Route19_Text_DouglasIntro, Route19_Text_DouglasDefeat
# 1893 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1894 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route19_EventScript_DouglasRematch
# 1895 "data/scripts/trainers.pory"
	msgbox Route19_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_DouglasRematch::
# 1900 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_DOUGLAS, Route19_Text_DouglasRematchIntro, Route19_Text_DouglasDefeat
# 1901 "data/scripts/trainers.pory"
	msgbox Route19_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_David::
# 1906 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_DAVID, Route19_Text_DavidIntro, Route19_Text_DavidDefeat
# 1907 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1908 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route19_EventScript_DavidRematch
# 1909 "data/scripts/trainers.pory"
	msgbox Route19_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_DavidRematch::
# 1914 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_DAVID, Route19_Text_DavidRematchIntro, Route19_Text_DavidDefeat
# 1915 "data/scripts/trainers.pory"
	msgbox Route19_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_Tony::
# 1920 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_TONY, Route19_Text_TonyIntro, Route19_Text_TonyDefeat
# 1921 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1922 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route19_EventScript_TonyRematch
# 1923 "data/scripts/trainers.pory"
	msgbox Route19_Text_TonyPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_TonyRematch::
# 1928 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_TONY, Route19_Text_TonyRematchIntro, Route19_Text_TonyDefeat
# 1929 "data/scripts/trainers.pory"
	msgbox Route19_Text_TonyPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_Axle::
# 1934 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_AXLE, Route19_Text_AxleIntro, Route19_Text_AxleDefeat
# 1935 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1936 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route19_EventScript_AxleRematch
# 1937 "data/scripts/trainers.pory"
	msgbox Route19_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_AxleRematch::
# 1942 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_AXLE, Route19_Text_AxleRematchIntro, Route19_Text_AxleDefeat
# 1943 "data/scripts/trainers.pory"
	msgbox Route19_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_Anya::
# 1948 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_ANYA, Route19_Text_AnyaIntro, Route19_Text_AnyaDefeat
# 1949 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1950 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route19_EventScript_AnyaRematch
# 1951 "data/scripts/trainers.pory"
	msgbox Route19_Text_AnyaPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_AnyaRematch::
# 1956 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_ANYA, Route19_Text_AnyaRematchIntro, Route19_Text_AnyaDefeat
# 1957 "data/scripts/trainers.pory"
	msgbox Route19_Text_AnyaPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_Alice::
# 1962 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_ALICE, Route19_Text_AliceIntro, Route19_Text_AliceDefeat
# 1963 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1964 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route19_EventScript_AliceRematch
# 1965 "data/scripts/trainers.pory"
	msgbox Route19_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_AliceRematch::
# 1970 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_ALICE, Route19_Text_AliceRematchIntro, Route19_Text_AliceDefeat
# 1971 "data/scripts/trainers.pory"
	msgbox Route19_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_Connie::
# 1976 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_CONNIE, Route19_Text_ConnieIntro, Route19_Text_ConnieDefeat
# 1977 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1978 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route19_EventScript_ConnieRematch
# 1979 "data/scripts/trainers.pory"
	msgbox Route19_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_ConnieRematch::
# 1984 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_CONNIE, Route19_Text_ConnieRematchIntro, Route19_Text_ConnieDefeat
# 1985 "data/scripts/trainers.pory"
	msgbox Route19_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_Lia::
# 1990 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_SIS_AND_BRO_LIA_LUC, Route19_Text_LiaIntro, Route19_Text_LiaDefeat, Route19_Text_LiaNotEnoughMons
# 1991 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1992 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route19_EventScript_LiaRematch
# 1993 "data/scripts/trainers.pory"
	msgbox Route19_Text_LiaPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_LiaRematch::
# 1998 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_SIS_AND_BRO_LIA_LUC, Route19_Text_LiaRematchIntro, Route19_Text_LiaDefeat, Route19_Text_LiaNotEnoughMons
# 1999 "data/scripts/trainers.pory"
	msgbox Route19_Text_LiaPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_Luc::
# 2004 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_SIS_AND_BRO_LIA_LUC, Route19_Text_LucIntro, Route19_Text_LucDefeat, Route19_Text_LucNotEnoughMons
# 2005 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2006 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route19_EventScript_LucRematch
# 2007 "data/scripts/trainers.pory"
	msgbox Route19_Text_LucPostBattle, MSGBOX_AUTOCLOSE
	end


Route19_EventScript_LucRematch::
# 2012 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_SIS_AND_BRO_LIA_LUC, Route19_Text_LucRematchIntro, Route19_Text_LucDefeat, Route19_Text_LucNotEnoughMons
# 2013 "data/scripts/trainers.pory"
	msgbox Route19_Text_LucPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_Barry::
# 2018 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_BARRY, Route20_Text_BarryIntro, Route20_Text_BarryDefeat
# 2019 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2020 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route20_EventScript_BarryRematch
# 2021 "data/scripts/trainers.pory"
	msgbox Route20_Text_BarryPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_BarryRematch::
# 2026 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_BARRY, Route20_Text_BarryRematchIntro, Route20_Text_BarryDefeat
# 2027 "data/scripts/trainers.pory"
	msgbox Route20_Text_BarryPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_Dean::
# 2032 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_DEAN, Route20_Text_DeanIntro, Route20_Text_DeanDefeat
# 2033 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2034 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route20_EventScript_DeanRematch
# 2035 "data/scripts/trainers.pory"
	msgbox Route20_Text_DeanPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_DeanRematch::
# 2040 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_DEAN, Route20_Text_DeanRematchIntro, Route20_Text_DeanDefeat
# 2041 "data/scripts/trainers.pory"
	msgbox Route20_Text_DeanPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_Darrin::
# 2046 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_DARRIN, Route20_Text_DarrinIntro, Route20_Text_DarrinDefeat
# 2047 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2048 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route20_EventScript_DarrinRematch
# 2049 "data/scripts/trainers.pory"
	msgbox Route20_Text_DarrinPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_DarrinRematch::
# 2054 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_DARRIN, Route20_Text_DarrinRematchIntro, Route20_Text_DarrinDefeat
# 2055 "data/scripts/trainers.pory"
	msgbox Route20_Text_DarrinPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_Tiffany::
# 2060 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_TIFFANY, Route20_Text_TiffanyIntro, Route20_Text_TiffanyDefeat
# 2061 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2062 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route20_EventScript_TiffanyRematch
# 2063 "data/scripts/trainers.pory"
	msgbox Route20_Text_TiffanyPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_TiffanyRematch::
# 2068 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_TIFFANY, Route20_Text_TiffanyRematchIntro, Route20_Text_TiffanyDefeat
# 2069 "data/scripts/trainers.pory"
	msgbox Route20_Text_TiffanyPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_Nora::
# 2074 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_NORA, Route20_Text_NoraIntro, Route20_Text_NoraDefeat
# 2075 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2076 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route20_EventScript_NoraRematch
# 2077 "data/scripts/trainers.pory"
	msgbox Route20_Text_NoraPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_NoraRematch::
# 2082 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_NORA, Route20_Text_NoraRematchIntro, Route20_Text_NoraDefeat
# 2083 "data/scripts/trainers.pory"
	msgbox Route20_Text_NoraPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_Melissa::
# 2088 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_MELISSA, Route20_Text_MelissaIntro, Route20_Text_MelissaDefeat
# 2089 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2090 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route20_EventScript_MelissaRematch
# 2091 "data/scripts/trainers.pory"
	msgbox Route20_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_MelissaRematch::
# 2096 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_MELISSA, Route20_Text_MelissaRematchIntro, Route20_Text_MelissaDefeat
# 2097 "data/scripts/trainers.pory"
	msgbox Route20_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_Shirley::
# 2102 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_SHIRLEY, Route20_Text_ShirleyIntro, Route20_Text_ShirleyDefeat
# 2103 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2104 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route20_EventScript_ShirleyRematch
# 2105 "data/scripts/trainers.pory"
	msgbox Route20_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_ShirleyRematch::
# 2110 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_SHIRLEY, Route20_Text_ShirleyRematchIntro, Route20_Text_ShirleyDefeat
# 2111 "data/scripts/trainers.pory"
	msgbox Route20_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_Roger::
# 2116 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_ROGER, Route20_Text_RogerIntro, Route20_Text_RogerDefeat
# 2117 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2118 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route20_EventScript_RogerRematch
# 2119 "data/scripts/trainers.pory"
	msgbox Route20_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_RogerRematch::
# 2124 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_ROGER, Route20_Text_RogerRematchIntro, Route20_Text_RogerDefeat
# 2125 "data/scripts/trainers.pory"
	msgbox Route20_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_Missy::
# 2130 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_MISSY, Route20_Text_MissyIntro, Route20_Text_MissyDefeat
# 2131 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2132 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route20_EventScript_MissyRematch
# 2133 "data/scripts/trainers.pory"
	msgbox Route20_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_MissyRematch::
# 2138 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_MISSY, Route20_Text_MissyRematchIntro, Route20_Text_MissyDefeat
# 2139 "data/scripts/trainers.pory"
	msgbox Route20_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_Irene::
# 2144 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_IRENE, Route20_Text_IreneIntro, Route20_Text_IreneDefeat
# 2145 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2146 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route20_EventScript_IreneRematch
# 2147 "data/scripts/trainers.pory"
	msgbox Route20_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
	end


Route20_EventScript_IreneRematch::
# 2152 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_IRENE, Route20_Text_IreneRematchIntro, Route20_Text_IreneDefeat
# 2153 "data/scripts/trainers.pory"
	msgbox Route20_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
	end


Route21_North_EventScript_Ronald::
# 2158 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_FISHERMAN_RONALD, Route21_North_Text_RonaldIntro, Route21_North_Text_RonaldDefeat
# 2159 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2160 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route21_North_EventScript_RonaldRematch
# 2161 "data/scripts/trainers.pory"
	msgbox Route21_North_Text_RonaldPostBattle, MSGBOX_AUTOCLOSE
	end


Route21_North_EventScript_RonaldRematch::
# 2166 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_FISHERMAN_RONALD, Route21_North_Text_RonaldRematchIntro, Route21_North_Text_RonaldDefeat
# 2167 "data/scripts/trainers.pory"
	msgbox Route21_North_Text_RonaldPostBattle, MSGBOX_AUTOCLOSE
	end


Route21_South_EventScript_Claude::
# 2172 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_FISHERMAN_CLAUDE, Route21_South_Text_ClaudeIntro, Route21_South_Text_ClaudeDefeat
# 2173 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2174 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route21_South_EventScript_ClaudeRematch
# 2175 "data/scripts/trainers.pory"
	msgbox Route21_South_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
	end


Route21_South_EventScript_ClaudeRematch::
# 2180 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_FISHERMAN_CLAUDE, Route21_South_Text_ClaudeRematchIntro, Route21_South_Text_ClaudeDefeat
# 2181 "data/scripts/trainers.pory"
	msgbox Route21_South_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
	end


Route21_North_EventScript_Wade::
# 2186 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_FISHERMAN_WADE, Route21_North_Text_WadeIntro, Route21_North_Text_WadeDefeat
# 2187 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2188 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route21_North_EventScript_WadeRematch
# 2189 "data/scripts/trainers.pory"
	msgbox Route21_North_Text_WadePostBattle, MSGBOX_AUTOCLOSE
	end


Route21_North_EventScript_WadeRematch::
# 2194 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_FISHERMAN_WADE, Route21_North_Text_WadeRematchIntro, Route21_North_Text_WadeDefeat
# 2195 "data/scripts/trainers.pory"
	msgbox Route21_North_Text_WadePostBattle, MSGBOX_AUTOCLOSE
	end


Route21_South_EventScript_Nolan::
# 2200 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_FISHERMAN_NOLAN, Route21_South_Text_NolanIntro, Route21_South_Text_NolanDefeat
# 2201 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2202 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route21_South_EventScript_NolanRematch
# 2203 "data/scripts/trainers.pory"
	msgbox Route21_South_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
	end


Route21_South_EventScript_NolanRematch::
# 2208 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_FISHERMAN_NOLAN, Route21_South_Text_NolanRematchIntro, Route21_South_Text_NolanDefeat
# 2209 "data/scripts/trainers.pory"
	msgbox Route21_South_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
	end


Route21_North_EventScript_Spencer::
# 2214 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_SPENCER, Route21_North_Text_SpencerIntro, Route21_North_Text_SpencerDefeat
# 2215 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2216 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route21_North_EventScript_SpencerRematch
# 2217 "data/scripts/trainers.pory"
	msgbox Route21_North_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
	end


Route21_North_EventScript_SpencerRematch::
# 2222 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_SPENCER, Route21_North_Text_SpencerRematchIntro, Route21_North_Text_SpencerDefeat
# 2223 "data/scripts/trainers.pory"
	msgbox Route21_North_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
	end


Route21_South_EventScript_Jack::
# 2228 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_JACK, Route21_South_Text_JackIntro, Route21_South_Text_JackDefeat
# 2229 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2230 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route21_South_EventScript_JackRematch
# 2231 "data/scripts/trainers.pory"
	msgbox Route21_South_Text_JackPostBattle, MSGBOX_AUTOCLOSE
	end


Route21_South_EventScript_JackRematch::
# 2236 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_JACK, Route21_South_Text_JackRematchIntro, Route21_South_Text_JackDefeat
# 2237 "data/scripts/trainers.pory"
	msgbox Route21_South_Text_JackPostBattle, MSGBOX_AUTOCLOSE
	end


Route21_South_EventScript_Jerome::
# 2242 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_JEROME, Route21_South_Text_JeromeIntro, Route21_South_Text_JeromeDefeat
# 2243 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2244 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route21_South_EventScript_JeromeRematch
# 2245 "data/scripts/trainers.pory"
	msgbox Route21_South_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
	end


Route21_South_EventScript_JeromeRematch::
# 2250 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_JEROME, Route21_South_Text_JeromeRematchIntro, Route21_South_Text_JeromeDefeat
# 2251 "data/scripts/trainers.pory"
	msgbox Route21_South_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
	end


Route21_South_EventScript_Roland::
# 2256 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_ROLAND, Route21_South_Text_RolandIntro, Route21_South_Text_RolandDefeat
# 2257 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2258 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route21_South_EventScript_RolandRematch
# 2259 "data/scripts/trainers.pory"
	msgbox Route21_South_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
	end


Route21_South_EventScript_RolandRematch::
# 2264 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_ROLAND, Route21_South_Text_RolandRematchIntro, Route21_South_Text_RolandDefeat
# 2265 "data/scripts/trainers.pory"
	msgbox Route21_South_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
	end


Route21_North_EventScript_Lil::
# 2270 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_SIS_AND_BRO_LIL_IAN, Route21_North_Text_LilIntro, Route21_North_Text_LilDefeat, Route21_North_Text_LilNotEnoughMons
# 2271 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2272 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route21_North_EventScript_LilRematch
# 2273 "data/scripts/trainers.pory"
	msgbox Route21_North_Text_LilPostBattle, MSGBOX_AUTOCLOSE
	end


Route21_North_EventScript_LilRematch::
# 2278 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_SIS_AND_BRO_LIL_IAN, Route21_North_Text_LilRematchIntro, Route21_North_Text_LilDefeat, Route21_North_Text_LilNotEnoughMons
# 2279 "data/scripts/trainers.pory"
	msgbox Route21_North_Text_LilPostBattle, MSGBOX_AUTOCLOSE
	end


Route21_North_EventScript_Ian::
# 2284 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_SIS_AND_BRO_LIL_IAN, Route21_North_Text_IanIntro, Route21_North_Text_IanDefeat, Route21_North_Text_IanNotEnoughMons
# 2285 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2286 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, Route21_North_EventScript_IanRematch
# 2287 "data/scripts/trainers.pory"
	msgbox Route21_North_Text_IanPostBattle, MSGBOX_AUTOCLOSE
	end


Route21_North_EventScript_IanRematch::
# 2292 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_SIS_AND_BRO_LIL_IAN, Route21_North_Text_IanRematchIntro, Route21_North_Text_IanDefeat, Route21_North_Text_IanNotEnoughMons
# 2293 "data/scripts/trainers.pory"
	msgbox Route21_North_Text_IanPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_Maria::
# 2298 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_MARIA, OneIsland_KindleRoad_Text_MariaIntro, OneIsland_KindleRoad_Text_MariaDefeat
# 2299 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2300 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_KindleRoad_EventScript_MariaRematch
# 2301 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_MariaPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_MariaRematch::
# 2306 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_MARIA, OneIsland_KindleRoad_Text_MariaRematchIntro, OneIsland_KindleRoad_Text_MariaDefeat
# 2307 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_MariaPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_Abigail::
# 2312 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_ABIGAIL, OneIsland_KindleRoad_Text_AbigailIntro, OneIsland_KindleRoad_Text_AbigailDefeat
# 2313 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2314 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_KindleRoad_EventScript_AbigailRematch
# 2315 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_AbigailPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_AbigailRematch::
# 2320 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_ABIGAIL, OneIsland_KindleRoad_Text_AbigailRematchIntro, OneIsland_KindleRoad_Text_AbigailDefeat
# 2321 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_AbigailPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_Finn::
# 2326 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_FINN, OneIsland_KindleRoad_Text_FinnIntro, OneIsland_KindleRoad_Text_FinnDefeat
# 2327 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2328 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_KindleRoad_EventScript_FinnRematch
# 2329 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_FinnPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_FinnRematch::
# 2334 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_FINN, OneIsland_KindleRoad_Text_FinnRematchIntro, OneIsland_KindleRoad_Text_FinnDefeat
# 2335 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_FinnPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_Garrett::
# 2340 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_GARRETT, OneIsland_KindleRoad_Text_GarrettIntro, OneIsland_KindleRoad_Text_GarrettDefeat
# 2341 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2342 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_KindleRoad_EventScript_GarrettRematch
# 2343 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_GarrettPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_GarrettRematch::
# 2348 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_GARRETT, OneIsland_KindleRoad_Text_GarrettRematchIntro, OneIsland_KindleRoad_Text_GarrettDefeat
# 2349 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_GarrettPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_Tommy::
# 2354 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_FISHERMAN_TOMMY, OneIsland_KindleRoad_Text_TommyIntro, OneIsland_KindleRoad_Text_TommyDefeat
# 2355 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2356 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_KindleRoad_EventScript_TommyRematch
# 2357 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_TommyRematch::
# 2362 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_FISHERMAN_TOMMY, OneIsland_KindleRoad_Text_TommyRematchIntro, OneIsland_KindleRoad_Text_TommyDefeat
# 2363 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_Sharon::
# 2368 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_SHARON, OneIsland_KindleRoad_Text_SharonIntro, OneIsland_KindleRoad_Text_SharonDefeat
# 2369 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2370 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_KindleRoad_EventScript_SharonRematch
# 2371 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_SharonPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_SharonRematch::
# 2376 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CRUSH_GIRL_SHARON, OneIsland_KindleRoad_Text_SharonRematchIntro, OneIsland_KindleRoad_Text_SharonDefeat
# 2377 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_SharonPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_Tanya::
# 2382 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_TANYA, OneIsland_KindleRoad_Text_TanyaIntro, OneIsland_KindleRoad_Text_TanyaDefeat
# 2383 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2384 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_KindleRoad_EventScript_TanyaRematch
# 2385 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_TanyaRematch::
# 2390 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CRUSH_GIRL_TANYA, OneIsland_KindleRoad_Text_TanyaRematchIntro, OneIsland_KindleRoad_Text_TanyaDefeat
# 2391 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_Shea::
# 2396 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BLACK_BELT_SHEA, OneIsland_KindleRoad_Text_SheaIntro, OneIsland_KindleRoad_Text_SheaDefeat
# 2397 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2398 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_KindleRoad_EventScript_SheaRematch
# 2399 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_SheaPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_SheaRematch::
# 2404 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BLACK_BELT_SHEA, OneIsland_KindleRoad_Text_SheaRematchIntro, OneIsland_KindleRoad_Text_SheaDefeat
# 2405 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_SheaPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_Hugh::
# 2410 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HUGH, OneIsland_KindleRoad_Text_HughIntro, OneIsland_KindleRoad_Text_HughDefeat
# 2411 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2412 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_KindleRoad_EventScript_HughRematch
# 2413 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_HughPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_HughRematch::
# 2418 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BLACK_BELT_HUGH, OneIsland_KindleRoad_Text_HughRematchIntro, OneIsland_KindleRoad_Text_HughDefeat
# 2419 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_HughPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_Bryce::
# 2424 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CAMPER_BRYCE, OneIsland_KindleRoad_Text_BryceIntro, OneIsland_KindleRoad_Text_BryceDefeat
# 2425 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2426 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_KindleRoad_EventScript_BryceRematch
# 2427 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_BrycePostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_BryceRematch::
# 2432 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CAMPER_BRYCE, OneIsland_KindleRoad_Text_BryceRematchIntro, OneIsland_KindleRoad_Text_BryceDefeat
# 2433 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_BrycePostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_Claire::
# 2438 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PICNICKER_CLAIRE, OneIsland_KindleRoad_Text_ClaireIntro, OneIsland_KindleRoad_Text_ClaireDefeat
# 2439 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2440 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_KindleRoad_EventScript_ClaireRematch
# 2441 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_ClairePostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_ClaireRematch::
# 2446 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PICNICKER_CLAIRE, OneIsland_KindleRoad_Text_ClaireRematchIntro, OneIsland_KindleRoad_Text_ClaireDefeat
# 2447 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_ClairePostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_Kia::
# 2452 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_CRUSH_KIN_MIK_KIA, OneIsland_KindleRoad_Text_KiaIntro, OneIsland_KindleRoad_Text_KiaDefeat, OneIsland_KindleRoad_Text_KiaNotEnoughMons
# 2453 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2454 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_KindleRoad_EventScript_KiaRematch
# 2455 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_KiaPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_KiaRematch::
# 2460 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_CRUSH_KIN_MIK_KIA, OneIsland_KindleRoad_Text_KiaRematchIntro, OneIsland_KindleRoad_Text_KiaDefeat, OneIsland_KindleRoad_Text_KiaNotEnoughMons
# 2461 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_KiaPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_Mik::
# 2466 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_CRUSH_KIN_MIK_KIA, OneIsland_KindleRoad_Text_MikIntro, OneIsland_KindleRoad_Text_MikDefeat, OneIsland_KindleRoad_Text_MikNotEnoughMons
# 2467 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2468 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_KindleRoad_EventScript_MikRematch
# 2469 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_MikPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_KindleRoad_EventScript_MikRematch::
# 2474 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_CRUSH_KIN_MIK_KIA, OneIsland_KindleRoad_Text_MikRematchIntro, OneIsland_KindleRoad_Text_MikDefeat, OneIsland_KindleRoad_Text_MikNotEnoughMons
# 2475 "data/scripts/trainers.pory"
	msgbox OneIsland_KindleRoad_Text_MikPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_TreasureBeach_EventScript_Amara::
# 2480 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_AMARA, OneIsland_TreasureBeach_Text_AmaraIntro, OneIsland_TreasureBeach_Text_AmaraDefeat
# 2481 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2482 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_TreasureBeach_EventScript_AmaraRematch
# 2483 "data/scripts/trainers.pory"
	msgbox OneIsland_TreasureBeach_Text_AmaraPostBattle, MSGBOX_AUTOCLOSE
	end


OneIsland_TreasureBeach_EventScript_AmaraRematch::
# 2488 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_AMARA, OneIsland_TreasureBeach_Text_AmaraRematchIntro, OneIsland_TreasureBeach_Text_AmaraDefeat
# 2489 "data/scripts/trainers.pory"
	msgbox OneIsland_TreasureBeach_Text_AmaraPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_Nikki::
# 2494 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_AROMA_LADY_NIKKI, ThreeIsland_BondBridge_Text_NikkiIntro, ThreeIsland_BondBridge_Text_NikkiDefeat
# 2495 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2496 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, ThreeIsland_BondBridge_EventScript_NikkiRematch
# 2497 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_NikkiRematch::
# 2502 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_AROMA_LADY_NIKKI, ThreeIsland_BondBridge_Text_NikkiRematchIntro, ThreeIsland_BondBridge_Text_NikkiDefeat
# 2503 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_Violet::
# 2508 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_AROMA_LADY_VIOLET, ThreeIsland_BondBridge_Text_VioletIntro, ThreeIsland_BondBridge_Text_VioletDefeat
# 2509 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2510 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, ThreeIsland_BondBridge_EventScript_VioletRematch
# 2511 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_VioletRematch::
# 2516 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_AROMA_LADY_VIOLET, ThreeIsland_BondBridge_Text_VioletRematchIntro, ThreeIsland_BondBridge_Text_VioletDefeat
# 2517 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_Amira::
# 2522 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_TUBER_AMIRA, ThreeIsland_BondBridge_Text_AmiraIntro, ThreeIsland_BondBridge_Text_AmiraDefeat
# 2523 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2524 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, ThreeIsland_BondBridge_EventScript_AmiraRematch
# 2525 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_AmiraPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_AmiraRematch::
# 2530 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_TUBER_AMIRA, ThreeIsland_BondBridge_Text_AmiraRematchIntro, ThreeIsland_BondBridge_Text_AmiraDefeat
# 2531 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_AmiraPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_Alexis::
# 2536 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_TUBER_ALEXIS, ThreeIsland_BondBridge_Text_AlexisIntro, ThreeIsland_BondBridge_Text_AlexisDefeat
# 2537 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2538 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, ThreeIsland_BondBridge_EventScript_AlexisRematch
# 2539 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_AlexisPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_AlexisRematch::
# 2544 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_TUBER_ALEXIS, ThreeIsland_BondBridge_Text_AlexisRematchIntro, ThreeIsland_BondBridge_Text_AlexisDefeat
# 2545 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_AlexisPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_Tisha::
# 2550 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_TISHA, ThreeIsland_BondBridge_Text_TishaIntro, ThreeIsland_BondBridge_Text_TishaDefeat
# 2551 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2552 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, ThreeIsland_BondBridge_EventScript_TishaRematch
# 2553 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_TishaPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_TishaRematch::
# 2558 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_TISHA, ThreeIsland_BondBridge_Text_TishaRematchIntro, ThreeIsland_BondBridge_Text_TishaDefeat
# 2559 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_TishaPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_Joy::
# 2564 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_TWINS_JOY_MEG, ThreeIsland_BondBridge_Text_JoyIntro, ThreeIsland_BondBridge_Text_JoyDefeat, ThreeIsland_BondBridge_Text_JoyNotEnoughMons
# 2565 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2566 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, ThreeIsland_BondBridge_EventScript_JoyRematch
# 2567 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_JoyRematch::
# 2572 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_TWINS_JOY_MEG, ThreeIsland_BondBridge_Text_JoyRematchIntro, ThreeIsland_BondBridge_Text_JoyDefeat, ThreeIsland_BondBridge_Text_JoyNotEnoughMons
# 2573 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_Meg::
# 2578 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_TWINS_JOY_MEG, ThreeIsland_BondBridge_Text_MegIntro, ThreeIsland_BondBridge_Text_MegDefeat, ThreeIsland_BondBridge_Text_MegNotEnoughMons
# 2579 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2580 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, ThreeIsland_BondBridge_EventScript_MegRematch
# 2581 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_MegPostBattle, MSGBOX_AUTOCLOSE
	end


ThreeIsland_BondBridge_EventScript_MegRematch::
# 2586 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_TWINS_JOY_MEG, ThreeIsland_BondBridge_Text_MegRematchIntro, ThreeIsland_BondBridge_Text_MegDefeat, ThreeIsland_BondBridge_Text_MegNotEnoughMons
# 2587 "data/scripts/trainers.pory"
	msgbox ThreeIsland_BondBridge_Text_MegPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_Daisy::
# 2592 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PAINTER_DAISY, FiveIsland_ResortGorgeous_Text_DaisyIntro, FiveIsland_ResortGorgeous_Text_DaisyDefeat
# 2593 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2594 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_ResortGorgeous_EventScript_DaisyRematch
# 2595 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_DaisyRematch::
# 2600 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PAINTER_DAISY, FiveIsland_ResortGorgeous_Text_DaisyRematchIntro, FiveIsland_ResortGorgeous_Text_DaisyDefeat
# 2601 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_Celina::
# 2606 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PAINTER_CELINA, FiveIsland_ResortGorgeous_Text_CelinaIntro, FiveIsland_ResortGorgeous_Text_CelinaDefeat
# 2607 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2608 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_ResortGorgeous_EventScript_CelinaRematch
# 2609 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_CelinaRematch::
# 2614 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PAINTER_CELINA, FiveIsland_ResortGorgeous_Text_CelinaRematchIntro, FiveIsland_ResortGorgeous_Text_CelinaDefeat
# 2615 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_Rayna::
# 2620 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PAINTER_RAYNA, FiveIsland_ResortGorgeous_Text_RaynaIntro, FiveIsland_ResortGorgeous_Text_RaynaDefeat
# 2621 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2622 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_ResortGorgeous_EventScript_RaynaRematch
# 2623 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_RaynaPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_RaynaRematch::
# 2628 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PAINTER_RAYNA, FiveIsland_ResortGorgeous_Text_RaynaRematchIntro, FiveIsland_ResortGorgeous_Text_RaynaDefeat
# 2629 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_RaynaPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_Jacki::
# 2634 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_LADY_JACKI, FiveIsland_ResortGorgeous_Text_JackiIntro, FiveIsland_ResortGorgeous_Text_JackiDefeat
# 2635 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2636 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_ResortGorgeous_EventScript_JackiRematch
# 2637 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_JackiPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_JackiRematch::
# 2642 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_LADY_JACKI, FiveIsland_ResortGorgeous_Text_JackiRematchIntro, FiveIsland_ResortGorgeous_Text_JackiDefeat
# 2643 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_JackiPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_Gillian::
# 2648 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_LADY_GILLIAN, FiveIsland_ResortGorgeous_Text_GillianIntro, FiveIsland_ResortGorgeous_Text_GillianDefeat
# 2649 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2650 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_ResortGorgeous_EventScript_GillianRematch
# 2651 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_GillianPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_GillianRematch::
# 2656 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_LADY_GILLIAN, FiveIsland_ResortGorgeous_Text_GillianRematchIntro, FiveIsland_ResortGorgeous_Text_GillianDefeat
# 2657 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_GillianPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_Destin::
# 2662 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_YOUNGSTER_DESTIN, FiveIsland_ResortGorgeous_Text_DestinIntro, FiveIsland_ResortGorgeous_Text_DestinDefeat
# 2663 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2664 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_ResortGorgeous_EventScript_DestinRematch
# 2665 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_DestinPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_DestinRematch::
# 2670 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_YOUNGSTER_DESTIN, FiveIsland_ResortGorgeous_Text_DestinRematchIntro, FiveIsland_ResortGorgeous_Text_DestinDefeat
# 2671 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_DestinPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_Toby::
# 2676 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_TOBY, FiveIsland_ResortGorgeous_Text_TobyIntro, FiveIsland_ResortGorgeous_Text_TobyDefeat
# 2677 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2678 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_ResortGorgeous_EventScript_TobyRematch
# 2679 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_TobyPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_ResortGorgeous_EventScript_TobyRematch::
# 2684 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_TOBY, FiveIsland_ResortGorgeous_Text_TobyRematchIntro, FiveIsland_ResortGorgeous_Text_TobyDefeat
# 2685 "data/scripts/trainers.pory"
	msgbox FiveIsland_ResortGorgeous_Text_TobyPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_WaterLabyrinth_EventScript_Alize::
# 2690 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PKMN_BREEDER_ALIZE, FiveIsland_WaterLabyrinth_Text_AlizeIntro, FiveIsland_WaterLabyrinth_Text_AlizeDefeat
# 2691 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2692 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_AlizeRematch
# 2693 "data/scripts/trainers.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_AlizePostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_WaterLabyrinth_EventScript_AlizeRematch::
# 2698 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PKMN_BREEDER_ALIZE, FiveIsland_WaterLabyrinth_Text_AlizeRematchIntro, FiveIsland_WaterLabyrinth_Text_AlizeDefeat
# 2699 "data/scripts/trainers.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_AlizePostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_MemorialPillar_EventScript_Milo::
# 2704 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_MILO, FiveIsland_MemorialPillar_Text_MiloIntro, FiveIsland_MemorialPillar_Text_MiloDefeat
# 2705 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2706 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_MiloRematch
# 2707 "data/scripts/trainers.pory"
	msgbox FiveIsland_MemorialPillar_Text_MiloPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_MemorialPillar_EventScript_MiloRematch::
# 2712 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_MILO, FiveIsland_MemorialPillar_Text_MiloRematchIntro, FiveIsland_MemorialPillar_Text_MiloDefeat
# 2713 "data/scripts/trainers.pory"
	msgbox FiveIsland_MemorialPillar_Text_MiloPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_MemorialPillar_EventScript_Chaz::
# 2718 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_CHAZ, FiveIsland_MemorialPillar_Text_ChazIntro, FiveIsland_MemorialPillar_Text_ChazDefeat
# 2719 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2720 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_ChazRematch
# 2721 "data/scripts/trainers.pory"
	msgbox FiveIsland_MemorialPillar_Text_ChazPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_MemorialPillar_EventScript_ChazRematch::
# 2726 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_CHAZ, FiveIsland_MemorialPillar_Text_ChazRematchIntro, FiveIsland_MemorialPillar_Text_ChazDefeat
# 2727 "data/scripts/trainers.pory"
	msgbox FiveIsland_MemorialPillar_Text_ChazPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_MemorialPillar_EventScript_Harold::
# 2732 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_HAROLD, FiveIsland_MemorialPillar_Text_HaroldIntro, FiveIsland_MemorialPillar_Text_HaroldDefeat
# 2733 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2734 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_HaroldRematch
# 2735 "data/scripts/trainers.pory"
	msgbox FiveIsland_MemorialPillar_Text_HaroldPostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_MemorialPillar_EventScript_HaroldRematch::
# 2740 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_HAROLD, FiveIsland_MemorialPillar_Text_HaroldRematchIntro, FiveIsland_MemorialPillar_Text_HaroldDefeat
# 2741 "data/scripts/trainers.pory"
	msgbox FiveIsland_MemorialPillar_Text_HaroldPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_OutcastIsland_EventScript_Tylor::
# 2746 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_FISHERMAN_TYLOR, SixIsland_OutcastIsland_Text_TylorIntro, SixIsland_OutcastIsland_Text_TylorDefeat
# 2747 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2748 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_OutcastIsland_EventScript_TylorRematch
# 2749 "data/scripts/trainers.pory"
	msgbox SixIsland_OutcastIsland_Text_TylorPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_OutcastIsland_EventScript_TylorRematch::
# 2754 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_FISHERMAN_TYLOR, SixIsland_OutcastIsland_Text_TylorRematchIntro, SixIsland_OutcastIsland_Text_TylorDefeat
# 2755 "data/scripts/trainers.pory"
	msgbox SixIsland_OutcastIsland_Text_TylorPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_OutcastIsland_EventScript_Mymo::
# 2760 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_MYMO, SixIsland_OutcastIsland_Text_MymoIntro, SixIsland_OutcastIsland_Text_MymoDefeat
# 2761 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2762 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_OutcastIsland_EventScript_MymoRematch
# 2763 "data/scripts/trainers.pory"
	msgbox SixIsland_OutcastIsland_Text_MymoPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_OutcastIsland_EventScript_MymoRematch::
# 2768 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_MYMO, SixIsland_OutcastIsland_Text_MymoRematchIntro, SixIsland_OutcastIsland_Text_MymoDefeat
# 2769 "data/scripts/trainers.pory"
	msgbox SixIsland_OutcastIsland_Text_MymoPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_OutcastIsland_EventScript_Nicole::
# 2774 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_NICOLE, SixIsland_OutcastIsland_Text_NicoleIntro, SixIsland_OutcastIsland_Text_NicoleDefeat
# 2775 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2776 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_OutcastIsland_EventScript_NicoleRematch
# 2777 "data/scripts/trainers.pory"
	msgbox SixIsland_OutcastIsland_Text_NicolePostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_OutcastIsland_EventScript_NicoleRematch::
# 2782 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_NICOLE, SixIsland_OutcastIsland_Text_NicoleRematchIntro, SixIsland_OutcastIsland_Text_NicoleDefeat
# 2783 "data/scripts/trainers.pory"
	msgbox SixIsland_OutcastIsland_Text_NicolePostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_OutcastIsland_EventScript_Ava::
# 2788 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_SIS_AND_BRO_AVA_GEB, SixIsland_OutcastIsland_Text_AvaIntro, SixIsland_OutcastIsland_Text_AvaDefeat, SixIsland_OutcastIsland_Text_AvaNotEnoughMons
# 2789 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2790 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_OutcastIsland_EventScript_AvaRematch
# 2791 "data/scripts/trainers.pory"
	msgbox SixIsland_OutcastIsland_Text_AvaPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_OutcastIsland_EventScript_AvaRematch::
# 2796 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_SIS_AND_BRO_AVA_GEB, SixIsland_OutcastIsland_Text_AvaRematchIntro, SixIsland_OutcastIsland_Text_AvaDefeat, SixIsland_OutcastIsland_Text_AvaNotEnoughMons
# 2797 "data/scripts/trainers.pory"
	msgbox SixIsland_OutcastIsland_Text_AvaPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_OutcastIsland_EventScript_Geb::
# 2802 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_SIS_AND_BRO_AVA_GEB, SixIsland_OutcastIsland_Text_GebIntro, SixIsland_OutcastIsland_Text_GebDefeat, SixIsland_OutcastIsland_Text_GebNotEnoughMons
# 2803 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2804 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_OutcastIsland_EventScript_GebRematch
# 2805 "data/scripts/trainers.pory"
	msgbox SixIsland_OutcastIsland_Text_GebPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_OutcastIsland_EventScript_GebRematch::
# 2810 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_SIS_AND_BRO_AVA_GEB, SixIsland_OutcastIsland_Text_GebRematchIntro, SixIsland_OutcastIsland_Text_GebDefeat, SixIsland_OutcastIsland_Text_GebNotEnoughMons
# 2811 "data/scripts/trainers.pory"
	msgbox SixIsland_OutcastIsland_Text_GebPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_GreenPath_EventScript_Jaclyn::
# 2816 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PSYCHIC_JACLYN, SixIsland_GreenPath_Text_JaclynIntro, SixIsland_GreenPath_Text_JaclynDefeat
# 2817 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2818 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_GreenPath_EventScript_JaclynRematch
# 2819 "data/scripts/trainers.pory"
	msgbox SixIsland_GreenPath_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_GreenPath_EventScript_JaclynRematch::
# 2824 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PSYCHIC_JACLYN, SixIsland_GreenPath_Text_JaclynRematchIntro, SixIsland_GreenPath_Text_JaclynDefeat
# 2825 "data/scripts/trainers.pory"
	msgbox SixIsland_GreenPath_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_Rose::
# 2830 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_AROMA_LADY_ROSE, SixIsland_WaterPath_Text_RoseIntro, SixIsland_WaterPath_Text_RoseDefeat
# 2831 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2832 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_WaterPath_EventScript_RoseRematch
# 2833 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_RosePostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_RoseRematch::
# 2838 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_AROMA_LADY_ROSE, SixIsland_WaterPath_Text_RoseRematchIntro, SixIsland_WaterPath_Text_RoseDefeat
# 2839 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_RosePostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_Edward::
# 2844 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_JUGGLER_EDWARD, SixIsland_WaterPath_Text_EdwardIntro, SixIsland_WaterPath_Text_EdwardDefeat
# 2845 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2846 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_WaterPath_EventScript_EdwardRematch
# 2847 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_EdwardRematch::
# 2852 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_JUGGLER_EDWARD, SixIsland_WaterPath_Text_EdwardRematchIntro, SixIsland_WaterPath_Text_EdwardDefeat
# 2853 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_Samir::
# 2858 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_SAMIR, SixIsland_WaterPath_Text_SamirIntro, SixIsland_WaterPath_Text_SamirDefeat
# 2859 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2860 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_WaterPath_EventScript_SamirRematch
# 2861 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_SamirPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_SamirRematch::
# 2866 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_MALE_SAMIR, SixIsland_WaterPath_Text_SamirRematchIntro, SixIsland_WaterPath_Text_SamirDefeat
# 2867 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_SamirPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_Denise::
# 2872 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_DENISE, SixIsland_WaterPath_Text_DeniseIntro, SixIsland_WaterPath_Text_DeniseDefeat
# 2873 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2874 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_WaterPath_EventScript_DeniseRematch
# 2875 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_DeniseRematch::
# 2880 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_SWIMMER_FEMALE_DENISE, SixIsland_WaterPath_Text_DeniseRematchIntro, SixIsland_WaterPath_Text_DeniseDefeat
# 2881 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_Miu::
# 2886 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_TWINS_MIU_MIA, SixIsland_WaterPath_Text_MiuIntro, SixIsland_WaterPath_Text_MiuDefeat, SixIsland_WaterPath_Text_MiuNotEnoughMons
# 2887 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2888 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_WaterPath_EventScript_MiuRematch
# 2889 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_MiuRematch::
# 2894 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_TWINS_MIU_MIA, SixIsland_WaterPath_Text_MiuRematchIntro, SixIsland_WaterPath_Text_MiuDefeat, SixIsland_WaterPath_Text_MiuNotEnoughMons
# 2895 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_Mia::
# 2900 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_TWINS_MIU_MIA, SixIsland_WaterPath_Text_MiaIntro, SixIsland_WaterPath_Text_MiaDefeat, SixIsland_WaterPath_Text_MiaNotEnoughMons
# 2901 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2902 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_WaterPath_EventScript_MiaRematch
# 2903 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_MiaPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_MiaRematch::
# 2908 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_TWINS_MIU_MIA, SixIsland_WaterPath_Text_MiaRematchIntro, SixIsland_WaterPath_Text_MiaDefeat, SixIsland_WaterPath_Text_MiaNotEnoughMons
# 2909 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_MiaPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_Earl::
# 2914 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_HIKER_EARL, SixIsland_WaterPath_Text_EarlIntro, SixIsland_WaterPath_Text_EarlDefeat
# 2915 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2916 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_WaterPath_EventScript_EarlRematch
# 2917 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_EarlPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_WaterPath_EventScript_EarlRematch::
# 2922 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_HIKER_EARL, SixIsland_WaterPath_Text_EarlRematchIntro, SixIsland_WaterPath_Text_EarlDefeat
# 2923 "data/scripts/trainers.pory"
	msgbox SixIsland_WaterPath_Text_EarlPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_RuinValley_EventScript_Stanly::
# 2928 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_STANLY, SixIsland_RuinValley_Text_StanlyIntro, SixIsland_RuinValley_Text_StanlyDefeat
# 2929 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2930 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_RuinValley_EventScript_StanlyRematch
# 2931 "data/scripts/trainers.pory"
	msgbox SixIsland_RuinValley_Text_StanlyPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_RuinValley_EventScript_StanlyRematch::
# 2936 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_RUIN_MANIAC_STANLY, SixIsland_RuinValley_Text_StanlyRematchIntro, SixIsland_RuinValley_Text_StanlyDefeat
# 2937 "data/scripts/trainers.pory"
	msgbox SixIsland_RuinValley_Text_StanlyPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_RuinValley_EventScript_Foster::
# 2942 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_FOSTER, SixIsland_RuinValley_Text_FosterIntro, SixIsland_RuinValley_Text_FosterDefeat
# 2943 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2944 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_RuinValley_EventScript_FosterRematch
# 2945 "data/scripts/trainers.pory"
	msgbox SixIsland_RuinValley_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_RuinValley_EventScript_FosterRematch::
# 2950 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_RUIN_MANIAC_FOSTER, SixIsland_RuinValley_Text_FosterRematchIntro, SixIsland_RuinValley_Text_FosterDefeat
# 2951 "data/scripts/trainers.pory"
	msgbox SixIsland_RuinValley_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_RuinValley_EventScript_Larry::
# 2956 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_LARRY, SixIsland_RuinValley_Text_LarryIntro, SixIsland_RuinValley_Text_LarryDefeat
# 2957 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2958 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_RuinValley_EventScript_LarryRematch
# 2959 "data/scripts/trainers.pory"
	msgbox SixIsland_RuinValley_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_RuinValley_EventScript_LarryRematch::
# 2964 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_RUIN_MANIAC_LARRY, SixIsland_RuinValley_Text_LarryRematchIntro, SixIsland_RuinValley_Text_LarryDefeat
# 2965 "data/scripts/trainers.pory"
	msgbox SixIsland_RuinValley_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_RuinValley_EventScript_Daryl::
# 2970 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_HIKER_DARYL, SixIsland_RuinValley_Text_DarylIntro, SixIsland_RuinValley_Text_DarylDefeat
# 2971 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2972 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_RuinValley_EventScript_DarylRematch
# 2973 "data/scripts/trainers.pory"
	msgbox SixIsland_RuinValley_Text_DarylPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_RuinValley_EventScript_DarylRematch::
# 2978 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_HIKER_DARYL, SixIsland_RuinValley_Text_DarylRematchIntro, SixIsland_RuinValley_Text_DarylDefeat
# 2979 "data/scripts/trainers.pory"
	msgbox SixIsland_RuinValley_Text_DarylPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_RuinValley_EventScript_Hector::
# 2984 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_POKEMANIAC_HECTOR, SixIsland_RuinValley_Text_HectorIntro, SixIsland_RuinValley_Text_HectorDefeat
# 2985 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 2986 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_RuinValley_EventScript_HectorRematch
# 2987 "data/scripts/trainers.pory"
	msgbox SixIsland_RuinValley_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
	end


SixIsland_RuinValley_EventScript_HectorRematch::
# 2992 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_POKEMANIAC_HECTOR, SixIsland_RuinValley_Text_HectorRematchIntro, SixIsland_RuinValley_Text_HectorDefeat
# 2993 "data/scripts/trainers.pory"
	msgbox SixIsland_RuinValley_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_TrainerTower_EventScript_Dario::
# 2998 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PSYCHIC_DARIO, SevenIsland_TrainerTower_Text_DarioIntro, SevenIsland_TrainerTower_Text_DarioDefeat
# 2999 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3000 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_TrainerTower_EventScript_DarioRematch
# 3001 "data/scripts/trainers.pory"
	msgbox SevenIsland_TrainerTower_Text_DarioPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_TrainerTower_EventScript_DarioRematch::
# 3006 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PSYCHIC_DARIO, SevenIsland_TrainerTower_Text_DarioRematchIntro, SevenIsland_TrainerTower_Text_DarioDefeat
# 3007 "data/scripts/trainers.pory"
	msgbox SevenIsland_TrainerTower_Text_DarioPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_TrainerTower_EventScript_Rodette::
# 3012 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PSYCHIC_RODETTE, SevenIsland_TrainerTower_Text_RodetteIntro, SevenIsland_TrainerTower_Text_RodetteDefeat
# 3013 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3014 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_TrainerTower_EventScript_RodetteRematch
# 3015 "data/scripts/trainers.pory"
	msgbox SevenIsland_TrainerTower_Text_RodettePostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_TrainerTower_EventScript_RodetteRematch::
# 3020 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PSYCHIC_RODETTE, SevenIsland_TrainerTower_Text_RodetteRematchIntro, SevenIsland_TrainerTower_Text_RodetteDefeat
# 3021 "data/scripts/trainers.pory"
	msgbox SevenIsland_TrainerTower_Text_RodettePostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_Entrance_EventScript_Miah::
# 3026 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_AROMA_LADY_MIAH, SevenIsland_SevaultCanyon_Entrance_Text_MiahIntro, SevenIsland_SevaultCanyon_Entrance_Text_MiahDefeat
# 3027 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3028 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_Entrance_EventScript_MiahRematch
# 3029 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Entrance_Text_MiahPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_Entrance_EventScript_MiahRematch::
# 3034 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_AROMA_LADY_MIAH, SevenIsland_SevaultCanyon_Entrance_Text_MiahRematchIntro, SevenIsland_SevaultCanyon_Entrance_Text_MiahDefeat
# 3035 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Entrance_Text_MiahPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_Entrance_EventScript_Eve::
# 3040 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_YOUNG_COUPLE_EVE_JON, SevenIsland_SevaultCanyon_Entrance_Text_EveIntro, SevenIsland_SevaultCanyon_Entrance_Text_EveDefeat, SevenIsland_SevaultCanyon_Entrance_Text_EveNotEnoughMons
# 3041 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3042 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_Entrance_EventScript_EveRematch
# 3043 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Entrance_Text_EvePostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_Entrance_EventScript_EveRematch::
# 3048 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_YOUNG_COUPLE_EVE_JON, SevenIsland_SevaultCanyon_Entrance_Text_EveRematchIntro, SevenIsland_SevaultCanyon_Entrance_Text_EveDefeat, SevenIsland_SevaultCanyon_Entrance_Text_EveNotEnoughMons
# 3049 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Entrance_Text_EvePostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_Entrance_EventScript_Jon::
# 3054 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_YOUNG_COUPLE_EVE_JON, SevenIsland_SevaultCanyon_Entrance_Text_JonIntro, SevenIsland_SevaultCanyon_Entrance_Text_JonDefeat, SevenIsland_SevaultCanyon_Entrance_Text_JonNotEnoughMons
# 3055 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3056 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_Entrance_EventScript_JonRematch
# 3057 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Entrance_Text_JonPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_Entrance_EventScript_JonRematch::
# 3062 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_YOUNG_COUPLE_EVE_JON, SevenIsland_SevaultCanyon_Entrance_Text_JonRematchIntro, SevenIsland_SevaultCanyon_Entrance_Text_JonDefeat, SevenIsland_SevaultCanyon_Entrance_Text_JonNotEnoughMons
# 3063 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Entrance_Text_JonPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_Entrance_EventScript_Mason::
# 3068 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_JUGGLER_MASON, SevenIsland_SevaultCanyon_Entrance_Text_MasonIntro, SevenIsland_SevaultCanyon_Entrance_Text_MasonDefeat
# 3069 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3070 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_Entrance_EventScript_MasonRematch
# 3071 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Entrance_Text_MasonPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_Entrance_EventScript_MasonRematch::
# 3076 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_JUGGLER_MASON, SevenIsland_SevaultCanyon_Entrance_Text_MasonRematchIntro, SevenIsland_SevaultCanyon_Entrance_Text_MasonDefeat
# 3077 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Entrance_Text_MasonPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_Entrance_EventScript_Nicolas::
# 3082 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_NICOLAS, SevenIsland_SevaultCanyon_Entrance_Text_NicolasIntro, SevenIsland_SevaultCanyon_Entrance_Text_NicolasDefeat
# 3083 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3084 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_Entrance_EventScript_NicolasRematch
# 3085 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Entrance_Text_NicolasPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_Entrance_EventScript_NicolasRematch::
# 3090 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PKMN_RANGER_NICOLAS, SevenIsland_SevaultCanyon_Entrance_Text_NicolasRematchIntro, SevenIsland_SevaultCanyon_Entrance_Text_NicolasDefeat
# 3091 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Entrance_Text_NicolasPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_Entrance_EventScript_Madeline::
# 3096 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_MADELINE, SevenIsland_SevaultCanyon_Entrance_Text_MadelineIntro, SevenIsland_SevaultCanyon_Entrance_Text_MadelineDefeat
# 3097 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3098 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_Entrance_EventScript_MadelineRematch
# 3099 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Entrance_Text_MadelinePostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_Entrance_EventScript_MadelineRematch::
# 3104 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PKMN_RANGER_MADELINE, SevenIsland_SevaultCanyon_Entrance_Text_MadelineRematchIntro, SevenIsland_SevaultCanyon_Entrance_Text_MadelineDefeat
# 3105 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Entrance_Text_MadelinePostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_Cyndy::
# 3110 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_CYNDY, SevenIsland_SevaultCanyon_Text_CyndyIntro, SevenIsland_SevaultCanyon_Text_CyndyDefeat
# 3111 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3112 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_EventScript_CyndyRematch
# 3113 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_CyndyPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_CyndyRematch::
# 3118 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_CRUSH_GIRL_CYNDY, SevenIsland_SevaultCanyon_Text_CyndyRematchIntro, SevenIsland_SevaultCanyon_Text_CyndyDefeat
# 3119 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_CyndyPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_Evan::
# 3124 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_TAMER_EVAN, SevenIsland_SevaultCanyon_Text_EvanIntro, SevenIsland_SevaultCanyon_Text_EvanDefeat
# 3125 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3126 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_EventScript_EvanRematch
# 3127 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_EvanPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_EvanRematch::
# 3132 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_TAMER_EVAN, SevenIsland_SevaultCanyon_Text_EvanRematchIntro, SevenIsland_SevaultCanyon_Text_EvanDefeat
# 3133 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_EvanPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_Jackson::
# 3138 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_JACKSON, SevenIsland_SevaultCanyon_Text_JacksonIntro, SevenIsland_SevaultCanyon_Text_JacksonDefeat
# 3139 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3140 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_EventScript_JacksonRematch
# 3141 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_JacksonPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_JacksonRematch::
# 3146 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PKMN_RANGER_JACKSON, SevenIsland_SevaultCanyon_Text_JacksonRematchIntro, SevenIsland_SevaultCanyon_Text_JacksonDefeat
# 3147 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_JacksonPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_Katelyn::
# 3152 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_KATELYN, SevenIsland_SevaultCanyon_Text_KatelynIntro, SevenIsland_SevaultCanyon_Text_KatelynDefeat
# 3153 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3154 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_EventScript_KatelynRematch
# 3155 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_KatelynPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_KatelynRematch::
# 3160 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PKMN_RANGER_KATELYN, SevenIsland_SevaultCanyon_Text_KatelynRematchIntro, SevenIsland_SevaultCanyon_Text_KatelynDefeat
# 3161 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_KatelynPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_Leroy::
# 3166 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_COOLTRAINER_LEROY, SevenIsland_SevaultCanyon_Text_LeroyIntro, SevenIsland_SevaultCanyon_Text_LeroyDefeat
# 3167 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3168 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_EventScript_LeroyRematch
# 3169 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_LeroyRematch::
# 3174 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_COOLTRAINER_LEROY, SevenIsland_SevaultCanyon_Text_LeroyRematchIntro, SevenIsland_SevaultCanyon_Text_LeroyDefeat
# 3175 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_Michelle::
# 3180 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_COOLTRAINER_MICHELLE, SevenIsland_SevaultCanyon_Text_MichelleIntro, SevenIsland_SevaultCanyon_Text_MichelleDefeat
# 3181 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3182 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_EventScript_MichelleRematch
# 3183 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_MichelleRematch::
# 3188 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_COOLTRAINER_MICHELLE, SevenIsland_SevaultCanyon_Text_MichelleRematchIntro, SevenIsland_SevaultCanyon_Text_MichelleDefeat
# 3189 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_Lex::
# 3194 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_LEX_NYA, SevenIsland_SevaultCanyon_Text_LexIntro, SevenIsland_SevaultCanyon_Text_LexDefeat, SevenIsland_SevaultCanyon_Text_LexNotEnoughMons
# 3195 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3196 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_EventScript_LexRematch
# 3197 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_LexPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_LexRematch::
# 3202 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_COOL_COUPLE_LEX_NYA, SevenIsland_SevaultCanyon_Text_LexRematchIntro, SevenIsland_SevaultCanyon_Text_LexDefeat, SevenIsland_SevaultCanyon_Text_LexNotEnoughMons
# 3203 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_LexPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_Nya::
# 3208 "data/scripts/trainers.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_LEX_NYA, SevenIsland_SevaultCanyon_Text_NyaIntro, SevenIsland_SevaultCanyon_Text_NyaDefeat, SevenIsland_SevaultCanyon_Text_NyaNotEnoughMons
# 3209 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3210 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_SevaultCanyon_EventScript_NyaRematch
# 3211 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_NyaPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_SevaultCanyon_EventScript_NyaRematch::
# 3216 "data/scripts/trainers.pory"
	trainerbattle_rematch_double TRAINER_COOL_COUPLE_LEX_NYA, SevenIsland_SevaultCanyon_Text_NyaRematchIntro, SevenIsland_SevaultCanyon_Text_NyaDefeat, SevenIsland_SevaultCanyon_Text_NyaNotEnoughMons
# 3217 "data/scripts/trainers.pory"
	msgbox SevenIsland_SevaultCanyon_Text_NyaPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_TanobyRuins_EventScript_Brandon::
# 3222 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_BRANDON, SevenIsland_TanobyRuins_Text_BrandonIntro, SevenIsland_TanobyRuins_Text_BrandonDefeat
# 3223 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3224 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_TanobyRuins_EventScript_BrandonRematch
# 3225 "data/scripts/trainers.pory"
	msgbox SevenIsland_TanobyRuins_Text_BrandonPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_TanobyRuins_EventScript_BrandonRematch::
# 3230 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_RUIN_MANIAC_BRANDON, SevenIsland_TanobyRuins_Text_BrandonRematchIntro, SevenIsland_TanobyRuins_Text_BrandonDefeat
# 3231 "data/scripts/trainers.pory"
	msgbox SevenIsland_TanobyRuins_Text_BrandonPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_TanobyRuins_EventScript_Benjamin::
# 3236 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_BENJAMIN, SevenIsland_TanobyRuins_Text_BenjaminIntro, SevenIsland_TanobyRuins_Text_BenjaminDefeat
# 3237 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3238 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_TanobyRuins_EventScript_BenjaminRematch
# 3239 "data/scripts/trainers.pory"
	msgbox SevenIsland_TanobyRuins_Text_BenjaminPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_TanobyRuins_EventScript_BenjaminRematch::
# 3244 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_RUIN_MANIAC_BENJAMIN, SevenIsland_TanobyRuins_Text_BenjaminRematchIntro, SevenIsland_TanobyRuins_Text_BenjaminDefeat
# 3245 "data/scripts/trainers.pory"
	msgbox SevenIsland_TanobyRuins_Text_BenjaminPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_TanobyRuins_EventScript_Edna::
# 3250 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_PAINTER_EDNA, SevenIsland_TanobyRuins_Text_EdnaIntro, SevenIsland_TanobyRuins_Text_EdnaDefeat
# 3251 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3252 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_TanobyRuins_EventScript_EdnaRematch
# 3253 "data/scripts/trainers.pory"
	msgbox SevenIsland_TanobyRuins_Text_EdnaPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_TanobyRuins_EventScript_EdnaRematch::
# 3258 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_PAINTER_EDNA, SevenIsland_TanobyRuins_Text_EdnaRematchIntro, SevenIsland_TanobyRuins_Text_EdnaDefeat
# 3259 "data/scripts/trainers.pory"
	msgbox SevenIsland_TanobyRuins_Text_EdnaPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_TanobyRuins_EventScript_Clifford::
# 3264 "data/scripts/trainers.pory"
	trainerbattle_single TRAINER_GENTLEMAN_CLIFFORD, SevenIsland_TanobyRuins_Text_CliffordIntro, SevenIsland_TanobyRuins_Text_CliffordDefeat
# 3265 "data/scripts/trainers.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 3266 "data/scripts/trainers.pory"
	goto_if_eq VAR_RESULT, TRUE, SevenIsland_TanobyRuins_EventScript_CliffordRematch
# 3267 "data/scripts/trainers.pory"
	msgbox SevenIsland_TanobyRuins_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end


SevenIsland_TanobyRuins_EventScript_CliffordRematch::
# 3272 "data/scripts/trainers.pory"
	trainerbattle_rematch TRAINER_GENTLEMAN_CLIFFORD, SevenIsland_TanobyRuins_Text_CliffordRematchIntro, SevenIsland_TanobyRuins_Text_CliffordDefeat
# 3273 "data/scripts/trainers.pory"
	msgbox SevenIsland_TanobyRuins_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end

