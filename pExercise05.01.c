#include <stdio.h>

int main(void)
{
   const int minutesPerHour = 60;
   
   int time, minutes, hours;
   
   printf("Enter time in minutes: (<=0 to quit) ");
   scanf("%d", &time);
   
   while (time > 0) {
      hours = time / minutesPerHour;
      minutes = time % minutesPerHour;
      printf("%d minutes are %d hours and %d minutes.\n", time, hours, minutes);
      printf("Enter time in minutes: (<=0 to quit) ");
      scanf("%d", &time);
   }      
   
   return 0;
}
