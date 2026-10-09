OneIsland_PokemonCenter_1F_MapScripts::
# 2 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_PokemonCenter_1F_OnTransition
# 3 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OneIsland_PokemonCenter_1F_OnLoad
# 5 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OneIsland_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene
	.2byte 0


OneIsland_PokemonCenter_1F_OnLoad::
# 11 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 12 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
	end


OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile::
# 17 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 13, 4, METATILE_PokemonCenter_NetworkMachine_Ruby, 1
	return


OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile::
# 22 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 16, 4, METATILE_PokemonCenter_NetworkMachine_Sapphire, 1
	return


OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn::
# 27 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 28 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 14, 4, METATILE_PokemonCenter_NetworkMachine_ScreenLeft_On, 1
# 29 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 15, 4, METATILE_PokemonCenter_NetworkMachine_ScreenRight_On, 1
	return


OneIsland_PokemonCenter_1F_OnTransition::
# 34 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ONE_ISLAND
# 35 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone
# 36 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos
# 37 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos
	end


OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone::
# 42 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7
	return


OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos::
# 47 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 9, 8
# 48 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_UP
# 49 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 15, 6
# 50 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_UP
	return


OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos::
# 55 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 14, 7
# 56 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_LEFT
# 57 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 14, 8
# 58 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_LEFT
	return


OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene::
# 63 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 64 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 65 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio
# 66 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio
# 67 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio
# 69 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 70 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 72 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_ExclamationMark
# 73 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 75 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 76 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_Delay48
# 77 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 78 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut
# 79 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing
# 80 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 81 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 82 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 83 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio
# 84 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterRight
# 85 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 86 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 87 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 88 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp
# 89 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp
# 90 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 91 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 92 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive
# 93 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed
# 94 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 95 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 96 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours
# 97 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 98 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterUp
# 99 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 100 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou
# 101 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 102 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 103 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 104 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 105 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer
# 106 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgreceiveditem OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill, ITEM_METEORITE, 1, MUS_OBTAIN_KEY_ITEM
# 107 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	additem ITEM_METEORITE
# 108 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 109 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 110 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis
# 111 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ObtainedTriPass, ITEM_TRI_PASS, 1, MUS_OBTAIN_KEY_ITEM
# 112 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands
# 113 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage
# 114 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap
# 115 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_123
# 116 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCatchYouLater
# 117 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 118 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterUp
# 119 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 120 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 121 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 122 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_PC_STORAGE_DISABLED
# 123 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
# 124 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
	end


OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp::
# 129 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp
	return


OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp::
# 134 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp
	return


OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage::
# 139 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 140 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 141 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap
# 142 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 143 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 144 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
	return


OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap::
# 149 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_TOWN_MAP
# 150 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 151 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ReceivedTownMap, ITEM_TOWN_MAP, 1, MUS_OBTAIN_KEY_ITEM
	return


# 155 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio::
# 156 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 157 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 158 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 159 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 160 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 161 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 162 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 163 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_up
# 164 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 167 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio::
# 168 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 169 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 170 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 171 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 172 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 173 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 174 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 175 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 176 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 180 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkUp:
# 181 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 182 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 186 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_StepAsideLeft::
# 187 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 188 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 189 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end

OneIsland_PokemonCenter_1F_EventScript_Nurse::
# 193 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 194 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 195 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 196 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_Bill::
# 201 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 202 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll
# 203 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis
# 204 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll::
# 209 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_FacePlayer
# 210 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 211 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore
# 212 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_Celio::
# 217 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 218 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 219 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7, OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact
# 220 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire
# 221 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_SAPPHIRE, OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire
# 222 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
# 223 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_GOT_RUBY, OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby
# 224 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby
# 225 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 226 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby
# 227 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3, OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex
# 228 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost
# 229 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 230 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FaceOriginalDirection
# 231 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 232 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact::
# 237 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou
# 238 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	random 3
# 239 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, OneIsland_PokemonCenter_1F_EventScript_BillFact1
# 240 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, OneIsland_PokemonCenter_1F_EventScript_BillFact2
# 241 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 5
# 242 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk
# 243 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_BillFact1::
# 248 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 3
# 249 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra
# 250 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_BillFact2::
# 255 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 4
# 256 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod
# 257 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire::
# 262 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck
# 263 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire::
# 268 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 269 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 270 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio
# 271 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 272 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 273 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 274 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_SAPPHIRE
# 275 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime
# 276 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 277 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 278 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 279 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 280 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 281 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 282 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OkayThisIsGood
# 283 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 284 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 60
# 285 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 286 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 287 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 30
# 288 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 289 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 290 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 40
# 291 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PC_ON
# 292 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 293 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 294 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette
# 295 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 296 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 297 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou
# 298 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special SetPostgameFlags
# 299 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_CAN_LINK_WITH_RS
# 300 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
# 301 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 302 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
# 303 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special InitRoamer
# 304 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass::
# 309 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands
# 310 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby::
# 315 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OhThats
# 316 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 317 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 318 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio
# 319 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 320 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 321 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 322 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 323 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 324 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 325 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 326 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 327 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 328 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 30
# 329 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 330 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 331 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor, MSGBOX_YESNO
# 332 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 333 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
	end


OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio::
# 338 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp, MSGBOX_YESNO
# 339 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 340 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
	end


OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass::
# 345 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands
# 346 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_RUBY
# 347 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_TRI_PASS
# 348 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
# 349 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	additem ITEM_RAINBOW_PASS
# 350 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_4567
# 351 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 352 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 353 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass
# 354 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 355 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 356 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 357 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage
# 358 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 359 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 360 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 361 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
	end


OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby::
# 366 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TryingToFindGem
# 367 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby::
# 372 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful
# 373 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 374 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 375 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway
# 376 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 377 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 378 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone
# 379 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1
# 380 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
# 381 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex::
# 386 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine
# 387 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


# 391 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine::
# 392 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 393 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 394 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 395 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 398 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine::
# 399 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_up
# 400 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 401 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 402 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 403 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 404 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end

OneIsland_PokemonCenter_1F_EventScript_LittleBoy::
# 408 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt, MSGBOX_NPC
	end


OneIsland_PokemonCenter_1F_EventScript_Hiker::
# 413 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland, MSGBOX_NPC
	end


OneIsland_PokemonCenter_1F_EventScript_CrushGirl::
# 418 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 419 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 420 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_CrushGirlHoennLinked
# 421 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend
# 422 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_CrushGirlHoennLinked::
# 427 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend
# 428 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
	end


OneIsland_PokemonCenter_1F_EventScript_NetworkMachine::
# 433 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 434 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn
# 435 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto
# 436 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment
# 437 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
	end


OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto::
# 442 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto
# 443 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
	end


OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn::
# 448 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn
# 449 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerTop::
# 454 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 455 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 456 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidTop::
# 461 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 462 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 463 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidBottom::
# 468 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 469 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 470 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerBottom::
# 475 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 476 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 4
# 477 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene::
# 482 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 483 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 484 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_ExclamationMark
# 485 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 486 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer
# 487 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 488 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop
# 489 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop
# 490 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom
# 491 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom
# 492 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 10
# 493 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeGotItDone
# 494 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 495 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 496 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick
# 497 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 498 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 499 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 500 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 501 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot
# 502 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe
# 503 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 504 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterLeft
# 505 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 506 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 10
# 507 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 508 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 509 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 15
# 510 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto
# 511 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 512 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
# 513 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 514 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 15
# 515 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 516 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 517 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 518 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 519 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime
# 520 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 521 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 25
# 522 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerExit
# 523 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_Movement_BillExit
# 524 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 525 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 526 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL
# 527 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
# 528 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 529 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 3
# 530 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 531 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_CINNABAR_ISLAND
# 532 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto EventScript_SetSail
	end


OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop::
# 537 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop
# 538 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
	return


OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop::
# 543 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop
# 544 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
	return


OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom::
# 549 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom
# 550 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
	return


OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom::
# 555 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom
# 556 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
	return


# 560 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop::
# 561 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 562 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 563 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 564 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 567 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop::
# 568 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 569 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 572 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom::
# 573 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 574 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 575 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 576 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 579 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom::
# 580 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 581 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 582 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 583 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 584 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 588 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_DelayWalkInPlaceLeft::
# 589 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 590 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 591 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_4
# 592 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_left
# 593 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 597 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkInPlaceDown::
# 598 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_fast_down
# 599 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 602 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerExit::
# 603 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 604 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 605 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 606 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 607 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 608 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 609 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end

# 612 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillExit::
# 613 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 614 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 615 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 616 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 617 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 618 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 619 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
