#include <stdio.h>

int main(void)
{
   char *fName = "Flávio";
   char *lName = "Santos";
   char *address = "CSB 8 LOTE 7 APT 104 TAGUATINGA SUL BRASÍLIA - DF\n";
   
   printf("My name is %s %s\n", fName, lName);
   printf("My age is %d years (%d days).\n", 37, 37*365);
   
   return 0;
}
