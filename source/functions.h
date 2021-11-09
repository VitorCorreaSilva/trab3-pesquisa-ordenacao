#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define ASCII_START 97
#define ASCII_END 122

int* generate_random_number(int n);
char** generate_random_string(int n);
int* load_file(char* filename, int n);
void write_in_file(char* filename, int* numbers, int size);
FILE* open_file(char* filename, char* mode);

#endif