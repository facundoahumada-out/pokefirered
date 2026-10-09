CeladonCity_DepartmentStore_2F_MapScripts::
	.byte 0


CeladonCity_DepartmentStore_2F_EventScript_UnusedNPC::
# 4 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	msgbox CeladonCity_DepartmentStore_2F_Text_SuperRepelMorePowerfulRepel, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_2F_EventScript_Lass::
# 9 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	msgbox CeladonCity_DepartmentStore_2F_Text_BuyReviveForLongOutings, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_2F_EventScript_FloorSign::
# 14 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	msgbox CeladonCity_DepartmentStore_2F_Text_FloorSign, MSGBOX_SIGN
	end


CeladonCity_DepartmentStore_2F_EventScript_ClerkItems::
# 19 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 20 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	lock
# 21 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 22 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	message Text_MayIHelpYou
# 23 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 24 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	pokemart CeladonCity_DepartmentStore_2F_Items
# 25 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 26 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	release
	end


	.align 2
# 30 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
CeladonCity_DepartmentStore_2F_Items::
# 31 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 32 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 33 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 34 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 35 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 36 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_AWAKENING
# 37 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 38 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 39 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

CeladonCity_DepartmentStore_2F_EventScript_ClerkTMs::
# 44 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 45 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	lock
# 46 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 47 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	message Text_MayIHelpYou
# 48 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 49 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	pokemart CeladonCity_DepartmentStore_2F_TMs
# 50 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 51 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	release
	end


	.align 2
# 55 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
CeladonCity_DepartmentStore_2F_TMs::
# 56 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_TM05
# 57 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_TM15
# 58 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_TM28
# 59 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_TM31
# 60 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_TM43
# 61 "data/maps/CeladonCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_TM45
	.2byte ITEM_NONE
