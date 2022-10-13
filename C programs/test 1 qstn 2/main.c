#include <stdio.h>
int main()
{
    int num1,num2;
    printf("enter the number ");
    scanf("%d",&num1);

    if (num1 %7==0)
    {
        if (num1 %11==0)
        {
            printf("multiple of both");
        }


        else if ( num1 %7==0)
        {
            printf("multiple of 7");
        }
    }
        else if (num1 %11==0)
        {
            printf("multiple of 11");
        }



}

