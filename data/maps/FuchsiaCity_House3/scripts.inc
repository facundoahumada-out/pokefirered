FuchsiaCity_House3_MapScripts::
	.byte 0


FuchsiaCity_House3_EventScript_MoveDeleter::
# 4 "data/maps/FuchsiaCity_House3/scripts.pory"
	lock
# 5 "data/maps/FuchsiaCity_House3/scripts.pory"
	faceplayer
# 6 "data/maps/FuchsiaCity_House3/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WouldYouLikeToForgetMove, MSGBOX_YESNO
# 7 "data/maps/FuchsiaCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
# 8 "data/maps/FuchsiaCity_House3/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
	end


FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter::
# 13 "data/maps/FuchsiaCity_House3/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WhichMonShouldForgetMove
# 14 "data/maps/FuchsiaCity_House3/scripts.pory"
	special ChoosePartyMon
# 15 "data/maps/FuchsiaCity_House3/scripts.pory"
	waitstate
# 16 "data/maps/FuchsiaCity_House3/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FuchsiaCity_House3_EventScript_CancelForgetMove
# 17 "data/maps/FuchsiaCity_House3/scripts.pory"
	special IsSelectedMonEgg
# 18 "data/maps/FuchsiaCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FuchsiaCity_House3_EventScript_CantForgetMoveEgg
# 19 "data/maps/FuchsiaCity_House3/scripts.pory"
	special GetNumMovesSelectedMonHas
# 20 "data/maps/FuchsiaCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, 1, FuchsiaCity_House3_EventScript_CantForgetOnlyMove
# 21 "data/maps/FuchsiaCity_House3/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WhichMoveShouldBeForgotten
# 22 "data/maps/FuchsiaCity_House3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/FuchsiaCity_House3/scripts.pory"
	special SelectMoveDeleterMove
# 24 "data/maps/FuchsiaCity_House3/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 25 "data/maps/FuchsiaCity_House3/scripts.pory"
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
# 26 "data/maps/FuchsiaCity_House3/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 27 "data/maps/FuchsiaCity_House3/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 28 "data/maps/FuchsiaCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House3_EventScript_ForgetMove
# 29 "data/maps/FuchsiaCity_House3/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
	end


FuchsiaCity_House3_EventScript_ForgetMove::
# 34 "data/maps/FuchsiaCity_House3/scripts.pory"
	special MoveDeleterForgetMove
# 35 "data/maps/FuchsiaCity_House3/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 36 "data/maps/FuchsiaCity_House3/scripts.pory"
	waitfanfare
# 37 "data/maps/FuchsiaCity_House3/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonHasForgottenMoveCompletely
# 38 "data/maps/FuchsiaCity_House3/scripts.pory"
	release
	end


FuchsiaCity_House3_EventScript_CantForgetOnlyMove::
# 43 "data/maps/FuchsiaCity_House3/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 44 "data/maps/FuchsiaCity_House3/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonOnlyKnowsOneMove
# 45 "data/maps/FuchsiaCity_House3/scripts.pory"
	release
	end


FuchsiaCity_House3_EventScript_CantForgetMoveEgg::
# 50 "data/maps/FuchsiaCity_House3/scripts.pory"
	msgbox FuchsiaCity_House3_Text_NoEggShouldKnowMoves
# 51 "data/maps/FuchsiaCity_House3/scripts.pory"
	release
	end


FuchsiaCity_House3_EventScript_CancelForgetMove::
# 56 "data/maps/FuchsiaCity_House3/scripts.pory"
	msgbox FuchsiaCity_House3_Text_ComeAgainToForgetOtherMoves
# 57 "data/maps/FuchsiaCity_House3/scripts.pory"
	release
	end

