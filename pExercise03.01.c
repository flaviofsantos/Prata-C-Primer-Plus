#include <stdio.h>

int main(void)
{
   int i = 2147483647;
   unsigned int ui = 0;
   
   printf("Unsigned int %u - 1 = %u / 2 = %u \n", ui, ui - 1, (ui - 1) / 2);
   
   printf("Int i = %d, plus 1 = %d, plus 2 = %d\n", i, i+1, i+2);
   
   float f = 9e60;
   
   printf("Float f = %f\n", f);
   printf("Float f / f = %f\n", f/f);
   
   return 0;
}
