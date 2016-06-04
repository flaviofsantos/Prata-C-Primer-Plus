#include <stdio.h>

#define LITERSPERGALLON 3.785
#define KMPERMILE 1.609

int main(void)
{
   double milesTravelled;
   double gallonsConsumed;
   
   printf("Enter the number of miles travelled: ");
   scanf("%lf", &milesTravelled);
   printf("enter the number of gallons consummed: ");
   scanf("%lf", &gallonsConsumed);
   
   printf("Miles per galon: %.1f\n", milesTravelled / gallonsConsumed);
   printf("%.1f liters per 100KM.\n", (gallonsConsumed * LITERSPERGALLON) /
      (milesTravelled * KMPERMILE) * 100.0);
   
   return 0;
}
