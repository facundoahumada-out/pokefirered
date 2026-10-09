CeruleanCity_House5_MapScripts::
	.byte 0


CeruleanCity_House5_EventScript_BerryPowderMan::
# 4 "data/maps/CeruleanCity_House5/scripts.pory"
	lock
# 5 "data/maps/CeruleanCity_House5/scripts.pory"
	faceplayer
# 6 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_set FLAG_GOT_POWDER_JAR, CeruleanCity_House5_EventScript_AskToExchangePowder
# 7 "data/maps/CeruleanCity_House5/scripts.pory"
	msgbox CeruleanCity_House1_Text_AnyInterestInBerries, MSGBOX_YESNO
# 8 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeruleanCity_House5_EventScript_NoInterestInBerries
# 9 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_unset FLAG_SYS_GOT_BERRY_POUCH, CeruleanCity_House5_EventScript_NoBerries
# 10 "data/maps/CeruleanCity_House5/scripts.pory"
	msgbox CeruleanCity_House1_Text_HaveJustTheThing
# 11 "data/maps/CeruleanCity_House5/scripts.pory"
	setflag FLAG_GOT_POWDER_JAR
# 12 "data/maps/CeruleanCity_House5/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 13 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 14 "data/maps/CeruleanCity_House5/scripts.pory"
	msgbox CeruleanCity_House1_Text_GoCrushBerriesAtDirectCorner
# 15 "data/maps/CeruleanCity_House5/scripts.pory"
	release
	end


CeruleanCity_House5_EventScript_NoBerries::
# 20 "data/maps/CeruleanCity_House5/scripts.pory"
	msgbox CeruleanCity_House1_Text_WhyMustYouLieNoBerries
# 21 "data/maps/CeruleanCity_House5/scripts.pory"
	release
	end


CeruleanCity_House5_EventScript_NoInterestInBerries::
# 26 "data/maps/CeruleanCity_House5/scripts.pory"
	msgbox CeruleanCity_House1_Text_TakeInterestInAllSortsOfThings
# 27 "data/maps/CeruleanCity_House5/scripts.pory"
	release
	end


CeruleanCity_House5_EventScript_AskToExchangePowder::
# 32 "data/maps/CeruleanCity_House5/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 33 "data/maps/CeruleanCity_House5/scripts.pory"
	msgbox CeruleanCity_House1_Text_HaveYouBroughtBerryPowder
# 34 "data/maps/CeruleanCity_House5/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
	end


CeruleanCity_House5_EventScript_ChooseExchangeItem::
# 39 "data/maps/CeruleanCity_House5/scripts.pory"
	message CeruleanCity_House5_Text_ExchangeWithWhat
# 40 "data/maps/CeruleanCity_House5/scripts.pory"
	waitmessage
# 41 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8004, LISTMENU_BERRY_POWDER
# 42 "data/maps/CeruleanCity_House5/scripts.pory"
	special ListMenu
# 43 "data/maps/CeruleanCity_House5/scripts.pory"
	waitstate
# 44 "data/maps/CeruleanCity_House5/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 45 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeruleanCity_House5_EventScript_EnergyPowder
# 46 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeruleanCity_House5_EventScript_EnergyRoot
# 47 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeruleanCity_House5_EventScript_HealPowder
# 48 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_0x8000, 3, CeruleanCity_House5_EventScript_RevivalHerb
# 49 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_0x8000, 4, CeruleanCity_House5_EventScript_Protein
# 50 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_0x8000, 5, CeruleanCity_House5_EventScript_Iron
# 51 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_0x8000, 6, CeruleanCity_House5_EventScript_Carbos
# 52 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_0x8000, 7, CeruleanCity_House5_EventScript_Calcium
# 53 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_0x8000, 8, CeruleanCity_House5_EventScript_Zinc
# 54 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_0x8000, 9, CeruleanCity_House5_EventScript_HPUp
# 55 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_0x8000, 10, CeruleanCity_House5_EventScript_PPUp
# 56 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_0x8000, 11, CeruleanCity_House5_EventScript_ExitMenu
# 57 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeruleanCity_House5_EventScript_ExitMenu
	end


CeruleanCity_House5_EventScript_EnergyPowder::
# 62 "data/maps/CeruleanCity_House5/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 63 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 64 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8009, 50
# 65 "data/maps/CeruleanCity_House5/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_EnergyRoot::
# 70 "data/maps/CeruleanCity_House5/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 71 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 72 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8009, 80
# 73 "data/maps/CeruleanCity_House5/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_HealPowder::
# 78 "data/maps/CeruleanCity_House5/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 79 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 80 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8009, 50
# 81 "data/maps/CeruleanCity_House5/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_RevivalHerb::
# 86 "data/maps/CeruleanCity_House5/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 87 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 88 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8009, 300
# 89 "data/maps/CeruleanCity_House5/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_Protein::
# 94 "data/maps/CeruleanCity_House5/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 95 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 96 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8009, 1000
# 97 "data/maps/CeruleanCity_House5/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_Iron::
# 102 "data/maps/CeruleanCity_House5/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 103 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 104 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8009, 1000
# 105 "data/maps/CeruleanCity_House5/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_Carbos::
# 110 "data/maps/CeruleanCity_House5/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 111 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 112 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8009, 1000
# 113 "data/maps/CeruleanCity_House5/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_Calcium::
# 118 "data/maps/CeruleanCity_House5/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 119 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 120 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8009, 1000
# 121 "data/maps/CeruleanCity_House5/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_Zinc::
# 126 "data/maps/CeruleanCity_House5/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 127 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 128 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8009, 1000
# 129 "data/maps/CeruleanCity_House5/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_HPUp::
# 134 "data/maps/CeruleanCity_House5/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 135 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 136 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8009, 1000
# 137 "data/maps/CeruleanCity_House5/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_PPUp::
# 142 "data/maps/CeruleanCity_House5/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 143 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 144 "data/maps/CeruleanCity_House5/scripts.pory"
	setvar VAR_0x8009, 3000
# 145 "data/maps/CeruleanCity_House5/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_ExitMenu::
# 150 "data/maps/CeruleanCity_House5/scripts.pory"
	msgbox CeruleanCity_House1_Text_SeeMeIfYoudLikeToTradePowder
# 151 "data/maps/CeruleanCity_House5/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 152 "data/maps/CeruleanCity_House5/scripts.pory"
	release
	end


CeruleanCity_House5_EventScript_ExchangePowderForItem::
# 157 "data/maps/CeruleanCity_House5/scripts.pory"
	msgbox CeruleanCity_House1_Text_YoullExchangeBerryPowderForItem, MSGBOX_YESNO
# 158 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeruleanCity_House5_EventScript_ChooseExchangeItem
# 159 "data/maps/CeruleanCity_House5/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 160 "data/maps/CeruleanCity_House5/scripts.pory"
	specialvar VAR_RESULT, Script_HasEnoughBerryPowder
# 161 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House5_EventScript_NotEnoughBerryPowder
# 162 "data/maps/CeruleanCity_House5/scripts.pory"
	giveitem VAR_0x8008
# 163 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House5_EventScript_BagIsFull
# 164 "data/maps/CeruleanCity_House5/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 165 "data/maps/CeruleanCity_House5/scripts.pory"
	special Script_TakeBerryPowder
# 166 "data/maps/CeruleanCity_House5/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 167 "data/maps/CeruleanCity_House5/scripts.pory"
	msgbox CeruleanCity_House1_Text_TradeMoreBerryPowder, MSGBOX_YESNO
# 168 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CeruleanCity_House5_EventScript_ChooseExchangeItem
# 169 "data/maps/CeruleanCity_House5/scripts.pory"
	msgbox CeruleanCity_House1_Text_HopeToSeeYouAgain
# 170 "data/maps/CeruleanCity_House5/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 171 "data/maps/CeruleanCity_House5/scripts.pory"
	release
	end


CeruleanCity_House5_EventScript_BagIsFull::
# 176 "data/maps/CeruleanCity_House5/scripts.pory"
	msgbox Text_BagIsFull
# 177 "data/maps/CeruleanCity_House5/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 178 "data/maps/CeruleanCity_House5/scripts.pory"
	release
	end


CeruleanCity_House5_EventScript_NotEnoughBerryPowder::
# 183 "data/maps/CeruleanCity_House5/scripts.pory"
	msgbox CeruleanCity_House1_Text_DontHaveEnoughBerryPowder
# 184 "data/maps/CeruleanCity_House5/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
	end


CeruleanCity_House5_EventScript_BerryCrushRankings::
# 189 "data/maps/CeruleanCity_House5/scripts.pory"
	lockall
# 190 "data/maps/CeruleanCity_House5/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 191 "data/maps/CeruleanCity_House5/scripts.pory"
	special ShowBerryCrushRankings
# 192 "data/maps/CeruleanCity_House5/scripts.pory"
	waitstate
# 193 "data/maps/CeruleanCity_House5/scripts.pory"
	releaseall
	end

