#include <stdio.h>
int main()
{
    float num;
    int a;
    printf("enter the floating value");
    scanf("%f",&num);
    a=((num+0.5)*10/10);
    printf("the value is %d",a);
   // printf("%d",(num<0)?(num-0.5):(num+0.5));
    return 0;

}
