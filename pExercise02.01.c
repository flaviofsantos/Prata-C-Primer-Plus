//Author Flavio Santos

#include <stdio.h>

int main(void)
{
   char *fName = "Flávio";
   char *lName = "Santos";
   
   printf("%s %s\n", fName, lName);
   printf("%s\n%s\n", fName, lName);
   printf("%s", fName);
   printf(" %s\n",lName);
   
   return 0;
}
