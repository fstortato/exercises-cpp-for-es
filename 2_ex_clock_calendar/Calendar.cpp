#include "Calendar.h"

bool isBissext(int yyyy) {

	int auxInt1, auxInt2;
	bool auxBool1, auxBool2;

	auxInt1 = yyyy % 4;

	if (auxInt1 == 0) {

		auxInt1 = yyyy % 100;
		auxInt2 = yyyy % 400;

		auxBool1 = (auxInt1 == 0) ? true : false;
		auxBool2 = (auxInt2 == 0) ? true : false;

		if (auxBool1 && auxBool2) {
			return true;
		}
		else if (auxBool1) {
			return false;
		}
		else {
			return true;
		}
	}
	return false;

}

int getMonthDays(int mm, bool bissext) {

	switch (mm) {
	case 1:
		return 31;
		break;
	case 2:
		return bissext ? 29 : 28;
		break;
	case 3:
		return 31;
		break;
	case 4:
		return 30;
		break;
	case 5:
		return 31;
		break;
	case 6:
		return 30;
		break;
	case 7:
		return 31;
		break;
	case 8:
		return 31;
		break;
	case 9:
		return 30;
		break;
	case 10:
		return 31;
		break;
	case 11:
		return 30;
		break;
	case 12:
		return 31;
		break;
	default:
		return 0;

	}

}

Calendar::Calendar(int dd, int mm, int yyyy) {
	day = dd;
	month = mm;
	year = yyyy;

}

void Calendar::setCalendar(int dd, int mm, int yyyy) {
	day = dd;
	month = mm;
	year = yyyy;

}

void Calendar::readCalendar(int &dd, int &mm, int &yyyy) {

	dd = day;
	mm = month;
	yyyy = year;

}


void Calendar::advance() {

	bool bissextAux = isBissext(year);
	int monthAux = getMonthDays(month, bissextAux);

	day = day + 1;

	if (day > monthAux) {

		day = 1;
		month = month + 1;

		if (month > 12) {
			month = 1;
			year = year + 1;
		}
	}
}