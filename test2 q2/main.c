#include <stdio.h>
#include <string.h>

int main()
{
    int i=5,n=5;
    int arr[i];

    float sum;
    float average;
    printf("enter the numbers\n");


    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    printf("sum is %f\n",sum);

    average = (sum/5);
    printf(" the average is %f\n",average);






}
