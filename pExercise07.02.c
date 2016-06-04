#include <stdio.h>

int main(void)
{
   int c;
   int count;
   
   count = 1;   
   while ((c = getchar()) != '#') {
      printf("%3c %3d", c, c);
      if (count++ % 8 == 0)
         putchar('\n');      
   }
   
   return 0;
}
