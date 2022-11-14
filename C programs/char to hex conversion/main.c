#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a,mean,median,mode,temp,sum,j,b=0;
    printf("Enter the length\n");
    scanf("%d",&n);
    int num[n];

    printf("Enter the numbers\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a);
        num[i]=a;
    }
    for (i=0;i<n;i++)
    {
        sum+=num[i];

    }
    mean=sum/n;
    printf("The mean is %d\n",mean);

    if (n%2==0)
    {
    for (i=0;i<=n/2-1;i++)
    {
        median=num[i];

    }
    printf("The median is %d\n",median);
    }
    else
    {
       for (i=0;i<=n/2;i++)
    {
        median=num[i];

    }
    printf("The median is %d\n",median);
    }

    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (num[i]==num[j])
            {
                printf("The mode is %d\n",num[i]);
            }
        }
    }

}

/*THE OUTPUT IS

Enter the length
4
Enter the numbers
2
4
6
4
The mean is 4
The median is 4
The mode is 4

*/
