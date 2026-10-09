CeladonCity_DepartmentStore_5F_MapScripts::
	.byte 0


CeladonCity_DepartmentStore_5F_EventScript_Gentleman::
# 4 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	msgbox CeladonCity_DepartmentStore_5F_Text_ExplainStatEnhancers, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_5F_EventScript_Sailor::
# 9 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	msgbox CeladonCity_DepartmentStore_5F_Text_HereForStatEnhancers, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_5F_EventScript_FloorSign::
# 14 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	msgbox CeladonCity_DepartmentStore_5F_Text_Drugstore, MSGBOX_SIGN
	end


CeladonCity_DepartmentStore_5F_EventScript_ClerkXItems::
# 19 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 20 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	lock
# 21 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 22 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	message Text_MayIHelpYou
# 23 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 24 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	pokemart CeladonCity_DepartmentStore_5F_XItems
# 25 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 26 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	release
	end


	.align 2
# 30 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
CeladonCity_DepartmentStore_5F_XItems::
# 31 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_X_ATTACK
# 32 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_X_DEFEND
# 33 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_X_SPEED
# 34 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_X_SPECIAL
# 35 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 36 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 37 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE

CeladonCity_DepartmentStore_5F_EventScript_ClerkVitamins::
# 42 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 43 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	lock
# 44 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 45 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	message Text_MayIHelpYou
# 46 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 47 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	pokemart CeladonCity_DepartmentStore_5F_Vitamins
# 48 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 49 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	release
	end


	.align 2
# 53 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
CeladonCity_DepartmentStore_5F_Vitamins::
# 54 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_HP_UP
# 55 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_PROTEIN
# 56 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_IRON
# 57 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_CALCIUM
# 58 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_ZINC
# 59 "data/maps/CeladonCity_DepartmentStore_5F/scripts.pory"
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE
