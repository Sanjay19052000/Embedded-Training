#include <stdio.h>
int main()
{
    int a=5,b=5,c=10,x,y,z;
    x=a==b;
    y=b==c;
    z=a==c;
    printf("%d\n %d\n %d\n",x,y,z);

    x=a<b;
    y=b<c;
    z=a<c;
    printf("%d\n %d\n %d\n", x,y,z);

    x=a>b;
    y=b>c;
    z=a>c;
    printf("%d\n %d\n %d\n", x,y,z);

    x=a<=b;
    y=b<=c;
    z=a<=c;
    printf("%d\n %d\n %d\n", x,y,z);

    x=a>=b;
    y=b>=c;
    z=a>=c;
    printf("%d\n %d\n %d\n" ,x,y,z);

    x=a!=b;
    y=b!=c;
    z=a!=c;
    printf("%d\n %d\n %d\n", x,y,z);
    return 0;

}
