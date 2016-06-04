#include <stdio.h>

int main(void)
{
   char *fName = "Flávio";
   char *lName = "Santos";
   char *address = "CSB 8 LOTE 7 APT 104 TAGUATINGA SUL BRASÍLIA - DF\n";
   
   printf("%s %s\n", fName, lName);
   printf("%s",address);
   
   return 0;
}
