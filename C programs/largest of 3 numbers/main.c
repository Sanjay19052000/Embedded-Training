#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers");
    scanf("%d %d %d", &a,&b,&c);

    (a>b)&&(a>c)?(printf("a is greater %d",a)):( a );
    (b>c)&&(b>a)?(printf("b is greater %d",b)):(b);
    (c>a)&&(c>b)?(printf("c is greater %d",c)):(c);
    return 0;
}
