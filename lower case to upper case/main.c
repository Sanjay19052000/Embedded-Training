#include <stdio.h>

int main() {
   char str[100];
   int i;
   printf("Enter the string to convert to uppercase");
   scanf("%s",str);
   for (i = 0; str[i]!='\0'; i++)
        {

      if(str[i]==str[i])
         {
         str[i] = str[i] -32;
      }
   }
   printf("The string in upper case = %s", str);
   return 0;
}
