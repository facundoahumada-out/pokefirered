FourIsland_Mart_MapScripts::
	.byte 0


FourIsland_Mart_EventScript_Clerk::
# 4 "data/maps/FourIsland_Mart/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 5 "data/maps/FourIsland_Mart/scripts.pory"
	lock
# 6 "data/maps/FourIsland_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/FourIsland_Mart/scripts.pory"
	message Text_MayIHelpYou
# 8 "data/maps/FourIsland_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/FourIsland_Mart/scripts.pory"
	pokemart FourIsland_Mart_Items
# 10 "data/maps/FourIsland_Mart/scripts.pory"
	msgbox Text_PleaseComeAgain
# 11 "data/maps/FourIsland_Mart/scripts.pory"
	release
	end


	.align 2
# 15 "data/maps/FourIsland_Mart/scripts.pory"
FourIsland_Mart_Items::
# 16 "data/maps/FourIsland_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 17 "data/maps/FourIsland_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 18 "data/maps/FourIsland_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 19 "data/maps/FourIsland_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 20 "data/maps/FourIsland_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 21 "data/maps/FourIsland_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 22 "data/maps/FourIsland_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 23 "data/maps/FourIsland_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

FourIsland_Mart_EventScript_Camper::
# 28 "data/maps/FourIsland_Mart/scripts.pory"
	msgbox FourIsland_Mart_Text_IcefallCaveIsFrigid, MSGBOX_NPC
	end

