#include <stdio.h>

int main(void)
{   
   const double waterMoleculeMAss = 3e-23;
   const int gramsPerQuart = 950;
   int quarts;
   
   printf("Enter amount of quarts of water: ");
   scanf("%d", &quarts);
      
   while (quarts > 0) {
      printf("There are %.0f molecules of water in %d quarts.\n", 
             quarts * gramsPerQuart / waterMoleculeMAss, quarts); 
      printf("Enter amount of quarts of water: ");
      scanf("%d", &quarts);
   }
   
   return 0;
}
