#include <stdio.h>

void temperatures(double fahr, double *celsius, double *kelvin);

int main(void)
{
   double fahr, celsius, kelvin;
   int rc;
   
   printf("Enter fahrenheith temperature; (q to quit) ");
      
   while ((rc = scanf("%lf", &fahr)) == 1) {
      temperatures(fahr, &celsius, &kelvin);
      printf("%.2f fahrenheith is equal to %.2f celsius an %.2f kelvin.\n",
             fahr, celsius, kelvin);
      printf("Enter fahrenheith temperature; (q to quit) ");
   }
   printf("Exiting...\n");
   
   return 0;
}

void temperatures(double fahr, double *celsius, double *kelvin)
{
   const double F_CONST = 5.0 / 9.0;
   const double F_ADJUST = 32.0;
   const double K_ADJUST = 273.16;
   
   *celsius = F_CONST * (fahr - F_ADJUST);
   *kelvin = *celsius + K_ADJUST;
}
