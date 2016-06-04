#include <stdio.h>

#define PAYRATE1 8.75 // per hour
#define PAYRATE2 9.33 // per hour
#define PAYRATE3 10.0 // per hour
#define PAYRATE4 11.2 // per hour
#define WEEKLIM 40   // Maximum number of hours per week without overtime
#define OVERTIMERATE (1.5 * payrate)  // Overtime plus over payrate

#define TAX1 0.15 // first tax rate
#define TAXLIM1 300  // limit to first tax rate
#define TAX2 0.20 // second tax rate
#define TAXLIM2 450  // limit to second tax rate
#define TAX3 0.25 // third tax rate

#define TOTALTAX1 (TAXLIM1 * TAX1)
#define TOTALTAX2 TOTALTAX1 + ((TAXLIM2 - TAXLIM1) * TAX2)

void calculate(double payrate);

int main(void)
{
   int menuChoice;
   
   do {
      printf("Enter the number corresponding to the desired pay rate or action:\n");
      printf("1) $%05.2f/hr                         2) $%05.2f/hr\n", PAYRATE1, PAYRATE2);
      printf("3) $%05.2f/hr                         4) $%05.2f/hr\n", PAYRATE3, PAYRATE4);
      printf("5) quit\n");
      
      menuChoice = getchar();
      
      while (getchar() != '\n')
         continue;
      
      switch (menuChoice) {
         case '1' :
            calculate(PAYRATE1);            
            break;
         case '2' :
            calculate(PAYRATE2);
            break;
         case '3' :
            calculate(PAYRATE3);
            break;
         case '4' :
            calculate(PAYRATE4);
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

void calculate(double payrate) {
   int hoursWorkedWeek;
   double grossPay;
   double taxes;
   double netPay;
   
   printf("Enter hours worked in the week: (q to menu) ");
   while (scanf("%d", &hoursWorkedWeek) == 1) {
      grossPay = hoursWorkedWeek > WEEKLIM ? ((hoursWorkedWeek - WEEKLIM) * OVERTIMERATE) +
         (WEEKLIM * payrate) : hoursWorkedWeek * payrate;
               
      if (grossPay > TAXLIM2) 
         taxes = TOTALTAX2 + (grossPay - TAXLIM2) * TAX3;
      else if (grossPay > TAXLIM1)
         taxes = TOTALTAX1 + (grossPay - TAXLIM1) * TAX2;
      else
         taxes = grossPay * TAX1;
      
      netPay = grossPay - taxes;
      
      printf("Gross Pay for %d hours worked: %08.2f\n", hoursWorkedWeek, grossPay);
      printf("Taxes due:                     %08.2f\n", taxes);
      printf("Net pay:                       %08.2f\n", netPay);
      
      printf("Enter next hours worked: (q to menu) ");                  
   }   
   
   while (getchar() != '\n')
      continue;   
}
