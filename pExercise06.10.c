#include <stdio.h>

int sumSquares(int n, int m);

int main(void)
{
   int lower, upper;
   
   printf("Enter lower and upper integer limits: ");
   scanf("%d%d", &lower, &upper);
   
   while (lower < upper) {
      printf("The sum of the squares from %d to %d is %d\n", 
             lower, upper, sumSquares(lower, upper));
      printf("Enter next set of limits: ");
      scanf("%d%d", &lower, &upper);
   }
   printf("Done\n");
   
   return 0;
}

int sumSquares(int n, int m) {
   int sum = 0;
   while (n <= m) {
      sum += n * n;
      n++;
   }
   
   return sum;
}
