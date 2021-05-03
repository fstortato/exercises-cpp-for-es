#pragma once

#include <iostream>
using namespace std;

class Clock {
protected:
	int hours, minutes, seconds, isPM;
public:
	Clock(int hh, int mm, int ss, bool pm);
	void setClock(int hh, int mm, int ss, bool pm);
	void readClock(int& hh, int& mm, int& ss, bool& pm);
	void advance();
};
