#include <stdio.h>

int main(void)
{
   const char letters[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";   
   int i, j, k;
   int rows, start, end;
   char c;
   
   printf("Enter a uppercase letter: ");
   scanf("%c", &c);      
   
   end = -1;
   for (i = 0 ; i < 27 ; i++) {      
      if (c == letters[i]) {
         end = ++i;  // end includes char encountered
         break;
      }
   }

   start = 0;
   
   for (i = start ; i < end ; i++) {
      for (j = end ; j > start ; j--) {
         if (i - start >= j)
            putchar(letters[i-j]);
         else
            putchar(' ');         
      }  
      for (j = start ; j < end ; j++) {
         if (i - start >= j)
            putchar(letters[i-j]);
         else
            putchar(' ');         
      }         
      putchar('\n');
   }
   
   return 0;
}
