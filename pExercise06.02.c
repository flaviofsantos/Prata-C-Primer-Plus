#include <stdio.h>

int main(void)
{
   const int ROWS = 5;
   int i, j;
   
   for (i = 0 ; i < ROWS ; i++) {
      for (j = 0 ; j <= ROWS - (ROWS - i) ; j++)
         putchar('$');
      putchar('\n');
   }
   
   return 0;
}
