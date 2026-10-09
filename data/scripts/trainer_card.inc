CeladonCity_GameCorner_EventScript_PhotoPrinter::
# 2 "data/scripts/trainer_card.pory"
	lockall
# 3 "data/scripts/trainer_card.pory"
	showmoneybox 0, 0
# 4 "data/scripts/trainer_card.pory"
	msgbox CeladonCity_GameCorner_Text_TryPokemonPrinter, MSGBOX_YESNO
# 5 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_EventScript_DeclinePhoto
# 6 "data/scripts/trainer_card.pory"
	checkmoney 50
# 7 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_GameCorner_EventScript_NotEnoughMoneyForPhoto
# 8 "data/scripts/trainer_card.pory"
	playse SE_SHOP
# 9 "data/scripts/trainer_card.pory"
	removemoney 50
# 10 "data/scripts/trainer_card.pory"
	updatemoneybox
# 11 "data/scripts/trainer_card.pory"
	waitse
# 12 "data/scripts/trainer_card.pory"
	message CeladonCity_GameCorner_Text_ChoosePrintType
# 13 "data/scripts/trainer_card.pory"
	waitmessage
# 14 "data/scripts/trainer_card.pory"
	multichoice 21, 0, MULTICHOICE_TRAINER_CARD_ICON_TINT, TRUE
# 15 "data/scripts/trainer_card.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 16 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_GameCorner_EventScript_PrintTypeNormal
# 17 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_GameCorner_EventScript_PrintTypeBlack
# 18 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_GameCorner_EventScript_PrintTypePink
# 19 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 3, CeladonCity_GameCorner_EventScript_PrintTypeSepia
	end


CeladonCity_GameCorner_EventScript_PrintTypeNormal::
# 24 "data/scripts/trainer_card.pory"
	setvar VAR_0x8004, MON_ICON_TINT_NORMAL
# 25 "data/scripts/trainer_card.pory"
	goto CeladonCity_GameCorner_EventScript_PrintPhoto
	end


CeladonCity_GameCorner_EventScript_PrintTypeBlack::
# 30 "data/scripts/trainer_card.pory"
	setvar VAR_0x8004, MON_ICON_TINT_BLACK
# 31 "data/scripts/trainer_card.pory"
	goto CeladonCity_GameCorner_EventScript_PrintPhoto
	end


CeladonCity_GameCorner_EventScript_PrintTypePink::
# 36 "data/scripts/trainer_card.pory"
	setvar VAR_0x8004, MON_ICON_TINT_PINK
# 37 "data/scripts/trainer_card.pory"
	goto CeladonCity_GameCorner_EventScript_PrintPhoto
	end


CeladonCity_GameCorner_EventScript_PrintTypeSepia::
# 42 "data/scripts/trainer_card.pory"
	setvar VAR_0x8004, MON_ICON_TINT_SEPIA
# 43 "data/scripts/trainer_card.pory"
	goto CeladonCity_GameCorner_EventScript_PrintPhoto
	end


CeladonCity_GameCorner_EventScript_PrintPhoto::
# 48 "data/scripts/trainer_card.pory"
	message CeladonCity_GameCorner_Text_BigSmileForPhoto
# 49 "data/scripts/trainer_card.pory"
	waitmessage
# 50 "data/scripts/trainer_card.pory"
	playse MUS_PHOTO
# 51 "data/scripts/trainer_card.pory"
	dofieldeffect FLDEFF_PHOTO_FLASH
# 52 "data/scripts/trainer_card.pory"
	delay 60
# 53 "data/scripts/trainer_card.pory"
	special UpdateTrainerCardPhotoIcons
# 54 "data/scripts/trainer_card.pory"
	msgbox CeladonCity_GameCorner_Text_PrintIsReadyCheckTrainerCard
# 55 "data/scripts/trainer_card.pory"
	hidemoneybox
# 56 "data/scripts/trainer_card.pory"
	releaseall
	end


CeladonCity_GameCorner_EventScript_DeclinePhoto::
# 61 "data/scripts/trainer_card.pory"
	hidemoneybox
# 62 "data/scripts/trainer_card.pory"
	releaseall
	end


CeladonCity_GameCorner_EventScript_NotEnoughMoneyForPhoto::
# 67 "data/scripts/trainer_card.pory"
	msgbox CeladonCity_GameCorner_Text_DontHaveEnoughMoney
# 68 "data/scripts/trainer_card.pory"
	hidemoneybox
# 69 "data/scripts/trainer_card.pory"
	releaseall
	end


FourIsland_House2_EventScript_StickerMan::
# 74 "data/scripts/trainer_card.pory"
	lock
# 75 "data/scripts/trainer_card.pory"
	specialvar VAR_0x8008, StickerManGetBragFlags
# 76 "data/scripts/trainer_card.pory"
	goto_if_unset FLAG_MET_STICKER_MAN, FourIsland_House2_EventScript_MeetStickerMan
# 77 "data/scripts/trainer_card.pory"
	goto_if_set FLAG_MET_STICKER_MAN, FourIsland_House2_EventScript_StickerManAskForBrag
	end


FourIsland_House2_EventScript_MeetStickerMan::
# 82 "data/scripts/trainer_card.pory"
	setflag FLAG_MET_STICKER_MAN
# 83 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_WishICouldShowOffStickers
# 84 "data/scripts/trainer_card.pory"
	applymovement LOCALID_STICKER_MAN, Common_Movement_FacePlayer
# 85 "data/scripts/trainer_card.pory"
	waitmovement 0
# 86 "data/scripts/trainer_card.pory"
	playse SE_PIN
# 87 "data/scripts/trainer_card.pory"
	applymovement LOCALID_STICKER_MAN, Common_Movement_ExclamationMark
# 88 "data/scripts/trainer_card.pory"
	waitmovement 0
# 89 "data/scripts/trainer_card.pory"
	applymovement LOCALID_STICKER_MAN, Common_Movement_Delay48
# 90 "data/scripts/trainer_card.pory"
	waitmovement 0
# 91 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8008, 0, FourIsland_House2_EventScript_StickerManNothingToBrag
# 92 "data/scripts/trainer_card.pory"
	message FourIsland_House2_Text_GiveYouStickerIfYouBrag
# 93 "data/scripts/trainer_card.pory"
	waitmessage
# 94 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_ChooseBrag
	end


FourIsland_House2_EventScript_StickerManAskForBrag::
# 99 "data/scripts/trainer_card.pory"
	applymovement LOCALID_STICKER_MAN, Common_Movement_FacePlayer
# 100 "data/scripts/trainer_card.pory"
	waitmovement 0
# 101 "data/scripts/trainer_card.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 102 "data/scripts/trainer_card.pory"
	special QuestLog_CutRecording
# 103 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8008, 0, FourIsland_House2_EventScript_NothingToBragAbout
# 104 "data/scripts/trainer_card.pory"
	message FourIsland_House2_Text_BragAboutWhatToday
# 105 "data/scripts/trainer_card.pory"
	waitmessage
# 106 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_ChooseBrag
	end


FourIsland_House2_EventScript_NothingToBragAbout::
# 111 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_BragAboutSomethingForMe
# 112 "data/scripts/trainer_card.pory"
	release
	end


FourIsland_House2_EventScript_ChooseBrag::
# 117 "data/scripts/trainer_card.pory"
	copyvar VAR_0x8000, VAR_0x8008
# 118 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 1, FourIsland_House2_EventScript_ChooseBragHoF
# 119 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 2, FourIsland_House2_EventScript_ChooseBragEggs
# 120 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 4, FourIsland_House2_EventScript_ChooseBragLinkWins
# 121 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 3, FourIsland_House2_EventScript_ChooseBragHoFEggs
# 122 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 5, FourIsland_House2_EventScript_ChooseBragHoFLinkWins
# 123 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 6, FourIsland_House2_EventScript_ChooseBragEggsLinkWins
# 124 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 7, FourIsland_House2_EventScript_ChooseBragHofEggsLinkWins
	end


FourIsland_House2_EventScript_ChooseBragHoF::
# 129 "data/scripts/trainer_card.pory"
	multichoice 15, 8, MULTICHOICE_HOF_QUIT, FALSE
# 130 "data/scripts/trainer_card.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 131 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 0, FourIsland_House2_EventScript_BragHoF
# 132 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 1, FourIsland_House2_EventScript_QuitBrag
# 133 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, FourIsland_House2_EventScript_QuitBrag
	end


FourIsland_House2_EventScript_ChooseBragEggs::
# 138 "data/scripts/trainer_card.pory"
	multichoice 16, 8, MULTICHOICE_EGGS_QUIT, FALSE
# 139 "data/scripts/trainer_card.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 140 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 0, FourIsland_House2_EventScript_BragEggs
# 141 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 1, FourIsland_House2_EventScript_QuitBrag
# 142 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, FourIsland_House2_EventScript_QuitBrag
	end


FourIsland_House2_EventScript_ChooseBragLinkWins::
# 147 "data/scripts/trainer_card.pory"
	multichoice 15, 8, MULTICHOICE_VICTORIES_QUIT, FALSE
# 148 "data/scripts/trainer_card.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 149 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 0, FourIsland_House2_EventScript_BragLinkWins
# 150 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 1, FourIsland_House2_EventScript_QuitBrag
# 151 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, FourIsland_House2_EventScript_QuitBrag
	end


FourIsland_House2_EventScript_ChooseBragHoFEggs::
# 156 "data/scripts/trainer_card.pory"
	multichoice 15, 6, MULTICHOICE_HOF_EGGS_QUIT, FALSE
# 157 "data/scripts/trainer_card.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 158 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 0, FourIsland_House2_EventScript_BragHoF
# 159 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 1, FourIsland_House2_EventScript_BragEggs
# 160 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 2, FourIsland_House2_EventScript_QuitBrag
# 161 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, FourIsland_House2_EventScript_QuitBrag
	end


FourIsland_House2_EventScript_ChooseBragHoFLinkWins::
# 166 "data/scripts/trainer_card.pory"
	multichoice 15, 6, MULTICHOICE_HOF_VICTORIES_QUIT, FALSE
# 167 "data/scripts/trainer_card.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 168 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 0, FourIsland_House2_EventScript_BragHoF
# 169 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 1, FourIsland_House2_EventScript_BragLinkWins
# 170 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 2, FourIsland_House2_EventScript_QuitBrag
# 171 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, FourIsland_House2_EventScript_QuitBrag
	end


FourIsland_House2_EventScript_ChooseBragEggsLinkWins::
# 176 "data/scripts/trainer_card.pory"
	multichoice 15, 6, MULTICHOICE_EGGS_VICTORIES_QUIT, FALSE
# 177 "data/scripts/trainer_card.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 178 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 0, FourIsland_House2_EventScript_BragEggs
# 179 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 1, FourIsland_House2_EventScript_BragLinkWins
# 180 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 2, FourIsland_House2_EventScript_QuitBrag
# 181 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, FourIsland_House2_EventScript_QuitBrag
	end


FourIsland_House2_EventScript_ChooseBragHofEggsLinkWins::
# 186 "data/scripts/trainer_card.pory"
	multichoice 15, 5, MULTICHOICE_HOF_EGGS_VICTORIES_QUIT, FALSE
# 187 "data/scripts/trainer_card.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 188 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 0, FourIsland_House2_EventScript_BragHoF
# 189 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 1, FourIsland_House2_EventScript_BragEggs
# 190 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 2, FourIsland_House2_EventScript_BragLinkWins
# 191 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, 3, FourIsland_House2_EventScript_QuitBrag
# 192 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, FourIsland_House2_EventScript_QuitBrag
	end


FourIsland_House2_EventScript_StickerManNothingToBrag::
# 197 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_GiveYouStickerIfYouBrag
# 198 "data/scripts/trainer_card.pory"
	release
	end


FourIsland_House2_EventScript_BragHoF::
# 203 "data/scripts/trainer_card.pory"
	goto_if_le VAR_0x8004, 39, FourIsland_House2_EventScript_BragHoFLowest
# 204 "data/scripts/trainer_card.pory"
	goto_if_le VAR_0x8004, 99, FourIsland_House2_EventScript_BragHoFLow
# 205 "data/scripts/trainer_card.pory"
	goto_if_le VAR_0x8004, 199, FourIsland_House2_EventScript_BragHoFHigh
# 206 "data/scripts/trainer_card.pory"
	goto_if_ge VAR_0x8004, 200, FourIsland_House2_EventScript_BragHoFHighest
	end


FourIsland_House2_EventScript_BragHoFLowest::
# 211 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_HOF_BRAG_STATE, 1, FourIsland_House2_EventScript_AlreadyBraggedHoF
# 212 "data/scripts/trainer_card.pory"
	setvar VAR_HOF_BRAG_STATE, 1
# 213 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_WowHoFLowest
# 214 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_BraggedHoF
	end


FourIsland_House2_EventScript_BragHoFLow::
# 219 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_HOF_BRAG_STATE, 2, FourIsland_House2_EventScript_AlreadyBraggedHoF
# 220 "data/scripts/trainer_card.pory"
	setvar VAR_HOF_BRAG_STATE, 2
# 221 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_WowHoFLow
# 222 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_BraggedHoF
	end


FourIsland_House2_EventScript_BragHoFHigh::
# 227 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_HOF_BRAG_STATE, 3, FourIsland_House2_EventScript_AlreadyBraggedHoF
# 228 "data/scripts/trainer_card.pory"
	setvar VAR_HOF_BRAG_STATE, 3
# 229 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_WowHoFHigh
# 230 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_BraggedHoF
	end


FourIsland_House2_EventScript_BragHoFHighest::
# 235 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_HOF_BRAG_STATE, 4, FourIsland_House2_EventScript_AlreadyBraggedHoFMax
# 236 "data/scripts/trainer_card.pory"
	setvar VAR_HOF_BRAG_STATE, 4
# 237 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_WowHoFHighest
# 238 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_BraggedHoF
	end


FourIsland_House2_EventScript_AlreadyBraggedHoF::
# 243 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_ComeBackWithBetterStoryHoF
# 244 "data/scripts/trainer_card.pory"
	release
	end


FourIsland_House2_EventScript_AlreadyBraggedHoFMax::
# 249 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_LivingLegendHoF
# 250 "data/scripts/trainer_card.pory"
	release
	end


FourIsland_House2_EventScript_BraggedHoF::
# 255 "data/scripts/trainer_card.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 256 "data/scripts/trainer_card.pory"
	playfanfare MUS_LEVEL_UP
# 257 "data/scripts/trainer_card.pory"
	message FourIsland_House2_Text_HoFStickerApplied
# 258 "data/scripts/trainer_card.pory"
	waitmessage
# 259 "data/scripts/trainer_card.pory"
	waitfanfare
# 260 "data/scripts/trainer_card.pory"
	delay 90
# 261 "data/scripts/trainer_card.pory"
	release
	end


FourIsland_House2_EventScript_BragEggs::
# 266 "data/scripts/trainer_card.pory"
	goto_if_le VAR_0x8005, 99, FourIsland_House2_EventScript_BragEggsLowest
# 267 "data/scripts/trainer_card.pory"
	goto_if_le VAR_0x8005, 199, FourIsland_House2_EventScript_BragEggsLow
# 268 "data/scripts/trainer_card.pory"
	goto_if_le VAR_0x8005, 299, FourIsland_House2_EventScript_BragEggsHigh
# 269 "data/scripts/trainer_card.pory"
	goto_if_ge VAR_0x8005, 300, FourIsland_House2_EventScript_BragEggsHighest
	end


FourIsland_House2_EventScript_BragEggsLowest::
# 274 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_EGG_BRAG_STATE, 1, FourIsland_House2_EventScript_AlreadyBraggedEggs
# 275 "data/scripts/trainer_card.pory"
	setvar VAR_EGG_BRAG_STATE, 1
# 276 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_WowEggsLowest
# 277 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_BraggedEggs
	end


FourIsland_House2_EventScript_BragEggsLow::
# 282 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_EGG_BRAG_STATE, 2, FourIsland_House2_EventScript_AlreadyBraggedEggs
# 283 "data/scripts/trainer_card.pory"
	setvar VAR_EGG_BRAG_STATE, 2
# 284 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_WowEggsLow
# 285 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_BraggedEggs
	end


FourIsland_House2_EventScript_BragEggsHigh::
# 290 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_EGG_BRAG_STATE, 3, FourIsland_House2_EventScript_AlreadyBraggedEggs
# 291 "data/scripts/trainer_card.pory"
	setvar VAR_EGG_BRAG_STATE, 3
# 292 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_WowEggsHigh
# 293 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_BraggedEggs
	end


FourIsland_House2_EventScript_BragEggsHighest::
# 298 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_EGG_BRAG_STATE, 4, FourIsland_House2_EventScript_AlreadyBraggedEggsMax
# 299 "data/scripts/trainer_card.pory"
	setvar VAR_EGG_BRAG_STATE, 4
# 300 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_WowEggsHighest
# 301 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_BraggedEggs
	end


FourIsland_House2_EventScript_AlreadyBraggedEggs::
# 306 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_ComeBackWithBetterStoryEggs
# 307 "data/scripts/trainer_card.pory"
	release
	end


FourIsland_House2_EventScript_AlreadyBraggedEggsMax::
# 312 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_LivingLegendEggs
# 313 "data/scripts/trainer_card.pory"
	release
	end


FourIsland_House2_EventScript_BraggedEggs::
# 318 "data/scripts/trainer_card.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 319 "data/scripts/trainer_card.pory"
	playfanfare MUS_LEVEL_UP
# 320 "data/scripts/trainer_card.pory"
	message FourIsland_House2_Text_EggStickerApplied
# 321 "data/scripts/trainer_card.pory"
	waitmessage
# 322 "data/scripts/trainer_card.pory"
	waitfanfare
# 323 "data/scripts/trainer_card.pory"
	delay 90
# 324 "data/scripts/trainer_card.pory"
	release
	end


FourIsland_House2_EventScript_BragLinkWins::
# 329 "data/scripts/trainer_card.pory"
	goto_if_le VAR_0x8006, 19, FourIsland_House2_EventScript_BragLinkWinsLowest
# 330 "data/scripts/trainer_card.pory"
	goto_if_le VAR_0x8006, 49, FourIsland_House2_EventScript_BragLinkWinsLow
# 331 "data/scripts/trainer_card.pory"
	goto_if_le VAR_0x8006, 99, FourIsland_House2_EventScript_BragLinkWinsHigh
# 332 "data/scripts/trainer_card.pory"
	goto_if_ge VAR_0x8006, 100, FourIsland_House2_EventScript_BragLinkWinsHighest
	end


FourIsland_House2_EventScript_BragLinkWinsLowest::
# 337 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_LINK_WIN_BRAG_STATE, 1, FourIsland_House2_EventScript_AlreadyBraggedLinkWins
# 338 "data/scripts/trainer_card.pory"
	setvar VAR_LINK_WIN_BRAG_STATE, 1
# 339 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_WowLinkWinsLowest
# 340 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_BraggedLinkWins
	end


FourIsland_House2_EventScript_BragLinkWinsLow::
# 345 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_LINK_WIN_BRAG_STATE, 2, FourIsland_House2_EventScript_AlreadyBraggedLinkWins
# 346 "data/scripts/trainer_card.pory"
	setvar VAR_LINK_WIN_BRAG_STATE, 2
# 347 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_WowLinkWinsLow
# 348 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_BraggedLinkWins
	end


FourIsland_House2_EventScript_BragLinkWinsHigh::
# 353 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_LINK_WIN_BRAG_STATE, 3, FourIsland_House2_EventScript_AlreadyBraggedLinkWins
# 354 "data/scripts/trainer_card.pory"
	setvar VAR_LINK_WIN_BRAG_STATE, 3
# 355 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_WowLinkWinsHigh
# 356 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_BraggedLinkWins
	end


FourIsland_House2_EventScript_BragLinkWinsHighest::
# 361 "data/scripts/trainer_card.pory"
	goto_if_eq VAR_LINK_WIN_BRAG_STATE, 4, FourIsland_House2_EventScript_AlreadyBraggedLinkWinsMax
# 362 "data/scripts/trainer_card.pory"
	setvar VAR_LINK_WIN_BRAG_STATE, 4
# 363 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_WowLinkWinsHighest
# 364 "data/scripts/trainer_card.pory"
	goto FourIsland_House2_EventScript_BraggedLinkWins
	end


FourIsland_House2_EventScript_AlreadyBraggedLinkWins::
# 369 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_ComeBackWithBetterStoryLinkWins
# 370 "data/scripts/trainer_card.pory"
	release
	end


FourIsland_House2_EventScript_AlreadyBraggedLinkWinsMax::
# 375 "data/scripts/trainer_card.pory"
	msgbox FourIsland_House2_Text_LivingLegendLinkWins
# 376 "data/scripts/trainer_card.pory"
	release
	end


FourIsland_House2_EventScript_BraggedLinkWins::
# 381 "data/scripts/trainer_card.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 382 "data/scripts/trainer_card.pory"
	playfanfare MUS_LEVEL_UP
# 383 "data/scripts/trainer_card.pory"
	message FourIsland_House2_Text_VictoryStickerApplied
# 384 "data/scripts/trainer_card.pory"
	waitmessage
# 385 "data/scripts/trainer_card.pory"
	waitfanfare
# 386 "data/scripts/trainer_card.pory"
	delay 90
# 387 "data/scripts/trainer_card.pory"
	release
	end


FourIsland_House2_EventScript_QuitBrag::
# 392 "data/scripts/trainer_card.pory"
	release
	end

