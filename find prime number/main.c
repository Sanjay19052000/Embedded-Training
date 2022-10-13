#include <stdio.h>
int main()
{
    int num=0,counter=0,num1;
    printf("enter the number");
    scanf("%d",&num);

    for (num1=1;num1<=num;num1++)
    {
        num%num1==0;
        counter++;
    }
    if (counter==2)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}




