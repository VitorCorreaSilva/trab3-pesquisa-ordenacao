#include "functions.h"

float* generate_random_number(int n)
{
    srand(time(NULL));
    float* out = (float*) malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        out[i] = rand() % 1000;  
    }
    return out;
}

char** generate_random_string(int n){
	srand(time(NULL));
	int i,j,size;
	char** out  = (char**) malloc(n * sizeof(char*));
	for (i = 0; i < n; ++i)
	{
		size = 3 + rand() % 23;
	    char *res = malloc(size + 1);
	    for (j = 0; j < size; ++j)
	    {
	        res[j] = (char) (rand()%(ASCII_END-ASCII_START))+ASCII_START;
	    }
	    res[j] = '\0';
	    out[i] = res;
	}

    return out;
}

date** generate_random_date(int n){
    srand(time(NULL));

    date** out  = (date**) malloc(n * sizeof(date*));
    for (int i = 0; i < n; ++i)
    {
        date* d = (date*)malloc(sizeof(date*));
        d->month = 1 + rand() % 12;
        if(d->month == 2){
            d->day = 1 + rand() % 28;
        }
        else if(d->month == 4 && d->month == 6 && d->month == 9 && d->month == 11){
            d->day = 1 + rand() % 30;
        }
        else{
            d->day = 1 + rand() % 31;
        }

        d->year = 1 + rand() % 2021;

        out[i] = d;
    }

    return out;
}

FILE* open_file(char* filename, char* mode)
{
    FILE* fptr;
    if ((fptr = fopen(filename, mode)) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
    return fptr;
}

void write_in_file(char* filename, int* numbers, int size)
{   
    FILE *fptr = open_file(filename, "w");

    for (int i = 0; i < size - 1; i++)
    {
        fprintf(fptr,"%d;", numbers[i]);
    }
    fprintf(fptr,"%d", numbers[size - 1]);

    fclose(fptr);
}

int* load_file(char* filename, int n)
{
    int i = 0;
    char* token;
    char* str = (char*) malloc(1024 * sizeof(char));
    int* out  = (int*) malloc(n * sizeof(int));

    FILE *fptr = open_file(filename, "r");
    
    fgets(str,1024,fptr);
    
    fclose(fptr);

    token = strtok(str, ";");

    while( token != NULL ) {
        out[i] = atoi(token);
        token = strtok(NULL, ";");
        i++;
    }

    return out;
}

counter* create_counter(void){
    counter* out = (counter*) malloc(sizeof(counter*));
    out->exec_insertion_sort = 0;
    out->exec_merge_sort = 0;
    out->exec_heap_sort = 0;

    return out;
}