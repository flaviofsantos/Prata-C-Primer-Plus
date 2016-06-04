#include <stdio.h>

int main(void)
{
   float f;
   
   printf("Enter a floating point value: ");
   scanf("%f", &f);
   while (f > 0) {
      printf("fixed-point notation: %f\n", f);
      printf("exponential notation: %g\n", f);
      printf("p notation: %a\n", f);
      printf("Enter a floating point value: ");
      scanf("%f", &f);
   }
   
   return 0;
}
