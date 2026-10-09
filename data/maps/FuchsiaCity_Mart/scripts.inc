FuchsiaCity_Mart_MapScripts::
	.byte 0


FuchsiaCity_Mart_EventScript_CooltrainerF::
# 4 "data/maps/FuchsiaCity_Mart/scripts.pory"
	msgbox FuchsiaCity_Mart_Text_DidYouTryXSpeed, MSGBOX_NPC
	end


FuchsiaCity_Mart_EventScript_Gentleman::
# 9 "data/maps/FuchsiaCity_Mart/scripts.pory"
	msgbox FuchsiaCity_Mart_Text_DontTheyHaveSafariZonePennants, MSGBOX_NPC
	end


FuchsiaCity_Mart_EventScript_Clerk::
# 14 "data/maps/FuchsiaCity_Mart/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 15 "data/maps/FuchsiaCity_Mart/scripts.pory"
	lock
# 16 "data/maps/FuchsiaCity_Mart/scripts.pory"
	faceplayer
# 17 "data/maps/FuchsiaCity_Mart/scripts.pory"
	message Text_MayIHelpYou
# 18 "data/maps/FuchsiaCity_Mart/scripts.pory"
	waitmessage
# 19 "data/maps/FuchsiaCity_Mart/scripts.pory"
	pokemart FuchsiaCity_Mart_Items
# 20 "data/maps/FuchsiaCity_Mart/scripts.pory"
	msgbox Text_PleaseComeAgain
# 21 "data/maps/FuchsiaCity_Mart/scripts.pory"
	release
	end


	.align 2
# 25 "data/maps/FuchsiaCity_Mart/scripts.pory"
FuchsiaCity_Mart_Items::
# 26 "data/maps/FuchsiaCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 27 "data/maps/FuchsiaCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 28 "data/maps/FuchsiaCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 29 "data/maps/FuchsiaCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 30 "data/maps/FuchsiaCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 31 "data/maps/FuchsiaCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
