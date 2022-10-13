#include <stdio.h>
int main()
{
    int a[5],n=5,i=0,sum=0;
    int *ptr=&a[n];
    printf("enter the array");

    for (i=1;i<=n;i++)
    {
        scanf("%d",&ptr);
        sum=n+sum;
    }
printf("%d",sum);

}
