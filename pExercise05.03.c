#include <stdio.h>

int main(void)
{
   const int daysPerWeek = 7;
   
   int tDays, days, weeks;
   
   printf("Enter the number of days: (<=0 to quit) ");
   scanf("%d", &tDays);
   
   while (tDays > 0) {
      weeks = tDays / daysPerWeek;
      days = tDays % daysPerWeek;
      
      printf("%d days are %d weeks, %d days.\n", tDays, weeks, days);
      
      printf("Enter the number of days: (<=0 to quit) ");
      scanf("%d", &tDays);
   }
}
