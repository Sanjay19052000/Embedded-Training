#include <stdio.h>
int main()
{
    int i;

    for (i=1;i<=100;i++)
    {


        if ((i%3==0)&&(i%5==0))
        {
            printf("clap chitki\n");
        }
     else if (i%3==0)
        {
            printf("clap\n");
        }
       else if (i%5==0)
        {
            printf("chitki\n");
        }
        else
        {
        printf("%d\n",i);
        }
    }
}
