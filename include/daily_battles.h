#ifndef GUARD_DAILY_BATTLES_H
#define GUARD_DAILY_BATTLES_H

u16 GetDayOfWeek(void);
void UpdateDailyLeaderVisibility(void);
bool8 IsDailyLeaderBeatenToday(void);
void SetDailyLeaderBeatenToday(void);

#endif // GUARD_DAILY_BATTLES_H
