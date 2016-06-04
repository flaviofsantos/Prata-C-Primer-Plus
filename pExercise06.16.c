#include <stdio.h>

double interest(double investment, double rate);

int main(void)
{
   const double PERCENT = 100;
   double investA, investB, rate;
   int i;
   
   investA = 100.0;
   investB = 100.0;
   i = 0;
   while (investA >= investB) {
      investA += interest(100, 10/PERCENT);
      investB += interest(investB, 5/PERCENT);
      i++;
   }
   printf("After %d years Daphne investment value will be %.2f\n"
   "           and Deirdre investment value will be %.2f\n", i, investA, investB);   
   
   return 0;
}

double interest(double investment, double rate)
{
   return investment * rate;
}

