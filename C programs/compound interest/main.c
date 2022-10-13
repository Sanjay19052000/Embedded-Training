#include <stdio.h>
int main()
{
    int comp,prin,rate,time ;
    printf("enter the principle");
    scanf("%d",&prin);
    printf("enter the rate of interest");
    scanf("%d",&rate);
    printf("enter the time");
    scanf("%d",&time);
    comp=comp*pow((1+rate/100),time);
    printf("the CI is %d\n" ,comp);
    return 0;

}
