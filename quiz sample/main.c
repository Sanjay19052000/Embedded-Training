#include <stdio.h>
int main()
{
    int num=0,counter=0,num1;
    printf("enter the number");
    scanf("%d",&num);

    for (num1=1;num1<=num;num1++)
    {
        num%num1==0;
        printf("%d",num);
        counter++;
    }
    if (counter==2)
    {
        printf("prime");
    }

}





