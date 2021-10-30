#include <iostream>
#include <assert.h>
#include "dates.h"
#include <ctime>

using namespace std;

int main() {
	assert(!IsLeapYear(2021));
	assert(IsLeapYear(1600));
	assert(IsLeapYear(2000));
	assert(IsLeapYear(2020));
	assert(!IsLeapYear(2023));


	assert(LaterInYear(31, 2) == 31);
	assert(DaysInYear(2021) == 365);
	assert(DaysInYear(2020) == 366);

	assert(DaysInYearRange(2021, 2021) == 365);
	assert(DaysInYearRange(2020, 2021) == 365+366);

	assert(SecondsInHours(1) == 3600);
	assert(SecondsInHours(2) == 3600);
}