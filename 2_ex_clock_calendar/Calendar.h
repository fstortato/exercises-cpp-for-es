#pragma once

#include <time.h>

#include <iostream>
using namespace std;

class Calendar {
protected:
	int day, month, year;
public:
	Calendar(int dd, int mm, int yyyy);
	void setCalendar(int dd, int mm, int yyyy);
	void readCalendar(int & dd, int &mm, int & yyyy);
	void advance();
};