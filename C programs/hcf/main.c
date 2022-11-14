#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,i,j,num;
    printf("enter the numbers\n");
    scanf("%d",&num1);

    printf("enter the second number\n");
    scanf("%d",&num2);

    for (i=1;i<=num1;i++)
    {
        for (j=1;j<=num2;j++)
        {
           if ((num1%i==0)&&(num2%i==0))
           {
               num=i;
           }
        }


    }
    printf("%d",num);
}
