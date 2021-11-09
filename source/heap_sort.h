#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "date.h"

#ifndef HEAPSORT_H
#define HEAPSORT_H

void swap(int *a, int *b);
void heapify(int* arr, int n, int i);
int* heap_sort(int* arr, int n);

void swap_string(char **a, char **b);
void heapify_string(char** words, int n, int i);
char** heap_sort_string(char** words, int n);

void swap_date(date **a, date **b);
void heapify_date(date** dates, int n, int i);
date** heap_sort_date(date** dates, int n);

#endif