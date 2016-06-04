#include <stdio.h>
#include <string.h>

int main(void)
{
   char fName[40];
   int sLen;
   
   printf("Enter your first name ");
   scanf("%s", fName);
   
   sLen = strlen(fName);
   
   printf("\"%s\"\n", fName);
   printf("\'%20s\'\n", fName);
   printf("\'%-20s\'\n", fName);
   printf("\'%*s\'\n", sLen+3, fName);
   
   return 0;
}
