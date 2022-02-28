// Not much to improve, really.

#include <stdio.h>

void smile(void);

int main(void)
{
   smile();
   smile();
   smile();
   putchar('\n');
   smile();
   smile();
   putchar('\n');
   smile();
   putchar('\n');

   return 0;
}

void smile(void)
{
   printf("Smile!");
}
