#include <stdio.h>

int main(void)
{
   int c;
   int nChanges;
   
   nChanges = 0;
   while ((c = getchar()) != '#') {
      if (c == '.') {
         nChanges++;
         putchar('!');
      }
      else if (c == '!') {
         nChanges++;
         putchar('!');
         putchar('!');
      }
      else
         putchar(c);
   }
   
   printf("\nThere were %d substitutions made.\n", nChanges);
      
   return 0;
}
