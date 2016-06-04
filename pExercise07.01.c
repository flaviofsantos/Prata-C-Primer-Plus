#include <stdio.h>

int main(void)
{
   int c;
   int nSpaces = 0;
   int nLines = 0; 
   int nOthers = 0;
   
   while ((c = getchar()) != '#') {
      if (c == ' ')
         nSpaces++;
      else if (c == '\n')
         nLines++;
      else
         nOthers++;            
   }
   
   printf("Number of spaces: %d\nNumber of lines: %d\nNumber of other chars: %d\n",
          nSpaces, nLines, nOthers);
      
   return 0;
}
