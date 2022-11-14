#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for (i=1;i<=100;i++)
    {
        if (i%15==0)
        {
            printf("clap\n");
        }

        else if (i%5==0)
        {

            printf("slap\n");
        }

        else
        {
            printf("%d\n",i);
        }


    }
}
