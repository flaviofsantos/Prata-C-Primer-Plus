#include <stdio.h>

int main(void)
{
   const int SIZE = 8;
   double userArray[SIZE], cumulativeArray[SIZE];
   int i;
   
   // enter values
   printf("Enter %d floating point numbers: ");
   for (i = 0 ; i < SIZE ; i++) {
      scanf("%lf", &userArray[i]);
   }
   
   // create cumulative array   
   cumulativeArray[0] = userArray[0];
   for (i = 1 ; i < SIZE ; i++) {
      cumulativeArray[i] = cumulativeArray[i-1] + userArray[i];
   }
   putchar ('\n');
   
   // display user array
   for (i = 0 ; i < SIZE ; i++) {
      printf("%6.2f ", userArray[i]);
   }
   putchar ('\n');
   
   // display cumulative array
   for (i = 0 ; i < SIZE ; i++) {
      printf("%6.2f ", cumulativeArray[i]);
   }
   putchar ('\n');
   
   return 0;
}
