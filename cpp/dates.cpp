#include "dates.h"
#include <assert.h>

using namespace std;

bool IsLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);

}
int LaterInYear(int day1, int day2) {
	assert(day1 <= 31 && day1 >= 1);
	assert(day2 <= 31 && day2 >= 1);
	if (day1 < day2)
		return day2;
	else
		return day1;
}

int DaysInYear(int year) {
	if (IsLeapYear(year))
		return 366;
	else return 365;
}
