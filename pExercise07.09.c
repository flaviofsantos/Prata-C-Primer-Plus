#include <stdio.h>

int main(void)
{
   unsigned long n, i, j;
   int isprime;
   
    printf("Enter a positive number: ");
    scanf("%lu", &n);
   
   for ( ; n > 0 ; n--) { 
      isprime = 1;
      if (n <= 1)
         isprime = 0;
      else if (n <= 3)
         isprime = 1;
      else if (n % 2 == 0 || n % 3 == 0)
         isprime = 0;
      else {
         i = 5;
         while (i * i <= n) {
            if (n % i == 0 || n % (i + 2) == 0) {
               isprime = 0;
               break;
            }
            i += 6;            
         }
      }
      
//       if (isprime)
//          printf("%u\n", n);
   }
   printf("Done\n");

   printf("Enter a positive number: ");
   scanf("%lu", &n);
   
   for ( ; n > 0 ; n--) {    
      isprime = 1;
      for (i = 2 ; i * i <= n ; i++) {
         if (n % i == 0)
            isprime = 0;
      }
//       if (isprime)
//             printf("%u\n", n);
   }
   printf("Done\n");
   
   return 0;
}
