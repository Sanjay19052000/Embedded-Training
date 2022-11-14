#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len1,len2,len3,timer=0;

    printf("enter the lengths\n");
    scanf("%d%d%d",&len1,&len2,&len3);

    if (len1+len2>len3)
    {
        timer++;
    }
    if (len1+len3>len2)
    {
        timer++;
    }
    if (len3+len2>len1)
    {
        timer++;
    }
    if (timer==3)
    {
        printf("Triangle can be formed\n");

    }
    else
    {
        printf("Trinangle cannot be formed\n");
    }
}
