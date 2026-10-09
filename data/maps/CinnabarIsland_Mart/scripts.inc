CinnabarIsland_Mart_MapScripts::
	.byte 0


CinnabarIsland_Mart_EventScript_Woman::
# 4 "data/maps/CinnabarIsland_Mart/scripts.pory"
	msgbox CinnabarIsland_Mart_Text_DontTheyHaveXAttack, MSGBOX_NPC
	end


CinnabarIsland_Mart_EventScript_Scientist::
# 9 "data/maps/CinnabarIsland_Mart/scripts.pory"
	msgbox CinnabarIsland_Mart_Text_ExtraItemsNeverHurt, MSGBOX_NPC
	end


CinnabarIsland_Mart_EventScript_Clerk::
# 14 "data/maps/CinnabarIsland_Mart/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 15 "data/maps/CinnabarIsland_Mart/scripts.pory"
	lock
# 16 "data/maps/CinnabarIsland_Mart/scripts.pory"
	faceplayer
# 17 "data/maps/CinnabarIsland_Mart/scripts.pory"
	message Text_MayIHelpYou
# 18 "data/maps/CinnabarIsland_Mart/scripts.pory"
	waitmessage
# 19 "data/maps/CinnabarIsland_Mart/scripts.pory"
	pokemart CinnabarIsland_Mart_Items
# 20 "data/maps/CinnabarIsland_Mart/scripts.pory"
	msgbox Text_PleaseComeAgain
# 21 "data/maps/CinnabarIsland_Mart/scripts.pory"
	release
	end


	.align 2
# 25 "data/maps/CinnabarIsland_Mart/scripts.pory"
CinnabarIsland_Mart_Items::
# 26 "data/maps/CinnabarIsland_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 27 "data/maps/CinnabarIsland_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 28 "data/maps/CinnabarIsland_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 29 "data/maps/CinnabarIsland_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 30 "data/maps/CinnabarIsland_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 31 "data/maps/CinnabarIsland_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 32 "data/maps/CinnabarIsland_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
