ThreeIsland_Mart_MapScripts::
	.byte 0


ThreeIsland_Mart_EventScript_Clerk::
# 4 "data/maps/ThreeIsland_Mart/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 5 "data/maps/ThreeIsland_Mart/scripts.pory"
	lock
# 6 "data/maps/ThreeIsland_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/ThreeIsland_Mart/scripts.pory"
	message Text_MayIHelpYou
# 8 "data/maps/ThreeIsland_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/ThreeIsland_Mart/scripts.pory"
	pokemart ThreeIsland_Mart_Items
# 10 "data/maps/ThreeIsland_Mart/scripts.pory"
	msgbox Text_PleaseComeAgain
# 11 "data/maps/ThreeIsland_Mart/scripts.pory"
	release
	end


	.align 2
# 15 "data/maps/ThreeIsland_Mart/scripts.pory"
ThreeIsland_Mart_Items::
# 16 "data/maps/ThreeIsland_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 17 "data/maps/ThreeIsland_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 18 "data/maps/ThreeIsland_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 19 "data/maps/ThreeIsland_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 20 "data/maps/ThreeIsland_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 21 "data/maps/ThreeIsland_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

ThreeIsland_Mart_EventScript_Picnicker::
# 26 "data/maps/ThreeIsland_Mart/scripts.pory"
	msgbox ThreeIsland_Mart_Text_TrueThatCeldadonDeptStoreBigger, MSGBOX_NPC
	end


ThreeIsland_Mart_EventScript_BugCatcher::
# 31 "data/maps/ThreeIsland_Mart/scripts.pory"
	msgbox ThreeIsland_Mart_Text_PeopleHealWithBerriesFromForest, MSGBOX_NPC
	end


ThreeIsland_Mart_EventScript_Youngster::
# 36 "data/maps/ThreeIsland_Mart/scripts.pory"
	msgbox ThreeIsland_Mart_Text_BikersWereAboutToTrashMart, MSGBOX_NPC
	end

