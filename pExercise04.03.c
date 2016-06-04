#include <stdio.h>

int main(void)
{
   double number;
   
   printf("Enter a floating-point number: ");
   scanf("%lf", &number);
   
   printf("The input is %.1f or %.1e\n", number, number);
   printf("The input is %+.3f or %.3E\n", number, number);
   
   return 0;
}
