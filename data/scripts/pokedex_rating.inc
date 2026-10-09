PokedexRating_EventScript_RateInPerson::
# 2 "data/scripts/pokedex_rating.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 3 "data/scripts/pokedex_rating.pory"
	special QuestLog_CutRecording
# 4 "data/scripts/pokedex_rating.pory"
	call_if_set FLAG_OAK_SAW_DEX_COMPLETION, PokedexRating_EventScript_DexCompleteIntro
# 5 "data/scripts/pokedex_rating.pory"
	call_if_unset FLAG_OAK_SAW_DEX_COMPLETION, PokedexRating_EventScript_NormalIntro
# 6 "data/scripts/pokedex_rating.pory"
	call PokedexRating_EventScript_Rate
	return


PokedexRating_EventScript_DexCompleteIntro::
# 11 "data/scripts/pokedex_rating.pory"
	msgbox PokedexRating_Text_LoveSeeingYourPokedex
	return


PokedexRating_EventScript_NormalIntro::
# 16 "data/scripts/pokedex_rating.pory"
	msgbox PokedexRating_Text_HowIsPokedexComingAlong
	return


PokedexRating_EventScript_ShowRatingMsg::
# 21 "data/scripts/pokedex_rating.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 22 "data/scripts/pokedex_rating.pory"
	special GetProfOaksRatingMessage
# 23 "data/scripts/pokedex_rating.pory"
	waitmessage
# 24 "data/scripts/pokedex_rating.pory"
	call_if_eq VAR_RESULT, FALSE, PokedexRating_EventScript_NormalFanfare
# 25 "data/scripts/pokedex_rating.pory"
	call_if_eq VAR_RESULT, TRUE, PokedexRating_EventScript_DexCompleteFanfare
# 26 "data/scripts/pokedex_rating.pory"
	waitfanfare
# 27 "data/scripts/pokedex_rating.pory"
	waitbuttonpress
	return


PokedexRating_EventScript_NormalFanfare::
# 32 "data/scripts/pokedex_rating.pory"
	playfanfare MUS_DEX_RATING
	return


PokedexRating_EventScript_DexCompleteFanfare::
# 37 "data/scripts/pokedex_rating.pory"
	playfanfare MUS_EVOLVED
	return


PokedexRating_EventScript_Rate::
# 42 "data/scripts/pokedex_rating.pory"
	setvar VAR_0x8004, HELPCONTEXT_PC_MISC
# 43 "data/scripts/pokedex_rating.pory"
	special BackupHelpContext
# 44 "data/scripts/pokedex_rating.pory"
	special Script_SetHelpContext
# 45 "data/scripts/pokedex_rating.pory"
	setvar VAR_0x8004, 0
# 46 "data/scripts/pokedex_rating.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 47 "data/scripts/pokedex_rating.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 48 "data/scripts/pokedex_rating.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 49 "data/scripts/pokedex_rating.pory"
	copyvar VAR_0x800A, VAR_RESULT
# 50 "data/scripts/pokedex_rating.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 51 "data/scripts/pokedex_rating.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 52 "data/scripts/pokedex_rating.pory"
	msgbox PokedexRating_Text_SeenXOwnedY
# 53 "data/scripts/pokedex_rating.pory"
	call_if_unset FLAG_OAKS_RATING_IS_VIA_PC, PokedexRating_EventScript_SetTextColor
# 54 "data/scripts/pokedex_rating.pory"
	call PokedexRating_EventScript_ShowRatingMsg
# 55 "data/scripts/pokedex_rating.pory"
	goto_if_eq VAR_0x800A, FALSE, PokedexRating_EventScript_EndRating
# 56 "data/scripts/pokedex_rating.pory"
	setvar VAR_0x8004, 1
# 57 "data/scripts/pokedex_rating.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 58 "data/scripts/pokedex_rating.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 59 "data/scripts/pokedex_rating.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 60 "data/scripts/pokedex_rating.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 61 "data/scripts/pokedex_rating.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 62 "data/scripts/pokedex_rating.pory"
	msgbox PokedexRating_Text_NationalDexSeenXOwnedY
# 63 "data/scripts/pokedex_rating.pory"
	specialvar VAR_RESULT, HasAllMons
# 64 "data/scripts/pokedex_rating.pory"
	goto_if_eq VAR_RESULT, FALSE, PokedexRating_EventScript_DexIncomplete
# 65 "data/scripts/pokedex_rating.pory"
	goto_if_eq VAR_RESULT, TRUE, PokedexRating_EventScript_DexComplete
	end


PokedexRating_EventScript_SetTextColor::
# 70 "data/scripts/pokedex_rating.pory"
	textcolor NPC_TEXT_COLOR_MALE
	return


PokedexRating_EventScript_DexIncomplete::
# 75 "data/scripts/pokedex_rating.pory"
	msgbox PokedexRating_Text_LookForwardToFilledNationalDex
# 76 "data/scripts/pokedex_rating.pory"
	goto PokedexRating_EventScript_EndRating
	end


PokedexRating_EventScript_DexComplete::
# 81 "data/scripts/pokedex_rating.pory"
	setflag FLAG_OAK_SAW_DEX_COMPLETION
# 82 "data/scripts/pokedex_rating.pory"
	msgbox PokedexRating_Text_YouveCompletedDex
# 83 "data/scripts/pokedex_rating.pory"
	goto PokedexRating_EventScript_EndRating
	end


PokedexRating_EventScript_EndRating::
# 88 "data/scripts/pokedex_rating.pory"
	special RestoreHelpContext
	return

