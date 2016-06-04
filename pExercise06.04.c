#include <stdio.h>

int main(void)
{
   const char letters[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   const int ROWS = 6;
   int i, j, k;
   
   k = 0;
   for (i = 0 ; i < ROWS ; i++) {
      for (j = 0 ; j <= ROWS - (ROWS - i) ; j++)
         putchar(letters[k++]);
      putchar('\n');
   }
   
   return 0;
}
