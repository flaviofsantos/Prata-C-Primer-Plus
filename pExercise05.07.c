#include <stdio.h>

double cubeIt(double n);

int main(void)
{
   double n;
   
   printf("Enter the value to be cubed: (0 to quit) ");
   scanf("%lf", &n);
   
   while (n) {
      printf("%.2f cubed is %.2f\n", n, cubeIt(n));
      
      printf("Enter the value to be cubed: (0 to quit) ");
      scanf("%lf", &n);
   }
   printf("Exiting...\n");         
   
   return 0;   // return statement
}

double cubeIt(double n) {   
   return n * n * n;
}


