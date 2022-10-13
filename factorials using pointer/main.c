#include <stdio.h>
int main()
{
    int a,i=0,fact,n=1;
    printf("enter the number\n");
    scanf("%d",&a);
    int *ptr=&a;

    for (i=1; i<=*ptr; i++)
    {
        n=n*i;

    }

    printf("%d",n);
}
