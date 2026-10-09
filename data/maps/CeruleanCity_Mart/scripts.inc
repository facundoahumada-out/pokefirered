CeruleanCity_Mart_MapScripts::
	.byte 0


CeruleanCity_Mart_EventScript_Youngster::
# 4 "data/maps/CeruleanCity_Mart/scripts.pory"
	msgbox CeruleanCity_Mart_Text_RepelWorksOnWeakMons, MSGBOX_NPC
	end


CeruleanCity_Mart_EventScript_Woman::
# 9 "data/maps/CeruleanCity_Mart/scripts.pory"
	msgbox CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy, MSGBOX_NPC
	end


CeruleanCity_Mart_EventScript_Clerk::
# 14 "data/maps/CeruleanCity_Mart/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 15 "data/maps/CeruleanCity_Mart/scripts.pory"
	lock
# 16 "data/maps/CeruleanCity_Mart/scripts.pory"
	faceplayer
# 17 "data/maps/CeruleanCity_Mart/scripts.pory"
	message Text_MayIHelpYou
# 18 "data/maps/CeruleanCity_Mart/scripts.pory"
	waitmessage
# 19 "data/maps/CeruleanCity_Mart/scripts.pory"
	pokemart CeruleanCity_Mart_Items
# 20 "data/maps/CeruleanCity_Mart/scripts.pory"
	msgbox Text_PleaseComeAgain
# 21 "data/maps/CeruleanCity_Mart/scripts.pory"
	release
	end


	.align 2
# 25 "data/maps/CeruleanCity_Mart/scripts.pory"
CeruleanCity_Mart_Items::
# 26 "data/maps/CeruleanCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 27 "data/maps/CeruleanCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 28 "data/maps/CeruleanCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 29 "data/maps/CeruleanCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 30 "data/maps/CeruleanCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 31 "data/maps/CeruleanCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 32 "data/maps/CeruleanCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 33 "data/maps/CeruleanCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 34 "data/maps/CeruleanCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE
