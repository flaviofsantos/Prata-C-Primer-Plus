#include <stdio.h>

int main(void)
{
   int n, lower, upper;
   
   printf("enter lower limit for the table: ");
   scanf("%d", &lower);      
   printf("enter upper limit for the table: ");
   scanf("%d", &upper);
   
   for ( ; lower <= upper ; lower++)
      printf("%3d %4d %5d\n", lower, lower * lower, lower * lower * lower);
   
   return 0;
}
