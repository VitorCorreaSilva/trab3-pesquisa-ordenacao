#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "date.h"
#include "functions.h"

#ifndef MERGESORT_H
#define MERGESORT_H

void merge(float* arr, int l, int m, int r);
float* merge_sort(float* arr, int l, int r, counter* cont);

void merge_string(char** words, int l, int m, int r);
char** merge_sort_string(char** words, int l, int r, counter* cont);

void merge_date(date** dates, int l, int m, int r);
date** merge_sort_date(date** dates, int l, int r, counter* cont);

#endif