#include <stdio.h>
int main()
{
    int unit,bill;
    printf("enter the units");
    scanf("%d",&unit);

    if (unit<83)
    {
        printf("the bill is 100");
    }
    else if ((unit>83) &&(unit <200))
    {
        bill=unit*1.2;
        printf("the bill is %d",bill);
    }
    else if ((unit>=200) && (unit<400))
    {
        bill=((200*1.20)+(unit-200)*1.5);
        printf("the bill is %d",bill);
    }
    else if ((unit>=400) && (unit<600))
    {
        bill=(200*1.20)+(200*1.50)+(unit-400)*1.8;
        printf("the bill is %d",bill);
    }
    else if (unit >=600)
    {
        bill=(200*1.2)+(200*1.5)+(200*1.8)+(unit-600)*2*1.15;
        printf("the bill is %d",bill);
    }
    return 0;
}
