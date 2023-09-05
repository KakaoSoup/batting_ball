#ifndef __CALENDAR_H
#define __CALENDAR_H

class Calendar {
private:
	char calendar[7][7];
	int month_days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year;
	int month;
	int first_day;
public:
	Calendar() {
		memset(calendar, '\0', sizeof(calendar));
		memset(month, 0, sizeof(month));
		year = 0;
		month = 0;
	}

	void set_year(int year) {	
		this->year = year;
		month[1] = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ? 29 : 28;
	}

	void find_month_first() {
		first_day = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
		for(int i = 0; i < month; i++)
			first_day += month[i]; 
	}

	void show_month(const int month) {
		
	}
};


#endif
