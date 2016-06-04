#include <stdio.h>

int main(void)
{
   const int lim = 15;
   int powersOfTwo[lim];
   int i, j;
   int temp;
   
   for (i = 0, temp = 1 ; i < lim ; i++) {
      powersOfTwo[i] = temp;
      temp *= 2 ;      
   }
   
   
   i = 0;
   while (i < lim) {
      printf(" %5d",i++);
   }
   putchar('\n');
   
   i = 0;
   while (i < lim) {
      printf(" %5d", powersOfTwo[i++]);      
   }
   putchar('\n');
   
   return 0;
}
