#include <stdio.h>

int main()
{
    int arr[5],i,j,n=5;
    printf("enter the array elements");

    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }

        for (i=0; i<=(n/2)-1; i++)
        {
            int temp = arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=temp;
        }
        for (i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }



}

