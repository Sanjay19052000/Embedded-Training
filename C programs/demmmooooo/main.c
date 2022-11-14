#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,j,i,k=0;

    printf("enter the matrix size\n");
    scanf("%d%d",&a,&b);
    int mat1[a][b];
    int mat2[a][b];
    int mat3[a][b];

    printf("Enter the first matrix elements\n");
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter the second matrix elements\n");
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    //printf("the first matrix elements\n");
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            //for (k=0;k<b;k++)
            //{

            mat3[i][j]+=mat1[i][j]*mat2[i][j];
            }
            //[j]=(mat1[j])*(mat2[j]);
        }


    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {

            printf("%d\n",mat3[i][j]);
        }
    }
}
