#ifndef DATES
#define DATES

//проверяет год на високосность
bool IsLeapYear(int year);

//какой из дней ближе к новому году
int LaterInYear(int day1, int day2);

//сколько дней в году
int DaysInYear(int year);

//сколько дней между годами
int DaysInYearRange(int year1, int year2);

//сколько секунд в данном количестве часах
int SecondsInHours(int hours);
#endif // !DATES
