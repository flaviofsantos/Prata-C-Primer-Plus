#include <stdio.h>

int main(void)
{
   char fName[40], lName[40];
   
   printf("Enter your first name and last name: ");
   scanf("%s %s", fName, lName);
   
   printf("Hello, %s, %s.\n", lName, fName);
   
   return 0;
}
