EventScript_AfterWhiteOutHeal::
# 2 "data/scripts/white_out.pory"
	lockall
# 3 "data/scripts/white_out.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 4 "data/scripts/white_out.pory"
	msgbox Text_FirstShouldRestoreMonsHealth
# 5 "data/scripts/white_out.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 6 "data/scripts/white_out.pory"
	call_if_unset FLAG_DEFEATED_BROCK, EventScript_AfterWhiteOutHealMsgPreBrock
# 7 "data/scripts/white_out.pory"
	call_if_set FLAG_DEFEATED_BROCK, EventScript_AfterWhiteOutHealMsg
# 8 "data/scripts/white_out.pory"
	applymovement VAR_LAST_TALKED, Movement_Bow
# 9 "data/scripts/white_out.pory"
	waitmovement 0
# 10 "data/scripts/white_out.pory"
	fadedefaultbgm
# 11 "data/scripts/white_out.pory"
	releaseall
	end


EventScript_AfterWhiteOutHealMsgPreBrock::
# 16 "data/scripts/white_out.pory"
	msgbox Text_MonsHealedShouldBuyPotions
	return


EventScript_AfterWhiteOutHealMsg::
# 21 "data/scripts/white_out.pory"
	msgbox Text_MonsHealed
	return


EventScript_AfterWhiteOutMomHeal::
# 26 "data/scripts/white_out.pory"
	lockall
# 27 "data/scripts/white_out.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 28 "data/scripts/white_out.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 29 "data/scripts/white_out.pory"
	waitmovement 0
# 30 "data/scripts/white_out.pory"
	msgbox Text_HadQuiteAnExperienceTakeRest
# 31 "data/scripts/white_out.pory"
	call EventScript_OutOfCenterPartyHeal
# 32 "data/scripts/white_out.pory"
	msgbox Text_MomExplainHPGetPotions
# 33 "data/scripts/white_out.pory"
	fadedefaultbgm
# 34 "data/scripts/white_out.pory"
	releaseall
	end


EventScript_FieldPoison::
# 39 "data/scripts/white_out.pory"
	lockall
# 40 "data/scripts/white_out.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 41 "data/scripts/white_out.pory"
	special TryFieldPoisonWhiteOut
# 42 "data/scripts/white_out.pory"
	waitstate
# 43 "data/scripts/white_out.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_FieldWhiteOut
# 44 "data/scripts/white_out.pory"
	releaseall
	end


EventScript_FieldWhiteOut::
# 49 "data/scripts/white_out.pory"
	checkmoney 1
# 50 "data/scripts/white_out.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_FieldWhiteOutNoMoney
# 51 "data/scripts/white_out.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_FieldWhiteOutHasMoney
	end


EventScript_FieldWhiteOutNoMoney::
# 56 "data/scripts/white_out.pory"
	msgbox Text_WhitedOut
# 57 "data/scripts/white_out.pory"
	goto EventScript_FieldWhiteOutFade
	end


EventScript_FieldWhiteOutHasMoney::
# 62 "data/scripts/white_out.pory"
	special OverworldWhiteOutGetMoneyLoss
# 63 "data/scripts/white_out.pory"
	msgbox Text_WhitedOutLostMoney
# 64 "data/scripts/white_out.pory"
	goto EventScript_FieldWhiteOutFade
	end


EventScript_FieldWhiteOutFade::
# 69 "data/scripts/white_out.pory"
	special Script_FadeOutMapMusic
# 70 "data/scripts/white_out.pory"
	waitstate
# 71 "data/scripts/white_out.pory"
	fadescreen FADE_TO_BLACK
# 72 "data/scripts/white_out.pory"
	special SetCB2WhiteOut
# 73 "data/scripts/white_out.pory"
	waitstate
	end

