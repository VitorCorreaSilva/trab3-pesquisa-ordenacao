#include "insertion_sort.h"

float* insertion_sort(float* numbers, int size, counter* cont)
{
    int i, j;
    float key;
    for (i = 1; i < size; i++) {
        key = numbers[i];
        j = i - 1;
        while (j >= 0 && numbers[j] > key) {
            cont->exec_insertion_sort++;
            numbers[j + 1] = numbers[j];
            j = j - 1;
        }
        numbers[j + 1] = key;
    }

    return numbers;
}

char** insertion_sort_string(char** words, int size, counter* cont)
{
    char* key;
    int i, j;
    for (i = 1; i < size; i++) {
        key = words[i];
        j = i - 1;

        while (j >= 0 && strcmp(words[j], key) >= 1) {
            cont->exec_insertion_sort++;
            words[j + 1] = words[j];
            j = j - 1;
        }
        
        words[j + 1] = key;
    }

    return words;
}

date** insertion_sort_date(date** dates, int size, counter* cont)
{
    date* key;
    int i, j;
    for (i = 1; i < size; i++) {
        key = dates[i];
        j = i - 1;
        
        while (j >= 0 && datecmp(dates[j], key) >= 1) {
            cont->exec_insertion_sort++;
            dates[j + 1] = dates[j];
            j = j - 1;
        }
        
        dates[j + 1] = key;
    }

    return dates;
}