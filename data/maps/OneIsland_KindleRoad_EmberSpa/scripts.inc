OneIsland_KindleRoad_EmberSpa_MapScripts::
	.byte 0


OneIsland_KindleRoad_EmberSpa_EventScript_OldMan::
# 4 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterWarmsMeToCore, MSGBOX_NPC
	end


OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan1::
# 9 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_EnjoyBowlOfChowder, MSGBOX_NPC
	end


OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan2::
# 14 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_HotSpringIsTherapeutic, MSGBOX_NPC
	end


OneIsland_KindleRoad_EmberSpa_EventScript_OldWoman::
# 19 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_SeeHowSmoothMySkinIs, MSGBOX_NPC
	end


OneIsland_KindleRoad_EmberSpa_EventScript_BlackBelt::
# 24 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	lock
# 25 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	faceplayer
# 26 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 3
# 27 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_BrunoVisitsSpaOnOccasion
# 28 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
	end


OneIsland_KindleRoad_EmberSpa_EventScript_RockSmashMan::
# 33 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	lock
# 34 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	faceplayer
# 35 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	goto_if_set FLAG_GOT_HM06, OneIsland_KindleRoad_EmberSpa_EventScript_AlreadyGotHM06
# 36 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_UsedThisToMakeEmberSpa
# 37 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	giveitem ITEM_HM06
# 38 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	setflag FLAG_GOT_HM06
# 39 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
# 40 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
	end


OneIsland_KindleRoad_EmberSpa_EventScript_AlreadyGotHM06::
# 45 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
# 46 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
	end


OneIsland_KindleRoad_EmberSpa_EventScript_SpaHeal::
# 51 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	lockall
# 52 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	fadescreen FADE_TO_WHITE
# 53 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	special HealPlayerParty
# 54 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 55 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterExquisiteFullyRefreshed
# 56 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	setvar VAR_TEMP_1, 1
# 57 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	releaseall
	end

