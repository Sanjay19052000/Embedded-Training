#include<stdio.h>
int main()
{
    int num1,i,n,fact=1;
int    *ptr=&fact;
    printf("enter the number\n");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        *ptr=*ptr*i;
    }
    printf("%d",fact);
}



