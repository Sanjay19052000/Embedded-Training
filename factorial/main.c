#include <stdio.h>
int main()
{
    int fact,cont,num;

    printf("enter the number");
    scanf("%d",&fact);

    for (cont=1;cont<=fact;cont++)
    {
        num=fact*cont;
    }
    printf("factorial is %d",num);
}
