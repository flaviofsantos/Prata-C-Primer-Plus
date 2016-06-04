#include <stdio.h>
#include <string.h>

int main(void)
{
   char word[30], invertedWord[30];
   int len;
   int i;
   char temp;
   
   printf("Enter the word: ");
   scanf("%s", word);
   
   len = strlen(word);
   
   for (i = 0 ; i < len; i++)       
      invertedWord[i] = word[len - i - 1]; // account for null char         
   invertedWord[len] = '\0';
   
   for (i = 0 ; i < len; i++) {
      if (invertedWord[i] == -61) {
         invertedWord[i] = invertedWord[i-1];
         invertedWord[i-1] = -61;
      }      
   }
   
   puts(invertedWord);
   
   return 0;
}
