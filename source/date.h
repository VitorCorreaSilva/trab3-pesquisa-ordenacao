#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef DATE_H
#define DATE_H

typedef struct{
    int day;
    int month;
    int year;
} date;

int datecmp(date* d1, date* d2);

#endif