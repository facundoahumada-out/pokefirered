Common_EventScript_FindMint::
# 3 "data/scripts/mint_scripts.pory"
	lock
# 4 "data/scripts/mint_scripts.pory"
	waitse
# 5 "data/scripts/mint_scripts.pory"
	copyvar VAR_0x8004, VAR_0x8000
# 6 "data/scripts/mint_scripts.pory"
	bufferitemname STR_VAR_2, VAR_0x8000
# 7 "data/scripts/mint_scripts.pory"
	msgbox Common_Text_MintAsk, MSGBOX_YESNO
# 8 "data/scripts/mint_scripts.pory"
	goto_if_eq VAR_RESULT, NO, Common_EventScript_MintLeave
# 9 "data/scripts/mint_scripts.pory"
	checkitemspace VAR_0x8000, 1
# 10 "data/scripts/mint_scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Common_EventScript_PickUpMint
# 11 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_MintNoRoom
	end


Common_EventScript_MintLeave::
# 16 "data/scripts/mint_scripts.pory"
	msgbox Common_Text_MintLeft
# 17 "data/scripts/mint_scripts.pory"
	release
	end


Common_EventScript_PickUpMint::
# 22 "data/scripts/mint_scripts.pory"
	additem VAR_0x8004, 1
# 23 "data/scripts/mint_scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 24 "data/scripts/mint_scripts.pory"
	message Common_Text_MintPicked
# 25 "data/scripts/mint_scripts.pory"
	waitfanfare
# 26 "data/scripts/mint_scripts.pory"
	waitmessage
# 27 "data/scripts/mint_scripts.pory"
	removeobject VAR_LAST_TALKED
# 28 "data/scripts/mint_scripts.pory"
	msgbox Common_Text_MintPutAway
# 29 "data/scripts/mint_scripts.pory"
	release
	end


Common_EventScript_MintNoRoom::
# 34 "data/scripts/mint_scripts.pory"
	msgbox Common_Text_MintBagFull
# 35 "data/scripts/mint_scripts.pory"
	release
	end


Route1_EventScript_Mint::
# 70 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_LAX_MINT
# 71 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


ViridianCity_EventScript_Mint::
# 77 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_TIMID_MINT
# 78 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route2_EventScript_Mint::
# 84 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_GENTLE_MINT
# 85 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


PewterCity_EventScript_Mint::
# 91 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_QUIET_MINT
# 92 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route4_EventScript_Mint::
# 98 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_LONELY_MINT
# 99 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route7_EventScript_Mint::
# 105 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_MILD_MINT
# 106 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route8_EventScript_Mint::
# 112 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_NAIVE_MINT
# 113 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route10_EventScript_Mint::
# 119 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_BOLD_MINT
# 120 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route11_EventScript_Mint::
# 126 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_SERIOUS_MINT
# 127 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route13_EventScript_Mint::
# 133 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_CAREFUL_MINT
# 134 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route14_EventScript_Mint::
# 140 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_NAUGHTY_MINT
# 141 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route15_EventScript_Mint::
# 147 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_JOLLY_MINT
# 148 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


FuchsiaCity_EventScript_Mint::
# 154 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_IMPISH_MINT
# 155 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route16_EventScript_Mint::
# 161 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_MODEST_MINT
# 162 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route23_EventScript_Mint::
# 168 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_ADAMANT_MINT
# 169 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


OneIsland_EventScript_Mint::
# 175 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_SERIOUS_MINT
# 176 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


TwoIsland_CapeBrink_EventScript_Mint::
# 182 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_CALM_MINT
# 183 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


ThreeIsland_BondBridge_EventScript_Mint::
# 189 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_BRAVE_MINT
# 190 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


FourIsland_EventScript_Mint::
# 196 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_MODEST_MINT
# 197 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


FiveIsland_Meadow_EventScript_Mint::
# 203 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_ADAMANT_MINT
# 204 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


FiveIsland_ResortGorgeous_EventScript_Mint::
# 210 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_RELAXED_MINT
# 211 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


SixIsland_EventScript_Mint::
# 217 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_JOLLY_MINT
# 218 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


SixIsland_WaterPath_EventScript_Mint::
# 224 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_SERIOUS_MINT
# 225 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


SixIsland_GreenPath_EventScript_Mint::
# 231 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_CAREFUL_MINT
# 232 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


SevaultCanyon_EventScript_Mint::
# 238 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_ADAMANT_MINT
# 239 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Route28_EventScript_Mint::
# 245 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_MODEST_MINT
# 246 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


MtSilver_Exterior_EventScript_Mint::
# 252 "data/scripts/mint_scripts.pory"
	setvar VAR_0x8000, ITEM_SASSY_MINT
# 253 "data/scripts/mint_scripts.pory"
	goto Common_EventScript_FindMint
	end


Common_Text_MintAsk::
# 39 "data/scripts/mint_scripts.pory"
	.string "A fragrant mint plant is growing\n"
	.string "here!\p"
	.string "It's a {STR_VAR_2}!\n"
	.string "Would you like to pick it?$"

Common_Text_MintPicked::
# 46 "data/scripts/mint_scripts.pory"
	.string "{PLAYER} picked the {STR_VAR_2}!$"

Common_Text_MintLeft::
# 50 "data/scripts/mint_scripts.pory"
	.string "You left the mint plant alone.$"

Common_Text_MintPutAway::
# 54 "data/scripts/mint_scripts.pory"
	.string "{PLAYER} put away the\n"
	.string "{STR_VAR_2} in the Bag.$"

Common_Text_MintBagFull::
# 59 "data/scripts/mint_scripts.pory"
	.string "Too bad!\n"
	.string "The Bag is full.$"
