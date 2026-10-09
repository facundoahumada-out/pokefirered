SixIsland_Mart_MapScripts::
	.byte 0


SixIsland_Mart_EventScript_Clerk::
# 4 "data/maps/SixIsland_Mart/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 5 "data/maps/SixIsland_Mart/scripts.pory"
	lock
# 6 "data/maps/SixIsland_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/SixIsland_Mart/scripts.pory"
	message Text_MayIHelpYou
# 8 "data/maps/SixIsland_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/SixIsland_Mart/scripts.pory"
	pokemart SixIsland_Mart_Items
# 10 "data/maps/SixIsland_Mart/scripts.pory"
	msgbox Text_PleaseComeAgain
# 11 "data/maps/SixIsland_Mart/scripts.pory"
	release
	end


	.align 2
# 15 "data/maps/SixIsland_Mart/scripts.pory"
SixIsland_Mart_Items::
# 16 "data/maps/SixIsland_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 17 "data/maps/SixIsland_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 18 "data/maps/SixIsland_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 19 "data/maps/SixIsland_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 20 "data/maps/SixIsland_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 21 "data/maps/SixIsland_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 22 "data/maps/SixIsland_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 23 "data/maps/SixIsland_Mart/scripts.pory"
	.2byte ITEM_DREAM_MAIL
	.2byte ITEM_NONE

SixIsland_Mart_EventScript_Picnicker::
# 28 "data/maps/SixIsland_Mart/scripts.pory"
	msgbox SixIsland_Mart_Text_ShouldBuyMailAndWriteLetter, MSGBOX_NPC
	end

