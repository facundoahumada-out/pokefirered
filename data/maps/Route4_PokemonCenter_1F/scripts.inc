Route4_PokemonCenter_1F_MapScripts::
# 4 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_PokemonCenter_1F_OnTransition
# 5 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Route4_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F
# 10 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE4
	end


Route4_PokemonCenter_1F_EventScript_Boy::
# 15 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_CanHaveSixMonsWithYou, MSGBOX_NPC
	end


Route4_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 21 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_TeamRocketAttacksCerulean
# 22 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
	end


Route4_PokemonCenter_1F_EventScript_MagikarpSalesman::
# 27 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 28 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	faceplayer
# 29 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BOUGHT_MAGIKARP, Route4_PokemonCenter_1F_EventScript_AlreadyBoughtMagikarp
# 30 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 31 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 32 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpMale
# 33 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpFemale
	end


Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpMale::
# 38 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_LaddieBuyMagikarpForJust500, MSGBOX_YESNO
# 39 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp
	end


Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpFemale::
# 44 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_SweetieBuyMagikarpForJust500, MSGBOX_YESNO
# 45 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp
	end


Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp::
# 50 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route4_PokemonCenter_1F_EventScript_DeclineMagikarp
# 51 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	checkmoney 500
# 52 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route4_PokemonCenter_1F_EventScript_NotEnoughMoney
# 53 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 54 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MAGIKARP
# 55 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_MAGIKARP, 5
# 56 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty
# 57 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC
# 58 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 2, Route4_PokemonCenter_1F_EventScript_NoRoomForMagikarp
	end


Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty::
# 63 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call Route4_PokemonCenter_1F_EventScript_PayForMagikarp
# 64 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 65 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp
# 66 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 67 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 68 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 69 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	special ChangePokemonNickname
# 70 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	waitstate
# 71 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
	end


Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC::
# 76 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call Route4_PokemonCenter_1F_EventScript_PayForMagikarp
# 77 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 78 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route4_PokemonCenter_1F_EventScript_TransferMagikarpCloseMoneyBox
# 79 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 81 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	special ChangeBoxPokemonNickname
# 82 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	waitstate
# 83 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 84 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	faceplayer
# 85 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TransferMagikarp
	end


Route4_PokemonCenter_1F_EventScript_TransferMagikarpCloseMoneyBox::
# 90 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call EventScript_TransferredToPC
# 91 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp
	end


Route4_PokemonCenter_1F_EventScript_TransferMagikarp::
# 96 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call EventScript_TransferredToPC
# 97 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
	end


Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp::
# 102 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 103 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
	end


Route4_PokemonCenter_1F_EventScript_BoughtMagikarp::
# 108 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	setflag FLAG_BOUGHT_MAGIKARP
# 109 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
	end


Route4_PokemonCenter_1F_EventScript_PayForMagikarp::
# 114 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	removemoney 500
# 115 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 116 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 117 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	message Route4_PokemonCenter_1F_Text_PaidOutrageouslyForMagikarp
# 118 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	waitmessage
# 119 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 120 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGIKARP
	return


Route4_PokemonCenter_1F_EventScript_DeclineMagikarp::
# 125 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_OnlyDoingThisAsFavorToYou
# 126 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 127 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
	end


Route4_PokemonCenter_1F_EventScript_NotEnoughMoney::
# 132 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_YoullNeedMoreMoney
# 133 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 134 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
	end


Route4_PokemonCenter_1F_EventScript_AlreadyBoughtMagikarp::
# 139 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_IDontGiveRefunds
# 140 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
	end


Route4_PokemonCenter_1F_EventScript_NoRoomForMagikarp::
# 145 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 146 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_NoRoomForMorePokemon
# 147 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 148 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
	end


Route4_PokemonCenter_1F_EventScript_Nurse::
# 153 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 154 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	faceplayer
# 155 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 156 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
	end


Route4_PokemonCenter_1F_EventScript_Youngster::
# 161 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_ShouldStoreMonsUsingPC, MSGBOX_NPC
	end


Route4_PokemonCenter_1F_EventScript_Newspaper::
# 166 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 167 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_ItsANewspaper
# 168 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
	end

