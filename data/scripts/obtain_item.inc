EventScript_SaveTextColor::
# 3 "data/scripts/obtain_item.pory"
	copyvar VAR_PREV_TEXT_COLOR, VAR_TEXT_COLOR
	return


EventScript_RestorePrevTextColor::
# 8 "data/scripts/obtain_item.pory"
	copyvar VAR_TEXT_COLOR, VAR_PREV_TEXT_COLOR
	return


Std_ObtainItem::
# 13 "data/scripts/obtain_item.pory"
	copyvar VAR_PREV_TEXT_COLOR, VAR_TEXT_COLOR
# 14 "data/scripts/obtain_item.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 15 "data/scripts/obtain_item.pory"
	additem VAR_0x8000, VAR_0x8001
# 16 "data/scripts/obtain_item.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 17 "data/scripts/obtain_item.pory"
	call EventScript_ObtainItemMessage
# 18 "data/scripts/obtain_item.pory"
	copyvar VAR_TEXT_COLOR, VAR_PREV_TEXT_COLOR
	return


EventScript_ObtainItemMessage::
# 23 "data/scripts/obtain_item.pory"
	bufferitemnameplural STR_VAR_2, VAR_0x8000, VAR_0x8001
# 24 "data/scripts/obtain_item.pory"
	checkitemtype VAR_0x8000
# 25 "data/scripts/obtain_item.pory"
	call EventScript_BufferPocketNameTryFanfare
# 26 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8007, TRUE, EventScript_ObtainedItem
# 27 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8007, FALSE, EventScript_NoRoomForItem
	return


EventScript_BufferPocketNameTryFanfare::
# 32 "data/scripts/obtain_item.pory"
	copyvar VAR_0x8000, VAR_RESULT
# 33 "data/scripts/obtain_item.pory"
	goto_if_eq VAR_0x8000, POCKET_ITEMS, EventScript_BufferItemsPocket
# 34 "data/scripts/obtain_item.pory"
	goto_if_eq VAR_0x8000, POCKET_KEY_ITEMS, EventScript_BufferKeyItemsPocket
# 35 "data/scripts/obtain_item.pory"
	goto_if_eq VAR_0x8000, POCKET_POKE_BALLS, EventScript_BufferPokeBallsPocket
# 36 "data/scripts/obtain_item.pory"
	goto_if_eq VAR_0x8000, POCKET_TM_CASE, EventScript_BufferTMCase
# 37 "data/scripts/obtain_item.pory"
	goto_if_eq VAR_0x8000, POCKET_BERRY_POUCH, EventScript_BufferBerryPouch
	end


EventScript_BufferItemsPocket::
# 42 "data/scripts/obtain_item.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS_POCKET
# 43 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8007, TRUE, EventScript_PlayFanfareObtainedItem
	return


EventScript_BufferKeyItemsPocket::
# 48 "data/scripts/obtain_item.pory"
	bufferstdstring STR_VAR_3, STDSTRING_KEY_ITEMS_POCKET
# 49 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8007, TRUE, EventScript_PlayFanfareObtainedItem
	return


EventScript_BufferPokeBallsPocket::
# 54 "data/scripts/obtain_item.pory"
	bufferstdstring STR_VAR_3, STDSTRING_POKEBALLS_POCKET
# 55 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8007, TRUE, EventScript_PlayFanfareObtainedItem
	return


EventScript_BufferTMCase::
# 60 "data/scripts/obtain_item.pory"
	bufferstdstring STR_VAR_3, STDSTRING_TM_CASE
# 61 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8007, TRUE, EventScript_PlayFanfareObtainedTMHM
	return


EventScript_BufferBerryPouch::
# 66 "data/scripts/obtain_item.pory"
	bufferstdstring STR_VAR_3, STDSTRING_BERRY_POUCH
# 67 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8007, TRUE, EventScript_PlayFanfareObtainedItem
	return


EventScript_ObtainedItem::
# 72 "data/scripts/obtain_item.pory"
	message Text_ObtainedTheX
# 73 "data/scripts/obtain_item.pory"
	waitfanfare
# 74 "data/scripts/obtain_item.pory"
	waitmessage
# 75 "data/scripts/obtain_item.pory"
	msgbox Text_PutItemAway
# 76 "data/scripts/obtain_item.pory"
	setvar VAR_RESULT, 1
	return


EventScript_NoRoomForItem::
# 81 "data/scripts/obtain_item.pory"
	setvar VAR_RESULT, FALSE
	return


EventScript_PlayFanfareObtainedItem::
# 86 "data/scripts/obtain_item.pory"
	playfanfare MUS_LEVEL_UP
	return


EventScript_PlayFanfareObtainedTMHM::
# 91 "data/scripts/obtain_item.pory"
	playfanfare MUS_LEVEL_UP
	return


Std_ObtainDecoration::
# 96 "data/scripts/obtain_item.pory"
	adddecoration VAR_0x8000
# 97 "data/scripts/obtain_item.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 98 "data/scripts/obtain_item.pory"
	call EventScript_ObtainDecorMessage
	return


EventScript_ObtainDecorMessage::
# 103 "data/scripts/obtain_item.pory"
	bufferdecorationname STR_VAR_2, VAR_0x8000
# 104 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8007, TRUE, EventScript_ObtainedDecor
# 105 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8007, FALSE, EventScript_NoRoomForDecor
	return


EventScript_ObtainedDecor::
# 110 "data/scripts/obtain_item.pory"
	playfanfare MUS_OBTAIN_ITEM
# 111 "data/scripts/obtain_item.pory"
	message Text_ObtainedTheDecor
# 112 "data/scripts/obtain_item.pory"
	waitfanfare
# 113 "data/scripts/obtain_item.pory"
	waitmessage
# 114 "data/scripts/obtain_item.pory"
	msgbox Text_DecorTransferredToPC
# 115 "data/scripts/obtain_item.pory"
	setvar VAR_RESULT, TRUE
	return


EventScript_NoRoomForDecor::
# 120 "data/scripts/obtain_item.pory"
	setvar VAR_RESULT, FALSE
	return


Std_FindItem::
# 125 "data/scripts/obtain_item.pory"
	lock
# 126 "data/scripts/obtain_item.pory"
	faceplayer
# 127 "data/scripts/obtain_item.pory"
	waitse
# 128 "data/scripts/obtain_item.pory"
	copyvar VAR_0x8004, VAR_0x8000
# 129 "data/scripts/obtain_item.pory"
	copyvar VAR_0x8005, VAR_0x8001
# 130 "data/scripts/obtain_item.pory"
	checkitemspace VAR_0x8000, VAR_0x8001
# 131 "data/scripts/obtain_item.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 132 "data/scripts/obtain_item.pory"
	bufferitemname STR_VAR_2, VAR_0x8000
# 133 "data/scripts/obtain_item.pory"
	checkitemtype VAR_0x8000
# 134 "data/scripts/obtain_item.pory"
	call EventScript_BufferPocketNameTryFanfare
# 135 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8007, TRUE, EventScript_PickUpItem
# 136 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8007, FALSE, EventScript_NoRoomToPickUpItem
# 137 "data/scripts/obtain_item.pory"
	release
	return


EventScript_PickUpItem::
# 142 "data/scripts/obtain_item.pory"
	removeobject VAR_LAST_TALKED
# 143 "data/scripts/obtain_item.pory"
	additem VAR_0x8004, VAR_0x8005
# 144 "data/scripts/obtain_item.pory"
	specialvar VAR_RESULT, BufferTMHMMoveName
# 145 "data/scripts/obtain_item.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 146 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8008, TRUE, EventScript_FoundTMHM
# 147 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8008, FALSE, EventScript_FoundItem
# 148 "data/scripts/obtain_item.pory"
	waitfanfare
# 149 "data/scripts/obtain_item.pory"
	waitmessage
# 150 "data/scripts/obtain_item.pory"
	msgbox Text_PutItemAway
	return


EventScript_FoundTMHM::
# 155 "data/scripts/obtain_item.pory"
	message Text_FoundTMHMContainsMove
	return


EventScript_FoundItem::
# 160 "data/scripts/obtain_item.pory"
	message Text_FoundOneItem
	return


EventScript_NoRoomToPickUpItem::
# 165 "data/scripts/obtain_item.pory"
	msgbox Text_ObtainedTheX
# 166 "data/scripts/obtain_item.pory"
	msgbox Text_TooBadBagFull
# 167 "data/scripts/obtain_item.pory"
	setvar VAR_RESULT, FALSE
	return


EventScript_HiddenItemScript::
# 172 "data/scripts/obtain_item.pory"
	lockall
# 173 "data/scripts/obtain_item.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 174 "data/scripts/obtain_item.pory"
	waitse
# 175 "data/scripts/obtain_item.pory"
	goto_if_eq VAR_0x8005, 0, EventScript_TryPickUpHiddenCoins
# 176 "data/scripts/obtain_item.pory"
	call EventScript_TryPickUpHiddenItem
# 177 "data/scripts/obtain_item.pory"
	goto_if_eq VAR_0x8007, TRUE, EventScript_PickedUpHiddenItem
# 178 "data/scripts/obtain_item.pory"
	goto_if_eq VAR_0x8007, FALSE, EventScript_NoRoomForHiddenItem
	end


EventScript_TryPickUpHiddenItem::
# 183 "data/scripts/obtain_item.pory"
	additem VAR_0x8005, VAR_0x8006
# 184 "data/scripts/obtain_item.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 185 "data/scripts/obtain_item.pory"
	bufferitemname STR_VAR_2, VAR_0x8005
# 186 "data/scripts/obtain_item.pory"
	checkitemtype VAR_0x8005
# 187 "data/scripts/obtain_item.pory"
	call EventScript_BufferPocketNameTryFanfare
	return


EventScript_PickedUpHiddenItem::
# 192 "data/scripts/obtain_item.pory"
	call_if_eq VAR_0x8006, 1, EventScript_FoundSingleItem
# 193 "data/scripts/obtain_item.pory"
	call_if_ne VAR_0x8006, 1, EventScript_FoundMultipleItems
# 194 "data/scripts/obtain_item.pory"
	waitfanfare
# 195 "data/scripts/obtain_item.pory"
	waitmessage
# 196 "data/scripts/obtain_item.pory"
	msgbox Text_PutItemAway
# 197 "data/scripts/obtain_item.pory"
	special SetHiddenItemFlag
# 198 "data/scripts/obtain_item.pory"
	releaseall
	end


EventScript_FoundSingleItem::
# 203 "data/scripts/obtain_item.pory"
	message Text_FoundOneItem
	return


EventScript_FoundCoins::
# 208 "data/scripts/obtain_item.pory"
	buffernumberstring STR_VAR_1, VAR_0x8006
# 209 "data/scripts/obtain_item.pory"
	message Text_FoundXCoins
	return


EventScript_FoundMultipleItems::
# 214 "data/scripts/obtain_item.pory"
	buffernumberstring STR_VAR_1, VAR_0x8006
# 215 "data/scripts/obtain_item.pory"
	message Text_FoundXItems
	return


EventScript_NoRoomForHiddenItem::
# 220 "data/scripts/obtain_item.pory"
	msgbox Text_FoundOneItem
# 221 "data/scripts/obtain_item.pory"
	msgbox Text_TooBadBagFull
# 222 "data/scripts/obtain_item.pory"
	setvar VAR_RESULT, 0
# 223 "data/scripts/obtain_item.pory"
	releaseall
	end


EventScript_TryPickUpHiddenCoins::
# 228 "data/scripts/obtain_item.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, EventScript_NoCaseForHiddenCoins
# 229 "data/scripts/obtain_item.pory"
	checkcoins VAR_RESULT
# 230 "data/scripts/obtain_item.pory"
	specialvar VAR_RESULT, CheckAddCoins
# 231 "data/scripts/obtain_item.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_HiddenCoinsButCaseIsFull
# 232 "data/scripts/obtain_item.pory"
	addcoins VAR_0x8006
# 233 "data/scripts/obtain_item.pory"
	bufferstdstring STR_VAR_2, STDSTRING_COINS
# 234 "data/scripts/obtain_item.pory"
	call EventScript_PlayFanfareObtainedItem
# 235 "data/scripts/obtain_item.pory"
	call EventScript_FoundCoins
# 236 "data/scripts/obtain_item.pory"
	waitfanfare
# 237 "data/scripts/obtain_item.pory"
	waitmessage
# 238 "data/scripts/obtain_item.pory"
	msgbox Text_PutCoinsAwayInCoinCase
# 239 "data/scripts/obtain_item.pory"
	special SetHiddenItemFlag
# 240 "data/scripts/obtain_item.pory"
	releaseall
	end


EventScript_HiddenCoinsButCaseIsFull::
# 245 "data/scripts/obtain_item.pory"
	buffernumberstring STR_VAR_1, VAR_0x8006
# 246 "data/scripts/obtain_item.pory"
	bufferstdstring STR_VAR_2, STDSTRING_COINS
# 247 "data/scripts/obtain_item.pory"
	msgbox Text_FoundXCoins
# 248 "data/scripts/obtain_item.pory"
	msgbox Text_CoinCaseIsFull
# 249 "data/scripts/obtain_item.pory"
	setvar VAR_RESULT, 0
# 250 "data/scripts/obtain_item.pory"
	releaseall
	end


EventScript_NoCaseForHiddenCoins::
# 255 "data/scripts/obtain_item.pory"
	buffernumberstring STR_VAR_1, VAR_0x8006
# 256 "data/scripts/obtain_item.pory"
	bufferstdstring STR_VAR_2, STDSTRING_COINS
# 257 "data/scripts/obtain_item.pory"
	msgbox Text_FoundXCoins
# 258 "data/scripts/obtain_item.pory"
	msgbox Text_NothingToPutThemIn
# 259 "data/scripts/obtain_item.pory"
	setvar VAR_RESULT, 0
# 260 "data/scripts/obtain_item.pory"
	releaseall
	end

