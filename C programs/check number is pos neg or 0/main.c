#include <stdio.h>
int main()
{
    int num1;
    printf("enter the number");
    scanf("%d",&num1);

    if (num1<0)
    {
        printf("the number is negative");
    }
    else if (num1==0)
    {
        printf("the number is zero");
    }
    else
    {
        printf("the number is positive");
    }
    return 0;
}
