#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   int i,j;
   char temp;
   char str1[10];
   char str2[10];
   char str3[10];
   char str4[10];
   char str5[10];

   printf("enter the names\n");
   scanf("%s%s%s%s",str1,str2,str3,str4);


   str5[0]=str1[0];
   str5[1]=str2[0];
   str5[2]=str3[0];
   str5[3]=str4[0];

   int e=strlen(str5);

   for (i=0;i<10;i++)
   {
       for (j=0;j<10;j++)
       {
         if(str5[i]<str5[j])
         {
            temp=str5[i];
            str5[i]=str5[j];
            str5[j]=temp;
         }
       }

   }


   for (i=0;i<10;i++)
   {
       if (str5[i]==str1[0])
       {
           for (j=0;j<6;j++)
           {
           printf("%c",str1[j]);
           }
           printf("\n");
       }
       if (str5[i]==str2[0])
       {
           for (j=0;j<6;j++)
           {
           printf("%c",str2[j]);
           }
           printf("\n");
       }
       if (str5[i]==str3[0])
       {
           for (j=0;j<6;j++)
           {
           printf("%c",str3[j]);
           }
           printf("\n");
       }
       if (str5[i]==str4[0])
       {
           for (j=0;j<6;j++)
           {
           printf("%c",str4[j]);
           }
           printf("\n");
       }
   }


}
