CeladonCity_DepartmentStore_Roof_MapScripts::
	.byte 0


CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl::
# 4 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 5 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	special QuestLog_CutRecording
# 6 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	lock
# 7 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	faceplayer
# 8 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks
# 9 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_TEMP_1, 0, CeladonCity_DepartmentStore_Roof_EventScript_IWantDrink
# 10 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks::
# 15 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_TEMP_1, 0
# 16 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkitem ITEM_FRESH_WATER
# 17 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, CeladonCity_DepartmentStore_Roof_EventScript_SetHasFreshWater
# 18 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkitem ITEM_SODA_POP
# 19 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, CeladonCity_DepartmentStore_Roof_EventScript_SetHasSodaPop
# 20 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkitem ITEM_LEMONADE
# 21 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, CeladonCity_DepartmentStore_Roof_EventScript_SetHasLemonade
	return


CeladonCity_DepartmentStore_Roof_EventScript_SetHasFreshWater::
# 26 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	addvar VAR_TEMP_1, 1
	return


CeladonCity_DepartmentStore_Roof_EventScript_SetHasSodaPop::
# 31 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	addvar VAR_TEMP_1, 2
	return


CeladonCity_DepartmentStore_Roof_EventScript_SetHasLemonade::
# 36 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	addvar VAR_TEMP_1, 4
	return


CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink::
# 41 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImThirstyGiveHerDrink, MSGBOX_YESNO
# 42 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 43 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 44 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_GiveWhichDrink
# 45 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	waitmessage
# 46 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 47 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 48 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater
# 49 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop
# 50 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 3, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop
# 51 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 4, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade
# 52 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 5, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade
# 53 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 6, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade
# 54 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 7, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks
	end


CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater::
# 59 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_FRESH_WATER, FALSE
# 60 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 61 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 62 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 63 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop::
# 68 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_SODA_POP, FALSE
# 69 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 70 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 71 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 72 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop::
# 77 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_FRESH_WATER_SODA_POP, FALSE
# 78 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 79 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 80 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 81 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 82 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade::
# 87 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_LEMONADE, FALSE
# 88 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 89 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 90 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 91 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade::
# 96 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_FRESH_WATER_LEMONADE, FALSE
# 97 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 98 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 99 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 100 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 101 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade::
# 106 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_SODA_POP_LEMONADE, FALSE
# 107 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 108 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 109 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 110 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 111 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks::
# 116 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 0, 0, MULTICHOICE_THIRSTY_GIRL_FRESH_WATER_SODA_POP_LEMONADE, FALSE
# 117 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 118 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 119 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 120 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 121 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 3, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 122 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater::
# 127 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_0x8008, ITEM_FRESH_WATER
# 128 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_0x8009, ITEM_TM16
# 129 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_set FLAG_GOT_TM16_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
# 130 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YayFreshWaterHaveThis
# 131 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop::
# 136 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_0x8008, ITEM_SODA_POP
# 137 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_0x8009, ITEM_TM20
# 138 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_set FLAG_GOT_TM20_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
# 139 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YaySodaPopHaveThis
# 140 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade::
# 145 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_0x8008, ITEM_LEMONADE
# 146 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_0x8009, ITEM_TM33
# 147 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_set FLAG_GOT_TM33_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
# 148 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YayLemonadeHaveThis
# 149 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink::
# 154 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 155 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	bufferitemname STR_VAR_2, VAR_0x8009
# 156 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	removeitem VAR_0x8008
# 157 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkitemspace VAR_0x8009
# 158 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForReward
# 159 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	additem VAR_0x8009
# 160 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 161 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 162 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	message Text_ReceivedItemFromLittleGirl
# 163 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	waitmessage
# 164 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	waitfanfare
# 165 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	putitemaway VAR_0x8009
# 166 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call EventScript_RestorePrevTextColor
# 167 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_0x8008, ITEM_FRESH_WATER, CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM16
# 168 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_0x8008, ITEM_SODA_POP, CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM20
# 169 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_0x8008, ITEM_LEMONADE, CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM33
# 170 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM16::
# 175 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setflag FLAG_GOT_TM16_FROM_THIRSTY_GIRL
# 176 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM16
	return


CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM20::
# 181 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setflag FLAG_GOT_TM20_FROM_THIRSTY_GIRL
# 182 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM20
	return


CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM33::
# 187 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setflag FLAG_GOT_TM33_FROM_THIRSTY_GIRL
# 188 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM33
	return


CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForReward::
# 193 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_DontHaveSpaceForThis
# 194 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink::
# 199 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_Roof_EventScript_IWantDrink::
# 204 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImThirstyIWantDrink
# 205 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll::
# 210 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImNotThirstyAfterAll
# 211 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	release
	end


CeladonCity_DepartmentStore_Roof_EventScript_CooltrainerM::
# 216 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_MySisterIsImmature, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_Roof_EventScript_FloorSign::
# 221 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_FloorSign, MSGBOX_SIGN
	end


CeladonCity_DepartmentStore_Roof_EventScript_VendingMachine::
# 226 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	lockall
# 227 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_VendingMachineWhatDoesItHave
# 228 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	waitmessage
# 229 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	showmoneybox 0, 0
# 230 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink::
# 235 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	multichoice 12, 0, MULTICHOICE_CELADON_VENDING_MACHINE, FALSE
# 236 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 237 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 238 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_DepartmentStore_Roof_EventScript_BuyFreshWater
# 239 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_DepartmentStore_Roof_EventScript_BuySodaPop
# 240 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_DepartmentStore_Roof_EventScript_BuyLemonade
# 241 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NotThirsty
# 242 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
	end


CeladonCity_DepartmentStore_Roof_EventScript_BuyFreshWater::
# 247 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
# 248 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkmoney 200
# 249 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_BuySodaPop::
# 254 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_TEMP_0, ITEM_SODA_POP
# 255 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkmoney 300
# 256 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_BuyLemonade::
# 261 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	setvar VAR_TEMP_0, ITEM_LEMONADE
# 262 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkmoney 350
# 263 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyFreshWater::
# 268 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	removemoney 200
	return


CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneySodaPop::
# 273 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	removemoney 300
	return


CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyLemonade::
# 278 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	removemoney 350
	return


CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink::
# 283 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_DepartmentStore_Roof_EventScript_NotEnoughMoney
# 284 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	checkitemspace VAR_TEMP_0
# 285 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForDrink
# 286 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyFreshWater
# 287 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneySodaPop
# 288 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyLemonade
# 289 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	updatemoneybox
# 290 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_0
# 291 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	playse SE_VEND
# 292 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_DrinkCanPoppedOut
# 293 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	additem VAR_TEMP_0
# 294 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseNewDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_ChooseNewDrink::
# 299 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_VendingMachineWhatDoesItHave
# 300 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	waitmessage
# 301 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_NotEnoughMoney::
# 306 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NotEnoughMoney
# 307 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
	end


CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForDrink::
# 312 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NoMoreRoomForStuff
# 313 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
	end


CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine::
# 318 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	hidemoneybox
# 319 "data/maps/CeladonCity_DepartmentStore_Roof/scripts.pory"
	releaseall
	end

