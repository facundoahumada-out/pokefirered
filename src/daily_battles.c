#include "global.h"
#include "daily_battles.h"
#include "event_data.h"
#include "constants/maps.h"
#include "constants/map_groups.h"
#include "rtc.h"

// Daily gym leader rematches: each day of the week one gym leader waits on their own map
// (object event hidden by FLAG_HIDE_DAILY_LEADER) and can be battled until beaten that day.
// Only one leader is available per day, so a single var remembers the day the last one was beaten.

enum
{
    DAY_SUNDAY,
    DAY_MONDAY,
    DAY_TUESDAY,
    DAY_WEDNESDAY,
    DAY_THURSDAY,
    DAY_FRIDAY,
    DAY_SATURDAY,
    DAYS_PER_WEEK,
};

struct DailyLeader
{
    u8 mapGroup;
    u8 mapNum;
    u8 dayOfWeek;
};

static const struct DailyLeader sDailyLeaders[] =
{
    { MAP_GROUP(MAP_MT_MOON_1F),               MAP_NUM(MAP_MT_MOON_1F),               DAY_MONDAY },    // Brock
    { MAP_GROUP(MAP_ROUTE20),                  MAP_NUM(MAP_ROUTE20),                  DAY_TUESDAY },   // Misty
    { MAP_GROUP(MAP_ROUTE10),                  MAP_NUM(MAP_ROUTE10),                  DAY_WEDNESDAY }, // Lt. Surge
    { MAP_GROUP(MAP_VIRIDIAN_FOREST),          MAP_NUM(MAP_VIRIDIAN_FOREST),          DAY_THURSDAY },  // Erika
    { MAP_GROUP(MAP_THREE_ISLAND_BERRY_FOREST), MAP_NUM(MAP_THREE_ISLAND_BERRY_FOREST), DAY_FRIDAY },    // Koga
    { MAP_GROUP(MAP_SAFFRON_CITY_DOJO),        MAP_NUM(MAP_SAFFRON_CITY_DOJO),        DAY_SATURDAY },  // Sabrina
    { MAP_GROUP(MAP_MT_EMBER_EXTERIOR),        MAP_NUM(MAP_MT_EMBER_EXTERIOR),        DAY_SUNDAY },    // Blaine
};

// Days since the RTC epoch (Jan 1, 2000 is day 1), so it's never 0
static u16 GetCurrentDayCount(void)
{
    return RtcGetMinuteCount() / (HOURS_PER_DAY * MINUTES_PER_HOUR);
}

u16 GetDayOfWeek(void)
{
    // Jan 1, 2000 (day 1) was a Saturday
    return (GetCurrentDayCount() + DAY_SATURDAY - 1) % DAYS_PER_WEEK;
}

// Called from the ON_TRANSITION script of each map in sDailyLeaders
void UpdateDailyLeaderVisibility(void)
{
    u32 i;
    u16 day = GetDayOfWeek();

    FlagSet(FLAG_HIDE_DAILY_LEADER);
    for (i = 0; i < ARRAY_COUNT(sDailyLeaders); i++)
    {
        if (sDailyLeaders[i].mapGroup == gSaveBlock1Ptr->location.mapGroup
         && sDailyLeaders[i].mapNum == gSaveBlock1Ptr->location.mapNum
         && sDailyLeaders[i].dayOfWeek == day)
        {
            FlagClear(FLAG_HIDE_DAILY_LEADER);
            break;
        }
    }
}

bool8 IsDailyLeaderBeatenToday(void)
{
    return VarGet(VAR_DAILY_LEADER_WIN_DAY) == GetCurrentDayCount();
}

void SetDailyLeaderBeatenToday(void)
{
    VarSet(VAR_DAILY_LEADER_WIN_DAY, GetCurrentDayCount());
}
