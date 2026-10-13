#ifndef GUARD_DNS_H
#define GUARD_DNS_H

// Day and Night System (DNS)
// Based on Xhyz/Samu's DNS for pokeemerald (itself based on Prime Dialga's DNS),
// adapted to pokefirered: palettes are tinted while being copied to palette RAM,
// so the palette buffers are never modified and no extra 1KB buffer is needed.

enum
{
    TIME_DAY,
    TIME_AFTERNOON,
    TIME_NIGHT,
};

// A colour of a tileset palette that lights up at night (e.g. house windows).
struct DnsLightColour
{
    const struct Tileset *tileset;
    u8 paletteNum; // Palette slot in BG palette RAM (0-6 primary tileset, 7-12 secondary tileset)
    u8 colourNum;  // Colour index inside the palette (1-15)
    u16 lightColour;
};

void DnsUpdate(void);
void DnsTransferPlttBuffer(const void *src, void *dest);
void DnsLoadMapLights(const struct MapLayout *mapLayout);
u8 GetDnsMapWeather(u8 headerWeather);
u8 GetDnsTimeLapse(u8 hour);
u8 GetCurrentDnsTimeLapse(void);
bool8 IsDnsNightTime(void);
bool8 IsDnsLightTime(void);

#endif // GUARD_DNS_H
