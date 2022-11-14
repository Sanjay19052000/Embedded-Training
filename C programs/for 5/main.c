#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,space,j,m;
    for (m=1;m<=10;m++)
    {

    for (i=1;i<=4;i++)
    {
        for (space=1;space<=i-1;space++)
        {
            printf("  ");
        }
        for (j=i;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for (i=3;i>=1;i--)
    {
        for (space=1;space<=i-1;space++)
        {
            printf("  ");
        }
        for (j=i;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    }
}
