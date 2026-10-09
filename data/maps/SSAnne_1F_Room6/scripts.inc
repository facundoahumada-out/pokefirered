SSAnne_1F_Room6_MapScripts::
	.byte 0


SSAnne_1F_Room6_EventScript_Woman::
# 4 "data/maps/SSAnne_1F_Room6/scripts.pory"
	lock
# 5 "data/maps/SSAnne_1F_Room6/scripts.pory"
	faceplayer
# 6 "data/maps/SSAnne_1F_Room6/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_TakeAShortRest, MSGBOX_YESNO
# 7 "data/maps/SSAnne_1F_Room6/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SSAnne_1F_Room6_EventScript_DeclineHeal
# 8 "data/maps/SSAnne_1F_Room6/scripts.pory"
	closemessage
# 9 "data/maps/SSAnne_1F_Room6/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 10 "data/maps/SSAnne_1F_Room6/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_GladEveryoneIsRefreshed
# 11 "data/maps/SSAnne_1F_Room6/scripts.pory"
	release
	end


SSAnne_1F_Room6_EventScript_DeclineHeal::
# 16 "data/maps/SSAnne_1F_Room6/scripts.pory"
	checkplayergender
# 17 "data/maps/SSAnne_1F_Room6/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SSAnne_1F_Room6_EventScript_DeclineHealMale
# 18 "data/maps/SSAnne_1F_Room6/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_SorryYouLookLikeMySister
# 19 "data/maps/SSAnne_1F_Room6/scripts.pory"
	release
	end


SSAnne_1F_Room6_EventScript_DeclineHealMale::
# 24 "data/maps/SSAnne_1F_Room6/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_SorryYouLookLikeMyBrother
# 25 "data/maps/SSAnne_1F_Room6/scripts.pory"
	release
	end

