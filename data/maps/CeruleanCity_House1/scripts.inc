CeruleanCity_House1_MapScripts::
	.byte 0


CeruleanCity_House1_EventScript_BadgeGuy::
# 4 "data/maps/CeruleanCity_House1/scripts.pory"
	lock
# 5 "data/maps/CeruleanCity_House1/scripts.pory"
	faceplayer
# 6 "data/maps/CeruleanCity_House1/scripts.pory"
	msgbox CeruleanCity_House1_Text_BadgesHaveAmazingSecrets
# 7 "data/maps/CeruleanCity_House1/scripts.pory"
	message CeruleanCity_House1_Text_DescribeWhichBadge
# 8 "data/maps/CeruleanCity_House1/scripts.pory"
	waitmessage
# 9 "data/maps/CeruleanCity_House1/scripts.pory"
	setvar VAR_0x8004, LISTMENU_BADGES
# 10 "data/maps/CeruleanCity_House1/scripts.pory"
	special ListMenu
# 11 "data/maps/CeruleanCity_House1/scripts.pory"
	waitstate
# 12 "data/maps/CeruleanCity_House1/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 13 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeruleanCity_House1_EventScript_DescribeBoulderBadge
# 14 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeruleanCity_House1_EventScript_DescribeCascadeBadge
# 15 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeruleanCity_House1_EventScript_DescribeThunderBadge
# 16 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 3, CeruleanCity_House1_EventScript_DescribeRainbowBadge
# 17 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 4, CeruleanCity_House1_EventScript_DescribeSoulBadge
# 18 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 5, CeruleanCity_House1_EventScript_DescribeMarshBadge
# 19 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 6, CeruleanCity_House1_EventScript_DescribeVolcanoBadge
# 20 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 7, CeruleanCity_House1_EventScript_DescribeEarthBadge
# 21 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 8, CeruleanCity_House1_EventScript_StopDescribingBadges
# 22 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeruleanCity_House1_EventScript_StopDescribingBadges
	end


CeruleanCity_House1_EventScript_DescribeAnotherBadge::
# 27 "data/maps/CeruleanCity_House1/scripts.pory"
	message CeruleanCity_House1_Text_DescribeWhichBadge
# 28 "data/maps/CeruleanCity_House1/scripts.pory"
	waitmessage
# 29 "data/maps/CeruleanCity_House1/scripts.pory"
	special ReturnToListMenu
# 30 "data/maps/CeruleanCity_House1/scripts.pory"
	waitstate
# 31 "data/maps/CeruleanCity_House1/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 32 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeruleanCity_House1_EventScript_DescribeBoulderBadge
# 33 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeruleanCity_House1_EventScript_DescribeCascadeBadge
# 34 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeruleanCity_House1_EventScript_DescribeThunderBadge
# 35 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 3, CeruleanCity_House1_EventScript_DescribeRainbowBadge
# 36 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 4, CeruleanCity_House1_EventScript_DescribeSoulBadge
# 37 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 5, CeruleanCity_House1_EventScript_DescribeMarshBadge
# 38 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 6, CeruleanCity_House1_EventScript_DescribeVolcanoBadge
# 39 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 7, CeruleanCity_House1_EventScript_DescribeEarthBadge
# 40 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 8, CeruleanCity_House1_EventScript_StopDescribingBadges
# 41 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeruleanCity_House1_EventScript_StopDescribingBadges
	end


CeruleanCity_House1_EventScript_DescribeBoulderBadge::
# 46 "data/maps/CeruleanCity_House1/scripts.pory"
	msgbox CeruleanCity_House1_Text_AttackStatFlash
# 47 "data/maps/CeruleanCity_House1/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeCascadeBadge::
# 52 "data/maps/CeruleanCity_House1/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv30Cut
# 53 "data/maps/CeruleanCity_House1/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeThunderBadge::
# 58 "data/maps/CeruleanCity_House1/scripts.pory"
	msgbox CeruleanCity_House1_Text_SpeedStatFly
# 59 "data/maps/CeruleanCity_House1/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeRainbowBadge::
# 64 "data/maps/CeruleanCity_House1/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv50Strength
# 65 "data/maps/CeruleanCity_House1/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeSoulBadge::
# 70 "data/maps/CeruleanCity_House1/scripts.pory"
	msgbox CeruleanCity_House1_Text_DefenseStatSurf
# 71 "data/maps/CeruleanCity_House1/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeMarshBadge::
# 76 "data/maps/CeruleanCity_House1/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv70RockSmash
# 77 "data/maps/CeruleanCity_House1/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeVolcanoBadge::
# 82 "data/maps/CeruleanCity_House1/scripts.pory"
	msgbox CeruleanCity_House1_Text_SpStatsWaterfall
# 83 "data/maps/CeruleanCity_House1/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeEarthBadge::
# 88 "data/maps/CeruleanCity_House1/scripts.pory"
	msgbox CeruleanCity_House1_Text_AllMonsWillObeyYou
# 89 "data/maps/CeruleanCity_House1/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_StopDescribingBadges::
# 94 "data/maps/CeruleanCity_House1/scripts.pory"
	msgbox CeruleanCity_House1_Text_ComeVisitAnytime
# 95 "data/maps/CeruleanCity_House1/scripts.pory"
	release
	end

