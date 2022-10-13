#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,4,3,2};
int timer;
    int length=sizeof(arr)/sizeof(arr[0]);

    printf("duplicate elements are \n");

    for (int i=0;i<length;i++)
    {
        for (int j=i+1;j<length;j++)
        {
            if (arr[i]==arr[j])
            {
            timer=timer++;
            arr[j]=-1;
            }
        }
    }
    printf("%d",timer);
    return 0;
}
