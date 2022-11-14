#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[2][2];
    int arr2[2][2];
    int sum[2][2];
    int sub[2][2];
    int i,j;

    printf("Enter the first matrix elements\n");

    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the second matrix elements\n");

    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("addition of 2 matrix is\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",sum[i][j]);
        }
    }

    printf("\nsubtraction of 2 matrix is\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            sub[i][j]=arr1[i][j]-arr2[i][j];
        }
    }

    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",sub[i][j]);
        }
    }

}

/*THE EXPECTED OUTPUT IS ACHIEVED
AND THE OUTPUT IS

Enter the first matrix elements
1
2
3
4
Enter the second matrix elements
5
6
7
8
addition of 2 matrix is
6       8       10      12
subtraction of 2 matrix is
-4      -4      -4      -4

*/
