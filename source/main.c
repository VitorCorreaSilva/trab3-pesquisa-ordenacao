#include "heap_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "functions.h"
#include "date.h"

int main(){
   
   int n = 10;

   date** dates = generate_random_date(n);

   printf("Desordenadas=> ");
   for (int i = 0; i < n; ++i)
   {
      printf("%i/%i/%i ", dates[i]->day,dates[i]->month,dates[i]->year);
   }
   printf("\n");

   date** insertion = insertion_sort_date(dates,n);

   printf("Ordenadas=> ");
   for (int i = 0; i < n; ++i)
   {
      printf("%i/%i/%i ", insertion[i]->day,insertion[i]->month,insertion[i]->year);
   }
   printf("\n");
}