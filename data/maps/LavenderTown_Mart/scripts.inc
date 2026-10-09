LavenderTown_Mart_MapScripts::
	.byte 0


LavenderTown_Mart_EventScript_BaldingMan::
# 4 "data/maps/LavenderTown_Mart/scripts.pory"
	msgbox LavenderTown_Mart_Text_SearchingForStatRaiseItems, MSGBOX_NPC
	end


LavenderTown_Mart_EventScript_Rocker::
# 9 "data/maps/LavenderTown_Mart/scripts.pory"
	msgbox LavenderTown_Mart_Text_DidYouBuyRevives, MSGBOX_NPC
	end


LavenderTown_Mart_EventScript_Youngster::
# 14 "data/maps/LavenderTown_Mart/scripts.pory"
	msgbox LavenderTown_Mart_Text_TrainerDuosCanChallengeYou, MSGBOX_NPC
	end


LavenderTown_Mart_EventScript_Clerk::
# 19 "data/maps/LavenderTown_Mart/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 20 "data/maps/LavenderTown_Mart/scripts.pory"
	lock
# 21 "data/maps/LavenderTown_Mart/scripts.pory"
	faceplayer
# 22 "data/maps/LavenderTown_Mart/scripts.pory"
	message Text_MayIHelpYou
# 23 "data/maps/LavenderTown_Mart/scripts.pory"
	waitmessage
# 24 "data/maps/LavenderTown_Mart/scripts.pory"
	pokemart LavenderTown_Mart_Items
# 25 "data/maps/LavenderTown_Mart/scripts.pory"
	msgbox Text_PleaseComeAgain
# 26 "data/maps/LavenderTown_Mart/scripts.pory"
	release
	end


	.align 2
# 30 "data/maps/LavenderTown_Mart/scripts.pory"
LavenderTown_Mart_Items::
# 31 "data/maps/LavenderTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 32 "data/maps/LavenderTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 33 "data/maps/LavenderTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 34 "data/maps/LavenderTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 35 "data/maps/LavenderTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 36 "data/maps/LavenderTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 37 "data/maps/LavenderTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 38 "data/maps/LavenderTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 39 "data/maps/LavenderTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE
