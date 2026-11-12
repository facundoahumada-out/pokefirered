EventScript_FldEffFlash::
# 2 "data/scripts/flash.pory"
	animateflash 0
# 3 "data/scripts/flash.pory"
	setflashlevel 0
	end


EventScript_UseFlashPrompt::
# 8 "data/scripts/flash.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 9 "data/scripts/flash.pory"
	lockall
# 10 "data/scripts/flash.pory"
	checkpartymove MOVE_FLASH
# 11 "data/scripts/flash.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_UseFlashEnd
# 12 "data/scripts/flash.pory"
	setfieldeffectargument 0, VAR_RESULT
# 13 "data/scripts/flash.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 14 "data/scripts/flash.pory"
	msgbox Text_CaveIsDarkUseFlash, MSGBOX_YESNO
# 15 "data/scripts/flash.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_UseFlashEnd
# 16 "data/scripts/flash.pory"
	closemessage
# 17 "data/scripts/flash.pory"
	dofieldeffect FLDEFF_USE_FLASH
# 18 "data/scripts/flash.pory"
	waitstate
# 19 "data/scripts/flash.pory"
	setflag FLAG_SYS_FLASH_ACTIVE
# 20 "data/scripts/flash.pory"
	animateflash 0
# 21 "data/scripts/flash.pory"
	setflashlevel 0
# 22 "data/scripts/flash.pory"
	releaseall
	end


EventScript_UseFlashEnd::
# 27 "data/scripts/flash.pory"
	releaseall
	end


Text_CaveIsDarkUseFlash::
# 31 "data/scripts/flash.pory"
	.string "It's pitch dark.\n"
	.string "Would you like to use Flash?$"
