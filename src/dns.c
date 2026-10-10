#include "global.h"
#include "main.h"
#include "battle_main.h"
#include "dns.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "overworld.h"
#include "palette.h"
#include "quest_log.h"
#include "rtc.h"
#include "constants/field_weather.h"
#include "constants/map_types.h"
#include "constants/quest_log.h"
#include "constants/rgb.h"

/* **************************************************** *
 * *************** D&N for pokefirered **************** *
 * **************************************************** *
 * Based on Xhyz/Samu's DNS for pokeemerald, which is   *
 * based on Prime Dialga's DNS for Pokemon GBA games.   *
 * Additional credits to Andrea & Eing.                 *
 * **************************************************** */

  /*******************************************************/
 /*********    Day and Night Configuration     **********/
/*******************************************************/

/* End hours for each of the timelapses */
#define MIDNIGHT_END_HOUR   7       // 00 - 07
#define DAWN_END_HOUR       8       // 07 - 08
#define DAY_END_HOUR        19      // 08 - 19
#define SUNSET_END_HOUR     20      // 19 - 20
#define NIGHTFALL_END_HOUR  21      // 20 - 21
                                    // 21 - 00 is TIME_NIGHT

/* Hours in which the lights (e.g. house windows) are on. */
#define LIGHTS_START_HOUR   SUNSET_END_HOUR
#define LIGHTS_END_HOUR     MIDNIGHT_END_HOUR

/* How often (in frames) the RTC is read to refresh the time. */
#define RTC_REFRESH_FRAMES  60

/* Map types that are not affected by the DNS. */
static const u8 sDnsMapExceptions[] =
{
    MAP_TYPE_NONE,
    MAP_TYPE_UNDERGROUND,
    MAP_TYPE_INDOOR,
    MAP_TYPE_SECRET_BASE,
};

/* Palettes affected by the DNS during battles (only the battle terrain, BG 2-4).
 * In the overworld, the DNS affects the same palettes as the weather
 * (see sBasePaletteGammaTypes in field_weather.c), so the UI is never tinted. */
static const bool8 sBattleDnsPalettes[32] =
{
    [2] = TRUE,
    [3] = TRUE,
    [4] = TRUE,
};

/* Warm window light, from the darkest glass colour to the brightest one. */
#define LIGHT_WINDOW_DARK   RGB2(27, 21, 9)
#define LIGHT_WINDOW_MID    RGB2(30, 25, 12)
#define LIGHT_WINDOW_BRIGHT RGB2(31, 28, 16)

/* Glass palette.
 * The glass of every window is drawn on its own layer with palette 7 of the town's
 * secondary tileset, which only contains glass colours. So the whole palette can be
 * lit at night without touching anything else (roofs, flowers, water...).
 * Colours 1-4 are always the glass colours of General's palette 3 (colours 10-13),
 * which is also how the DNS recognizes a tileset that has a glass palette.
 * Each glass colour is lit with a darker or brighter light depending on how bright
 * it is during the day, so the gradient of the glass is kept. */
#define GLASS_PALETTE             7
#define GLASS_SOURCE_PALETTE      3
#define GLASS_SOURCE_FIRST_COLOUR 10
#define GLASS_SOURCE_NUM_COLOURS  4

extern const struct Tileset gTileset_General;

/* Extra colours that light up at night, for anything that isn't drawn with the glass palette.
 * Each entry is only applied while its tileset is loaded in the current map.
 * Example (declare the tileset first):
 *     extern const struct Tileset gTileset_PalletTown;
 *     { &gTileset_PalletTown, 9, 8, LIGHT_WINDOW_BRIGHT },
 */
static const struct DnsLightColour sDnsLightColours[] =
{
    {NULL}, // Terminator
};

  /*******************************************************/
 /*************    DNS Colour Filters     ***************/
/*******************************************************/
/* Filters are 15-bit RGB colours. Each channel of the  *
 * original colour is reduced proportionally:           *
 *     out = colour * (32 - filter) / 32                *
 * so a filter of 0 leaves the colour untouched and     *
 * higher values darken that channel more.              */

/* 00:00 - 01:00 cycles every 8 minutes, 01:00 - 07:00 uses the last one. */
static const u16 sMidnightFilters[] =
{
    RGB2(14, 14, 6),
    RGB2(14, 14, 7),
    RGB2(14, 14, 8),
    RGB2(15, 15, 8),
    RGB2(15, 15, 9),
    RGB2(15, 15, 9),
    RGB2(16, 16, 9),
    RGB2(16, 16, 10),
};

/* 07:00 - 08:00, cycles every 2 minutes. */
static const u16 sDawnFilters[] =
{
    RGB2(15, 15, 10),
    RGB2(15, 15, 10),
    RGB2(14, 14, 10),
    RGB2(13, 13, 10),
    RGB2(12, 12, 10),
    RGB2(11, 11, 10),
    RGB2(10, 10, 10),
    RGB2(9, 9, 10),
    RGB2(8, 8, 10),
    RGB2(8, 8, 11),
    RGB2(7, 7, 11),
    RGB2(6, 6, 11),
    RGB2(5, 5, 11),
    RGB2(4, 4, 11),
    RGB2(3, 3, 11),
    RGB2(2, 2, 11),
    RGB2(1, 1, 11),
    RGB2(0, 0, 11),
    RGB2(0, 0, 10),
    RGB2(0, 0, 9),
    RGB2(0, 0, 8),
    RGB2(0, 0, 7),
    RGB2(0, 0, 6),
    RGB2(0, 0, 5),
    RGB2(0, 0, 4),
    RGB2(0, 0, 3),
    RGB2(0, 0, 2),
    RGB2(0, 0, 1),
    RGB2(0, 0, 0),
    RGB2(0, 0, 0),
};

/* 08:00 - 19:00 */
static const u16 sDayFilter = RGB2(0, 0, 0);

/* 19:00 - 20:00, cycles every 2 minutes. */
static const u16 sSunsetFilters[] =
{
    RGB2(0, 0, 1),
    RGB2(0, 1, 1),
    RGB2(0, 1, 2),
    RGB2(0, 1, 3),
    RGB2(0, 2, 3),
    RGB2(0, 2, 4),
    RGB2(0, 2, 5),
    RGB2(0, 3, 5),
    RGB2(0, 3, 6),
    RGB2(0, 3, 7),
    RGB2(0, 4, 7),
    RGB2(0, 4, 8),
    RGB2(0, 4, 9),
    RGB2(0, 5, 9),
    RGB2(0, 5, 10),
    RGB2(0, 5, 11),
    RGB2(0, 6, 11),
    RGB2(0, 6, 12),
    RGB2(0, 6, 13),
    RGB2(0, 7, 13),
    RGB2(0, 7, 14),
    RGB2(0, 7, 14),
    RGB2(0, 8, 14),
    RGB2(0, 9, 14),
    RGB2(0, 10, 14),
    RGB2(0, 11, 14),
    RGB2(0, 12, 14),
    RGB2(0, 13, 14),
    RGB2(0, 14, 14),
    RGB2(0, 14, 14),
};

/* 20:00 - 21:00, cycles every 2 minutes. */
static const u16 sNightfallFilters[] =
{
    RGB2(0, 14, 14),
    RGB2(0, 14, 14),
    RGB2(0, 14, 13),
    RGB2(0, 14, 12),
    RGB2(0, 14, 11),
    RGB2(0, 14, 10),
    RGB2(1, 14, 10),
    RGB2(1, 14, 9),
    RGB2(0, 14, 8),
    RGB2(1, 14, 7),
    RGB2(1, 14, 6),
    RGB2(2, 14, 6),
    RGB2(2, 14, 5),
    RGB2(2, 14, 4),
    RGB2(2, 14, 3),
    RGB2(2, 14, 2),
    RGB2(2, 14, 2),
    RGB2(3, 14, 3),
    RGB2(4, 14, 4),
    RGB2(5, 14, 5),
    RGB2(6, 14, 6),
    RGB2(7, 14, 6),
    RGB2(8, 14, 6),
    RGB2(9, 14, 6),
    RGB2(10, 14, 6),
    RGB2(11, 14, 6),
    RGB2(12, 14, 6),
    RGB2(13, 14, 6),
    RGB2(14, 14, 6),
    RGB2(14, 14, 6),
};

/* 21:00 - 00:00 */
static const u16 sNightFilter = RGB2(14, 14, 6);

/***********************************************
 * --------- DNS CONFIGURATION END ----------- *
 ***********************************************/

enum
{
    DNS_MODE_OFF,
    DNS_MODE_OVERWORLD,
    DNS_MODE_BATTLE,
};

// Whether the current map and time are tinted at all. Which palettes get tinted is decided
// on every transfer from the main callback on screen (see GetDnsMode).
static EWRAM_DATA bool8 sDnsActive = FALSE;
// The lights are written straight into the palette buffers, so palette fades darken them
// along with the rest of the screen instead of having them pop in and out.
static EWRAM_DATA bool8 sLightsInBuffers = FALSE;
static EWRAM_DATA const u16 *sGlassPalette = NULL;
static EWRAM_DATA u16 sGlassLightColours[16] = {0};
static EWRAM_DATA u8 sRtcRefreshTimer = 0;
static EWRAM_DATA u16 sCurrentFilter = 0;
static EWRAM_DATA bool8 sFilterLutsReady = FALSE;
// Per-channel lookup tables for the current filter, already shifted into place
static EWRAM_DATA u16 sFilterLutR[32] = {0};
static EWRAM_DATA u16 sFilterLutG[32] = {0};
static EWRAM_DATA u16 sFilterLutB[32] = {0};

static void SetLightsInBuffers(const struct MapLayout *mapLayout, bool8 lightsOn);

static bool8 IsRtcWorking(void)
{
    return !(RtcGetErrorStatus() & (RTC_INIT_ERROR | RTC_ERR_FLAG_MASK));
}

static bool8 IsMapDnsException(void)
{
    u32 i;

    for (i = 0; i < ARRAY_COUNT(sDnsMapExceptions); i++)
    {
        if (gMapHeader.mapType == sDnsMapExceptions[i])
            return TRUE;
    }
    return FALSE;
}

u8 GetDnsTimeLapse(u8 hour)
{
    if (hour < MIDNIGHT_END_HOUR)
        return TIME_MIDNIGHT;
    else if (hour < DAWN_END_HOUR)
        return TIME_DAWN;
    else if (hour < DAY_END_HOUR)
        return TIME_DAY;
    else if (hour < SUNSET_END_HOUR)
        return TIME_SUNSET;
    else if (hour < NIGHTFALL_END_HOUR)
        return TIME_NIGHTFALL;
    else
        return TIME_NIGHT;
}

u8 GetCurrentDnsTimeLapse(void)
{
    return GetDnsTimeLapse(gLocalTime.hours);
}

// Night for gameplay purposes (e.g. Umbreon), matching the hours in which the map looks dark.
bool8 IsDnsNightTime(void)
{
    return gLocalTime.hours >= SUNSET_END_HOUR || gLocalTime.hours < MIDNIGHT_END_HOUR;
}

bool8 IsDnsLightTime(void)
{
    return gLocalTime.hours >= LIGHTS_START_HOUR || gLocalTime.hours < LIGHTS_END_HOUR;
}

static u16 GetDnsFilter(void)
{
    u8 hour = gLocalTime.hours;
    u8 minutes = gLocalTime.minutes;

    switch (GetDnsTimeLapse(hour))
    {
    case TIME_MIDNIGHT:
        if (hour < 1)
            return sMidnightFilters[minutes >> 3];
        return sMidnightFilters[ARRAY_COUNT(sMidnightFilters) - 1];
    case TIME_DAWN:
        return sDawnFilters[minutes >> 1];
    case TIME_DAY:
        return sDayFilter;
    case TIME_SUNSET:
        return sSunsetFilters[minutes >> 1];
    case TIME_NIGHTFALL:
        return sNightfallFilters[minutes >> 1];
    case TIME_NIGHT:
    default:
        return sNightFilter;
    }
}

static void BuildFilterLuts(u16 filter)
{
    u32 i;
    u32 r = 32 - (filter & 0x1F);
    u32 g = 32 - ((filter >> 5) & 0x1F);
    u32 b = 32 - ((filter >> 10) & 0x1F);

    for (i = 0; i < 32; i++)
    {
        sFilterLutR[i] = (i * r) >> 5;
        sFilterLutG[i] = ((i * g) >> 5) << 5;
        sFilterLutB[i] = ((i * b) >> 5) << 10;
    }
    sCurrentFilter = filter;
    sFilterLutsReady = TRUE;
}

// The lights are also on in the last scene of the Quest Log (the place where the game was saved),
// so they are already lit while its grayscale fades back into colour instead of popping in after it.
static bool8 ShouldLightsBeOn(void)
{
    return (gGlobalFieldTintMode == QL_TINT_NONE || gGlobalFieldTintMode == QL_TINT_BACKUP_GRAYSCALE)
        && IsDnsLightTime();
}

// Turns the lights on or off when the clock crosses LIGHTS_START_HOUR/LIGHTS_END_HOUR
// while standing in the map. Waits for any fade to end so the change doesn't pop mid-fade.
static void UpdateLightsForTime(void)
{
    bool8 lightsOn;

    if (gGlobalFieldTintMode != QL_TINT_NONE
     || gPaletteFade.active
     || gWeatherPtr->palProcessingState == WEATHER_PAL_STATE_SCREEN_FADING_IN
     || gWeatherPtr->palProcessingState == WEATHER_PAL_STATE_SCREEN_FADING_OUT)
        return;

    lightsOn = ShouldLightsBeOn();
    if (lightsOn != sLightsInBuffers)
        SetLightsInBuffers(gMapHeader.mapLayout, lightsOn);
}

// Called once per frame from the overworld and battle main callbacks.
void DnsUpdate(void)
{
    u16 filter;

    if (!IsRtcWorking() || IsMapDnsException())
    {
        sDnsActive = FALSE;
        return;
    }

    if (sRtcRefreshTimer == 0)
    {
        RtcCalcLocalTime();
        sRtcRefreshTimer = RTC_REFRESH_FRAMES;
    }
    sRtcRefreshTimer--;

    filter = GetDnsFilter();
    if (filter != sCurrentFilter || !sFilterLutsReady)
        BuildFilterLuts(filter);

    if (!gMain.inBattle)
        UpdateLightsForTime();

    // The lights are already in the palette buffers, so they don't need the filter to show up.
    sDnsActive = (filter != 0);
}

// Only the overworld and the battle scene are tinted, menus opened from them (bag, party...) are not.
// The screen is checked on every transfer instead of being remembered from the last DnsUpdate,
// otherwise the frame in which the main callback changes (e.g. the battle transition switching to
// CB2_OverworldBasic, or the battle intro) would be copied without the filter and flash.
static u8 GetDnsMode(void)
{
    if (!sDnsActive)
        return DNS_MODE_OFF;
    if (gMain.inBattle)
        return IsBattleMainCallback(gMain.callback2) ? DNS_MODE_BATTLE : DNS_MODE_OFF;
    return IsOverworldMainCallback(gMain.callback2) ? DNS_MODE_OVERWORLD : DNS_MODE_OFF;
}

static bool8 IsPaletteAffectedByDns(u8 mode, u32 palNum)
{
    if (mode == DNS_MODE_BATTLE)
        return sBattleDnsPalettes[palNum];
    return !IsPalettePreservedInWeather(palNum);
}

// Finds the glass palette of the current map, and computes the light used for each of its colours.
static void UpdateGlassPalette(const struct MapLayout *mapLayout)
{
    const u16 *glass, *source;
    u32 i, brightness;

    if (mapLayout == NULL
     || mapLayout->primaryTileset != &gTileset_General
     || mapLayout->secondaryTileset == NULL)
    {
        sGlassPalette = NULL;
        return;
    }

    glass = mapLayout->secondaryTileset->palettes[GLASS_PALETTE];
    if (glass == sGlassPalette)
        return;

    source = &mapLayout->primaryTileset->palettes[GLASS_SOURCE_PALETTE][GLASS_SOURCE_FIRST_COLOUR];
    for (i = 0; i < GLASS_SOURCE_NUM_COLOURS; i++)
    {
        if (glass[1 + i] != source[i])
        {
            sGlassPalette = NULL;
            return;
        }
    }

    for (i = 1; i < 16; i++)
    {
        brightness = (glass[i] & 0x1F) + ((glass[i] >> 5) & 0x1F) + ((glass[i] >> 10) & 0x1F);
        if (glass[i] == 0)
            sGlassLightColours[i] = 0;
        else if (brightness < 54)
            sGlassLightColours[i] = LIGHT_WINDOW_DARK;
        else if (brightness < 66)
            sGlassLightColours[i] = LIGHT_WINDOW_MID;
        else
            sGlassLightColours[i] = LIGHT_WINDOW_BRIGHT;
    }
    sGlassPalette = glass;
}

static void WriteLightColour(u32 offset, u16 colour)
{
    gPlttBufferUnfaded[offset] = colour;
    // Last scene of the Quest Log: the lit colour goes to the backup that is restored when it ends,
    // and the buffers get it in grayscale like the rest of the map.
    if (gGlobalFieldTintMode == QL_TINT_BACKUP_GRAYSCALE)
    {
        QuestLog_BackUpPalette(offset, 1);
        TintPalette_GrayScale(&gPlttBufferUnfaded[offset], 1);
    }
    gPlttBufferFaded[offset] = gPlttBufferUnfaded[offset];
}

// Writes the light colours (or the original ones, when turning the lights off) into the palette buffers.
static void SetLightsInBuffers(const struct MapLayout *mapLayout, bool8 lightsOn)
{
    const struct DnsLightColour *light;
    u32 i;

    sLightsInBuffers = FALSE;
    if (mapLayout == NULL)
        return;

    UpdateGlassPalette(mapLayout);
    if (sGlassPalette != NULL)
    {
        for (i = 1; i < 16; i++)
        {
            if (sGlassLightColours[i] != 0)
                WriteLightColour(BG_PLTT_ID(GLASS_PALETTE) + i, lightsOn ? sGlassLightColours[i] : sGlassPalette[i]);
        }
    }

    for (light = sDnsLightColours; light->tileset != NULL; light++)
    {
        if (light->tileset == mapLayout->primaryTileset || light->tileset == mapLayout->secondaryTileset)
            WriteLightColour(BG_PLTT_ID(light->paletteNum) + light->colourNum,
                             lightsOn ? light->lightColour : light->tileset->palettes[light->paletteNum][light->colourNum]);
    }
    sLightsInBuffers = lightsOn;
}

// Called right after the map's tileset palettes are loaded into the palette buffers.
void DnsLoadMapLights(const struct MapLayout *mapLayout)
{
    sLightsInBuffers = FALSE;
    if (!IsRtcWorking() || IsMapDnsException())
        return;

    RtcCalcLocalTime();
    if (ShouldLightsBeOn())
        SetLightsInBuffers(mapLayout, TRUE);
}

// The lights must keep their colour at night, so the filter is undone for them.
static void SkipDnsFilterForLights(const u16 *src, u16 *dest)
{
    const struct MapLayout *mapLayout = gMapHeader.mapLayout;
    const struct DnsLightColour *light;
    u32 i, offset;

    if (sGlassPalette != NULL)
    {
        for (i = 1; i < 16; i++)
        {
            if (sGlassLightColours[i] != 0)
                dest[BG_PLTT_ID(GLASS_PALETTE) + i] = src[BG_PLTT_ID(GLASS_PALETTE) + i];
        }
    }

    for (light = sDnsLightColours; light->tileset != NULL; light++)
    {
        if (light->tileset == mapLayout->primaryTileset || light->tileset == mapLayout->secondaryTileset)
        {
            offset = BG_PLTT_ID(light->paletteNum) + light->colourNum;
            dest[offset] = src[offset];
        }
    }
}

static void DnsFilterPalettes(u8 mode, const u16 *src, u16 *dest)
{
    const u16 *palSrc = src;
    u32 palNum, i, colour;
    u16 *palDest = dest;

    for (palNum = 0; palNum < 32; palNum++, palSrc += 16, palDest += 16)
    {
        if (IsPaletteAffectedByDns(mode, palNum))
        {
            for (i = 0; i < 16; i++)
            {
                colour = palSrc[i];
                palDest[i] = sFilterLutR[colour & 0x1F]
                           | sFilterLutG[(colour >> 5) & 0x1F]
                           | sFilterLutB[(colour >> 10) & 0x1F];
            }
        }
        else
        {
            for (i = 0; i < 16; i++)
                palDest[i] = palSrc[i];
        }
    }

    if (sLightsInBuffers && mode == DNS_MODE_OVERWORLD)
        SkipDnsFilterForLights(src, dest);
}

// Replaces the plain palette buffer -> palette RAM copy.
void DnsTransferPlttBuffer(const void *src, void *dest)
{
    u8 mode = GetDnsMode();

    if (mode == DNS_MODE_OFF)
    {
        DmaCopy16(3, src, dest, PLTT_SIZE);
    }
    else
    {
        DnsFilterPalettes(mode, src, dest);
    }
}
