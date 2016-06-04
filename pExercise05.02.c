#include <stdio.h>

int main(void)
{
   const int RANGE = 10;
   int i, n;
   
   printf("Enter an integer: ");
   scanf("%d", &n);
   
   i = n;
   while (i <= RANGE + n)
      printf(" %d", i++);
   putchar('\n');
}
