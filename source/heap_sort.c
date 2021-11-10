#include "heap_sort.h"

void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(float* arr, int n, int i, counter* cont) {
    cont->exec_heap_sort++;
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest, cont);
    }
}

float* heap_sort(float* arr, int n, counter* cont) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i, cont);
    }
    for (int i = n - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);

        heapify(arr, i, 0, cont);
    }

    return arr;
}

void swap_string(char **a, char **b) {
    char* temp = *a;
    *a = *b;
    *b = temp;
}

void heapify_string(char** words, int n, int i, counter* cont) {
    cont->exec_heap_sort++;
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && strcmp(words[left],words[largest]) >= 0)
        largest = left;

    if (right < n && strcmp(words[right],words[largest]) >=0)
        largest = right;

    if (largest != i) {
        swap_string(&words[i], &words[largest]);
        heapify_string(words, n, largest, cont);
    }
}

char** heap_sort_string(char** words, int n, counter* cont) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify_string(words, n, i, cont);
    }
    for (int i = n - 1; i >= 0; i--) {
        swap_string(&words[0], &words[i]);

        heapify_string(words, i, 0, cont);
    }

    return words;
}

void swap_date(date **a, date **b) {
    date* temp = *a;
    *a = *b;
    *b = temp;
}

void heapify_date(date** dates, int n, int i, counter* cont) {
    cont->exec_heap_sort++;
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && datecmp(dates[left],dates[largest]) >= 0)
        largest = left;

    if (right < n && datecmp(dates[right],dates[largest]) >=0)
        largest = right;

    if (largest != i) {
        swap_date(&dates[i], &dates[largest]);
        heapify_date(dates, n, largest, cont);
    }
}

date** heap_sort_date(date** dates, int n, counter* cont) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify_date(dates, n, i, cont);
    }
    for (int i = n - 1; i >= 0; i--) {
        swap_date(&dates[0], &dates[i]);

        heapify_date(dates, i, 0, cont);
    }

    return dates;
}