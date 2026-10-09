CeladonCity_GameCorner_MapScripts::
# 2 "data/maps/CeladonCity_GameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CeladonCity_GameCorner_OnLoad
	.byte 0


CeladonCity_GameCorner_OnLoad::
# 6 "data/maps/CeladonCity_GameCorner/scripts.pory"
	call_if_unset FLAG_OPENED_ROCKET_HIDEOUT, CeladonCity_GameCorner_EventScript_HideRocketHideout
	end


CeladonCity_GameCorner_EventScript_HideRocketHideout::
# 11 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 15, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 12 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 16, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 13 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 17, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 14 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 16, 3, METATILE_GameCorner_PurpleWall_Floor, 1
# 15 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 17, 3, METATILE_GameCorner_PurpleWall_Floor, 1
	return


CeladonCity_GameCorner_EventScript_InfoClerk::
# 20 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CanExchangeCoinsNextDoor, MSGBOX_NPC
	end


CeladonCity_GameCorner_EventScript_CoinsClerk::
# 25 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 26 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 27 "data/maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 28 "data/maps/CeladonCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 29 "data/maps/CeladonCity_GameCorner/scripts.pory"
	showcoinsbox 0, 5
# 30 "data/maps/CeladonCity_GameCorner/scripts.pory"
	message CeladonCity_GameCorner_Text_WelcomeBuySomeCoins
# 31 "data/maps/CeladonCity_GameCorner/scripts.pory"
	waitmessage
# 32 "data/maps/CeladonCity_GameCorner/scripts.pory"
	multichoice 13, 0, MULTICHOICE_GAME_CORNER_COIN_PURCHASE_COUNTER, FALSE
# 33 "data/maps/CeladonCity_GameCorner/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 34 "data/maps/CeladonCity_GameCorner/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 35 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_GameCorner_EventScript_BuyCoins
# 36 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_GameCorner_EventScript_BuyCoins
# 37 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_GameCorner_EventScript_ClerkDeclineBuy
# 38 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_GameCorner_EventScript_ClerkDeclineBuy
	end


CeladonCity_GameCorner_EventScript_BuyCoins::
# 43 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_ClerkNoCoinCase
# 44 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_0x8009, 0, CeladonCity_GameCorner_EventScript_Buy50Coins
# 45 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_0x8009, 1, CeladonCity_GameCorner_EventScript_Buy500Coins
	end


CeladonCity_GameCorner_EventScript_Buy500Coins::
# 50 "data/maps/CeladonCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 51 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 500, CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins
# 52 "data/maps/CeladonCity_GameCorner/scripts.pory"
	checkmoney 10000
# 53 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney
# 54 "data/maps/CeladonCity_GameCorner/scripts.pory"
	addcoins 500
# 55 "data/maps/CeladonCity_GameCorner/scripts.pory"
	removemoney 10000
# 56 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BoughtCoins
	end


CeladonCity_GameCorner_EventScript_Buy50Coins::
# 61 "data/maps/CeladonCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 62 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 50, CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins
# 63 "data/maps/CeladonCity_GameCorner/scripts.pory"
	checkmoney 1000
# 64 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney
# 65 "data/maps/CeladonCity_GameCorner/scripts.pory"
	addcoins 50
# 66 "data/maps/CeladonCity_GameCorner/scripts.pory"
	removemoney 1000
# 67 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BoughtCoins
	end


CeladonCity_GameCorner_EventScript_BoughtCoins::
# 72 "data/maps/CeladonCity_GameCorner/scripts.pory"
	updatemoneybox
# 73 "data/maps/CeladonCity_GameCorner/scripts.pory"
	updatecoinsbox 0, 5
# 74 "data/maps/CeladonCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 75 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_HereAreYourCoins
# 76 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
	end


CeladonCity_GameCorner_EventScript_ClerkEnd::
# 81 "data/maps/CeladonCity_GameCorner/scripts.pory"
	hidemoneybox
# 82 "data/maps/CeladonCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 83 "data/maps/CeladonCity_GameCorner/scripts.pory"
	release
	end


CeladonCity_GameCorner_EventScript_ClerkDeclineBuy::
# 88 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_ComePlaySometime
# 89 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
	end


CeladonCity_GameCorner_EventScript_ClerkNoCoinCase::
# 94 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SorryDontHaveCoinCase
# 95 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
	end


CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins::
# 100 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CoinCaseIsFull
# 101 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
	end


CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney::
# 106 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CantAffordCoins
# 107 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
	end


CeladonCity_GameCorner_EventScript_BaldingMan::
# 112 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 113 "data/maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 114 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_RumoredTeamRocketRunsThisPlace
# 115 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_FaceSlotMachine::
# 120 "data/maps/CeladonCity_GameCorner/scripts.pory"
	closemessage
# 121 "data/maps/CeladonCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 122 "data/maps/CeladonCity_GameCorner/scripts.pory"
	waitmovement 0
# 123 "data/maps/CeladonCity_GameCorner/scripts.pory"
	release
	end


CeladonCity_GameCorner_EventScript_Woman1::
# 128 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 129 "data/maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 130 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_ThinkMachinesHaveDifferentOdds
# 131 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_Fisher::
# 136 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 137 "data/maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 138 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_set FLAG_GOT_10_COINS_FROM_GAMBLER, CeladonCity_GameCorner_EventScript_FisherAlreadyGotCoins
# 139 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DoYouWantToPlay
# 140 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
# 141 "data/maps/CeladonCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 142 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 10, CeladonCity_GameCorner_EventScript_FisherNoRoomForCoins
# 143 "data/maps/CeladonCity_GameCorner/scripts.pory"
	addcoins 10
# 144 "data/maps/CeladonCity_GameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 145 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received10CoinsFromMan
# 146 "data/maps/CeladonCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 147 "data/maps/CeladonCity_GameCorner/scripts.pory"
	waitse
# 148 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setflag FLAG_GOT_10_COINS_FROM_GAMBLER
# 149 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_FisherNoRoomForCoins::
# 154 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DontNeedMyCoins
# 155 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_GamblerNoCoinCase::
# 160 "data/maps/CeladonCity_GameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 161 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DontHaveCoinCase
# 162 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_FisherAlreadyGotCoins::
# 167 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WinsComeAndGo
# 168 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_GymGuy::
# 173 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 174 "data/maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 175 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_set FLAG_DEFEATED_ERIKA, CeladonCity_GameCorner_EventScript_GymGuyPostVictory
# 176 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GymGuyAdvice
# 177 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_GymGuyPostVictory::
# 182 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_RareMonsForCoins
# 183 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_Woman2::
# 188 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 189 "data/maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 190 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WinOrLoseItsOnlyLuck
# 191 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_OldMan::
# 196 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 197 "data/maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 198 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SoEasyToGetHooked
# 199 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_Scientist::
# 204 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 205 "data/maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 206 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_set FLAG_GOT_20_COINS_FROM_GAMBLER, CeladonCity_GameCorner_EventScript_ScientistAlreadyGotCoins
# 207 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WantSomeCoins
# 208 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
# 209 "data/maps/CeladonCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 210 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 20, CeladonCity_GameCorner_EventScript_ScientistNoRoomForCoins
# 211 "data/maps/CeladonCity_GameCorner/scripts.pory"
	addcoins 20
# 212 "data/maps/CeladonCity_GameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 213 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received20CoinsFromNiceGuy
# 214 "data/maps/CeladonCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 215 "data/maps/CeladonCity_GameCorner/scripts.pory"
	waitse
# 216 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setflag FLAG_GOT_20_COINS_FROM_GAMBLER
# 217 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_ScientistNoRoomForCoins::
# 222 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_YouHaveLotsOfCoins
# 223 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_ScientistAlreadyGotCoins::
# 228 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_NeedMoreCoinsForMonIWant
# 229 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_Gentleman::
# 234 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lock
# 235 "data/maps/CeladonCity_GameCorner/scripts.pory"
	faceplayer
# 236 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_set FLAG_GOT_20_COINS_FROM_GAMBLER_2, CeladonCity_GameCorner_EventScript_GentlemanAlreadyGotCoins
# 237 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_HereAreSomeCoinsShoo
# 238 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
# 239 "data/maps/CeladonCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 240 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 20, CeladonCity_GameCorner_EventScript_GentlemanNoRoomForCoins
# 241 "data/maps/CeladonCity_GameCorner/scripts.pory"
	addcoins 20
# 242 "data/maps/CeladonCity_GameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 243 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received20CoinsFromMan
# 244 "data/maps/CeladonCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 245 "data/maps/CeladonCity_GameCorner/scripts.pory"
	waitse
# 246 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setflag FLAG_GOT_20_COINS_FROM_GAMBLER_2
# 247 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_GentlemanNoRoomForCoins::
# 252 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_YouveGotPlentyCoins
# 253 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_GentlemanAlreadyGotCoins::
# 258 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WatchReelsClosely
# 259 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine0::
# 264 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 265 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 266 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_DontPlaySlotMachine::
# 271 "data/maps/CeladonCity_GameCorner/scripts.pory"
	releaseall
	end


# 275 "data/maps/CeladonCity_GameCorner/scripts.pory"

# 276 "data/maps/CeladonCity_GameCorner/scripts.pory"

# 277 "data/maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine::
# 278 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_SlotMachineNoCoinCase
# 279 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SlotMachineWantToPlay, MSGBOX_YESNO
# 280 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_EventScript_DontPlaySlotMachine
# 281 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setfieldeffectargument 0, LOCALID_PLAYER
# 282 "data/maps/CeladonCity_GameCorner/scripts.pory"
.ifdef BUGFIX
# 283 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setfieldeffectargument 1, MAP_NUM(MAP_CELADON_CITY_GAME_CORNER)
# 284 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP(MAP_CELADON_CITY_GAME_CORNER)
# 285 "data/maps/CeladonCity_GameCorner/scripts.pory"
.else
# 286 "data/maps/CeladonCity_GameCorner/scripts.pory"
	@ Map num/group were provided in the wrong order
# 287 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setfieldeffectargument 1, MAP_GROUP(MAP_CELADON_CITY_GAME_CORNER)
# 288 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setfieldeffectargument 2, MAP_NUM(MAP_CELADON_CITY_GAME_CORNER)
# 289 "data/maps/CeladonCity_GameCorner/scripts.pory"
.endif
# 290 "data/maps/CeladonCity_GameCorner/scripts.pory"
	dofieldeffect FLDEFF_SMILEY_FACE_ICON
# 291 "data/maps/CeladonCity_GameCorner/scripts.pory"
	waitfieldeffect FLDEFF_SMILEY_FACE_ICON
# 292 "data/maps/CeladonCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetRandomSlotMachineId
# 293 "data/maps/CeladonCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 294 "data/maps/CeladonCity_GameCorner/scripts.pory"
	releaseall
# 295 "data/maps/CeladonCity_GameCorner/scripts.pory"
	end

CeladonCity_GameCorner_EventScript_SlotMachine1::
# 299 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 300 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 301 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine2::
# 306 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 307 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 308 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine3::
# 313 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 314 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 315 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine4::
# 320 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 321 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 322 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine5::
# 327 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 328 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 329 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine6::
# 334 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 335 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 336 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine7::
# 341 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 342 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 343 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine8::
# 348 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 349 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 350 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine9::
# 355 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 356 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 357 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine10::
# 362 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 363 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 364 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine11::
# 369 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 370 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 371 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine12::
# 376 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 377 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 12
# 378 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine13::
# 383 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 384 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 13
# 385 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine14::
# 390 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 391 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 14
# 392 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine15::
# 397 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 398 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 15
# 399 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine16::
# 404 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 405 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 16
# 406 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine17::
# 411 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 412 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 17
# 413 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine18::
# 418 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 419 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 18
# 420 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine19::
# 425 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 426 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 19
# 427 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine20::
# 432 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 433 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 20
# 434 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine21::
# 439 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 440 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 21
# 441 "data/maps/CeladonCity_GameCorner/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachineNoCoinCase::
# 446 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CoinCaseIsRequired
# 447 "data/maps/CeladonCity_GameCorner/scripts.pory"
	releaseall
	end


CeladonCity_GameCorner_EventScript_Poster::
# 452 "data/maps/CeladonCity_GameCorner/scripts.pory"
	lockall
# 453 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SwitchBehindPosterPushIt
# 454 "data/maps/CeladonCity_GameCorner/scripts.pory"
	call_if_unset FLAG_OPENED_ROCKET_HIDEOUT, CeladonCity_GameCorner_EventScript_OpenRocketHideout
# 455 "data/maps/CeladonCity_GameCorner/scripts.pory"
	releaseall
	end


CeladonCity_GameCorner_EventScript_OpenRocketHideout::
# 460 "data/maps/CeladonCity_GameCorner/scripts.pory"
	playse SE_UNLOCK
# 461 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 15, 2, METATILE_GameCorner_Floor_StairsTop, 0
# 462 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 16, 2, METATILE_GameCorner_StairsTop, 1
# 463 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 17, 2, METATILE_GameCorner_StairsBottom, 1
# 464 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 16, 3, METATILE_GameCorner_PurpleWall_StairsTop, 1
# 465 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setmetatile 17, 3, METATILE_GameCorner_PurpleWall_stairsBottom, 1
# 466 "data/maps/CeladonCity_GameCorner/scripts.pory"
	special DrawWholeMapView
# 467 "data/maps/CeladonCity_GameCorner/scripts.pory"
	setflag FLAG_OPENED_ROCKET_HIDEOUT
	return


CeladonCity_GameCorner_EventScript_RocketGrunt::
# 472 "data/maps/CeladonCity_GameCorner/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_7, CeladonCity_GameCorner_Text_GruntIntro, CeladonCity_GameCorner_Text_GruntDefeat, CeladonCity_GameCorner_Text_DefeatedGrunt
# 473 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_GameCorner_Text_DefeatedGrunt::
# 478 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GruntPostBattle
# 479 "data/maps/CeladonCity_GameCorner/scripts.pory"
	closemessage
# 480 "data/maps/CeladonCity_GameCorner/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, CeladonCity_GameCorner_Text_GruntExitWest
# 481 "data/maps/CeladonCity_GameCorner/scripts.pory"
	call_if_ne VAR_FACING, DIR_WEST, CeladonCity_GameCorner_Text_GruntExit
# 482 "data/maps/CeladonCity_GameCorner/scripts.pory"
	removeobject LOCALID_GAME_CORNER_GRUNT
# 483 "data/maps/CeladonCity_GameCorner/scripts.pory"
	release
	end


CeladonCity_GameCorner_Text_GruntExitWest::
# 488 "data/maps/CeladonCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAME_CORNER_GRUNT, CeladonCity_GameCorner_Movement_GruntExitWest
# 489 "data/maps/CeladonCity_GameCorner/scripts.pory"
	waitmovement 0
	return


CeladonCity_GameCorner_Text_GruntExit::
# 494 "data/maps/CeladonCity_GameCorner/scripts.pory"
	applymovement LOCALID_GAME_CORNER_GRUNT, CeladonCity_GameCorner_Movement_GruntExit
# 495 "data/maps/CeladonCity_GameCorner/scripts.pory"
	waitmovement 0
	return


# 499 "data/maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_Movement_GruntExitWest::
# 500 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_down
# 501 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 502 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 503 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_up
# 504 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 505 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 506 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 507 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 508 "data/maps/CeladonCity_GameCorner/scripts.pory"
	step_end

# 511 "data/maps/CeladonCity_GameCorner/scripts.pory"
CeladonCity_GameCorner_Movement_GruntExit::
# 512 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 513 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 514 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 515 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 516 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 517 "data/maps/CeladonCity_GameCorner/scripts.pory"
	walk_right
# 518 "data/maps/CeladonCity_GameCorner/scripts.pory"
	step_end

CeladonCity_GameCorner_EventScript_UnusableSlotMachine1::
# 522 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_OutOfOrder, MSGBOX_SIGN
	end


CeladonCity_GameCorner_EventScript_UnusableSlotMachine2::
# 527 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_OutToLunch, MSGBOX_SIGN
	end


CeladonCity_GameCorner_EventScript_UnusableSlotMachine3::
# 532 "data/maps/CeladonCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SomeonesKeys, MSGBOX_SIGN
	end

