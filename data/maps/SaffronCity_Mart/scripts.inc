SaffronCity_Mart_MapScripts::
	.byte 0


SaffronCity_Mart_EventScript_Lass::
# 4 "data/maps/SaffronCity_Mart/scripts.pory"
	msgbox SaffronCity_Mart_Text_ReviveIsCostly, MSGBOX_NPC
	end


SaffronCity_Mart_EventScript_Youngster::
# 9 "data/maps/SaffronCity_Mart/scripts.pory"
	msgbox SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper, MSGBOX_NPC
	end


SaffronCity_Mart_EventScript_Clerk::
# 14 "data/maps/SaffronCity_Mart/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 15 "data/maps/SaffronCity_Mart/scripts.pory"
	lock
# 16 "data/maps/SaffronCity_Mart/scripts.pory"
	faceplayer
# 17 "data/maps/SaffronCity_Mart/scripts.pory"
	message Text_MayIHelpYou
# 18 "data/maps/SaffronCity_Mart/scripts.pory"
	waitmessage
# 19 "data/maps/SaffronCity_Mart/scripts.pory"
	pokemart SaffronCity_Mart_Items
# 20 "data/maps/SaffronCity_Mart/scripts.pory"
	msgbox Text_PleaseComeAgain
# 21 "data/maps/SaffronCity_Mart/scripts.pory"
	release
	end


	.align 2
# 25 "data/maps/SaffronCity_Mart/scripts.pory"
SaffronCity_Mart_Items::
# 26 "data/maps/SaffronCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 27 "data/maps/SaffronCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 28 "data/maps/SaffronCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 29 "data/maps/SaffronCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 30 "data/maps/SaffronCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 31 "data/maps/SaffronCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
