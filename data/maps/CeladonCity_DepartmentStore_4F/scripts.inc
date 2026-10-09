CeladonCity_DepartmentStore_4F_MapScripts::
	.byte 0


CeladonCity_DepartmentStore_4F_EventScript_Man::
# 4 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	msgbox CeladonCity_DepartmentStore_4F_Text_GettingPokeDollAsPresent, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_4F_EventScript_Youngster::
# 9 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	msgbox CeladonCity_DepartmentStore_4F_Text_CanRunAwayWithPokeDoll, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_4F_EventScript_FloorSign::
# 14 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	msgbox CeladonCity_DepartmentStore_4F_Text_FloorSign, MSGBOX_SIGN
	end


CeladonCity_DepartmentStore_4F_EventScript_Clerk::
# 19 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 20 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	lock
# 21 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 22 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	message Text_MayIHelpYou
# 23 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 24 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	pokemart CeladonCity_DepartmentStore_4F_Items
# 25 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 26 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_4F_EventScript_Clork::
# 31 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 32 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	lock
# 33 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 34 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	message Text_MayIHelpYou
# 35 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 36 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	pokemart CeladonCity_DepartmentStore_4F_Mints
# 37 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 38 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	release
	end


	.align 2
# 42 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
CeladonCity_DepartmentStore_4F_Items::
# 43 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 44 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_RETRO_MAIL
# 45 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 46 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 47 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_WATER_STONE
# 48 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_NONE

	.align 2
# 52 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
CeladonCity_DepartmentStore_4F_Mints::
# 53 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 54 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 55 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 56 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_CALM_MINT
# 57 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 58 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 59 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 60 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 61 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 62 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LAX_MINT
# 63 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 64 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_MILD_MINT
# 65 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 66 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 67 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 68 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 69 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_RASH_MINT
# 70 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 71 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 72 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 73 "data/maps/CeladonCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_NONE
