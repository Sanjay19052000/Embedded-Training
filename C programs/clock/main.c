#include <stdio.h>
#include <dos.h>

int main()
{
    int i,j;

    for (i=0;i<=59;i++)
    {

        for (j=0;j<=59;j++)
        {
            sleep(1);
            printf("min-%d sec-%d\n",i,j);
        }
    }
}
