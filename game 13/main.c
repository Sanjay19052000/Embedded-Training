#include <stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        for (k=i;k>=1;k--)
        {
            printf(" ");
        }
        for (j=1;j>=1;j--)
        {
            printf("%d  ",i);
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for (k=i;k>=1;k--)
        {
            printf(" ");
        }
        for (j=1;j>=1;j--)
        {
            printf("%d  ",i);
        }
        printf("\n");
    }
}
