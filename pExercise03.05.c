#include <stdio.h>

int main(void)
{
   float secondsPerYear = 3.156e7;
   int age;
   
   printf("Enter you age: ");
   scanf("%d", &age);
   
   
   while (age > 0) {
      printf("There are %.0f seconds in %d years.\n", age * secondsPerYear, age); 
      printf("Enter you age: ");
      scanf("%d", &age);
   }
   
   double secondsPerYearD = 3.156e7;
   int ageD;
   
   printf("Enter you age: ");
   scanf("%d", &ageD);
   
   
   while (ageD > 0) {
      printf("There are %.0f seconds in %d years.\n", ageD * secondsPerYearD, ageD); 
      printf("Enter you age: ");
      scanf("%d", &ageD);
   }
   
   return 0;
}
