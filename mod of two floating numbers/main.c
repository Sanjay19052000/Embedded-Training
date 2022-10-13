#include <stdio.h>
int main()
{
    int num1,num2;
    float mod;
    printf("enter two values");
    scanf("%d %d", &num1, &num2);
    mod=num1%num2;
    printf("the mod of two number is %f", mod);
    return 0;
}
