#include <stdio.h>

int main(void)
{   
   const float cupsPerPint = 2.0f;
   const float ouncesPerCup = 8.0f;
   const float tablespoonsPerOunce = 2.0f;
   const float teaspoonsPerTablespoon = 3.0f;
   float cups;
   
   
   printf("Enter volume in cups: ");
   scanf("%f", &cups);
      
   while (cups > 0) {
      printf("%.0f cups are equivalent to:\n"
      "%.1f pints\n"
      "%.0f ounces\n"
      "%.0f tablespoons\n"
      "%.0f teaspoons\n",
      cups, 
      cups / cupsPerPint,
      cups * ouncesPerCup,
      cups * ouncesPerCup * tablespoonsPerOunce,
      cups * ouncesPerCup * tablespoonsPerOunce * teaspoonsPerTablespoon); 
      
      printf("Enter volume in cups: ");
      scanf("%f", &cups);
   }
   
   return 0;
}
