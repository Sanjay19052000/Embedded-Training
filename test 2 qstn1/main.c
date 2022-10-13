#include <stdio.h>
int main()
{
    int bill,units;
    printf("enter the units");
    scanf("%d",&units);

    if (units<=100)
    {
        printf("bill is 100");
    }
    else if (units>100) && (units<=219)
    {
        bill=units*1.10;
        printf("the bill is %d",bill);
    }

    else if (units>219) && (units<=500)
    {
        bill=(219*1.10)-(units*1.45);
        printf("the bill is %d",bill);
    }
    else if (units>500)
    {
        bill=(219*1.10)-(280*1.45)-(units*1.9)*1.12;
        printf("the bill is %d",bill);
    }
    return 0;
}
