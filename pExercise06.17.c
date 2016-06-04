#include <stdio.h>

int main(void)
{
   double amount = 1000000.0;
   const double interest = 0.0999999;
   int years = 0;
   
   for (years = 0 ; amount > 0 ; years++) {
      amount += amount * interest;
      amount -= 100000;
      
   }
   
   printf("After %d years amount is %.2f\n", years, amount);
   
   return 0;
}
