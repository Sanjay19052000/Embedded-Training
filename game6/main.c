#include <stdio.h>
int main()
{
    int a,i,j;
    printf("enter the input");
    scanf("%d",&a);
    for (i=1; i<=a; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    for (i=a-1; i>=1; i--)
    {
        for (j=1; j<=i; j++)
        {
            printf("1");
        }
        printf("\n");
    }
}
