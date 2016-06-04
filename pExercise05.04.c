#include <stdio.h>

int main(void)
{
   const double centPerInch = 2.54;
   const double inchsPerFeet = 12.0;
   
   double centimeters, inchs, feet;
   
   printf("Enter a height in centimeters: (<= 0 to quit) ");
   scanf("%lf", &centimeters);
   
   while (centimeters > 0) {
      inchs = centimeters / centPerInch;
      feet = (int) inchs / (int) inchsPerFeet;
      inchs = inchs - (inchsPerFeet * feet);
      
      printf("%.1f cm = %.0f feet, %.1f inches\n", centimeters, feet, inchs);
      
      printf("Enter a height in centimeters: (<= 0 to quit) ");
      scanf("%lf", &centimeters);
   }
   printf("bye\n");
   
   return 0;
}
