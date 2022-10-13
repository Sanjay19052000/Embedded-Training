#include <stdio.h>
int main()
{
    int units;
    float bill;
    printf("enter the units");
    scanf("%d",&units);

    if (units<=100)
    {
        printf("bill is 120");
    }
    else if ((units>100)&&(units<=219))
    {
        bill=units*1.10;
        printf("the bill is %f",bill);
    }

    else if ((units>219) && (units<=500))
    {
        bill=((219*1.10)+(units-219)*1.45);
        if (bill>450)
        {
            bill=bill*1.12;
        }
        printf("the bill is %f",bill);
    }
    else if (units>500)
    {
        bill=((219*1.10)+(280*1.45)+(units-500)*1.9)*1.12;
        printf("the bill is %f",bill);
    }
    return 0;
}
