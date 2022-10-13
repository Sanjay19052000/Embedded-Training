#include <stdio.h>

int main()
{
    int num1,num2,max;
    int *ptr1=&num1;
    int *ptr2=&num2;

    printf("enter 2 numbers");
    scanf("%d %d",&num1,&num2);
    {

    if (*ptr1>*ptr2)
    {
        printf("the greatest number is %d",*ptr1);
    }
    else
    {
        printf("the greatest number is %d",*ptr2);
    }
    return 0;
    }
}
