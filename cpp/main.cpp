#include <iostream>
#include <assert.h>
#include "dates.h"
using namespace std;

int main() {
	assert(!IsLeapYear(2021));
	assert(IsLeapYear(1600));
	assert(IsLeapYear(2000));
	assert(IsLeapYear(2020));
	assert(!IsLeapYear(2023));

	cout << SecondsInMinute();
}