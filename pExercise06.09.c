#include <stdio.h>

double weirdComp(double n, double m);

int main(void)
{
   double nA, nB;
   int rc;
   
   printf("Enter two floating point values: ");
   
   while ((rc = scanf("%lf%lf", &nA, &nB)) == 2) {
      printf("(%.2f - %.2f) / (%.2f * %.2f) = %.2f\n", 
             nA, nB, nA, nB, weirdComp(nA, nB));
      printf("Enter next two values: ");
   }
   printf("Non numeric value entered. Exiting...\n");
   
   return 0;
}

double weirdComp(double n, double m) {
   return (n-m)/(n*m);
}
