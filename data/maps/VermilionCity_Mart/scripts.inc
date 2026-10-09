VermilionCity_Mart_MapScripts::
	.byte 0


VermilionCity_Mart_EventScript_CooltrainerF::
# 4 "data/maps/VermilionCity_Mart/scripts.pory"
	msgbox VermilionCity_Mart_Text_MonsGoodOrBadDependingOnTrainer, MSGBOX_NPC
	end


VermilionCity_Mart_EventScript_BaldingMan::
# 9 "data/maps/VermilionCity_Mart/scripts.pory"
	msgbox VermilionCity_Mart_Text_TeamRocketAreWickedPeople, MSGBOX_NPC
	end


VermilionCity_Mart_EventScript_Clerk::
# 14 "data/maps/VermilionCity_Mart/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 15 "data/maps/VermilionCity_Mart/scripts.pory"
	lock
# 16 "data/maps/VermilionCity_Mart/scripts.pory"
	faceplayer
# 17 "data/maps/VermilionCity_Mart/scripts.pory"
	message Text_MayIHelpYou
# 18 "data/maps/VermilionCity_Mart/scripts.pory"
	waitmessage
# 19 "data/maps/VermilionCity_Mart/scripts.pory"
	pokemart VermilionCity_Mart_Items
# 20 "data/maps/VermilionCity_Mart/scripts.pory"
	msgbox Text_PleaseComeAgain
# 21 "data/maps/VermilionCity_Mart/scripts.pory"
	release
	end


	.align 2
# 25 "data/maps/VermilionCity_Mart/scripts.pory"
VermilionCity_Mart_Items::
# 26 "data/maps/VermilionCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 27 "data/maps/VermilionCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 28 "data/maps/VermilionCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 29 "data/maps/VermilionCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 30 "data/maps/VermilionCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 31 "data/maps/VermilionCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 32 "data/maps/VermilionCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE
