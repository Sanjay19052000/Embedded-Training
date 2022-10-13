#include <stdio.h>
int main()
{
    int simp,prin,rate,time ;
    printf("enter the principle");
    scanf("%d",&prin);
    printf("enter the rate of interest");
    scanf("%d",&rate);
    printf("enter the time");
    scanf("%d",&time);
    simp=(prin*rate*time)/100;
    printf("the SI is %d\n" ,simp);
    return 0;

}
