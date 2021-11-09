#include "heap_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "functions.h"
#include "date.h"

int main(){
   char datahora[] = "66/66/2016";  

   struct tm tm; 
   int ano, mes; 

   sscanf( datahora, "%d/%d/%d", &tm.tm_mday, &mes, &ano);

   tm.tm_year = ano - 1900;
   tm.tm_mon = mes - 1;

   printf( "Segundos desde 01/01/1970: %ld\n", mktime( &tm ) );

}