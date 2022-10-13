#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);

    a+=b;
    printf("the addition value is %d\n",a);
    a-=b;
    printf("the subtraction value is %d\n",a);
    a*=b;
    printf("the multiplication value is %d\n",a);
    a/=b;
    printf("the division value is %d\n",a);
    return 0;


}
