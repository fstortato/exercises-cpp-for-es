#include "ClockCalendar.h"

ClockCalendar::ClockCalendar(int dd, int mm, int yyyy, int h, int m, int s, int pm) : Calendar(dd, mm, yyyy), Clock(h, m, s, pm) {}

void ClockCalendar::advance() {

	int wasPm = isPM; 
	Clock::advance();
	if (wasPm && !isPM)
		Calendar::advance();
}