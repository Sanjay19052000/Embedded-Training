#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the year");
    scanf("%d",&a);

    if (a=4%==0)
    {
        if (a=400%==0)
        {
            printf("it is a leap year");
        }
    }
    else if ( a=4%==1)
    {
        b=a+3;
        printf("the next leap year is %d",b);
    }

    else if (a=4%==2)
    {
        c=a+2;
        printf("the next leap year is %d",c);
    }
    else if (a=4%==3)
    {
        d=a+3;
        printf("the next leap year is %d",d);
    }
    else
    {
        printf("invalid input");
    }
}
