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
}