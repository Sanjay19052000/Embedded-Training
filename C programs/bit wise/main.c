#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the a value");
    scanf("%d",&a);
    printf("enter the b value");
    scanf("%d",&b);

    c=a&b;
    printf("the value is %d\n",c);

    c=a|b;
    printf("the value is %d\n",c);

    c=a^b;
    printf("the value is %d\n",c);

    c= ~b;
    printf("the value is %d\n",c);

    c=a<<b;
    printf("the value is %d\n",c);

    c=a>>b;
    printf("the value is %d\n",c);

    return 0;
}
