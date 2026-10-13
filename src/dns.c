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
#include "script.h"
#include "constants/map_groups.h"
#include "constants/weather.h"
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

/* Start hours for each of the timelapses */
#define DAY_START_HOUR          7   // 07 - 17 is TIME_DAY
#define AFTERNOON_START_HOUR    17  // 17 - 20 is TIME_AFTERNOON
#define NIGHT_START_HOUR        20  // 20 - 07 is TIME_NIGHT

/* When a timelapse starts, the colours change gradually from the previous one during these minutes. */
#define TRANSITION_MINUTES      30

/* Hours in which the lights (e.g. house windows) are on. */
#define LIGHTS_START_HOUR   NIGHT_START_HOUR
#define LIGHTS_END_HOUR     DAY_START_HOUR

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

/* Maps that are affected by the DNS even though their map type is in sDnsMapExceptions
 * (e.g. outdoor maps that are MAP_TYPE_INDOOR for gameplay reasons). */
static const u16 sDnsForcedMaps[] =
{
    MAP_SSANNE_EXTERIOR,
    MAP_SSANNE_DECK,
    MAP_CELADON_CITY_DEPARTMENT_STORE_ROOF,
    MAP_CELADON_CITY_CONDOMINIUMS_ROOF,
};

/* Maps whose weather changes at night (night hours are the ones of IsDnsNightTime).
 * The night weather is only used inside the area between minX-maxX and minY-maxY (both included,
 * editor coords), so it can be limited to a part of the map. Outside that area (or during the day)
 * the map keeps the weather of its header, which is restored when the player walks out of the area. */
struct DnsNightWeather
{
    u16 mapId;
    u8 nightWeather;
    s16 minX;
    s16 maxX;
    s16 minY;
    s16 maxY;
};

#define DNS_WHOLE_RANGE 0, 0x7FFF
#define DNS_WHOLE_MAP   DNS_WHOLE_RANGE, DNS_WHOLE_RANGE

static const struct DnsNightWeather sDnsNightWeathers[] =
{
    {MAP_LAVENDER_TOWN, WEATHER_FOG_HORIZONTAL, DNS_WHOLE_MAP},
    {MAP_ROUTE10,       WEATHER_FOG_HORIZONTAL, DNS_WHOLE_RANGE, 50, 0x7FFF}, // South part, from Rock Tunnel to Lavender Town
    {MAP_ROUTE8,        WEATHER_FOG_HORIZONTAL, 58, 0x7FFF, DNS_WHOLE_RANGE}, // East part, next to Lavender Town
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
#define LIGHT_WINDOW_DEEP   RGB2(23, 15, 5)
#define LIGHT_WINDOW_DARK   RGB2(27, 21, 9)
#define LIGHT_WINDOW_MID    RGB2(30, 25, 12)
#define LIGHT_WINDOW_BRIGHT RGB2(31, 28, 16)
#define LIGHT_WINDOW_SHINE  RGB2(31, 30, 21)
#define LIGHT_WINDOW_WHITE  RGB2(31, 31, 27)

/* Colour of the sky seen from the rooftops at night. */
#define NIGHT_SKY           RGB2(2, 3, 9)

/* Gradient used to light the glass: each glass colour gets a light interpolated
 * between these points depending on its brightness during the day (R + G + B, 0-93).
 * The middle points are the brightness of General's glass colours, so they keep exactly
 * the DARK, MID, BRIGHT and SHINE lights and any colour in between gets its own shade. */
struct GlassLightPoint
{
    u8 brightness;
    u16 light;
};

static const struct GlassLightPoint sGlassLightGradient[] =
{
    {30, LIGHT_WINDOW_DEEP},
    {49, LIGHT_WINDOW_DARK},
    {59, LIGHT_WINDOW_MID},
    {67, LIGHT_WINDOW_BRIGHT},
    {76, LIGHT_WINDOW_SHINE},
    {91, LIGHT_WINDOW_WHITE},
};

/* Glass palette.
 * The glass of every window is drawn on its own layer with palette 7 of the town's
 * secondary tileset, which only contains glass colours. So the whole palette can be
 * lit at night without touching anything else (roofs, flowers, water...).
 * Colours 1-4 are always the glass colours of General's palette 3 (colours 10-13),
 * which is also how the DNS recognizes a tileset that has a glass palette.
 * Each glass colour is lit with a darker or brighter light depending on how bright
 * it is during the day (see sGlassLightGradient), so the gradient of the glass is kept.
 * Colours 12-15 are never lit: they are for the frames of windows whose glass and frame
 * must be in the same tile (e.g. buildings drawn on the top layer, like the Bike Shop). */
#define GLASS_PALETTE             7
#define GLASS_SOURCE_PALETTE      3
#define GLASS_SOURCE_FIRST_COLOUR 10
#define GLASS_SOURCE_NUM_COLOURS  4
#define GLASS_UNLIT_FIRST_COLOUR  12

extern const struct Tileset gTileset_General;

/* Extra colours that light up at night, for anything that isn't drawn with the glass palette.
 * Each entry is only applied while its tileset is loaded in the current map.
 * Example (declare the tileset first):
 *     extern const struct Tileset gTileset_PalletTown;
 *     { &gTileset_PalletTown, 9, 8, LIGHT_WINDOW_BRIGHT },
 */
extern const struct Tileset gTileset_CeladonCity;
extern const struct Tileset gTileset_SSAnne;
extern const struct Tileset gTileset_PalletTown;
extern const struct Tileset gTileset_DepartmentStore;
extern const struct Tileset gTileset_Condominiums;

static const struct DnsLightColour sDnsLightColours[] =
{
    { &gTileset_CeladonCity, 10, 9, LIGHT_WINDOW_SHINE }, // White side of the Department Store windows
    // S.S. Anne deck: the glass of the portholes and the cabin windows uses colours 12-15 of palette 10
    { &gTileset_SSAnne, 10, 12, LIGHT_WINDOW_DARK },
    { &gTileset_SSAnne, 10, 13, LIGHT_WINDOW_MID },
    { &gTileset_SSAnne, 10, 14, LIGHT_WINDOW_BRIGHT },
    { &gTileset_SSAnne, 10, 15, LIGHT_WINDOW_SHINE },
    // Pallet Town street lamp: colours 8-10 of the glass palette, lit with the same shades as
    // the window glass colours 1-3 (instead of the ones their brightness would give them)
    { &gTileset_PalletTown, GLASS_PALETTE, 8, LIGHT_WINDOW_SHINE },
    { &gTileset_PalletTown, GLASS_PALETTE, 9, LIGHT_WINDOW_BRIGHT },
    { &gTileset_PalletTown, GLASS_PALETTE, 10, LIGHT_WINDOW_MID },
    // Celadon Department Store roof: glass of the windows of the facade (colours 13-15 and the white reflection 11 of palette 9)
    { &gTileset_DepartmentStore, 9, 13, LIGHT_WINDOW_MID },
    { &gTileset_DepartmentStore, 9, 14, LIGHT_WINDOW_BRIGHT },
    { &gTileset_DepartmentStore, 9, 15, LIGHT_WINDOW_SHINE },
    { &gTileset_DepartmentStore, 9, 11, LIGHT_WINDOW_WHITE },
    // Celadon Department Store roof: the sky around the building is colour 9 of Building's palette 0.
    // It's keyed on the secondary tileset so it doesn't affect other maps that use Building.
    { &gTileset_DepartmentStore, 0, 9, NIGHT_SKY },
    // Celadon Condominiums roof: glass of the windows of the facade (colours 11-12 of palette 2)
    { &gTileset_Condominiums, 2, 12, LIGHT_WINDOW_MID },
    { &gTileset_Condominiums, 2, 11, LIGHT_WINDOW_SHINE },
    // Celadon Condominiums roof: the sky uses colour 9 of palette 10 (only used by the sky tiles, so the
    // planters, which use the same blue of Building's palette 0, aren't darkened)
    { &gTileset_Condominiums, 10, 9, NIGHT_SKY },
    {NULL}, // Terminator
};

  /*******************************************************/
 /*************    DNS Colour Filters     ***************/
/*******************************************************/
/* Each channel (R, G, B) of a colour is changed as:    *
 *     out = in * mul / 256 + add                       *
 * using 8-bit colour values (0-255), then clamped.     *
 * {256, 0} leaves the channel untouched.               */

struct DnsChannelTint
{
    s16 mul;
    s16 add;
};

struct DnsTint
{
    struct DnsChannelTint r, g, b;
};

static const struct DnsTint sDnsTints[] =
{
    // Day: no filter
    [TIME_DAY] =       { .r = {256, 0},   .g = {256, 0},   .b = {256, 0} },
    // Afternoon: warm orange light, more red and less green and blue
    [TIME_AFTERNOON] = { .r = {244, 30},  .g = {244, -30}, .b = {228, -48} },
    // Night: dark blue, the colour is darkened proportionally (less red and green than blue)
    [TIME_NIGHT] =     { .r = {144, 0},   .g = {144, 0},   .b = {208, 0} },
};

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
// Timelapse and transition step of the current filter (see GetDnsFilter)
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
    u16 mapId = (gSaveBlock1Ptr->location.mapGroup << 8) | gSaveBlock1Ptr->location.mapNum;

    for (i = 0; i < ARRAY_COUNT(sDnsForcedMaps); i++)
    {
        if (sDnsForcedMaps[i] == mapId)
            return FALSE;
    }
    for (i = 0; i < ARRAY_COUNT(sDnsMapExceptions); i++)
    {
        if (gMapHeader.mapType == sDnsMapExceptions[i])
            return TRUE;
    }
    return FALSE;
}

// Night weather entry of the current map, or NULL if the map's weather never changes at night.
// inArea is set to whether the player is inside the area in which that night weather is used.
static const struct DnsNightWeather *GetCurrentMapNightWeather(bool8 *inArea)
{
    u32 i;
    u16 mapId = (gSaveBlock1Ptr->location.mapGroup << 8) | gSaveBlock1Ptr->location.mapNum;
    s16 x = gSaveBlock1Ptr->pos.x;
    s16 y = gSaveBlock1Ptr->pos.y;
    const struct DnsNightWeather *mapEntry = NULL;

    // When crossing a map connection, the new map is loaded while the player is still one step
    // outside of it, so the position is clamped to the first row/column the player is walking into.
    // Otherwise the night weather would start fading out right after entering from another map.
    if (gMapHeader.mapLayout != NULL)
    {
        x = max(0, min(x, gMapHeader.mapLayout->width - 1));
        y = max(0, min(y, gMapHeader.mapLayout->height - 1));
    }

    *inArea = FALSE;
    for (i = 0; i < ARRAY_COUNT(sDnsNightWeathers); i++)
    {
        if (sDnsNightWeathers[i].mapId != mapId)
            continue;
        mapEntry = &sDnsNightWeathers[i];
        if (x >= mapEntry->minX && x <= mapEntry->maxX && y >= mapEntry->minY && y <= mapEntry->maxY)
        {
            *inArea = TRUE;
            return mapEntry;
        }
    }
    return mapEntry;
}

// Weather of the current map for the current time, given the weather of its map header.
u8 GetDnsMapWeather(u8 headerWeather)
{
    bool8 inArea;
    const struct DnsNightWeather *nightWeather = GetCurrentMapNightWeather(&inArea);

    if (nightWeather == NULL || !inArea || !IsRtcWorking())
        return headerWeather;

    RtcCalcLocalTime();
    return IsDnsNightTime() ? nightWeather->nightWeather : headerWeather;
}

// Switches between the day and night weather when the time changes while the player is in the map,
// or when the player walks in or out of the area of the night weather.
// The weather is only changed if it is still the map's day or night weather, so a weather set
// by a script is kept.
static void UpdateNightWeather(void)
{
    bool8 inArea;
    const struct DnsNightWeather *nightWeather = GetCurrentMapNightWeather(&inArea);
    u8 weather;

    if (nightWeather == NULL
     || ArePlayerFieldControlsLocked()
     || gPaletteFade.active
     || gWeatherPtr->palProcessingState != WEATHER_PAL_STATE_IDLE)
        return;

    weather = (inArea && IsDnsNightTime()) ? nightWeather->nightWeather : gMapHeader.weather;
    if (GetSav1Weather() != weather
     && (GetSav1Weather() == gMapHeader.weather || GetSav1Weather() == nightWeather->nightWeather))
    {
        SetSavedWeather(weather);
        DoCurrentWeather();
    }
}

u8 GetDnsTimeLapse(u8 hour)
{
    if (hour < DAY_START_HOUR)
        return TIME_NIGHT;
    else if (hour < AFTERNOON_START_HOUR)
        return TIME_DAY;
    else if (hour < NIGHT_START_HOUR)
        return TIME_AFTERNOON;
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
    return GetDnsTimeLapse(gLocalTime.hours) == TIME_NIGHT;
}

bool8 IsDnsLightTime(void)
{
    return gLocalTime.hours >= LIGHTS_START_HOUR || gLocalTime.hours < LIGHTS_END_HOUR;
}

// The filter is identified by its timelapse (high byte) and how far into the transition from the
// previous timelapse it is (low byte, 0 to TRANSITION_MINUTES).
#define FILTER_ID(timeLapse, step)  (((timeLapse) << 8) | (step))
#define DAY_FILTER                  FILTER_ID(TIME_DAY, TRANSITION_MINUTES)

static u16 GetDnsFilter(void)
{
    u8 hour = gLocalTime.hours;
    u8 timeLapse = GetDnsTimeLapse(hour);
    u32 minutesIn;

    switch (timeLapse)
    {
    case TIME_DAY:
        minutesIn = (hour - DAY_START_HOUR) * 60;
        break;
    case TIME_AFTERNOON:
        minutesIn = (hour - AFTERNOON_START_HOUR) * 60;
        break;
    case TIME_NIGHT:
    default:
        minutesIn = ((hour + 24 - NIGHT_START_HOUR) % 24) * 60;
        break;
    }
    minutesIn += gLocalTime.minutes;
    return FILTER_ID(timeLapse, min(minutesIn, TRANSITION_MINUTES));
}

static s32 BlendTintValue(s32 from, s32 to, u32 step)
{
    return (from * (TRANSITION_MINUTES - (s32)step) + to * (s32)step) / TRANSITION_MINUTES;
}

static u32 ApplyChannelTint(const struct DnsChannelTint *from, const struct DnsChannelTint *to, u32 step, u32 value)
{
    s32 colour = value << 3; // 5-bit to 8-bit

    colour = ((colour * BlendTintValue(from->mul, to->mul, step)) >> 8) + BlendTintValue(from->add, to->add, step);
    if (colour < 0)
        colour = 0;
    else if (colour > 255)
        colour = 255;
    return colour >> 3;
}

static void BuildFilterLuts(u16 filter)
{
    u32 i;
    u32 timeLapse = filter >> 8;
    u32 step = filter & 0xFF;
    const struct DnsTint *to = &sDnsTints[timeLapse];
    const struct DnsTint *from = &sDnsTints[timeLapse == TIME_DAY ? TIME_NIGHT : timeLapse - 1];

    for (i = 0; i < 32; i++)
    {
        sFilterLutR[i] = ApplyChannelTint(&from->r, &to->r, step, i);
        sFilterLutG[i] = ApplyChannelTint(&from->g, &to->g, step, i) << 5;
        sFilterLutB[i] = ApplyChannelTint(&from->b, &to->b, step, i) << 10;
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
        if (!gMain.inBattle)
            UpdateNightWeather();
    }
    sRtcRefreshTimer--;

    filter = GetDnsFilter();
    if (filter != sCurrentFilter || !sFilterLutsReady)
        BuildFilterLuts(filter);

    if (!gMain.inBattle)
        UpdateLightsForTime();

    // The lights are already in the palette buffers, so they don't need the filter to show up.
    sDnsActive = (filter != DAY_FILTER);
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
static u16 GetGlassLight(u32 brightness)
{
    u32 i, c, from, to, pos, len;
    u16 light = 0;
    const struct GlassLightPoint *lo, *hi;

    if (brightness <= sGlassLightGradient[0].brightness)
        return sGlassLightGradient[0].light;
    for (i = 1; i < ARRAY_COUNT(sGlassLightGradient); i++)
    {
        if (brightness <= sGlassLightGradient[i].brightness)
            break;
    }
    if (i == ARRAY_COUNT(sGlassLightGradient))
        return sGlassLightGradient[i - 1].light;

    lo = &sGlassLightGradient[i - 1];
    hi = &sGlassLightGradient[i];
    pos = brightness - lo->brightness;
    len = hi->brightness - lo->brightness;
    for (c = 0; c < 15; c += 5)
    {
        from = (lo->light >> c) & 0x1F;
        to = (hi->light >> c) & 0x1F;
        light |= ((from * (len - pos) + to * pos + len / 2) / len) << c;
    }
    return light;
}

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
        if (glass[i] == 0 || i >= GLASS_UNLIT_FIRST_COLOUR)
            sGlassLightColours[i] = 0;
        else
            sGlassLightColours[i] = GetGlassLight(brightness);
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
    const struct Tileset *paletteTileset;
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
        {
            // The entry's tileset may not be the one that owns the palette (e.g. a primary palette colour
            // only lit in the maps of a secondary tileset), so the original colour is taken from the owner.
            paletteTileset = light->paletteNum < NUM_PALS_IN_PRIMARY ? mapLayout->primaryTileset : mapLayout->secondaryTileset;
            WriteLightColour(BG_PLTT_ID(light->paletteNum) + light->colourNum,
                             lightsOn ? light->lightColour : paletteTileset->palettes[light->paletteNum][light->colourNum]);
        }
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
