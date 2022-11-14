#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,i,j,a=0;
    int arr[200];

    for (i=0;i<200;i++)
    {
        a=rand()%154+845;
        arr[i]=a;
    }
    printf("The random numbers between 845-999 are\n");
    for (j=0;j<200;j++)
    {
        printf("%d  ",arr[j]);
    }
}
