#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the a value\n");
    scanf("%d",&a);
    printf("entet the b value\n");
    scanf("%d",&b);
    b=b-a;
    a=b+a;
    b=a-b;
    printf("the value of a is %d\n the value of b is %d\n",a,b);
    return 0;
}
