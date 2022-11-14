#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1=0,num2,q,rem[10],i;


   printf("enter the integer value");
   scanf("%d",&num1);

   for (i=0;num2>0;i++)
   {
       rem[i]=num1%2;
     //  printf("%d",rem);
      // num1=num1;
       num1=num1/2;
     //  printf("%d",num2);
   }
   for (i=4;i>=0;i--)
   {
   printf("%d",rem[i]);
   }
}
