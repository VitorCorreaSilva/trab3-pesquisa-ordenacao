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

	printf("Voce vair gerar quantos dados? ");
	scanf("%d", &temp);

	return temp;
}

void print_number_sort(int* numbers, int n, char* sort){
	printf("%-2s => ", sort);
	for (int i = 0; i < n; ++i)
	{
		printf("%-2d ", numbers[i]);
	}
	printf("\n");
}

void print_string_sort(char** words, int n, char* sort){
	printf("%-2s => ", sort);
	for (int i = 0; i < n; ++i)
	{
		printf("%-2s ", words[i]);
	}
	printf("\n");
}