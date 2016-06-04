#include <stdio.h>

int main(void)
{
   const int DUNBAR = 150;
   int friends;
   int i, j;
   
   for (i = 1, friends = 5 ; friends < DUNBAR ; i++) {
      friends -= i;
      friends *= 2;
      printf("Week: %d friends %d\n", i, friends);
   }         
      
   return 0;
}
