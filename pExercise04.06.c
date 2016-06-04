#include <stdio.h>
#include <string.h>

int main(void)
{
   struct name {
      char first[40];
      char last[40];
      int lenFirst;
      int lenLast;
   };
      
   struct name user;
   
   printf("Enter you first and last names: ");
   scanf("%s %s", user.first, user.last);
         
   user.lenFirst = strlen(user.first);
   user.lenLast = strlen(user.last);
   
   printf("%s %s\n", user.first, user.last);
   printf("%*d %*d\n", user.lenFirst, user.lenFirst, user.lenLast, user.lenLast);
   printf("%s %s\n", user.first, user.last);
   printf("%-*d %-*d\n", user.lenFirst, user.lenFirst, user.lenLast, user.lenLast);
   
   return 0;
}
