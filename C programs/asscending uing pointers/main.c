#include <stdio.h>
int main()
{
    int i=0,n=5;
    int a[n];
    int *ptr=&a[n];
    printf("enter the array");
    for (i=1;i<=n;i++)
    {
    scanf("%d",ptr[i]);
    }
    for (i=1;i<=n;i++)
    {
        printf("%d",ptr[i]);
    }



}
