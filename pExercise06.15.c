#include <stdio.h>

int main(void)
{
   const int LIM = 256;
   char l[LIM];
   int i, c, len;

   // get line
   printf("Enter a line of input:\n");   
   for (i = 0 ; (c = getchar()) != EOF && c != '\n' && i < LIM - 1 ; i++)
      l[i] = c;
   l[i] = '\0';   
   len = i;
   
   // invert line
   for (i = 0 ; i < len / 2; i++) {
      c = l[i];
      l[i] = l[len - i - 1]; // account for null char
      l[len - i - 1] = c;
   }
   
   // UTF-8
   for (i = 0 ; i < len; i++) {
      if (l[i] == -61) {
         l[i] = l[i-1];
         l[i-1] = -61;
      }      
   }
   
   puts(l);
   
   return 0;
}
