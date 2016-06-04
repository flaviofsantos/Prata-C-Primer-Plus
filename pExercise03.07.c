#include <stdio.h>

int main(void)
{   
   const float centPerInch = 2.54f;
   int centimeters;
   
   printf("Enter your height in centimeters: ");
   scanf("%d", &centimeters);
      
   while (centimeters > 0) {
      printf("%d centimeters are equivalent to %f inchs.\n", centimeters, centimeters / centPerInch); 
      printf("Enter your height in centimeters: ");
      scanf("%d", &centimeters);
   }
   
   return 0;
}
