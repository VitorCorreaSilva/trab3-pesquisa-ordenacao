#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "date.h"


#ifndef SCREEN_H
#define SCREEN_H

int first_menu(void);
int second_menu(void);
int third_menu(void);
void print_number_sort(float* numbers, int n, char* sort);
void print_string_sort(char** words, int n, char* sort);
void print_date_sort(date** dates, int n, char* sort);

#endif