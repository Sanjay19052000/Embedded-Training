#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3];
    int i,j,aaa;

    for (i=0;i<3;i++)
    {
        for (j=0;j<j;j++)
        {
            aaa=rand()%9;
           // arr[i][j]=aaa;

            if (arr[i][j]!=aaa)
            {
                arr[i][j]=aaa;
            }
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
