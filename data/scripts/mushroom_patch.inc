@ Shared interaction for every metatile tagged MB_MUSHROOM_PATCH (see
@ src/daily_respawn.c for the table of actual mushroom spots). Reached from
@ GetInteractedMetatileScript in src/field_control_avatar.c, so this single
@ script serves every mushroom patch in the game.
EventScript_PickMushroomPatch::
	lockall
	additem ITEM_TINY_MUSHROOM
	goto_if_eq VAR_RESULT, FALSE, EventScript_MushroomPatch_BagFull
	special PickMushroomPatch
	msgbox Text_FoundMushroom, MSGBOX_DEFAULT
	releaseall
	end

EventScript_MushroomPatch_BagFull::
	msgbox Text_TooBadBagFull, MSGBOX_DEFAULT
	releaseall
	end

@ Add `map_script MAP_SCRIPT_ON_RESUME, MushroomPatch_OnResume` to any map's
@ scripts.inc that contains a mushroom patch (from sMushroomPatches in
@ src/daily_respawn.c). Runs after the map grid is loaded but before the
@ fade-in, so a still-cooling-down patch gets hidden again with no visible flicker.
MushroomPatch_OnResume::
	special RefreshMushroomPatchesOnMap
	return
