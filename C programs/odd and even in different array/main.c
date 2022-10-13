#include <stdio.h>

int main()
{
    int n=5;
    int arr1[n],arr2[n],arr3[n],i,j;

    printf("enter the array elements\n");

    for (i=1; i<=n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    for (j=1; j<=n; j++)
    {
        if (arr1[j]%2==0)
        {

            arr2[j]=arr1[j];

        }

        else
        {
            arr3[j]=arr1[i];

        }

    }
    printf("odd is %d \n",arr3[j]);
        printf("\n even is %d \t",arr2[j]);



}
