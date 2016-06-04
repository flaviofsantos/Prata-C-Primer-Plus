#include <stdio.h>

int main(void)
{
   int n;
   int tEvenIntegers = 0;
   float avgEvenIntegers = 0;
   int tOddIntegers = 0;
   float avgOddIntegers = 0;
      
   printf("Enter integers: (0 to quit)\n");   
   while (scanf("%d", &n) == 1 && n != 0) {
      if (n % 2 == 0) {
         tEvenIntegers++;
         avgEvenIntegers += n;
      }
      else {
         tOddIntegers++;
         avgOddIntegers += n;
      }
      printf("Enter next integer: (0 to quit)\n");
   }
   if (tEvenIntegers > 0)
      avgEvenIntegers /= (float) tEvenIntegers;
   if (tOddIntegers > 0)
      avgOddIntegers /= (float) tOddIntegers;
   
   printf("Total of even integers entered: %d\n", tEvenIntegers);
   printf("Average of even integers entered: %.2f\n", avgEvenIntegers);
   printf("Total of odd integers entered: %d\n", tOddIntegers);
   printf("Average of odd integers entered: %.2f\n", avgOddIntegers);   
   
   return 0;
}
