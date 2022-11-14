#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for (i=1;i<=5;i++)
    {
        sleep(5);

        if (i==1)
        {
            printf("city metro\n");
        }
        if (i==2)
        {
            printf("sarasvathi puram\n");
        }
        if (i==3)
        {
            printf("kuvempu nagar\n");
        }
        if (i==4)
        {
            printf("tk layout\n");
        }
        if (i==5)
        {
            printf("alnalli\n");
        }
    }
}
