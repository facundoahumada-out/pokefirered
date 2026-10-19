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
    { MAP_GROUP(MAP_PALLET_TOWN), MAP_NUM(MAP_PALLET_TOWN), 3, 18, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_FOUR_ISLAND), MAP_NUM(MAP_FOUR_ISLAND), 40, 30, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_ROUTE2), MAP_NUM(MAP_ROUTE2), 14, 4, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_ROUTE10), MAP_NUM(MAP_ROUTE10), 2, 14, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_ROUTE16), MAP_NUM(MAP_ROUTE16), 2, 5, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_ROUTE18), MAP_NUM(MAP_ROUTE18), 39, 17, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_ROUTE22), MAP_NUM(MAP_ROUTE22), 34, 2, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_ROUTE25), MAP_NUM(MAP_ROUTE25), 41, 12, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_ROUTE28), MAP_NUM(MAP_ROUTE28), 9, 6, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_TWO_ISLAND_CAPE_BRINK), MAP_NUM(MAP_TWO_ISLAND_CAPE_BRINK), 16, 22, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_SIX_ISLAND_WATER_PATH), MAP_NUM(MAP_SIX_ISLAND_WATER_PATH), 9, 67, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_SIX_ISLAND_RUIN_VALLEY), MAP_NUM(MAP_SIX_ISLAND_RUIN_VALLEY), 17, 14, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_SEVEN_ISLAND_SEVAULT_CANYON), MAP_NUM(MAP_SEVEN_ISLAND_SEVAULT_CANYON), 11, 64, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_THREE_ISLAND_BERRY_FOREST), MAP_NUM(MAP_THREE_ISLAND_BERRY_FOREST), 31, 30, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_VIRIDIAN_FOREST), MAP_NUM(MAP_VIRIDIAN_FOREST), 27, 5, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_MT_EMBER_EXTERIOR), MAP_NUM(MAP_MT_EMBER_EXTERIOR), 22, 38, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
    { MAP_GROUP(MAP_SIX_ISLAND_PATTERN_BUSH), MAP_NUM(MAP_SIX_ISLAND_PATTERN_BUSH), 30, 16, 0x010, 0x238, ITEM_BIG_MUSHROOM  },
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
