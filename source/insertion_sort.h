#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "date.h"

#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

int* insertion_sort(int* numbers, int size);
char** insertion_sort_string(char** words, int size);
date** insertion_sort_date(date** dates, int size);

#endif