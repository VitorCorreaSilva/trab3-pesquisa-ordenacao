#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "date.h"

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define ASCII_START 97
#define ASCII_END 122

typedef struct{
    int exec_insertion_sort;
    int exec_merge_sort;
    int exec_heap_sort;
} counter;

float* generate_random_number(int n);
char** generate_random_string(int n);
date** generate_random_date(int n);
int* load_file(char* filename, int n);
void write_in_file(char* filename, int* numbers, int size);
FILE* open_file(char* filename, char* mode);
counter* create_counter(void);

#endif