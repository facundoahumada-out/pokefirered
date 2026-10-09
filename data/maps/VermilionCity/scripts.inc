VermilionCity_MapScripts::
# 2 "data/maps/VermilionCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_OnTransition
# 3 "data/maps/VermilionCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VermilionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

VermilionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/VermilionCity/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 2, VermilionCity_EventScript_ExitSSAnne
	.2byte 0


VermilionCity_EventScript_ExitSSAnne::
# 9 "data/maps/VermilionCity/scripts.pory"
	lockall
# 10 "data/maps/VermilionCity/scripts.pory"
	applymovement LOCALID_PLAYER, VermilionCity_Movement_ExitSSAnne
# 11 "data/maps/VermilionCity/scripts.pory"
	waitmovement 0
# 12 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 3
# 13 "data/maps/VermilionCity/scripts.pory"
	releaseall
	end


# 17 "data/maps/VermilionCity/scripts.pory"
VermilionCity_Movement_ExitSSAnne::
# 18 "data/maps/VermilionCity/scripts.pory"
	walk_up
# 19 "data/maps/VermilionCity/scripts.pory"
	walk_up
# 20 "data/maps/VermilionCity/scripts.pory"
	step_end

VermilionCity_OnTransition::
# 24 "data/maps/VermilionCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VERMILION_CITY
# 25 "data/maps/VermilionCity/scripts.pory"
	call_if_set FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION, VermilionCity_EventScript_HideOaksAide
	end


VermilionCity_EventScript_HideOaksAide::
# 30 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
	return


VermilionCity_EventScript_Woman::
# 35 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_GrimerMultipliesInSludge, MSGBOX_NPC
	end


VermilionCity_EventScript_OldMan1::
# 40 "data/maps/VermilionCity/scripts.pory"
	lock
# 41 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 42 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_OldMan1SSAnneLeft
# 43 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DidYouSeeSSAnneInHarbor
# 44 "data/maps/VermilionCity/scripts.pory"
	release
	end


VermilionCity_EventScript_OldMan1SSAnneLeft::
# 49 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_SSAnneHasDepartedForYear
# 50 "data/maps/VermilionCity/scripts.pory"
	release
	end


VermilionCity_EventScript_FerrySailor::
# 55 "data/maps/VermilionCity/scripts.pory"
	lock
# 56 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 57 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_CheckSeagallopPresent
# 58 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_WelcomeToTheSSAnne
# 59 "data/maps/VermilionCity/scripts.pory"
	release
	end


VermilionCity_EventScript_CheckHasMysticTicket::
# 64 "data/maps/VermilionCity/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_NAVEL_ROCK, EventScript_SetResultFalse
# 65 "data/maps/VermilionCity/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 66 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SetResultFalse
# 67 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SetResultTrue
	end


VermilionCity_EventScript_CheckHasAuroraTicket::
# 72 "data/maps/VermilionCity/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_BIRTH_ISLAND, EventScript_SetResultFalse
# 73 "data/maps/VermilionCity/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 74 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SetResultFalse
# 75 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SetResultTrue
	end


VermilionCity_EventScript_CheckSeagallopPresent::
# 80 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 81 "data/maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, VermilionCity_EventScript_ChooseSeagallopDestRainbowPass
# 82 "data/maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1, VermilionCity_EventScript_ChooseSeagallopDestTriPass
# 83 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_TheShipSetSail
# 84 "data/maps/VermilionCity/scripts.pory"
	release
	end


VermilionCity_EventScript_ChooseSeagallopDestRainbowPass::
# 89 "data/maps/VermilionCity/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 90 "data/maps/VermilionCity/scripts.pory"
	special QuestLog_CutRecording
# 91 "data/maps/VermilionCity/scripts.pory"
	call VermilionCity_EventScript_CheckHasMysticTicket
# 92 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasMysticTicket
# 93 "data/maps/VermilionCity/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 94 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasAuroraTicket
# 95 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 96 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopRainbowPass
# 97 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 98 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SeviiDestinationsPage1
	end


VermilionCity_EventScript_HasMysticTicket::
# 103 "data/maps/VermilionCity/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 104 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasMysticAndAuroraTickets
# 105 "data/maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_ShowMysticTicket
# 106 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 107 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 108 "data/maps/VermilionCity/scripts.pory"
	multichoice 17, 6, MULTICHOICE_SEVII_NAVEL, FALSE
# 109 "data/maps/VermilionCity/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 110 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_SeviiDestinationsPage1
# 111 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_SailToNavelRock
# 112 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_CancelSail
# 113 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 127, EventScript_CancelSail
	end


VermilionCity_EventScript_ShowMysticTicket::
# 118 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_SHOWN_MYSTIC_TICKET
# 119 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_OhMysticTicketTakeYouToNavelRock
	return


VermilionCity_EventScript_HasAuroraTicket::
# 124 "data/maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_ShowAuroraTicket
# 125 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 126 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 127 "data/maps/VermilionCity/scripts.pory"
	multichoice 13, 6, MULTICHOICE_SEVII_BIRTH, FALSE
# 128 "data/maps/VermilionCity/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 129 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_SeviiDestinationsPage1
# 130 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_SailToBirthIsland
# 131 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_CancelSail
# 132 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 127, EventScript_CancelSail
	end


VermilionCity_EventScript_ShowAuroraTicket::
# 137 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_SHOWN_AURORA_TICKET
# 138 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_OhAuroraTicketTakeYouToBirthIsland
	return


VermilionCity_EventScript_HasMysticAndAuroraTickets::
# 143 "data/maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_ShowMysticTicket
# 144 "data/maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_ShowAuroraTicket
# 145 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 146 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 147 "data/maps/VermilionCity/scripts.pory"
	multichoice 13, 5, MULTICHOICE_SEVII_NAVEL_BIRTH, FALSE
# 148 "data/maps/VermilionCity/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 149 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_SeviiDestinationsPage1
# 150 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_SailToNavelRock
# 151 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_SailToBirthIsland
# 152 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 3, EventScript_CancelSail
# 153 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 127, EventScript_CancelSail
	end


EventScript_SailToNavelRock::
# 158 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Seagallop10Departing
# 159 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 160 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_NAVEL_ROCK
# 161 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SetSail
	end


EventScript_SailToBirthIsland::
# 166 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Seagallop12Departing
# 167 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 168 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_BIRTH_ISLAND
# 169 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SetSail
	end


VermilionCity_EventScript_ChooseSeagallopDestTriPass::
# 174 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopTriPass
# 175 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 176 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 177 "data/maps/VermilionCity/scripts.pory"
	multichoice 19, 5, MULTICHOICE_SEAGALLOP_123, FALSE
# 178 "data/maps/VermilionCity/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 179 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_SailToOneIsland2
# 180 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_SailToTwoIsland2
# 181 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_SailToThreeIsland2
# 182 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 3, EventScript_CancelSail
# 183 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_0x8000, 127, EventScript_CancelSail
	end


Vermilion_EventScript_Unused::
# 189 "data/maps/VermilionCity/scripts.pory"
	release
	end


VermilionCity_EventScript_CheckTicketLeft::
# 194 "data/maps/VermilionCity/scripts.pory"
	lockall
# 195 "data/maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
	end


VermilionCity_EventScript_CheckTicketRight::
# 200 "data/maps/VermilionCity/scripts.pory"
	lockall
# 201 "data/maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
	end


VermilionCity_EventScript_ExitedTicketCheck::
# 206 "data/maps/VermilionCity/scripts.pory"
	lockall
# 207 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
# 208 "data/maps/VermilionCity/scripts.pory"
	releaseall
	end


VermilionCity_EventScript_CheckTicket::
# 213 "data/maps/VermilionCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 214 "data/maps/VermilionCity/scripts.pory"
	applymovement LOCALID_VERMILION_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterLeft
# 215 "data/maps/VermilionCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 216 "data/maps/VermilionCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_CheckSeagallopPresentTrigger
# 218 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DoYouHaveATicket
# 219 "data/maps/VermilionCity/scripts.pory"
	goto_if_unset FLAG_GOT_SS_TICKET, VermilionCity_EventScript_DontHaveSSTicket
# 220 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_FlashedSSTicket
# 221 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 1
# 222 "data/maps/VermilionCity/scripts.pory"
	releaseall
	end


VermilionCity_EventScript_DontHaveSSTicket::
# 227 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DontHaveNeededSSTicket
# 228 "data/maps/VermilionCity/scripts.pory"
	closemessage
# 229 "data/maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
	end


VermilionCity_EventScript_CheckSeagallopPresentTrigger::
# 234 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 235 "data/maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, VermilionCity_EventScript_ChooseSeagallopDestRainbowPass
# 236 "data/maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1, VermilionCity_EventScript_ChooseSeagallopDestTriPass
# 237 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_TheShipSetSail
# 238 "data/maps/VermilionCity/scripts.pory"
	closemessage
# 239 "data/maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
	end


VermilionCity_EventScript_Sailor::
# 244 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_SSAnneVisitsOnceAYear, MSGBOX_NPC
	end


VermilionCity_EventScript_OaksAide::
# 249 "data/maps/VermilionCity/scripts.pory"
	lock
# 250 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 251 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION
# 252 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Route2AideHasPackageForYou
# 253 "data/maps/VermilionCity/scripts.pory"
	release
	end


VermilionCity_EventScript_OldMan2::
# 258 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_BuildingOnThisLand, MSGBOX_NPC
	end


VermilionCity_EventScript_Machop::
# 263 "data/maps/VermilionCity/scripts.pory"
	lock
# 264 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 265 "data/maps/VermilionCity/scripts.pory"
	waitse
# 266 "data/maps/VermilionCity/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
# 267 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Machop
# 268 "data/maps/VermilionCity/scripts.pory"
	waitmoncry
# 269 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_MachopStompingLandFlat
# 270 "data/maps/VermilionCity/scripts.pory"
	release
	end


VermilionCity_EventScript_CitySign::
# 275 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_CitySign, MSGBOX_SIGN
	end


VermilionCity_EventScript_SnorlaxNotice::
# 280 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_SnorlaxBlockingRoute12, MSGBOX_SIGN
	end


VermilionCity_EventScript_PokemonFanClubSign::
# 285 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_PokemonFanClubSign, MSGBOX_SIGN
	end


VermilionCity_EventScript_GymSign::
# 290 "data/maps/VermilionCity/scripts.pory"
	lockall
# 291 "data/maps/VermilionCity/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 0
# 292 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_GymSign
# 293 "data/maps/VermilionCity/scripts.pory"
	releaseall
	end


VermilionCity_EventScript_HarborSign::
# 298 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_VermilionHarbor, MSGBOX_SIGN
	end

