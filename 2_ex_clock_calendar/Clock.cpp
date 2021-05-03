#include "Clock.h"

Clock::Clock(int hh, int mm, int ss, bool pm) {

	seconds = ss;
	minutes = mm;
	hours = hh;
	isPM = pm;

}


void Clock::setClock(int hh, int mm, int ss, bool pm) {

	seconds = ss;
	minutes = mm;
	hours = hh;
	isPM = pm;

}

void Clock::readClock(int& hh, int& mm, int& ss, bool& pm) {

	ss = seconds;
	mm = minutes;
	hh = hours;
	pm = isPM;

}

void Clock::advance() {

	seconds = seconds + 1;
	
	if (seconds == 60) {
		seconds = 0;
		minutes = minutes + 1;

		if (minutes == 60) {
			minutes = 0;
			hours = hours + 1;
			
			if (hours == 12){
				isPM = !(isPM);
			}
			if (hours == 13) {
				hours = 1;
			}
		}
	}
}