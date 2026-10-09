EventScript_PickMushroomPatch::
# 6 "data/scripts/mushroom_patch.pory"
	lockall
# 7 "data/scripts/mushroom_patch.pory"
	specialvar VAR_0x8004, GetMushroomPatchItem
# 8 "data/scripts/mushroom_patch.pory"
	goto_if_eq VAR_0x8004, ITEM_NONE, EventScript_MushroomPatch_End
# 9 "data/scripts/mushroom_patch.pory"
	bufferitemname STR_VAR_2, VAR_0x8004
# 10 "data/scripts/mushroom_patch.pory"
	additem VAR_0x8004
# 11 "data/scripts/mushroom_patch.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_MushroomPatch_BagFull
# 12 "data/scripts/mushroom_patch.pory"
	special PickMushroomPatch
# 13 "data/scripts/mushroom_patch.pory"
	playfanfare MUS_LEVEL_UP
# 14 "data/scripts/mushroom_patch.pory"
	message Text_FoundMushroom
# 15 "data/scripts/mushroom_patch.pory"
	waitfanfare
# 16 "data/scripts/mushroom_patch.pory"
	waitmessage
# 17 "data/scripts/mushroom_patch.pory"
	waitbuttonpress
# 18 "data/scripts/mushroom_patch.pory"
	releaseall
	end


EventScript_MushroomPatch_End::
# 23 "data/scripts/mushroom_patch.pory"
	releaseall
	end


EventScript_MushroomPatch_BagFull::
# 28 "data/scripts/mushroom_patch.pory"
	msgbox Text_TooBadBagFull, MSGBOX_DEFAULT
# 29 "data/scripts/mushroom_patch.pory"
	releaseall
	end


MushroomPatch_OnResume::
# 38 "data/scripts/mushroom_patch.pory"
	special RefreshMushroomPatchesOnMap
	return

