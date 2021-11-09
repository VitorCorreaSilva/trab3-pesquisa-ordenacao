#include "heap_sort.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int* arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

int* heap_sort(int* arr, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);

        heapify(arr, i, 0);
    }

    return arr;
}

void heapify_string(char** words, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && strcmp(words[left],words[largest]) >= 0)
        largest = left;

    if (right < n && strcmp(words[right],words[largest]) >=0)
        largest = right;

    if (largest != i) {
        swap_string(&words[i], &words[largest]);
        heapify_string(words, n, largest);
    }
}

char** heap_sort_string(char** words, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify_string(words, n, i);
    }
    for (int i = n - 1; i >= 0; i--) {
        swap_string(&words[0], &words[i]);

        heapify_string(words, i, 0);
    }

    return words;
}

void swap_string(char **a, char **b) {
    char* temp = *a;
    *a = *b;
    *b = temp;
}