#include <stdio.h>

#define SINGLELIM       17850.0
#define HEADLIM         23900.0
#define MARRIEDJOINTLIM 29750.0
#define MARRIEDSEPARLIM 14875.0

#define FIRSTRATE   0.15
#define EXCESSRATE  0.28

void calculate(double lim);

int main(void)
{
   int menuChoice;
   
   do {
      printf("Enter the category desired or action:\n");
      printf("1) Single                         2) Head of Household\n");
      printf("3) Married, Joint                 4) Married, Separate\n");
      printf("5) quit\n");
      
      menuChoice = getchar();
      
      while (getchar() != '\n')
         continue;
      
      switch (menuChoice) {
         case '1' :
            calculate(SINGLELIM);            
            break;
         case '2' :
            calculate(HEADLIM);
            break;
         case '3' :
            calculate(MARRIEDJOINTLIM);
            break;
         case '4' :
            calculate(MARRIEDSEPARLIM);
            break;
         case '5' :
            printf("Done.\n");
            break;
         default :
            printf("Invalid menu choice. Please enter choice in the 1 - 5 range.\n");
            break;
      }
   
   } while (menuChoice != '5');
   
   
   return 0;
}

void calculate(double lim) {
   double taxableIncome;
   double taxes;
   
   printf("Enter taxable income: (q to menu) ");
   while (scanf("%lf", &taxableIncome) == 1) {
      taxes = taxableIncome > lim ? ((taxableIncome - lim) * EXCESSRATE) +
         (lim * FIRSTRATE) : taxableIncome * FIRSTRATE;
               
      printf("Taxes due: $%4.2f\n", taxes);
      
      printf("Enter next taxable income: (q to menu) ");                  
   }   
   
   while (getchar() != '\n')
      continue;   
}
