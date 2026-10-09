PewterCity_Mart_MapScripts::
	.byte 0


PewterCity_Mart_EventScript_Youngster::
# 4 "data/maps/PewterCity_Mart/scripts.pory"
	msgbox PewterCity_Mart_Text_BoughtWeirdFishFromShadyGuy, MSGBOX_NPC
	end


PewterCity_Mart_EventScript_Boy::
# 9 "data/maps/PewterCity_Mart/scripts.pory"
	msgbox PewterCity_Mart_Text_GoodThingsIfRaiseMonsDiligently, MSGBOX_NPC
	end


PewterCity_Mart_EventScript_Clerk::
# 14 "data/maps/PewterCity_Mart/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 15 "data/maps/PewterCity_Mart/scripts.pory"
	lock
# 16 "data/maps/PewterCity_Mart/scripts.pory"
	faceplayer
# 17 "data/maps/PewterCity_Mart/scripts.pory"
	message Text_MayIHelpYou
# 18 "data/maps/PewterCity_Mart/scripts.pory"
	waitmessage
# 19 "data/maps/PewterCity_Mart/scripts.pory"
	pokemart PewterCity_Mart_Items
# 20 "data/maps/PewterCity_Mart/scripts.pory"
	msgbox Text_PleaseComeAgain
# 21 "data/maps/PewterCity_Mart/scripts.pory"
	release
	end


	.align 2
# 25 "data/maps/PewterCity_Mart/scripts.pory"
PewterCity_Mart_Items::
# 26 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 27 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 28 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 29 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 30 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 31 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 32 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 33 "data/maps/PewterCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE
