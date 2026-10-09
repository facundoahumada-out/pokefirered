CeladonCity_Condominiums_1F_MapScripts::
	.byte 0


CeladonCity_Condominiums_1F_EventScript_TeaWoman::
# 4 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	lock
# 5 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	faceplayer
# 6 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_set FLAG_TALKED_TO_TEA_LADY_AFTER_HOF, CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
# 7 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy
# 8 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_set FLAG_GOT_TEA, CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
# 9 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead
# 10 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	setflag FLAG_GOT_TEA
# 11 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	giveitem ITEM_TEA
# 12 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 13 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea
# 14 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
	end


CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea::
# 19 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany
# 20 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
	end


CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy::
# 25 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	famechecker FAMECHECKER_DAISY, 4
# 26 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	setflag FLAG_TALKED_TO_TEA_LADY_AFTER_HOF
# 27 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea
# 28 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
	end


CeladonCity_Condominiums_1F_EventScript_Meowth::
# 33 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	lock
# 34 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	faceplayer
# 35 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitse
# 36 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 37 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Meowth
# 38 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitmoncry
# 39 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
	end


CeladonCity_Condominiums_1F_EventScript_Clefairy::
# 44 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	lock
# 45 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	faceplayer
# 46 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitse
# 47 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 48 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Clefairy
# 49 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitmoncry
# 50 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
	end


CeladonCity_Condominiums_1F_EventScript_Nidoran::
# 55 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	lock
# 56 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	faceplayer
# 57 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitse
# 58 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	playmoncry SPECIES_NIDORAN_F, CRY_MODE_NORMAL
# 59 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Nidoran
# 60 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitmoncry
# 61 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
	end


CeladonCity_Condominiums_1F_EventScript_SuiteSign::
# 66 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_ManagersSuite, MSGBOX_SIGN
	end

