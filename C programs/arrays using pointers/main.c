#include <stdio.h>

int main()
{
    int n=5,i;
    int arr1[n];
    int *ptr1[n];

    printf("enter the inputs");

    for (i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
        ptr1[i]=&arr1[i];

    }
    for (i=0; i<n; i++)
    {
        printf("%d",*ptr1[i]);
    }


    return 0;
}
