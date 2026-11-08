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
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 13 "data/scripts/flash.pory"
	msgbox Text_CaveIsDarkUseFlash, MSGBOX_YESNO
# 14 "data/scripts/flash.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_UseFlashEnd
# 15 "data/scripts/flash.pory"
	closemessage
# 16 "data/scripts/flash.pory"
	setflag FLAG_SYS_FLASH_ACTIVE
# 17 "data/scripts/flash.pory"
	animateflash 0
# 18 "data/scripts/flash.pory"
	setflashlevel 0
# 19 "data/scripts/flash.pory"
	releaseall
	end


EventScript_UseFlashEnd::
# 24 "data/scripts/flash.pory"
	releaseall
	end


Text_CaveIsDarkUseFlash::
# 28 "data/scripts/flash.pory"
	.string "It's pitch dark.\n"
	.string "Would you like to use Flash?$"
