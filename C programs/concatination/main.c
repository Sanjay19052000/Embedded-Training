#include <stdio.h>
int main()
{
   char str1[50], str2[50], i, j;
   printf("Enter first string\n");
   scanf("%s",str1);
   printf("Enter second string\n");
   scanf("%s",str2);

   for(i=0; str1[i]!='\0'; i++);

   {

   for(j=0; str2[j]!='\0'; j++ )
   {
      str1[i]=str2[j];
   }
   }

   str1[i]='\0';
   printf("%s%s",str1,str2);


   return 0;
}
