#include <stdio.h>

double seriesAdd(long n);
double seriesMinusAdd(long n);

int main(void)
{
   long step;
   
   for (step = 10 ; step < 1E9 ; step *= 10) 
      printf("Sum of %10ld terms: %.10f\n", step, seriesAdd(step));
   
   for (step = 10 ; step < 1E12 ; step *= 10) 
      printf("Sum of %10ld terms: %.10f\n", step, seriesMinusAdd(step));
   
   return 0;
}


double seriesAdd(long n) {
   double sum = 1.0;
   long init;
   
   for (init = 2 ; init <= n ; init++)
      sum += 1.0 / (double) init;
   
   return sum;
}


double seriesMinusAdd(long n) {
   double sum = 1.0;
   long init;
   
   for (init = 2 ; init <= n ; init++) {
      if (init % 2 == 0)
         sum -= 1.0 / (double) init;
      else
         sum += 1.0 / (double) init;         
   }
   
   return sum;   
}
