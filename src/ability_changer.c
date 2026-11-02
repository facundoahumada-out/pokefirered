#include "global.h"
#include "event_data.h"
#include "pokemon.h"
#include "string_util.h"
#include "battle_main.h"
#include "constants/abilities.h"

// Cycles the selected mon's ability to the next valid slot.
// Input:  VAR_0x8004 = party index (from ChoosePartyMon)
// Output: VAR_RESULT = TRUE if changed, FALSE if only one ability available
//         gStringVar1 = new ability name
void CycleMonAbility(void)
{
    struct Pokemon *mon = &gPlayerParty[gSpecialVar_0x8004];
    u16 species = GetMonData(mon, MON_DATA_SPECIES, NULL);
    u8 curAbilityNum = GetMonData(mon, MON_DATA_ABILITY_NUM, NULL);
    u8 newAbilityNum = curAbilityNum;
    u8 i;

    // Try cycling through slots: 0, 1, 2(hidden)
    for (i = 0; i < 3; i++)
    {
        newAbilityNum = (newAbilityNum + 1) % 3;
        if (newAbilityNum == ABILITY_NUM_HIDDEN)
        {
            if (gSpeciesInfo[species].abilityHidden != ABILITY_NONE)
                break;
        }
        else
        {
            if (gSpeciesInfo[species].abilities[newAbilityNum] != ABILITY_NONE)
                break;
        }
    }

    if (newAbilityNum == curAbilityNum)
    {
        gSpecialVar_Result = FALSE;
    }
    else
    {
        SetMonData(mon, MON_DATA_ABILITY_NUM, &newAbilityNum);
        gSpecialVar_Result = TRUE;
    }

    StringCopy(gStringVar1, gAbilityNames[GetMonAbility(mon)]);
}

// Buffers the selected mon's current ability name into gStringVar1.
void BufferMonAbilityName(void)
{
    struct Pokemon *mon = &gPlayerParty[gSpecialVar_0x8004];
    StringCopy(gStringVar1, gAbilityNames[GetMonAbility(mon)]);
}
