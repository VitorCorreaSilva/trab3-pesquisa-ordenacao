#include "merge_sort.h"

void merge(float* arr, int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	float L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

float* merge_sort(float* arr, int l, int r, counter* cont)
{
	cont->exec_merge_sort++;
	if (l < r) {
		int m = l + (r - l) / 2;

		merge_sort(arr, l, m, cont);
		merge_sort(arr, m + 1, r, cont);

		merge(arr, l, m, r);
	}

	return arr;
}

void merge_string(char** words, int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	char** L = (char**) malloc(sizeof(char**) * n1);
	char** R = (char**) malloc(sizeof(char**) * n2);

	for (i = 0; i < n1; i++)
		L[i] = words[l + i];
	for (j = 0; j < n2; j++)
		R[j] = words[m + 1 + j];

	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) {
		if (strcmp(L[i],R[j]) <= 0) {
			words[k] = L[i];
			i++;
		}
		else {
			words[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		words[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		words[k] = R[j];
		j++;
		k++;
	}
}

char** merge_sort_string(char** words, int l, int r, counter* cont)
{
	cont->exec_merge_sort++;
	if (l < r) {
		int m = l + (r - l) / 2;

		merge_sort_string(words, l, m, cont);
		merge_sort_string(words, m + 1, r, cont);

		merge_string(words, l, m, r);
	}

	return words;
}

void merge_date(date** dates, int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	date** L = (date**) malloc(sizeof(date**) * n1);
	date** R = (date**) malloc(sizeof(date**) * n2);

	for (i = 0; i < n1; i++)
		L[i] = dates[l + i];
	for (j = 0; j < n2; j++)
		R[j] = dates[m + 1 + j];

	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) {
		if (datecmp(L[i],R[j]) <= 0) {
			dates[k] = L[i];
			i++;
		}
		else {
			dates[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		dates[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		dates[k] = R[j];
		j++;
		k++;
	}
}

date** merge_sort_date(date** dates, int l, int r, counter* cont)
{
	cont->exec_merge_sort++;
	if (l < r) {
		int m = l + (r - l) / 2;

		merge_sort_date(dates, l, m, cont);
		merge_sort_date(dates, m + 1, r, cont);

		merge_date(dates, l, m, r);
	}

	return dates;
}