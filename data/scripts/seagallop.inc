EventScript_ChooseDestFromOneIsland::
# 3 "data/scripts/seagallop.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, EventScript_SeviiDestinationsPage1
# 4 "data/scripts/seagallop.pory"
	goto_if_ge VAR_MAP_SCENE_CINNABAR_ISLAND, 4, EventScript_ChooseDestFromOneIslandVermilionAllowed
# 5 "data/scripts/seagallop.pory"
	multichoice 19, 6, MULTICHOICE_ISLAND_23, FALSE
# 6 "data/scripts/seagallop.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 7 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_SailToTwoIsland2
# 8 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_SailToThreeIsland2
# 9 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_CancelSail
# 10 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, EventScript_CancelSail
	end


EventScript_ChooseDestFromOneIslandVermilionAllowed::
# 15 "data/scripts/seagallop.pory"
	multichoice 19, 5, MULTICHOICE_SEAGALLOP_V23, FALSE
# 16 "data/scripts/seagallop.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 17 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_SailToVermilion2
# 18 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_SailToTwoIsland2
# 19 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_SailToThreeIsland2
# 20 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 3, EventScript_CancelSail
# 21 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, EventScript_CancelSail
	end


EventScript_ChooseDestFromTwoIsland::
# 26 "data/scripts/seagallop.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, EventScript_SeviiDestinationsPage1
# 27 "data/scripts/seagallop.pory"
	goto_if_ge VAR_MAP_SCENE_CINNABAR_ISLAND, 4, EventScript_ChooseDestFromTwoIslandVermilionAllowed
# 28 "data/scripts/seagallop.pory"
	multichoice 19, 6, MULTICHOICE_ISLAND_13, FALSE
# 29 "data/scripts/seagallop.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 30 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_SailToOneIsland2
# 31 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_SailToThreeIsland2
# 32 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_CancelSail
# 33 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, EventScript_CancelSail
	end


EventScript_ChooseDestFromTwoIslandVermilionAllowed::
# 38 "data/scripts/seagallop.pory"
	multichoice 19, 5, MULTICHOICE_SEAGALLOP_V13, FALSE
# 39 "data/scripts/seagallop.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 40 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_SailToVermilion2
# 41 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_SailToOneIsland2
# 42 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_SailToThreeIsland2
# 43 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 3, EventScript_CancelSail
# 44 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, EventScript_CancelSail
	end


EventScript_SailToVermilion2::
# 49 "data/scripts/seagallop.pory"
	setvar VAR_0x8006, SEAGALLOP_VERMILION_CITY
# 50 "data/scripts/seagallop.pory"
	goto EventScript_SailToDest
	end


EventScript_SailToOneIsland2::
# 55 "data/scripts/seagallop.pory"
	setvar VAR_0x8006, SEAGALLOP_ONE_ISLAND
# 56 "data/scripts/seagallop.pory"
	goto EventScript_SailToDest
	end


EventScript_SailToTwoIsland2::
# 61 "data/scripts/seagallop.pory"
	setvar VAR_0x8006, SEAGALLOP_TWO_ISLAND
# 62 "data/scripts/seagallop.pory"
	goto EventScript_SailToDest
	end


EventScript_SailToThreeIsland2::
# 67 "data/scripts/seagallop.pory"
	setvar VAR_0x8006, SEAGALLOP_THREE_ISLAND
# 68 "data/scripts/seagallop.pory"
	goto EventScript_SailToDest
	end


EventScript_ChooseDestFromIsland::
# 73 "data/scripts/seagallop.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, EventScript_SeviiDestinationsPage1
# 74 "data/scripts/seagallop.pory"
	goto_if_ge VAR_MAP_SCENE_CINNABAR_ISLAND, 4, EventScript_ChooseDestFromIslandVermilionAllowed
# 75 "data/scripts/seagallop.pory"
	multichoice 19, 6, MULTICHOICE_ISLAND_12, FALSE
# 76 "data/scripts/seagallop.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 77 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_SailToOneIsland2
# 78 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_SailToTwoIsland2
# 79 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_CancelSail
# 80 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, EventScript_CancelSail
	end


EventScript_ChooseDestFromIslandVermilionAllowed::
# 85 "data/scripts/seagallop.pory"
	multichoice 19, 5, MULTICHOICE_SEAGALLOP_V12, FALSE
# 86 "data/scripts/seagallop.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 87 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_SailToVermilion2
# 88 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_SailToOneIsland2
# 89 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_SailToTwoIsland2
# 90 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, 3, EventScript_CancelSail
# 91 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, EventScript_CancelSail
	end


EventScript_SailToDest::
# 96 "data/scripts/seagallop.pory"
	specialvar VAR_RESULT, GetSeagallopNumber
# 97 "data/scripts/seagallop.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 98 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8004, SEAGALLOP_VERMILION_CITY, EventScript_DepartingVermilion
# 99 "data/scripts/seagallop.pory"
	goto_if_ne VAR_0x8004, SEAGALLOP_VERMILION_CITY, EventScript_DepartingNotVermilion
	end


EventScript_DepartingVermilion::
# 104 "data/scripts/seagallop.pory"
	msgbox VermilionCity_Text_Seagallop7Departing
# 105 "data/scripts/seagallop.pory"
	goto EventScript_SetSail
	end


EventScript_DepartingNotVermilion::
# 110 "data/scripts/seagallop.pory"
	msgbox Text_AllAboardSeagallopNum
# 111 "data/scripts/seagallop.pory"
	goto EventScript_SetSail
	end


EventScript_SetSail::
# 116 "data/scripts/seagallop.pory"
	closemessage
# 117 "data/scripts/seagallop.pory"
	delay 20
# 118 "data/scripts/seagallop.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 119 "data/scripts/seagallop.pory"
	special QuestLog_CutRecording
# 120 "data/scripts/seagallop.pory"
	fadescreen FADE_TO_BLACK
# 121 "data/scripts/seagallop.pory"
	special DoSeagallopFerryScene
# 122 "data/scripts/seagallop.pory"
	waitstate
	end


EventScript_CancelSail::
# 127 "data/scripts/seagallop.pory"
	specialvar VAR_RESULT, IsPlayerLeftOfVermilionSailor
# 128 "data/scripts/seagallop.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_WalkUpPier
# 129 "data/scripts/seagallop.pory"
	release
	end


VermilionCity_EventScript_WalkUpPier::
# 134 "data/scripts/seagallop.pory"
	closemessage
# 135 "data/scripts/seagallop.pory"
	applymovement LOCALID_VERMILION_FERRY_SAILOR, Common_Movement_FaceOriginalDirection
# 136 "data/scripts/seagallop.pory"
	applymovement LOCALID_PLAYER, VermilionCity_Movement_WalkUp
# 137 "data/scripts/seagallop.pory"
	waitmovement 0
# 138 "data/scripts/seagallop.pory"
	releaseall
	end


# 142 "data/scripts/seagallop.pory"
VermilionCity_Movement_WalkUp::
# 143 "data/scripts/seagallop.pory"
	walk_up
# 144 "data/scripts/seagallop.pory"
	step_end

EventScript_SeviiDestinationsPage1::
# 148 "data/scripts/seagallop.pory"
	setvar VAR_0x8005, 0
# 149 "data/scripts/seagallop.pory"
	special DrawSeagallopDestinationMenu
# 150 "data/scripts/seagallop.pory"
	waitstate
# 151 "data/scripts/seagallop.pory"
	specialvar VAR_0x8006, GetSelectedSeagallopDestination
# 152 "data/scripts/seagallop.pory"
	copyvar VAR_0x8000, VAR_0x8006
# 153 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SEAGALLOP_VERMILION_CITY, EventScript_SailToVermilionCity
# 154 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SEAGALLOP_ONE_ISLAND, EventScript_SailToOneIsland
# 155 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SEAGALLOP_TWO_ISLAND, EventScript_SailToTwoIsland
# 156 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SEAGALLOP_THREE_ISLAND, EventScript_SailToThreeIsland
# 157 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SEAGALLOP_FOUR_ISLAND, EventScript_SailToFourIsland
# 158 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SEAGALLOP_MORE, EventScript_SeviiDestinationsPage2
# 159 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, EventScript_CancelSail
	end


EventScript_SeviiDestinationsPage2::
# 164 "data/scripts/seagallop.pory"
	setvar VAR_0x8005, 1
# 165 "data/scripts/seagallop.pory"
	special DrawSeagallopDestinationMenu
# 166 "data/scripts/seagallop.pory"
	waitstate
# 167 "data/scripts/seagallop.pory"
	specialvar VAR_0x8006, GetSelectedSeagallopDestination
# 168 "data/scripts/seagallop.pory"
	copyvar VAR_0x8000, VAR_0x8006
# 169 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SEAGALLOP_FOUR_ISLAND, EventScript_SailToFourIsland
# 170 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SEAGALLOP_FIVE_ISLAND, EventScript_SailToFiveIsland
# 171 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SEAGALLOP_SIX_ISLAND, EventScript_SailToSixIsland
# 172 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SEAGALLOP_SEVEN_ISLAND, EventScript_SailToSevenIsland
# 173 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SEAGALLOP_MORE, EventScript_SeviiDestinationsPage1
# 174 "data/scripts/seagallop.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, EventScript_CancelSail
	end


EventScript_SailToVermilionCity::
# 179 "data/scripts/seagallop.pory"
	setvar VAR_0x8006, SEAGALLOP_VERMILION_CITY
# 180 "data/scripts/seagallop.pory"
	goto EventScript_SailToDest
	end


EventScript_SailToOneIsland::
# 185 "data/scripts/seagallop.pory"
	setvar VAR_0x8006, SEAGALLOP_ONE_ISLAND
# 186 "data/scripts/seagallop.pory"
	goto EventScript_SailToDest
	end


EventScript_SailToTwoIsland::
# 191 "data/scripts/seagallop.pory"
	setvar VAR_0x8006, SEAGALLOP_TWO_ISLAND
# 192 "data/scripts/seagallop.pory"
	goto EventScript_SailToDest
	end


EventScript_SailToThreeIsland::
# 197 "data/scripts/seagallop.pory"
	setvar VAR_0x8006, SEAGALLOP_THREE_ISLAND
# 198 "data/scripts/seagallop.pory"
	goto EventScript_SailToDest
	end


EventScript_SailToFourIsland::
# 203 "data/scripts/seagallop.pory"
	setvar VAR_0x8006, SEAGALLOP_FOUR_ISLAND
# 204 "data/scripts/seagallop.pory"
	goto EventScript_SailToDest
	end


EventScript_SailToFiveIsland::
# 209 "data/scripts/seagallop.pory"
	setvar VAR_0x8006, SEAGALLOP_FIVE_ISLAND
# 210 "data/scripts/seagallop.pory"
	goto EventScript_SailToDest
	end


EventScript_SailToSixIsland::
# 215 "data/scripts/seagallop.pory"
	setvar VAR_0x8006, SEAGALLOP_SIX_ISLAND
# 216 "data/scripts/seagallop.pory"
	goto EventScript_SailToDest
	end


EventScript_SailToSevenIsland::
# 221 "data/scripts/seagallop.pory"
	setvar VAR_0x8006, SEAGALLOP_SEVEN_ISLAND
# 222 "data/scripts/seagallop.pory"
	goto EventScript_SailToDest
	end

