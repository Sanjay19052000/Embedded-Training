#include <stdio.h>

int main()
{
    int arr1[3][2];
    int i,n,j;

    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d\n",&arr1[i][j]);
        }
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\n",arr1[i][j]);

        }
    }
}
