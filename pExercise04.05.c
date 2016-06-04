#include <stdio.h>

int main(void)
{
   float downloadSpeed; // in megabits per second
   float fileSize;   // in megabytes
   const float bitsPerByte = 8.0f;  // bits per byte
   
   printf("Enter download speed in megabits per second: ");
   scanf("%f", &downloadSpeed);
   printf("Enter file size in megabytes: ");
   scanf("%f", &fileSize);
   
   printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n",
          downloadSpeed, fileSize, fileSize * bitsPerByte / downloadSpeed);
   
   return 0;
}
