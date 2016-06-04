#include <stdio.h>

int main(void)
{
   int c;
   int nChanges;
   
   nChanges = 0;
   
   
   while ((c = getchar()) != '#') {
      switch (c) {
         case '.' :
            nChanges++;
            putchar('!');
            break;
         case '!' :
            nChanges++;
            putchar('!');
            putchar('!');
            break;
         default :
            putchar(c);
            break;            
      }
   }
   
   printf("\nThere were %d substitutions made.\n", nChanges);
      
   return 0;
}
