#include <stdio.h>
#include <float.h>

int main(void)
{
   const double dVar = 1.0/3.0;
   const float fVar = 1.0/3.0;
   
   printf("%.4f %.12f %.16f\n", dVar, dVar, dVar);
   printf("%.4f %.12f %.16f\n", fVar, fVar, fVar);
   
   printf("%d %d\n", DBL_DIG, FLT_DIG);
}
