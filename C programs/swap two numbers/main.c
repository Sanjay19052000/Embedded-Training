#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first number \n");
    scanf("%d",&a);
    printf("enter the second number \n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the swapped data is %d\n %d\n", a,b);
    return 0;
}
