#include <stdio.h>

int main()
{
    int arr[5],i,j,n,small,large;

    printf("enter the array elements");
    for (i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<5;i++)

    if (arr[0]>arr[i])
    {
        printf("%d",arr[0]);
    }
    else if (arr[1]>arr[i])
    {
        printf("%d",arr[1]);
    }
    else if (arr[2]>arr[i])
    {
        printf("%d",arr[2]);
    }
    else if (arr[3]>arr[i])
    {
        printf("%d",arr[3]);
    }
    else if (arr[4]>arr[i])
    {
        printf("%d",arr[4]);
    }

}


