#include <stdio.h>

int main(void)
{
   const char letters[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   const int ROWS = 6;
   int i, j;
   const int start = 20;
   
   for (i = 0 ; i < ROWS ; i++) {
      for (j = start ; j >= start - i ; j--)
         putchar(letters[j]);
      putchar('\n');
   }
   
   return 0;
}
