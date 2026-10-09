CeladonCity_GameCorner_PrizeRoom_MapScripts::
	.byte 0


CeladonCity_GameCorner_PrizeRoom_EventScript_BaldingMan::
# 4 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_FancyThatPorygon, MSGBOX_NPC
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_OldMan::
# 9 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_RakedItInToday, MSGBOX_NPC
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons::
# 14 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	lock
# 15 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	faceplayer
# 16 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
# 17 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 18 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	showcoinsbox 0, 0
# 19 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 20 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon::
# 25 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 26 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitmessage
# 27 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	multichoice 11, 0, MULTICHOICE_GAME_CORNER_POKEMON_PRIZES, FALSE
# 28 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 29 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_GameCorner_PrizeRoom_EventScript_Abra
# 30 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_GameCorner_PrizeRoom_EventScript_Clefairy
# 31 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_GameCorner_PrizeRoom_EventScript_DratiniPinsir
# 32 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 3, CeladonCity_GameCorner_PrizeRoom_EventScript_ScytherDratini
# 33 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 4, CeladonCity_GameCorner_PrizeRoom_EventScript_Porygon
# 34 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 5, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 35 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange::
# 40 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	hidecoinsbox 0, 0
# 41 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	release
	end


# 45 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 46 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 47 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Abra::
# 48 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 49 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ABRA
# 50 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 180
# 51 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 52 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 53 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ABRA
# 54 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 120
# 55 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 56 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 57 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 58 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end

# 61 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 62 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 63 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Clefairy::
# 64 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 65 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CLEFAIRY
# 66 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 500
# 67 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 68 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 69 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CLEFAIRY
# 70 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 750
# 71 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 72 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 73 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 74 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end

# 77 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 78 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 79 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_DratiniPinsir::
# 80 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 81 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DRATINI
# 82 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 2800
# 83 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 84 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 85 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PINSIR
# 86 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 2500
# 87 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 88 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 89 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 90 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end

# 93 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 94 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 95 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ScytherDratini::
# 96 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 97 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SCYTHER
# 98 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 5500
# 99 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 100 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 101 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DRATINI
# 102 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 4600
# 103 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 104 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 105 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 106 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end

# 109 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 110 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 111 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Porygon::
# 112 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 113 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PORYGON
# 114 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 9999
# 115 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 116 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 117 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PORYGON
# 118 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 6500
# 119 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 120 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 121 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 122 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon::
# 126 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 127 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 128 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 129 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	checkcoins VAR_RESULT
# 130 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_lt VAR_RESULT, VAR_TEMP_2, CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
# 131 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 132 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_TEMP_1
# 133 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, SPECIES_ABRA, CeladonCity_GameCorner_PrizeRoom_EventScript_GiveAbra
# 134 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, SPECIES_CLEFAIRY, CeladonCity_GameCorner_PrizeRoom_EventScript_GiveClefairy
# 135 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, SPECIES_DRATINI, CeladonCity_GameCorner_PrizeRoom_EventScript_GiveDratini
# 136 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, SPECIES_SCYTHER, CeladonCity_GameCorner_PrizeRoom_EventScript_GiveScyther
# 137 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, SPECIES_PORYGON, CeladonCity_GameCorner_PrizeRoom_EventScript_GivePorygon
# 138 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, SPECIES_PINSIR, CeladonCity_GameCorner_PrizeRoom_EventScript_GivePinsir
	end


# 142 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 143 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 144 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveAbra::
# 145 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 146 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 9
# 147 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 148 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 149 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 7
# 150 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 151 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 152 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 153 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end

# 156 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 157 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 158 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveClefairy::
# 159 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 160 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 8
# 161 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 162 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 163 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 12
# 164 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 165 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 166 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 167 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end

# 170 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 171 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 172 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveDratini::
# 173 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 174 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 18
# 175 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 176 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 177 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 24
# 178 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 179 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 180 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 181 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_GiveScyther::
# 185 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 25
# 186 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end


# 190 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 191 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 192 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GivePorygon::
# 193 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 194 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 26
# 195 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 196 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 197 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 18
# 198 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 199 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 200 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 201 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_GivePinsir::
# 205 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 18
# 206 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon::
# 211 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty
# 212 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC
# 213 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, CeladonCity_GameCorner_PrizeRoom_EventScript_PartyFull
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_PartyFull::
# 218 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 219 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox Text_NoMoreRoomForPokemon
# 220 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	hidecoinsbox 0, 0
# 221 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	release
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon::
# 226 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	getpartysize
# 227 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	subvar VAR_RESULT, 1
# 228 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 229 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	call EventScript_ChangePokemonNickname
# 230 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase::
# 235 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 236 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_CoinCaseRequired
# 237 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	release
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins::
# 242 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_NeedMoreCoins
# 243 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty::
# 248 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	removecoins VAR_TEMP_2
# 249 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	updatecoinsbox 0, 5
# 250 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 251 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 252 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	message Text_PlayerObtainedTheMon
# 253 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitmessage
# 254 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitfanfare
# 255 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 256 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CeladonCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon
# 257 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC::
# 262 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	removecoins VAR_TEMP_2
# 263 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	updatecoinsbox 0, 5
# 264 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 265 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 266 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	message Text_PlayerObtainedTheMon
# 267 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitmessage
# 268 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitfanfare
# 269 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 270 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC
# 271 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 272 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC::
# 277 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	call EventScript_TransferredToPC
# 278 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs::
# 283 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	lock
# 284 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	faceplayer
# 285 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
# 286 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 287 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	showcoinsbox 0, 0
# 288 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 289 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM::
# 294 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 295 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitmessage
# 296 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	multichoice 11, 0, MULTICHOICE_GAME_CORNER_TMPRIZES, FALSE
# 297 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 298 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_GameCorner_PrizeRoom_EventScript_TM13
# 299 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_GameCorner_PrizeRoom_EventScript_TM23
# 300 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_GameCorner_PrizeRoom_EventScript_TM24
# 301 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 3, CeladonCity_GameCorner_PrizeRoom_EventScript_TM30
# 302 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 4, CeladonCity_GameCorner_PrizeRoom_EventScript_TM35
# 303 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 5, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 304 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_TM13::
# 309 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM13
# 310 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 311 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	buffermovename STR_VAR_2, MOVE_ICE_BEAM
# 312 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_TM23::
# 317 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM23
# 318 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 3500
# 319 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	buffermovename STR_VAR_2, MOVE_IRON_TAIL
# 320 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_TM24::
# 325 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM24
# 326 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 327 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	buffermovename STR_VAR_2, MOVE_THUNDERBOLT
# 328 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_TM30::
# 333 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM30
# 334 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 4500
# 335 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	buffermovename STR_VAR_2, MOVE_SHADOW_BALL
# 336 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_TM35::
# 341 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM35
# 342 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 343 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FLAMETHROWER
# 344 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM::
# 349 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantTM, MSGBOX_YESNO
# 350 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 351 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem::
# 356 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_1
# 357 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 358 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 359 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize::
# 364 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_1
# 365 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	checkcoins VAR_RESULT
# 366 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_lt VAR_RESULT, VAR_TEMP_2, CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
# 367 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	checkitemspace VAR_TEMP_1
# 368 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_GameCorner_PrizeRoom_EventScript_BagFull
# 369 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	removecoins VAR_TEMP_2
# 370 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	updatecoinsbox 0, 5
# 371 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	giveitem VAR_TEMP_1
# 372 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_BagFull::
# 377 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 378 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox Text_TooBadBagFull
# 379 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	hidecoinsbox 0, 0
# 380 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	release
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems::
# 385 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	lock
# 386 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	faceplayer
# 387 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
# 388 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 389 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	showcoinsbox 0, 0
# 390 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 391 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem::
# 396 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 397 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitmessage
# 398 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	multichoice 10, 0, MULTICHOICE_GAME_CORNER_BATTLE_ITEM_PRIZES, FALSE
# 399 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 400 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 0, CeladonCity_GameCorner_PrizeRoom_EventScript_SmokeBall
# 401 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 1, CeladonCity_GameCorner_PrizeRoom_EventScript_MiracleSeed
# 402 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 2, CeladonCity_GameCorner_PrizeRoom_EventScript_Charcoal
# 403 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 3, CeladonCity_GameCorner_PrizeRoom_EventScript_MysticWater
# 404 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 4, CeladonCity_GameCorner_PrizeRoom_EventScript_YellowFlute
# 405 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 5, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 406 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_0x8000, 127, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_SmokeBall::
# 411 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_SMOKE_BALL
# 412 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 800
# 413 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_MiracleSeed::
# 418 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MIRACLE_SEED
# 419 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 420 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_Charcoal::
# 425 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_CHARCOAL
# 426 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 427 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_MysticWater::
# 432 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MYSTIC_WATER
# 433 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 434 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_YellowFlute::
# 439 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_YELLOW_FLUTE
# 440 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 1600
# 441 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
	end

