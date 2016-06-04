#include <stdio.h>

int main(void)
{
   float heightInCms;
   const float cmsPerMeter = 100.0f;
   char name[40];
   
   printf("Enter your name and height in centimeters: "); 
   scanf("%s %f", name, &heightInCms);
   
   printf("%s, you are %.2f meters tall.\n", name, heightInCms / cmsPerMeter);
   
   return 0;
}
