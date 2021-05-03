#pragma once

#include "Clock.h"
#include "Calendar.h"

#include <iostream>
using namespace std;

class ClockCalendar : public Clock, public Calendar {
public:
	ClockCalendar(int dd, int mm, int yyyy, int h, int m, int s, int pm);
	void advance();
};