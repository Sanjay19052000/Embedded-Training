#include <stdio.h>
int main()
{
    int num1,num2,rem;
    printf("enter two values");
    scanf("%d %d", &num1, &num2);
    rem=num1%num2;
    printf("the remainder of two number is %d", rem);
    return 0;
}

