Common_EventScript_FindMint::
# 3 "data/scripts/mint_scripts.pory"
	lock
# 4 "data/scripts/mint_scripts.pory"
	faceplayer
# 5 "data/scripts/mint_scripts.pory"
	waitse
# 6 "data/scripts/mint_scripts.pory"
	copyvar VAR_0x8004, VAR_0x8000
# 7 "data/scripts/mint_scripts.pory"
	bufferitemname STR_VAR_2, VAR_0x8000
# 8 "data/scripts/mint_scripts.pory"
	msgbox Common_Text_MintAsk, MSGBOX_YESNO
# 9 "data/scripts/mint_scripts.pory"
	goto_if_eq VAR_RESULT, NO, Common_EventScript_MintLeave
# 10 "data/scripts/mint_scripts.pory"
	checkitemspace VAR_0x8000, 1
# 11 "data/scripts/mint_scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Common_EventScript_PickUpMint
# 12 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_MintNoRoom
	end


Common_EventScript_MintLeave::
# 17 "data/scripts/mint_scripts.pory"
	msgbox Common_Text_MintLeft
# 18 "data/scripts/mint_scripts.pory"
	release
	end


Common_EventScript_PickUpMint::
# 23 "data/scripts/mint_scripts.pory"
	additem VAR_0x8004, 1
# 24 "data/scripts/mint_scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/scripts/mint_scripts.pory"
	message Common_Text_MintPicked
# 26 "data/scripts/mint_scripts.pory"
	waitfanfare
# 27 "data/scripts/mint_scripts.pory"
	waitmessage
# 28 "data/scripts/mint_scripts.pory"
	removeobject VAR_LAST_TALKED
# 29 "data/scripts/mint_scripts.pory"
	msgbox Common_Text_MintPutAway
# 30 "data/scripts/mint_scripts.pory"
	release
	end


Common_EventScript_MintNoRoom::
# 35 "data/scripts/mint_scripts.pory"
	msgbox Common_Text_MintBagFull
# 36 "data/scripts/mint_scripts.pory"
	release
	end


Route1_EventScript_Mint::
# 71 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_LAX_MINT
# 72 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


ViridianCity_EventScript_Mint::
# 78 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_TIMID_MINT
# 79 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route2_EventScript_Mint::
# 85 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_GENTLE_MINT
# 86 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


PewterCity_EventScript_Mint::
# 92 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_QUIET_MINT
# 93 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route4_EventScript_Mint::
# 99 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_LONELY_MINT
# 100 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route7_EventScript_Mint::
# 106 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_MILD_MINT
# 107 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route10_EventScript_Mint::
# 113 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_BOLD_MINT
# 114 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route11_EventScript_Mint::
# 120 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_SERIOUS_MINT
# 121 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route13_EventScript_Mint::
# 127 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_CAREFUL_MINT
# 128 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route14_EventScript_Mint::
# 134 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_NAUGHTY_MINT
# 135 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route15_EventScript_Mint::
# 141 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_JOLLY_MINT
# 142 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


FuchsiaCity_EventScript_Mint::
# 148 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_IMPISH_MINT
# 149 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route16_EventScript_Mint::
# 155 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_MODEST_MINT
# 156 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route23_EventScript_Mint::
# 162 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_ADAMANT_MINT
# 163 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


OneIsland_EventScript_Mint::
# 169 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_SERIOUS_MINT
# 170 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


TwoIsland_CapeBrink_EventScript_Mint::
# 176 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_CALM_MINT
# 177 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


ThreeIsland_BondBridge_EventScript_Mint::
# 183 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_BRAVE_MINT
# 184 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


FourIsland_EventScript_Mint::
# 190 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_MODEST_MINT
# 191 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


FiveIsland_Meadow_EventScript_Mint::
# 197 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_ADAMANT_MINT
# 198 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


FiveIsland_ResortGorgeous_EventScript_Mint::
# 204 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_RELAXED_MINT
# 205 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


SixIsland_EventScript_Mint::
# 211 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_JOLLY_MINT
# 212 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


SixIsland_WaterPath_EventScript_Mint::
# 218 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_SERIOUS_MINT
# 219 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


SixIsland_GreenPath_EventScript_Mint::
# 225 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_CAREFUL_MINT
# 226 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


SevaultCanyon_EventScript_Mint::
# 232 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_ADAMANT_MINT
# 233 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route28_EventScript_Mint::
# 239 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_MODEST_MINT
# 240 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


MtSilver_Exterior_EventScript_Mint::
# 246 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_SASSY_MINT
# 247 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Common_Text_MintAsk::
# 40 "data/scripts/mint_scripts.pory"
	.string "A fragrant mint plant is growing\n"
	.string "here!\p"
	.string "It's a {STR_VAR_2}!\n"
	.string "Would you like to pick it?$"

Common_Text_MintPicked::
# 47 "data/scripts/mint_scripts.pory"
	.string "{PLAYER} picked the {STR_VAR_2}!$"

Common_Text_MintLeft::
# 51 "data/scripts/mint_scripts.pory"
	.string "You left the mint plant alone.$"

Common_Text_MintPutAway::
# 55 "data/scripts/mint_scripts.pory"
	.string "{PLAYER} put away the\n"
	.string "{STR_VAR_2} in the Bag.$"

Common_Text_MintBagFull::
# 60 "data/scripts/mint_scripts.pory"
	.string "Too bad!\n"
	.string "The Bag is full.$"
