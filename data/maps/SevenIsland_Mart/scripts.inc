SevenIsland_Mart_MapScripts::
	.byte 0


SevenIsland_Mart_EventScript_Clerk::
# 4 "data/maps/SevenIsland_Mart/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 5 "data/maps/SevenIsland_Mart/scripts.pory"
	lock
# 6 "data/maps/SevenIsland_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/SevenIsland_Mart/scripts.pory"
	message Text_MayIHelpYou
# 8 "data/maps/SevenIsland_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/SevenIsland_Mart/scripts.pory"
	pokemart SevenIsland_Mart_Items
# 10 "data/maps/SevenIsland_Mart/scripts.pory"
	msgbox Text_PleaseComeAgain
# 11 "data/maps/SevenIsland_Mart/scripts.pory"
	release
	end


	.align 2
# 15 "data/maps/SevenIsland_Mart/scripts.pory"
SevenIsland_Mart_Items::
# 16 "data/maps/SevenIsland_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 17 "data/maps/SevenIsland_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/SevenIsland_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 19 "data/maps/SevenIsland_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 20 "data/maps/SevenIsland_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 21 "data/maps/SevenIsland_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 22 "data/maps/SevenIsland_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 23 "data/maps/SevenIsland_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 24 "data/maps/SevenIsland_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

SevenIsland_Mart_EventScript_Lass::
# 29 "data/maps/SevenIsland_Mart/scripts.pory"
	msgbox SevenIsland_Mart_Text_MonHavePersonalitiesOfTheirOwn, MSGBOX_NPC
	end


SevenIsland_Mart_EventScript_Hiker::
# 34 "data/maps/SevenIsland_Mart/scripts.pory"
	msgbox SevenIsland_Mart_Text_PreparationsCompleteForRuins, MSGBOX_NPC
	end


SevenIsland_Mart_EventScript_Fisher::
# 39 "data/maps/SevenIsland_Mart/scripts.pory"
	msgbox SevenIsland_Mart_Text_NeedToFishOnSevenIsland, MSGBOX_NPC
	end

