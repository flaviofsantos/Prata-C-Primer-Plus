#include <stdio.h>

void oneThree(void);
void two(void);

int main(void)
{
   printf("starting now:\n");
   oneThree();
   printf("done!\n");

   return 0;
}

void oneThree(void)
{
   printf("one\n");
   two();
   printf("three\n");
}

void two(void)
{
   printf("two\n");
}
