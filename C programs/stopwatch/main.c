#include <stdio.h>
#include <dos.h>

int main()
{
    int i,n;

    printf("enter the minutes");
    scanf("%d",&n);

    for (i=0;i<=n*59;i++)

    {
            sleep(1);
            printf("sec-%d\n",i);

    }
}
