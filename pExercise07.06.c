#include <stdio.h>

int main(void)
{
   int c, lastc;
   int nSequences;
      
   nSequences = 0;    
   lastc = EOF;
   while ((c = getchar()) != '#') {
      switch (c) {
         case 'i' :
            if (lastc == 'e')
               nSequences++;
            break;
      }
      lastc = c;
   }
   
   printf("\nThere were %d sequences of %c%c.\n", nSequences, 'e', 'i');
      
   return 0;
}
