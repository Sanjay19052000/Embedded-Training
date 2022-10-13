#include <stdio.h>
int main()
{
    int a,i=0,add=0;
    for (i=101;i<=1000;i++)
    {
        if (i%2==1)
        {
            add=add+i;
        }
    }
    printf("%d",add);
}
