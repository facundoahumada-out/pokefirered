Route1_MapScripts::
	.byte 0


Route1_EventScript_MartClerk::
# 4 "data/maps/Route1/scripts.pory"
	lock
# 5 "data/maps/Route1/scripts.pory"
	faceplayer
# 6 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
# 7 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 8 "data/maps/Route1/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 9 "data/maps/Route1/scripts.pory"
	checkitemspace ITEM_POTION
# 10 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 11 "data/maps/Route1/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_POTION
# 12 "data/maps/Route1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 13 "data/maps/Route1/scripts.pory"
	message Text_ObtainedTheX
# 14 "data/maps/Route1/scripts.pory"
	waitmessage
# 15 "data/maps/Route1/scripts.pory"
	waitfanfare
# 16 "data/maps/Route1/scripts.pory"
	additem ITEM_POTION
# 17 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_PutPotionAway
# 18 "data/maps/Route1/scripts.pory"
	call EventScript_RestorePrevTextColor
# 19 "data/maps/Route1/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
# 20 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_AlreadyGotPotion::
# 25 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 26 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_Boy::
# 31 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
	end


Route1_EventScript_RouteSign::
# 36 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
	end

