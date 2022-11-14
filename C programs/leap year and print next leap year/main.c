#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,timer=0;

    printf("Enter the year \n");
    scanf("%d",&year);

    if ((year%400==0)||(year%4==0))
    {
        timer++;
    }
   if (year%100!=0)
    {
        timer++;
    }

    if (timer==2)
    {
        printf("it is a leap year\n");
    }
    else
    {
        printf("it is not a leap year\n");
    }

}
