#include "date.h"

int datecmp(date* d1, date* d2){
	if(d1->year > d2->year){
		return 1;
	}
	else if(d1->year < d2->year){
		return -1;
	}
	else{
		if(d1->month > d2->month){
			return 1;
		}
		else if(d1->month < d2->month){
			return -1;
		}
		else{
			if(d1->day > d2->day){
				return 1;
			}
			else if(d1->day < d2->day){
				return -1;
			}
			else{
				return 0;
			}
		}
	}
}

date* create_date(int day, int month, int year){
	date* d = (date*) malloc(sizeof(date)); 
	d->day = day;
	d->month = month;
	d->year = year;

	return d;
}