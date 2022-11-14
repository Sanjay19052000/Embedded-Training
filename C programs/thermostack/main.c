#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,k;

    for (m=1;m<=10;m++)
    {

    for (i=25;i>=20;i--)
    {
        sleep(1);
        printf("the room temp is %d\n ",i);

        if (i==20)
        {
            for(j=20;j<=26;j+=2)
            {
            sleep(1);
          //  k=j+2;
           // k++;
            printf("room temp increasing %d\n",j);
            }

        }
    }
    }
}
