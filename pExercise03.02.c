#include <stdio.h>

int main(void)
{
   int n;
   
   printf("Enter a number < 128: (negative to end) ");
   scanf("%d", &n);
   while (getchar() != '\n')
      getchar();
   while (n > 0) {
      printf("%d is ascii for %c\n", n, n);
      printf("Enter a number < 128: ");
      scanf("%d", &n);
      while (getchar() != '\n')
         getchar();
   }
   
   return 0;
}
