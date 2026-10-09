VermilionCity_PokemonFanClub_MapScripts::
	.byte 0


VermilionCity_PokemonFanClub_EventScript_Chairman::
# 7 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	lock
# 8 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	faceplayer
# 9 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_GOT_BIKE_VOUCHER, VermilionCity_PokemonFanClub_EventScript_AlreadyHeardStory
# 10 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_DidYouComeToHearAboutMyMons, MSGBOX_YESNO
# 11 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VermilionCity_PokemonFanClub_EventScript_ChairmanStory
# 12 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ComeBackToHearStory
# 13 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
	end


VermilionCity_PokemonFanClub_EventScript_AlreadyHeardStory::
# 18 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_DidntComeToSeeAboutMonsAgain
# 19 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
	end


VermilionCity_PokemonFanClub_EventScript_ChairmanStory::
# 24 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmansStory
# 25 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_BIKE_VOUCHER
# 26 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_PokemonFanClub_EventScript_NoRoomForBikeVoucher
# 27 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	setflag FLAG_GOT_BIKE_VOUCHER
# 28 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	giveitem_msg VermilionCity_PokemonFanClub_Text_ReceivedBikeVoucherFromChairman, ITEM_BIKE_VOUCHER, 1, MUS_OBTAIN_KEY_ITEM
# 29 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ExplainBikeVoucher
# 30 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
	end


VermilionCity_PokemonFanClub_EventScript_NoRoomForBikeVoucher::
# 35 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_MakeRoomForThis
# 36 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
	end


VermilionCity_PokemonFanClub_EventScript_WorkerF::
# 41 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	lock
# 42 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	faceplayer
# 43 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, VermilionCity_PokemonFanClub_EventScript_WorkerFGameClear
# 44 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanVeryVocalAboutPokemon
# 45 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
	end


VermilionCity_PokemonFanClub_EventScript_WorkerFGameClear::
# 50 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	famechecker FAMECHECKER_DAISY, 1
# 51 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanReallyAdoresHisMons
# 52 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
	end


VermilionCity_PokemonFanClub_EventScript_Woman::
# 57 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	lock
# 58 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	faceplayer
# 59 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_TEMP_3, VermilionCity_PokemonFanClub_EventScript_WomanSpokeToFatMan
# 60 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_AdoreMySeel
# 61 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	closemessage
# 62 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_WOMAN, Common_Movement_FaceOriginalDirection
# 63 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 64 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TEMP_2
# 65 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
	end


VermilionCity_PokemonFanClub_EventScript_WomanSpokeToFatMan::
# 70 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_SeelFarMoreAttractive
# 71 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	closemessage
# 72 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_WOMAN, Common_Movement_FaceOriginalDirection
# 73 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 74 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	clearflag FLAG_TEMP_3
# 75 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
	end


VermilionCity_PokemonFanClub_EventScript_FatMan::
# 80 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	lock
# 81 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	faceplayer
# 82 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_TEMP_2, VermilionCity_PokemonFanClub_EventScript_FatManSpokeToWoman
# 83 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_AdmirePikachusTail
# 84 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	closemessage
# 85 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
# 86 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 87 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	setflag FLAG_TEMP_3
# 88 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
	end


VermilionCity_PokemonFanClub_EventScript_FatManSpokeToWoman::
# 93 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_PikachuTwiceAsCute
# 94 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	closemessage
# 95 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
# 96 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 97 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	clearflag FLAG_TEMP_2
# 98 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
	end


VermilionCity_PokemonFanClub_EventScript_Pikachu::
# 103 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	lock
# 104 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	faceplayer
# 105 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitse
# 106 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 107 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_Pikachu
# 108 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 109 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
	end


VermilionCity_PokemonFanClub_EventScript_Seel::
# 114 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	lock
# 115 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	faceplayer
# 116 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitse
# 117 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_SEEL, CRY_MODE_NORMAL
# 118 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_Seel
# 119 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 120 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	release
	end


VermilionCity_PokemonFanClub_EventScript_RulesSign1::
# 125 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ListenPolitelyToOtherTrainers, MSGBOX_SIGN
	end


VermilionCity_PokemonFanClub_EventScript_RulesSign2::
# 130 "data/maps/VermilionCity_PokemonFanClub/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_SomeoneBragsBragBack, MSGBOX_SIGN
	end

