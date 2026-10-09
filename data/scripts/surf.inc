EventScript_UseSurf::
# 2 "data/scripts/surf.pory"
	goto_if_questlog EventScript_UseSurfEnd
# 3 "data/scripts/surf.pory"
	checkpartymove MOVE_SURF
# 4 "data/scripts/surf.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_UseSurfEnd
# 5 "data/scripts/surf.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 6 "data/scripts/surf.pory"
	setfieldeffectargument 0, VAR_RESULT
# 7 "data/scripts/surf.pory"
	lockall
# 8 "data/scripts/surf.pory"
	msgbox Text_WantToSurf, MSGBOX_YESNO
# 9 "data/scripts/surf.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_UseSurfRelease
# 10 "data/scripts/surf.pory"
	msgbox Text_UsedSurf
# 11 "data/scripts/surf.pory"
	dofieldeffect FLDEFF_USE_SURF
# 12 "data/scripts/surf.pory"
EventScript_UseSurfRelease:
# 13 "data/scripts/surf.pory"
	releaseall
# 14 "data/scripts/surf.pory"
EventScript_UseSurfEnd:
	end


EventScript_CurrentTooFast::
# 19 "data/scripts/surf.pory"
	lockall
# 20 "data/scripts/surf.pory"
	msgbox Text_CurrentTooFast
# 21 "data/scripts/surf.pory"
	releaseall
	end

