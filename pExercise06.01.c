#include <stdio.h>

#define ALPHA_LEN 26

int main(void)
{
   char alphabet[ALPHA_LEN];
   int i;
   
   for (i = 0 ; i < ALPHA_LEN ; i++)
      alphabet[i] = 'a' + i;
   
   for (i = 0 ; i < ALPHA_LEN ; i++)
      printf("%c ", alphabet[i]);
   
   putchar('\n');
   
   return 0;
}
