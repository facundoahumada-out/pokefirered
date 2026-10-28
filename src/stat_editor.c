#include "global.h"
#include "gflib.h"
#include "stat_editor.h"
#include "decompress.h"
#include "event_data.h"
#include "field_fadetransition.h"
#include "list_menu.h"
#include "menu.h"
#include "menu_helpers.h"
#include "new_menu_helpers.h"
#include "overworld.h"
#include "pokemon_summary_screen.h"
#include "scanline_effect.h"
#include "script.h"
#include "strings.h"
#include "task.h"
#include "trainer_pokemon_sprites.h"
#include "constants/songs.h"

// "Pokémon Booster!": screen opened by an NPC to edit the IVs and EVs of a party mon
// (VAR_0x8004 = party slot, usually set by ChoosePartyMon).
// The background is graphics/stat_editor/screen_ivs.png / screen_evs.png (one per selected tab),
// converted with tools/screen_to_tilemap. Everything that changes is printed on top in windows.

enum
{
    TAB_IVS,
    TAB_EVS,
};

enum
{
    WIN_NAME,
    WIN_LEVEL,
    WIN_NATURE,
    WIN_VALUES,       // IV/EV column + the IV and EV sums below it
    WIN_TOTALS,       // final stats
    WIN_HIDDEN_POWER,
    WIN_COUNT
};

enum
{
    COLOR_NORMAL,
    COLOR_SELECTED,
    COLOR_EDITING,
    COLOR_MALE,
    COLOR_FEMALE,
    COLOR_WHITE,
};

#define FONT_STAT_EDITOR  FONT_NORMAL
#define TEXT_PAL          15
#define HIDDEN_POWER_PAL  14
#define MON_PIC_X         40
#define MON_PIC_Y         64

// Value boxes of the stat rows, relative to the top of WIN_VALUES / WIN_TOTALS
#define STAT_ROW_Y(i)     (6 + 13 * (i))
#define IV_SUM_Y          93
#define EV_SUM_Y          107
#define VALUES_CENTER_X   14
#define TOTALS_CENTER_X   21

// While editing, the selected value blinks: shown/hidden every this many frames
#define BLINK_FRAMES      16

struct StatEditor
{
    u16 bgTilemapBuffer[BG_SCREEN_SIZE / 2];
    struct Pokemon *mon;
    u16 monSpriteId;
    u8 tab;
    u8 cursor;
    bool8 editing;
    bool8 blinkHidden;
    u8 blinkTimer;
};

static EWRAM_DATA struct StatEditor *sStatEditor = NULL;

static void Task_OpenStatEditor(u8 taskId);
static void CB2_InitStatEditor(void);
static void CB2_StatEditor(void);
static void VBlankCB_StatEditor(void);
static void Task_StatEditorFadeIn(u8 taskId);
static void Task_StatEditorInput(u8 taskId);
static void Task_StatEditorFadeOut(u8 taskId);
static void LoadTabTilemap(void);
static void PrintMonInfo(void);
static void PrintStats(void);
static void ChangeSelectedValue(s32 delta);

static const u32 sStatEditor_Gfx[] = INCBIN_U32("graphics/stat_editor/tiles.4bpp.lz");
static const u16 sStatEditor_Pal[] = INCBIN_U16("graphics/stat_editor/tiles.gbapal");
static const u32 sStatEditor_IVsTilemap[] = INCBIN_U32("graphics/stat_editor/tilemap_ivs.bin.lz");
static const u32 sStatEditor_EVsTilemap[] = INCBIN_U32("graphics/stat_editor/tilemap_evs.bin.lz");

static const u16 sTextPal[] =
{
    RGB(0, 0, 0),    // transparent
    RGB(8, 8, 8),    // normal text
    RGB(26, 27, 31), // normal shadow
    RGB(9, 9, 20),   // selected text
    RGB(20, 21, 27), // selected shadow
    RGB(28, 0, 0),   // editing text
    RGB(31, 22, 22), // editing shadow
    RGB(5, 10, 25),  // male symbol
    RGB(20, 24, 30), // male shadow
    RGB(31, 31, 31), // white text
    RGB(8, 8, 8),    // white shadow
};

static const u8 sTextColors[][3] =
{
    [COLOR_NORMAL]   = {0, 1, 2},
    [COLOR_SELECTED] = {0, 3, 4},
    [COLOR_EDITING]  = {0, 5, 6},
    [COLOR_MALE]     = {0, 7, 8},
    [COLOR_FEMALE]   = {0, 5, 6},
    [COLOR_WHITE]    = {0, 9, 10},
};

// Same order as the rows on screen
static const u8 sIVData[NUM_STATS]   = {MON_DATA_HP_IV, MON_DATA_ATK_IV, MON_DATA_DEF_IV, MON_DATA_SPATK_IV, MON_DATA_SPDEF_IV, MON_DATA_SPEED_IV};
static const u8 sEVData[NUM_STATS]   = {MON_DATA_HP_EV, MON_DATA_ATK_EV, MON_DATA_DEF_EV, MON_DATA_SPATK_EV, MON_DATA_SPDEF_EV, MON_DATA_SPEED_EV};
static const u8 sStatData[NUM_STATS] = {MON_DATA_MAX_HP, MON_DATA_ATK, MON_DATA_DEF, MON_DATA_SPATK, MON_DATA_SPDEF, MON_DATA_SPEED};

static const struct BgTemplate sBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    },
};

static const struct WindowTemplate sWindowTemplates[] =
{
    [WIN_NAME] = {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = 10,
        .height = 2,
        .paletteNum = TEXT_PAL,
        .baseBlock = 1
    },
    [WIN_LEVEL] = {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 14,
        .width = 6,
        .height = 2,
        .paletteNum = TEXT_PAL,
        .baseBlock = 21
    },
    [WIN_NATURE] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 17,
        .width = 7,
        .height = 2,
        .paletteNum = TEXT_PAL,
        .baseBlock = 33
    },
    [WIN_VALUES] = {
        .bg = 0,
        .tilemapLeft = 16,
        .tilemapTop = 4,
        .width = 4,
        .height = 15,
        .paletteNum = TEXT_PAL,
        .baseBlock = 47
    },
    [WIN_TOTALS] = {
        .bg = 0,
        .tilemapLeft = 25,
        .tilemapTop = 4,
        .width = 5,
        .height = 11,
        .paletteNum = TEXT_PAL,
        .baseBlock = 107
    },
    [WIN_HIDDEN_POWER] = {
        .bg = 0,
        .tilemapLeft = 23,
        .tilemapTop = 17,
        .width = 4,
        .height = 2,
        .paletteNum = HIDDEN_POWER_PAL,
        .baseBlock = 162
    },
    DUMMY_WIN_TEMPLATE
};

void OpenStatEditor(void)
{
    LockPlayerFieldControls();
    CreateTask(Task_OpenStatEditor, 10);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
}

static void Task_OpenStatEditor(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(CB2_InitStatEditor);
        gFieldCallback = FieldCB_ContinueScriptHandleMusic;
        DestroyTask(taskId);
    }
}

static void CB2_InitStatEditor(void)
{
    u8 i;

    SetVBlankHBlankCallbacksToNull();
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    ScanlineEffect_Stop();
    ResetSpriteData();
    ResetAllPicSprites();
    FreeAllSpritePalettes();
    ResetPaletteFade();
    ResetTasks();

    sStatEditor = AllocZeroed(sizeof(*sStatEditor));
    sStatEditor->mon = &gPlayerParty[gSpecialVar_0x8004];
    sStatEditor->tab = TAB_IVS;

    ResetAllBgsCoordinatesAndBgCntRegs();
    ResetBgsAndClearDma3BusyFlags(FALSE);
    InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
    SetBgTilemapBuffer(1, sStatEditor->bgTilemapBuffer);
    ResetTempTileDataBuffers();
    DecompressAndLoadBgGfxUsingHeap(1, sStatEditor_Gfx, 0, 0, 0);
    LoadTabTilemap();
    LoadPalette(sStatEditor_Pal, BG_PLTT_ID(0), PLTT_SIZE_4BPP);

    InitWindows(sWindowTemplates);
    DeactivateAllTextPrinters();
    LoadPalette(sTextPal, BG_PLTT_ID(TEXT_PAL), sizeof(sTextPal));
    ListMenuLoadStdPalAt(BG_PLTT_ID(HIDDEN_POWER_PAL), 1);
    for (i = 0; i < WIN_COUNT; i++)
    {
        FillWindowPixelBuffer(i, PIXEL_FILL(0));
        PutWindowTilemap(i);
    }
    ScheduleBgCopyTilemapToVram(0);

    PrintMonInfo();
    PrintStats();
    sStatEditor->monSpriteId = CreateMonPicSprite_HandleDeoxys(GetMonData(sStatEditor->mon, MON_DATA_SPECIES),
                                                               GetMonData(sStatEditor->mon, MON_DATA_OT_ID),
                                                               GetMonData(sStatEditor->mon, MON_DATA_PERSONALITY),
                                                               TRUE, MON_PIC_X, MON_PIC_Y, 0, TAG_NONE);

    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    ShowBg(0);
    ShowBg(1);
    BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
    SetVBlankCallback(VBlankCB_StatEditor);
    SetMainCallback2(CB2_StatEditor);
    CreateTask(Task_StatEditorFadeIn, 0);
}

static void CB2_StatEditor(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_StatEditor(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_StatEditorFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_StatEditorInput;
}

static void Task_StatEditorInput(u8 taskId)
{
    if (sStatEditor->editing)
    {
        if (JOY_NEW(A_BUTTON | B_BUTTON))
        {
            PlaySE(SE_SELECT);
            sStatEditor->editing = FALSE;
            sStatEditor->blinkHidden = FALSE;
            PrintStats();
        }
        else if (JOY_REPT(DPAD_UP))
            ChangeSelectedValue(10);
        else if (JOY_REPT(DPAD_DOWN))
            ChangeSelectedValue(-10);
        else if (JOY_REPT(DPAD_RIGHT))
            ChangeSelectedValue(1);
        else if (JOY_REPT(DPAD_LEFT))
            ChangeSelectedValue(-1);
        else if (JOY_NEW(R_BUTTON))
            ChangeSelectedValue(MAX_TOTAL_EVS);
        else if (JOY_NEW(L_BUTTON))
            ChangeSelectedValue(-MAX_TOTAL_EVS);
        else if (++sStatEditor->blinkTimer >= BLINK_FRAMES)
        {
            sStatEditor->blinkTimer = 0;
            sStatEditor->blinkHidden ^= TRUE;
            PrintStats();
        }
        return;
    }

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        sStatEditor->editing = TRUE;
        sStatEditor->blinkTimer = 0;
        PrintStats();
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_StatEditorFadeOut;
    }
    else if (JOY_REPT(DPAD_UP))
    {
        PlaySE(SE_SELECT);
        sStatEditor->cursor = (sStatEditor->cursor == 0) ? NUM_STATS - 1 : sStatEditor->cursor - 1;
        PrintStats();
    }
    else if (JOY_REPT(DPAD_DOWN))
    {
        PlaySE(SE_SELECT);
        sStatEditor->cursor = (sStatEditor->cursor == NUM_STATS - 1) ? 0 : sStatEditor->cursor + 1;
        PrintStats();
    }
    else if (JOY_NEW(DPAD_LEFT | DPAD_RIGHT | L_BUTTON | R_BUTTON))
    {
        PlaySE(SE_SELECT);
        sStatEditor->tab ^= 1;
        LoadTabTilemap();
        PrintStats();
    }
}

static void Task_StatEditorFadeOut(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FreeAndDestroyMonPicSprite(sStatEditor->monSpriteId);
        FreeAllWindowBuffers();
        FREE_AND_SET_NULL(sStatEditor);
        DestroyTask(taskId);
        SetMainCallback2(CB2_ReturnToField);
    }
}

static void LoadTabTilemap(void)
{
    LZDecompressWram(sStatEditor->tab == TAB_IVS ? sStatEditor_IVsTilemap : sStatEditor_EVsTilemap, sStatEditor->bgTilemapBuffer);
    ScheduleBgCopyTilemapToVram(1);
}

static u8 GetHiddenPowerType(struct Pokemon *mon)
{
    u8 type;
    s32 typeBits = ((GetMonData(mon, MON_DATA_HP_IV) & 1) << 0)
                 | ((GetMonData(mon, MON_DATA_ATK_IV) & 1) << 1)
                 | ((GetMonData(mon, MON_DATA_DEF_IV) & 1) << 2)
                 | ((GetMonData(mon, MON_DATA_SPEED_IV) & 1) << 3)
                 | ((GetMonData(mon, MON_DATA_SPATK_IV) & 1) << 4)
                 | ((GetMonData(mon, MON_DATA_SPDEF_IV) & 1) << 5);

    // Same formula as Cmd_hiddenpowercalc
    type = ((NUMBER_OF_MON_TYPES - 4) * typeBits) / 63 + 1;
    if (type >= TYPE_MYSTERY)
        type++;
    return type;
}

static void PrintCentered(u8 windowId, const u8 *str, u8 centerX, u8 y, u8 color)
{
    s32 x = centerX - GetStringWidth(FONT_STAT_EDITOR, str, 0) / 2;

    AddTextPrinterParameterized3(windowId, FONT_STAT_EDITOR, x < 0 ? 0 : x, y, sTextColors[color], TEXT_SKIP_DRAW, str);
}

static void PrintNumberCentered(u8 windowId, s32 value, u8 centerX, u8 y, u8 color)
{
    u8 str[8];

    ConvertIntToDecimalStringN(str, value, STR_CONV_MODE_LEFT_ALIGN, 3);
    PrintCentered(windowId, str, centerX, y, color);
}

// Things that don't change while the screen is open
static void PrintMonInfo(void)
{
    struct Pokemon *mon = sStatEditor->mon;
    u8 str[POKEMON_NAME_LENGTH + 2];

    GetMonData(mon, MON_DATA_NICKNAME, str);
    StringGet_Nickname(str);
    AddTextPrinterParameterized3(WIN_NAME, FONT_NORMAL, 4, 2, sTextColors[COLOR_WHITE], TEXT_SKIP_DRAW, str);
    switch (GetMonGender(mon))
    {
    case MON_MALE:
        AddTextPrinterParameterized3(WIN_NAME, FONT_NORMAL, 68, 2, sTextColors[COLOR_MALE], TEXT_SKIP_DRAW, gText_MaleSymbol);
        break;
    case MON_FEMALE:
        AddTextPrinterParameterized3(WIN_NAME, FONT_NORMAL, 68, 2, sTextColors[COLOR_FEMALE], TEXT_SKIP_DRAW, gText_FemaleSymbol);
        break;
    }
    CopyWindowToVram(WIN_NAME, COPYWIN_GFX);

    PrintNumberCentered(WIN_LEVEL, GetMonData(mon, MON_DATA_LEVEL), 24, 2, COLOR_NORMAL);
    CopyWindowToVram(WIN_LEVEL, COPYWIN_GFX);

    PrintCentered(WIN_NATURE, gNatureNamePointers[GetNature(mon, TRUE)], 31, 2, COLOR_NORMAL);
    CopyWindowToVram(WIN_NATURE, COPYWIN_GFX);
}

static void PrintStats(void)
{
    struct Pokemon *mon = sStatEditor->mon;
    const u8 *data = (sStatEditor->tab == TAB_IVS) ? sIVData : sEVData;
    u16 ivSum = 0, evSum = 0;
    u8 i, color;

    FillWindowPixelBuffer(WIN_VALUES, PIXEL_FILL(0));
    FillWindowPixelBuffer(WIN_TOTALS, PIXEL_FILL(0));
    FillWindowPixelBuffer(WIN_HIDDEN_POWER, PIXEL_FILL(0));

    for (i = 0; i < NUM_STATS; i++)
    {
        if (i != sStatEditor->cursor)
            color = COLOR_NORMAL;
        else if (sStatEditor->editing)
            color = COLOR_EDITING;
        else
            color = COLOR_SELECTED;

        if (!(i == sStatEditor->cursor && sStatEditor->blinkHidden))
            PrintNumberCentered(WIN_VALUES, GetMonData(mon, data[i]), VALUES_CENTER_X, STAT_ROW_Y(i), color);
        PrintNumberCentered(WIN_TOTALS, GetMonData(mon, sStatData[i]), TOTALS_CENTER_X, STAT_ROW_Y(i), COLOR_NORMAL);
        ivSum += GetMonData(mon, sIVData[i]);
        evSum += GetMonData(mon, sEVData[i]);
    }
    PrintNumberCentered(WIN_VALUES, ivSum, VALUES_CENTER_X, IV_SUM_Y, COLOR_NORMAL);
    PrintNumberCentered(WIN_VALUES, evSum, VALUES_CENTER_X, EV_SUM_Y, COLOR_NORMAL);
    BlitMenuInfoIcon(WIN_HIDDEN_POWER, GetHiddenPowerType(mon) + 1, 0, 3);

    CopyWindowToVram(WIN_VALUES, COPYWIN_GFX);
    CopyWindowToVram(WIN_TOTALS, COPYWIN_GFX);
    CopyWindowToVram(WIN_HIDDEN_POWER, COPYWIN_GFX);
}

static void ChangeSelectedValue(s32 delta)
{
    struct Pokemon *mon = sStatEditor->mon;
    u8 stat = sStatEditor->cursor;
    s32 value, max, i;
    u8 newValue;

    if (sStatEditor->tab == TAB_IVS)
    {
        value = GetMonData(mon, sIVData[stat]);
        max = MAX_PER_STAT_IVS;
    }
    else
    {
        // An EV can't go over 255, and all of them together can't go over 510
        max = MAX_TOTAL_EVS;
        for (i = 0; i < NUM_STATS; i++)
        {
            if (i != stat)
                max -= GetMonData(mon, sEVData[i]);
        }
        if (max > MAX_PER_STAT_EVS)
            max = MAX_PER_STAT_EVS;
        value = GetMonData(mon, sEVData[stat]);
    }

    newValue = (value + delta < 0) ? 0 : (value + delta > max) ? max : value + delta;
    if (newValue == value)
        return;

    // Show the new value right away, the blink starts again from there
    sStatEditor->blinkHidden = FALSE;
    sStatEditor->blinkTimer = 0;

    PlaySE(SE_DEX_SCROLL);
    SetMonData(mon, (sStatEditor->tab == TAB_IVS) ? sIVData[stat] : sEVData[stat], &newValue);
    CalculateMonStats(mon);
    PrintStats();
}
