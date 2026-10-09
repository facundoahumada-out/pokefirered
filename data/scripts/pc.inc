EventScript_PC::
# 2 "data/scripts/pc.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 3 "data/scripts/pc.pory"
	lockall
# 4 "data/scripts/pc.pory"
	goto_if_set FLAG_SYS_PC_STORAGE_DISABLED, EventScript_PCDisabled
# 5 "data/scripts/pc.pory"
	setvar VAR_0x8004, HELPCONTEXT_PC
# 6 "data/scripts/pc.pory"
	special Script_SetHelpContext
# 7 "data/scripts/pc.pory"
	setvar VAR_0x8004, 0
# 8 "data/scripts/pc.pory"
	special AnimatePcTurnOn
# 9 "data/scripts/pc.pory"
	playse SE_PC_ON
# 10 "data/scripts/pc.pory"
	msgbox Text_BootedUpPC
# 11 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
	end


EventScript_PCDisabled::
# 17 "data/scripts/pc.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_UsualPCServicesUnavailable
# 18 "data/scripts/pc.pory"
	releaseall
	end


EventScript_PCMainMenu::
# 23 "data/scripts/pc.pory"
	message Text_AccessWhichPC
# 24 "data/scripts/pc.pory"
	waitmessage
# 25 "data/scripts/pc.pory"
	special CreatePCMenu
# 26 "data/scripts/pc.pory"
	waitstate
# 27 "data/scripts/pc.pory"
	goto EventScript_ChoosePCMenu
	end


EventScript_ChoosePCMenu::
# 32 "data/scripts/pc.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 33 "data/scripts/pc.pory"
	goto_if_eq VAR_0x8000, 0, EventScript_AccessPokemonStorage
# 34 "data/scripts/pc.pory"
	goto_if_eq VAR_0x8000, 1, EventScript_AccessPlayersPC
# 35 "data/scripts/pc.pory"
	goto_if_eq VAR_0x8000, 2, EventScript_AccessProfOaksPC
# 36 "data/scripts/pc.pory"
	goto_if_eq VAR_0x8000, 3, EventScript_AccessHallOfFame
# 37 "data/scripts/pc.pory"
	goto_if_eq VAR_0x8000, 4, EventScript_TurnOffPC
# 38 "data/scripts/pc.pory"
	goto_if_eq VAR_0x8000, SCR_MENU_CANCEL, EventScript_TurnOffPC
	end


EventScript_AccessPlayersPC::
# 43 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 44 "data/scripts/pc.pory"
	msgbox Text_AccessedPlayersPC
# 45 "data/scripts/pc.pory"
	special PlayerPC
# 46 "data/scripts/pc.pory"
	waitstate
# 47 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
	end


EventScript_AccessPokemonStorage::
# 52 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 53 "data/scripts/pc.pory"
	call_if_unset FLAG_SYS_NOT_SOMEONES_PC, EventScript_AccessSomeonesPC
# 54 "data/scripts/pc.pory"
	call_if_set FLAG_SYS_NOT_SOMEONES_PC, EventScript_AccessBillsPC
# 55 "data/scripts/pc.pory"
	msgbox Text_OpenedPkmnStorage
# 56 "data/scripts/pc.pory"
	special ShowPokemonStorageSystemPC
# 57 "data/scripts/pc.pory"
	waitstate
# 58 "data/scripts/pc.pory"
	setvar VAR_0x8004, HELPCONTEXT_PC
# 59 "data/scripts/pc.pory"
	special Script_SetHelpContext
# 60 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
	end


EventScript_AccessSomeonesPC::
# 65 "data/scripts/pc.pory"
	msgbox Text_AccessedSomeonesPC
	return


EventScript_AccessBillsPC::
# 70 "data/scripts/pc.pory"
	msgbox Text_AccessedBillsPC
	return


EventScript_TurnOffPC::
# 75 "data/scripts/pc.pory"
	setvar VAR_0x8004, 0
# 76 "data/scripts/pc.pory"
	playse SE_PC_OFF
# 77 "data/scripts/pc.pory"
	special AnimatePcTurnOff
# 78 "data/scripts/pc.pory"
	special SetHelpContextForMap
# 79 "data/scripts/pc.pory"
	releaseall
	end


EventScript_AccessHallOfFame::
# 84 "data/scripts/pc.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_TurnOffPC
# 85 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 86 "data/scripts/pc.pory"
	setvar VAR_0x8004, HELPCONTEXT_PC_MISC
# 87 "data/scripts/pc.pory"
	special BackupHelpContext
# 88 "data/scripts/pc.pory"
	special Script_SetHelpContext
# 89 "data/scripts/pc.pory"
	special HallOfFamePCBeginFade
# 90 "data/scripts/pc.pory"
	waitstate
# 91 "data/scripts/pc.pory"
	special RestoreHelpContext
# 92 "data/scripts/pc.pory"
	goto EventScript_ChoosePCMenu
	end


EventScript_AccessProfOaksPC::
# 97 "data/scripts/pc.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, EventScript_TurnOffPC
# 98 "data/scripts/pc.pory"
	playse SE_PC_LOGIN
# 99 "data/scripts/pc.pory"
	msgbox Text_AccessedProfOaksPC
# 100 "data/scripts/pc.pory"
	msgbox Text_HavePokedexRated, MSGBOX_YESNO
# 101 "data/scripts/pc.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_ExitOaksPC
# 102 "data/scripts/pc.pory"
	setflag FLAG_OAKS_RATING_IS_VIA_PC
# 103 "data/scripts/pc.pory"
	call PokedexRating_EventScript_Rate
# 104 "data/scripts/pc.pory"
	clearflag FLAG_OAKS_RATING_IS_VIA_PC
# 105 "data/scripts/pc.pory"
	goto EventScript_ExitOaksPC
	end


EventScript_ExitOaksPC::
# 110 "data/scripts/pc.pory"
	msgbox Text_ClosedLinkToProfOaksPC
# 111 "data/scripts/pc.pory"
	goto EventScript_PCMainMenu
	end

