#include <stdio.h>
int main()
{
    int i=8,n=8,a,b,c,d,e,f,g,h,counter;
    int arr[i];

    int largest,smallest;
    printf("enter the numbers\n");


    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    largest=smallest=arr[0];
    for(i=0;i<n;i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
        if (arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("the largest number is %d\n",largest);
    printf("the smallest number is %d\n",smallest);
}
