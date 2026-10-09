CinnabarIsland_PokemonLab_ExperimentRoom_MapScripts::
	.byte 0


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett::
# 8 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	lock
# 9 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	faceplayer
# 10 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SEEL
# 11 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 12 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_set FLAG_DID_SEELOR_TRADE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_AlreadyTraded
# 13 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 14 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineTrade
# 15 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 16 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineTrade
# 17 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 18 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NotRequestedMon
# 19 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_DoInGameTrade
# 20 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_HeyThanks
# 21 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setflag FLAG_DID_SEELOR_TRADE
# 22 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineTrade::
# 27 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_AwwOhWell
# 28 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NotRequestedMon::
# 33 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 34 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
# 35 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_AlreadyTraded::
# 40 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 41 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist::
# 46 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	lock
# 47 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	faceplayer
# 48 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, FALSE
# 49 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call_if_set FLAG_REVIVED_AMBER, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil
# 50 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_RevivedAllFossils
# 51 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 2, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon
# 52 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilStillReviving
# 53 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList
# 54 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix
# 55 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList
# 56 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome
# 57 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList
# 58 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber
# 59 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_HaveYouAFossilForMe
# 60 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList::
# 65 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_unset FLAG_GOT_HELIX_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 66 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_set FLAG_REVIVED_HELIX, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 67 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, TRUE
	return


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList::
# 72 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_unset FLAG_GOT_DOME_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 73 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_set FLAG_REVIVED_DOME, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 74 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, TRUE
	return


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList::
# 79 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_unset FLAG_GOT_OLD_AMBER, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 80 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_set FLAG_REVIVED_AMBER, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 81 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, TRUE
	return


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse::
# 86 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, FALSE
	return


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil::
# 91 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_NoIsTooBad
# 92 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix::
# 97 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_HaveYouAFossilForMe
# 98 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitmessage
# 99 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList
# 100 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber
# 101 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_HELIX, FALSE
# 102 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 103 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil
# 104 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 105 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome::
# 110 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_HaveYouAFossilForMe
# 111 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitmessage
# 112 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList
# 113 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber
# 114 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_DOME, FALSE
# 115 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 116 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil
# 117 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 118 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber::
# 123 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_HaveYouAFossilForMe
# 124 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitmessage
# 125 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_AMBER, FALSE
# 126 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 127 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber
# 128 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 129 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber::
# 134 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_HELIX_AMBER, FALSE
# 135 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 136 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil
# 137 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber
# 138 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 139 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber::
# 144 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	multichoice 0, 0, MULTICHOICE_DOME_AMBER, FALSE
# 145 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 146 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil
# 147 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber
# 148 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 149 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil::
# 154 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
# 155 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_HELIX_FOSSIL
# 156 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_ThatFossilIsOfMonMakeItLiveAgain, MSGBOX_YESNO
# 157 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineReviveFossil
# 158 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_HandedFossilToWeirdDoctor
# 159 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 160 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	removeitem ITEM_HELIX_FOSSIL
# 161 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalk
# 162 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1
# 163 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, 1
# 164 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil::
# 169 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
# 170 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_DOME_FOSSIL
# 171 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_ThatFossilIsOfMonMakeItLiveAgain, MSGBOX_YESNO
# 172 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineReviveFossil
# 173 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_HandedFossilToWeirdDoctor
# 174 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 175 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	removeitem ITEM_DOME_FOSSIL
# 176 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalk
# 177 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1
# 178 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, 2
# 179 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber::
# 184 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
# 185 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_OLD_AMBER
# 186 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_ThatFossilIsOfMonMakeItLiveAgain, MSGBOX_YESNO
# 187 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineReviveFossil
# 188 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_HandedFossilToWeirdDoctor
# 189 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 190 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	removeitem ITEM_OLD_AMBER
# 191 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalk
# 192 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1
# 193 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, 3
# 194 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineReviveFossil::
# 199 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_YouComeAgain
# 200 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilStillReviving::
# 205 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalk
# 206 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon::
# 211 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte
# 212 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, 2, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto
# 213 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, 3, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte::
# 218 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_OMANYTE
# 219 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
# 220 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_FossilMonBackToLife
# 221 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	givemon SPECIES_OMANYTE, 5
# 222 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 223 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setflag FLAG_REVIVED_HELIX
# 224 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty
# 225 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto::
# 230 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KABUTO
# 231 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
# 232 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_FossilMonBackToLife
# 233 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	givemon SPECIES_KABUTO, 5
# 234 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 235 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setflag FLAG_REVIVED_DOME
# 236 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty
# 237 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl::
# 242 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_AERODACTYL
# 243 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
# 244 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_FossilMonBackToLife
# 245 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	givemon SPECIES_AERODACTYL, 5
# 246 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 247 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setflag FLAG_REVIVED_AMBER
# 248 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty
# 249 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty::
# 254 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 255 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 256 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_ReceivedMonFromDoctor
# 257 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitmessage
# 258 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitfanfare
# 259 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 0
# 260 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 261 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_EndGiveMon
# 262 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 263 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_ChangePokemonNickname
# 264 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_EndGiveMon
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC::
# 269 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 270 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 271 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_ReceivedMonFromDoctor
# 272 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitmessage
# 273 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	waitfanfare
# 274 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 0
# 275 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 276 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_MonSentToPC
# 277 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 278 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_MonSentToPC
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_MonSentToPC::
# 283 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	call EventScript_TransferredToPC
# 284 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_EndGiveMon
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_EndGiveMon::
# 289 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_RevivedAllFossils::
# 294 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_YouComeAgain
# 295 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil::
# 300 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_set FLAG_GOT_HELIX_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedHelix
# 301 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_set FLAG_GOT_DOME_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedDome
# 302 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
	end


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedHelix::
# 307 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_unset FLAG_REVIVED_HELIX, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 308 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, TRUE
	return


CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedDome::
# 313 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	goto_if_unset FLAG_REVIVED_DOME, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 314 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom/scripts.pory"
	setvar VAR_RESULT, TRUE
	return

