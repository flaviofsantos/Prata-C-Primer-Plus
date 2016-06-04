#include <stdio.h>

int sumUp(int n);

int main(void)
{
   int limit;
   
   printf("Enter how far the sum should be: (<=0 to quit)");
   scanf("%d", &limit);
   
   while (limit > 0) {
      printf("sum = %d\n", sumUp(limit)); // function statement
      
      printf("Enter how far the sum should be: (<=0 to quit)");
      scanf("%d", &limit);
   }
   printf("Exiting...\n");         
   
   return 0;   // return statement
}

int sumUp(int n) {
   int count, sum;   // declaration statement
   
   count = 0;  // assignment statement
   sum = 0;    // ditto
   
   while (count++ < n) // while statement
      sum += count;   
   
   return sum;
}


