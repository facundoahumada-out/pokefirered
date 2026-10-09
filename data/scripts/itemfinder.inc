EventScript_ItemfinderDigUpUnderfootItem::
# 2 "data/scripts/itemfinder.pory"
	lockall
# 3 "data/scripts/itemfinder.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 4 "data/scripts/itemfinder.pory"
	waitse
# 5 "data/scripts/itemfinder.pory"
	call EventScript_TryPickUpHiddenItem
# 6 "data/scripts/itemfinder.pory"
	goto_if_eq VAR_0x8007, TRUE, EventScript_DigUpItemPutInPocket
# 7 "data/scripts/itemfinder.pory"
	goto_if_eq VAR_0x8007, FALSE, EventScript_DigUpItemBagIsFull
	end


EventScript_DigUpItemPutInPocket::
# 12 "data/scripts/itemfinder.pory"
	message Text_DugUpItemFromGround
# 13 "data/scripts/itemfinder.pory"
	waitfanfare
# 14 "data/scripts/itemfinder.pory"
	waitmessage
# 15 "data/scripts/itemfinder.pory"
	delay 60
# 16 "data/scripts/itemfinder.pory"
	msgbox Text_PutItemAway
# 17 "data/scripts/itemfinder.pory"
	special SetHiddenItemFlag
# 18 "data/scripts/itemfinder.pory"
	releaseall
	end


EventScript_DigUpItemBagIsFull::
# 23 "data/scripts/itemfinder.pory"
	msgbox Text_DugUpItemFromGround
# 24 "data/scripts/itemfinder.pory"
	msgbox Text_TooBadBagFull
# 25 "data/scripts/itemfinder.pory"
	setvar VAR_RESULT, 0
# 26 "data/scripts/itemfinder.pory"
	releaseall
	end

