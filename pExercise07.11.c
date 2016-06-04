#include <stdio.h>

#define ARTICHOKEPRICE 2.05 // dollars per pound
#define BEETPRICE      1.15 // dollars per pound
#define CARROTPRICE    1.09 // dollars per pound

#define DISCOUNTRATE      0.05
#define DISCONTTHRESHOLD  100 // in dollars

#define SHIPPINGLIM1 5   // in pounds
#define SHIPPINGLIM2 20  // in pounds

#define SHIPPINGCOST1 6.50
#define SHIPPINGCOST2 14.00
#define SHIPPINGCOST3 (SHIPPINGCOST2 + (0.50 * pounds))


double tmp;
double pounds = 0;
double aPounds = 0;
double bPounds = 0;
double cPounds = 0;

double tArtichoke = 0; // total cost artichoke
double tBeet = 0;      // total cost beet
double tCarrot = 0;    // total cost carrot
double total = 0;      // total cost items
double discount = 0;
double shippingCharge = 0;
double grandTotal = 0;      // total - discount + shipping 

void calculate(void);

int main(void)
{   
   int menuChoice;
   
   do {
      printf("What item do you want to purchase?\n");
      printf("a) artichoke           b) beet\n");
      printf("c) carrot              q) quit\n");
      
      menuChoice = getchar();
      
      while (getchar() != '\n')
         continue;
      
      switch (menuChoice) {
         case 'a' :
            printf("Enter pounds of artichoke desired: ");
            scanf("%lf", &tmp);            
            aPounds += tmp;
            printf("Current purchase info:\n");
            calculate();
            break;
         case 'b' :
            printf("Enter pounds of beet desired: ");
            scanf("%lf", &tmp);            
            bPounds += tmp;
            printf("Current purchase info:\n");
            calculate();
            break;
         case 'c' :
            printf("Enter pounds of carrot desired: ");
            scanf("%lf", &tmp);            
            cPounds += tmp;
            printf("Current purchase info:\n");
            calculate();
            break;
         case 'q' :
            printf("Done.\n");
            break;            
         default :
            printf("Invalid menu choice. Please enter choice in the a - c range or q to quit.\n");
            break;
      }
      
      if (menuChoice != 'q')
         while (getchar() != '\n')
            continue;
   
   } while (menuChoice != 'q');
   
   printf("Final purchase info:\n");
   calculate();
         
}

void calculate(void) 
{
   putchar('\n');
   tArtichoke = aPounds * ARTICHOKEPRICE;
   tBeet = bPounds * BEETPRICE;
   tCarrot = cPounds * CARROTPRICE;
   
   total = tArtichoke + tBeet + tCarrot;
   pounds = aPounds + bPounds + cPounds;
   
   if (total > DISCONTTHRESHOLD)
      discount  = total * DISCOUNTRATE;
   
   if (pounds > SHIPPINGLIM2)
      shippingCharge = SHIPPINGCOST3;
   else if (pounds > SHIPPINGLIM1)
      shippingCharge = SHIPPINGCOST2;
   else
      shippingCharge = SHIPPINGCOST1;
   
   grandTotal = total - discount + shippingCharge;
   
   printf("Cost per pound: %4.2f\n", total / pounds);
   printf("Total  pounds : %4.2f\n", pounds);
   printf("Total cost artichoke: %4.2f\n", tArtichoke);
   printf("Total cost beet     : %4.2f\n", tBeet);
   printf("Total cost carrot   : %4.2f\n", tCarrot);
   printf("Total cost          : %4.2f\n", total);
   printf("Discount            : %4.2f\n", discount);
   printf("Shipping cost       : %4.2f\n", shippingCharge);
   printf("Grand total         : %4.2f\n", grandTotal);            
   putchar('\n');
}
