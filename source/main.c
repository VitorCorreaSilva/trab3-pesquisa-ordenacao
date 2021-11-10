#include "heap_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "functions.h"
#include "date.h"
#include "screen.h"

int main(){
   int op, num, temp;
   char* word;
   
   //char** character = (char**) malloc(n * sizeof(char*));
   //date** dt = (date**) malloc(n * sizeof(date*));


   op = first_menu();
   switch(op){
      case 1:
         op = second_menu();
         switch(op){
            case 1:
               temp = third_menu();

               int* numbers = (int*) malloc(temp * sizeof(int)); 

               for (int i = 0; i < temp; ++i)
               {
                  printf("Digite: ");
                  scanf("%d",&num);

                  numbers[i] = num;
               }

               print_number_sort(numbers, temp, "Unsorted");

               int* insertion = insertion_sort(numbers, temp);
               int* merge = merge_sort(numbers, 0, temp - 1);
               int* heap = heap_sort(numbers, temp);

               
               print_number_sort(insertion, temp, "Insertion Sort");
               print_number_sort(merge, temp, "Merge Sort");
               print_number_sort(heap, temp, "Heap Sort");
            break;
            case 2:
               temp = third_menu();

               int* numb = generate_random_number(temp);

               print_number_sort(numb, temp, "Unsorted");

               int* insert = insertion_sort(numb, temp);
               int* mer = merge_sort(numb, 0, temp - 1);
               int* he = heap_sort(numb, temp);

               print_number_sort(insert, temp, "Insertion Sort");
               print_number_sort(mer, temp, "Merge Sort");
               print_number_sort(he, temp, "Heap Sort");
            break;
            default:
               printf("Informe uma opcao valida.. \n");
            break;
         }
      break;
      case 2:
         op = second_menu();
         switch(op){
            case 1:
               temp = third_menu();

               char** words = (char**) malloc(temp * sizeof(char*)); 

               for (int i = 0; i < temp; ++i)
               {
                  printf("Digite: ");
                  scanf("%s",&word);

                  words[i] = word;
               }

               print_string_sort(words, temp, "Unsorted");

               char** insertion = insertion_sort_string(words, temp);
               char** merge = merge_sort_string(words, 0, temp - 1);
               char** heap = heap_sort_string(words, temp);

               
               print_string_sort(insertion, temp, "Insertion Sort");
               print_string_sort(merge, temp, "Merge Sort");
               print_string_sort(heap, temp, "Heap Sort");
            break;
            case 2:
               temp = third_menu();

               char** wor = generate_random_string(temp);

               print_string_sort(wor, temp, "Unsorted");

               char** insert = insertion_sort_string(wor, temp);
               char** mer = merge_sort_string(wor, 0, temp - 1);
               char** he = heap_sort_string(wor, temp);

               print_string_sort(insert, temp, "Insertion Sort");
               print_string_sort(mer, temp, "Merge Sort");
               print_string_sort(he, temp, "Heap Sort");
            break;
            default:
               printf("Informe uma opcao valida.. \n");
            break;
         }
      break;
      case 3:
         op = second_menu();
         printf("3 \n");
      break;
      default:
         printf("Informe uma opcao valida.. \n");
      break;
   }
}