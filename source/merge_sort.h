#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef MERGESORT_H
#define MERGESORT_H

void merge(int* arr, int l, int m, int r);
int* merge_sort(int* arr, int l, int r);
void merge_string(char** words, int l, int m, int r);
char** merge_sort_string(char** words, int l, int r);

#endif