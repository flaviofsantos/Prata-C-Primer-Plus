#include <stdio.h>

#define PAYRATE 10.0 // $10.00 per hour
#define WEEKLIM 40   // Maximum number of hours per week without overtime
#define OVERTIMERATE (1.5 * PAYRATE)  // Overtime plus over PAYRATE

#define TAX1 0.15 // first tax rate
#define TAXLIM1 300  // limit to first tax rate
#define TAX2 0.20 // second tax rate
#define TAXLIM2 450  // limit to second tax rate
#define TAX3 0.25 // third tax rate

#define TOTALTAX1 (TAXLIM1 * TAX1)
#define TOTALTAX2 TOTALTAX1 + ((TAXLIM2 - TAXLIM1) * TAX2)

int main(void)
{
   int hoursWorkedWeek;
   double grossPay;
   double taxes;
   double netPay;
   
   printf("Enter hours worked in the week: (q to quit) ");
   while (scanf("%d", &hoursWorkedWeek) == 1) {
      grossPay = hoursWorkedWeek > WEEKLIM ? ((hoursWorkedWeek - WEEKLIM) * OVERTIMERATE) +
         (WEEKLIM * PAYRATE) : hoursWorkedWeek * PAYRATE;
               
      if (grossPay > TAXLIM2) 
         taxes = TOTALTAX2 + (grossPay - TAXLIM2) * TAX3;
      else if (grossPay > TAXLIM1)
         taxes = TOTALTAX1 + (grossPay - TAXLIM1) * TAX2;
      else
         taxes = grossPay * TAX1;
      
      netPay = grossPay - taxes;
      
      printf("Gross Pay for %d hours worked: %7.2f\n", hoursWorkedWeek, grossPay);
      printf("Taxes due:                     %8.2f\n", taxes);
      printf("Net pay:                       %8.2f\n", netPay);
      
      printf("Enter next hours worked: (q to quit) ");                  
   }
   printf("Done.\n");
   
   return 0;
}
