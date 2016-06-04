#include <stdio.h>

int main(void)
{
   int firstOperand, secondOperand;
   
   printf("This program computes moduli.\n");
   
   printf("Enter an integet to serve as the second operand: ");
   scanf("%d", &secondOperand);
   
   printf("Now enter the first operand: ");
   scanf("%d", &firstOperand);
   
   while (firstOperand > 0) {
      printf("%d %% %d is %d\n", firstOperand, secondOperand, firstOperand % secondOperand);
      
      printf("Enter next number for first operand (<= 0 to quit) ");
      scanf("%d", &firstOperand);
   }
   
   printf("Done.\n");
   
   return 0;
}
