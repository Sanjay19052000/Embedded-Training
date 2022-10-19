#include <stdio.h>
int main()
{
    int i,j,n=5;
    int num1[]={12,23,31,64,11};

    int *ptr=&num1;

    for (i=0;i<n;i++)
    {
        ptr[i]=&num1[i];
    }

    for (ptr[i]=0;ptr[i]<n;ptr++)
    {
        for (ptr[j]=0;ptr[j]<n;ptr++)
        {
            if (ptr[i]>ptr[j])
            {
                ptr[i];
            }
        }
    }
    printf("%d",ptr[i]);

}
