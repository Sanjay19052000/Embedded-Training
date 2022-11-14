#include <stdio.h>
#include <stdlib.h>

int main()
{
   // int seed=6;
    int n=50;
    int i,temp,a[n],count=0,count1=0;


    for(i=0;i<=5;i++)
    {
        temp=(rand()%6+1);
        printf("%d\n",temp);
       // a[i]=temp;

        if (temp==0)
        {
            count1++;
        }
       else if (temp==4)
        {
            count++;
        }
        else if (temp==6)
        {
            count++;
        }
    }
    printf("boundries=%d \n wickets=%d\n",count , count1);

}
