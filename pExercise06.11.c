#include <stdio.h>

int main(void)
{
   int SIZE;
   int numbers[20];
   int i, temp;
   
   printf("Enter lenght of array: (max 20) ");
   scanf("%d", &SIZE);
   
   printf("Enter %d integers: ", SIZE);
   for (i = 0 ; i < SIZE ; i++)
      scanf("%d", &numbers[i]);
   
   printf("The numbers entered where ");
   for (i = 0 ; i < SIZE ; i++)
      printf("%d ", numbers[i]);
   putchar('\n');
   
   printf("The numbers entered in reverse order where ");
   // llok out for off-by-one errors!
   for (i = SIZE - 1 ; i >= 0 ; i--)
      printf("%d ", numbers[i]);
   putchar('\n');
   
   // we car reverse the array in place too
   for (i = 0 ; i < SIZE / 2 ; i++) {
      temp = numbers[i];
      numbers[i] = numbers[SIZE - i - 1];
      numbers[SIZE - i - 1] = temp;
   }
   putchar('\n');
   
   printf("The numbers entered in reverse order where ");
   for (i = 0 ; i < SIZE ; i++)
      printf("%d ", numbers[i]);
   putchar('\n');
   
   return 0;
}
