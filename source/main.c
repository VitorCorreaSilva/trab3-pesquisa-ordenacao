#include "heap_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "functions.h"
#include "date.h"
#include "screen.h"


int main(){
   clock_t begin, end;
   counter* cont = create_counter();
   int op, temp;
   float num;
   int d, m, a;
   double time_execution_insertion_sort, time_execution_merge_sort, time_execution_heap_sort;
   
   op = first_menu();
   switch(op){
      case 1:
         op = second_menu();
         if(op < 1 || op > 2){
            printf("Escolha uma opcao valida");
         }
         else{
            temp = third_menu();
            float* numbers = (float*) malloc(temp * sizeof(float)); 

            if(op == 1){
               for (int i = 0; i < temp; ++i){
                  printf("Digite: ");
                  scanf("%f",&num);

                  numbers[i] = num;
               }
            }
            else if(op == 2){
               numbers = generate_random_number(temp);
            }
         
            print_number_sort(numbers, temp, "Unsorted");

            begin = clock();
            float* insertion = insertion_sort(numbers, temp, cont);
            end = clock();
            time_execution_insertion_sort = (double)(end - begin) / CLOCKS_PER_SEC;

            begin = clock();
            float* merge = merge_sort(numbers, 0, temp - 1, cont);
            end = clock();
            time_execution_merge_sort = (double)(end - begin) / CLOCKS_PER_SEC;

            begin = clock();
            float* heap = heap_sort(numbers, temp, cont);
            end = clock();
            time_execution_heap_sort = (double)(end - begin) / CLOCKS_PER_SEC;
            
            print_number_sort(insertion, temp, "Insertion Sort");
            print_number_sort(merge, temp, "Merge Sort");
            print_number_sort(heap, temp, "Heap Sort");
         }
      break;
      case 2:
         op = second_menu();
         if(op < 1 || op > 2){
            printf("Escolha uma opcao valida");
         }
         else{
            temp = third_menu();
            char** words = (char**) malloc(temp * sizeof(char*)); 
            
            if(op == 1){
               for (int i = 0; i < temp; ++i){
                  char* word = (char*)malloc(sizeof(char) * 40);
                  printf("Digite: ");
                  scanf("%s", *(&word));
                  
                  words[i] = word;
               }
            }
            else if(op == 2){
               words = generate_random_string(temp);
            }
         
            print_string_sort(words, temp, "Unsorted");

            begin = clock();
            char** insertion = insertion_sort_string(words, temp, cont);
            end = clock();
            time_execution_insertion_sort = (double)(end - begin) / CLOCKS_PER_SEC;

            begin = clock();
            char** merge = merge_sort_string(words, 0, temp - 1, cont);
            end = clock();
            time_execution_merge_sort = (double)(end - begin) / CLOCKS_PER_SEC;

            begin = clock();
            char** heap = heap_sort_string(words, temp, cont);
            end = clock();
            time_execution_heap_sort = (double)(end - begin) / CLOCKS_PER_SEC;
            
            print_string_sort(insertion, temp, "Insertion Sort");
            print_string_sort(merge, temp, "Merge Sort");
            print_string_sort(heap, temp, "Heap Sort");
         }
      break;
      case 3:
         op = second_menu();
         if(op < 1 || op > 2){
            printf("Escolha uma opcao valida");
         }
         else{
            temp = third_menu();
            date** dates = (date**) malloc(temp * sizeof(date*)); 
            

            if(op == 1){
               for (int i = 0; i < temp; ++i){
                  printf("Digite o dia: ");
                  scanf("%d", &d);
                  printf("Digite o mes: ");
                  scanf("%d", &m);
                  printf("Digite o ano: ");
                  scanf("%d", &a);

                  date* dt = create_date(d,m,a);
                  
                  dates[i] = dt;
               }
            }
            else if(op == 2){
               dates = generate_random_date(temp);
            }
         
            print_date_sort(dates, temp, "Unsorted");

            begin = clock();
            date** insertion = insertion_sort_date(dates, temp, cont);
            end = clock();
            time_execution_insertion_sort = (double)(end - begin) / CLOCKS_PER_SEC;

            begin = clock();
            date** merge = merge_sort_date(dates, 0, temp - 1, cont);
            end = clock();
            time_execution_merge_sort = (double)(end - begin) / CLOCKS_PER_SEC;

            begin = clock();
            date** heap = heap_sort_date(dates, temp, cont);
            end = clock();
            time_execution_heap_sort = (double)(end - begin) / CLOCKS_PER_SEC;
            
            print_date_sort(insertion, temp, "Insertion Sort");
            print_date_sort(merge, temp, "Merge Sort");
            print_date_sort(heap, temp, "Heap Sort");  
         }     
      break;
      default:
         printf("Informe uma opcao valida.. \n");
      break;
   }
   printf("Tempo Execucao InsertionSort=> %f \n",time_execution_merge_sort);
   printf("Execucoes InsertionSort => %d \n\n", cont->exec_insertion_sort);

   printf("Tempo Execucao MergeSort => %f \n",time_execution_insertion_sort);
   printf("Execucoes MergeSort => %d \n\n", cont->exec_merge_sort);

   printf("Tempo Execucao HeapSort=> %f \n",time_execution_heap_sort);
   printf("Execucoes HeapSort => %d \n\n", cont->exec_heap_sort);

   return 0;
}