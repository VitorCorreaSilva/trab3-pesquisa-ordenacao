#include "screen.h"

int first_menu(void){
	system("clear");
	int op;

	printf("1 - NUMEROS \n");
	printf("2 - STRINGS \n");
	printf("3 - DATAS \n");
	printf("Qual tipo de dados deseja ordenar? ");
	scanf("%d", &op);

	return op;
}

int second_menu(void){
	system("clear");
	int op;

	printf("1 - MANUALMENTE \n");
	printf("2 - AUTOMATICAMENTE \n");
	printf("Como deseja gerar os dados? ");
	scanf("%d", &op);

	return op;
}

int third_menu(void){
	system("clear");
	int temp;

	printf("Voce vai gerar quantos dados? ");
	scanf("%d", &temp);

	return temp;
}

void print_number_sort(float* numbers, int n, char* sort){
	printf("%-2s => ", sort);
	for (int i = 0; i < n; ++i)
	{
		printf("%-2.2f ", numbers[i]);
	}
	printf("\n\n");
}

void print_string_sort(char** words, int n, char* sort){
	printf("%-2s => ", sort);
	for (int i = 0; i < n; ++i)
	{
		printf("%-2s ", words[i]);
	}
	printf("\n\n");
}

void print_date_sort(date** dates, int n, char* sort){
	printf("%-2s => ", sort);
	for (int i = 0; i < n; ++i)
	{
		printf("%i/%i/%i ", dates[i]->day, dates[i]->month, dates[i]->year);
	}
	printf("\n\n");
}