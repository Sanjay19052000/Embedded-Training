#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,i,j;

    int arr[8];
    printf("Enter the array elements\n");

    for(i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i=0;i<8;i++)
    {
        for (j=0;j<8;j++)
            {
                if (arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;

                }
            }
    }
    printf("Ascending order of array is \n");
    for (i=0;i<8;i++)
    {
        printf("%d\t",arr[i]);
    }
}

/*THE OUTPUT IS ACHIEVED

Enter the array elements
56
23
97
34
11
77
36
89
Ascending order of array is
97      89      77      56      36      34      23      11

*/
