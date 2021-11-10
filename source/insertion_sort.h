#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "date.h"
#include "functions.h"

#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

float* insertion_sort(float* numbers, int size, counter* cont);

char** insertion_sort_string(char** words, int size, counter* cont);

date** insertion_sort_date(date** dates, int size, counter* cont);

#endif