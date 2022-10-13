#include <stdio.h>
int main()
{
    int i=0,j=0,flag=0,counter=0;
    printf("enter the number");
    scanf("%d",&flag);

    for (i=1;i<=j;i++)
    {
        j%i==0;
        counter++;
    }
    if (counter==2)
    {
        flag++;
        printf("%d",i);

    }
   else if (flag==10)
    {
        return 0;
    }
}




