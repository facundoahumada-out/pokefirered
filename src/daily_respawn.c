#include "global.h"
#include "daily_respawn.h"
#include "constants/maps.h"
#include "constants/map_groups.h"
#include "constants/items.h"
#include "constants/metatile_labels.h"
#include "field_camera.h"
#include "field_player_avatar.h"
#include "fieldmap.h"
#include "rtc.h"

#define MUSHROOM_RESPAWN_MINUTES (24 * 60)

struct MushroomPatch
{
    u8 mapGroup;
    u8 mapNum;
    u8 x;
    u8 y;
    u16 mushroomMetatileId;
    u16 emptyMetatileId;
    u16 item;
};

static const struct MushroomPatch sMushroomPatches[] =
{
    { MAP_GROUP(MAP_PALLET_TOWN), MAP_NUM(MAP_PALLET_TOWN), 3, 18, 0x010, 0x238, ITEM_TINY_MUSHROOM },
};

#define MUSHROOM_PATCH_COUNT ARRAY_COUNT(sMushroomPatches)

STATIC_ASSERT(MUSHROOM_PATCH_COUNT <= ARRAY_COUNT(((struct SaveBlock1 *)0)->mushroomPatchCollectedAt), TooManyMushroomPatches);

static s32 GetMushroomPatchId(u8 mapGroup, u8 mapNum, s32 x, s32 y)
{
    s32 i;

    x -= MAP_OFFSET;
    y -= MAP_OFFSET;

    for (i = 0; i < MUSHROOM_PATCH_COUNT; i++)
    {
        if (sMushroomPatches[i].mapGroup == mapGroup
         && sMushroomPatches[i].mapNum == mapNum
         && sMushroomPatches[i].x == x
         && sMushroomPatches[i].y == y)
            return i;
    }

    return -1;
}

static s32 GetMushroomPatchIdInFrontOfPlayer(s16 *x, s16 *y)
{
    GetXYCoordsOneStepInFrontOfPlayer(x, y);
    return GetMushroomPatchId(gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum, *x, *y);
}

// Returns the item of the patch in front of the player, or ITEM_NONE if it isn't in sMushroomPatches.
u16 GetMushroomPatchItem(void)
{
    s16 x, y;
    s32 id = GetMushroomPatchIdInFrontOfPlayer(&x, &y);

    if (id < 0)
        return ITEM_NONE;

    return sMushroomPatches[id].item;
}

void PickMushroomPatch(void)
{
    s16 x, y;
    s32 id = GetMushroomPatchIdInFrontOfPlayer(&x, &y);
    u32 now;

    if (id < 0)
        return;

    // 0 means "not collected", so never store it as a timestamp.
    now = RtcGetMinuteCount();
    gSaveBlock1Ptr->mushroomPatchCollectedAt[id] = (now == 0) ? 1 : now;
    MapGridSetMetatileIdAt(x, y, sMushroomPatches[id].emptyMetatileId);
    CurrentMapDrawMetatileAt(x, y);
}

void RefreshMushroomPatchesOnMap(void)
{
    u8 mapGroup = gSaveBlock1Ptr->location.mapGroup;
    u8 mapNum = gSaveBlock1Ptr->location.mapNum;
    s32 i;

    for (i = 0; i < MUSHROOM_PATCH_COUNT; i++)
    {
        u32 collectedAt, now;

        if (sMushroomPatches[i].mapGroup != mapGroup || sMushroomPatches[i].mapNum != mapNum)
            continue;

        collectedAt = gSaveBlock1Ptr->mushroomPatchCollectedAt[i];

        if (collectedAt == 0)
            continue;

        now = RtcGetMinuteCount();

        // Clock was set back before the pick: restart the cooldown instead of
        // letting the unsigned subtraction wrap around and respawn the patch.
        if (now < collectedAt)
            gSaveBlock1Ptr->mushroomPatchCollectedAt[i] = collectedAt = (now == 0) ? 1 : now;

        if (now - collectedAt >= MUSHROOM_RESPAWN_MINUTES)
            gSaveBlock1Ptr->mushroomPatchCollectedAt[i] = 0;
        else
        {
            s32 x = sMushroomPatches[i].x + MAP_OFFSET;
            s32 y = sMushroomPatches[i].y + MAP_OFFSET;
            MapGridSetMetatileIdAt(x, y, sMushroomPatches[i].emptyMetatileId);
            CurrentMapDrawMetatileAt(x, y);
        }
    }
}
