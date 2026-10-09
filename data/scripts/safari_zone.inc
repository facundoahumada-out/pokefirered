SafariZone_EventScript_OutOfBallsMidBattle::
# 2 "data/scripts/safari_zone.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 3
# 3 "data/scripts/safari_zone.pory"
	special ExitSafariMode
# 4 "data/scripts/safari_zone.pory"
	setwarp MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 4, 1
	end


SafariZone_EventScript_Exit::
# 9 "data/scripts/safari_zone.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 1
# 10 "data/scripts/safari_zone.pory"
	special ExitSafariMode
# 11 "data/scripts/safari_zone.pory"
	warp MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 4, 1
# 12 "data/scripts/safari_zone.pory"
	waitstate
	end


SafariZone_EventScript_RetirePrompt::
# 17 "data/scripts/safari_zone.pory"
	lockall
# 18 "data/scripts/safari_zone.pory"
	msgbox SafariZone_Text_WouldYouLikeToExit, MSGBOX_YESNO
# 19 "data/scripts/safari_zone.pory"
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_Retire
# 20 "data/scripts/safari_zone.pory"
	releaseall
	end


SafariZone_EventScript_Retire::
# 25 "data/scripts/safari_zone.pory"
	goto SafariZone_EventScript_Exit
	return


SafariZone_EventScript_TimesUp::
# 29 "data/scripts/safari_zone.pory"
	lockall
# 30 "data/scripts/safari_zone.pory"
	playse SE_DING_DONG
# 31 "data/scripts/safari_zone.pory"
	msgbox SafariZone_Text_TimesUp
# 32 "data/scripts/safari_zone.pory"
	goto SafariZone_EventScript_Exit
	end


SafariZone_EventScript_OutOfBalls::
# 37 "data/scripts/safari_zone.pory"
	lockall
# 38 "data/scripts/safari_zone.pory"
	playse SE_DING_DONG
# 39 "data/scripts/safari_zone.pory"
	msgbox SafariZone_Text_OutOfBalls
# 40 "data/scripts/safari_zone.pory"
	goto SafariZone_EventScript_Exit
	end

