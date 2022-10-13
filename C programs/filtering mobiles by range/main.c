#include <stdio.h>
int main()
{
    int nokia=10000, samsung=30000, oneplus=50000, pixel=70000, iphone=100000 ,input1,input2;
    printf("enter the min and max range of the mobile");
    scanf("%d %d", &input1,&input2);

    if (input1>=0 && input2<=30000)
    {
        printf("nokia and samsung");
    }
    else if (input1>=0 && input2<=50000)
    {
        printf("nokia, samsung and oneplus");
    }
    else if (input1>=0 && input2<=70000)
    {
        printf("nokia, samsung, oneplus and pixel");
    }
    else if (input1 >=0 && input2<=100000)
    {
        printf("nokia, samsung, oneplus, pixel and iphone");
    }
    return 0;
}
