#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "date.h"
#include "functions.h"

#ifndef HEAPSORT_H
#define HEAPSORT_H

void swap(float *a, float *b);
void heapify(float* arr, int n, int i, counter* cont);
float* heap_sort(float* arr, int n, counter* cont);

void swap_string(char **a, char **b);
void heapify_string(char** words, int n, int i, counter* cont);
char** heap_sort_string(char** words, int n, counter* cont);

void swap_date(date **a, date **b);
void heapify_date(date** dates, int n, int i, counter* cont);
date** heap_sort_date(date** dates, int n, counter* cont);

#endif