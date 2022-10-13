#include <stdio.h>
int main()

{
    int add,sub,mul,div,mod,a,b,c=5;

    printf("enter the inputs");
    scanf("%d %d",&a,&b);
    printf("press 1 for addition\n 2 for subtraction \n 3 for multiplication \n4 for division \n 5 for modulus ");
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        add=a+b;
        printf("the value is %d",add);
    break;

    case 2:
        sub=a-b;
        printf("the value is %d",sub);
        break;

    case 3:
        mul=a*b;
        printf("the value is %d",mul);
        break;

    case 4:
        div=a/b;
        printf("the value is %d",div);
        break;

    case 5:
        mod=a%b;
        printf("the value is %d",mod);
        break;

    default:
        printf("invalid");
    }
    return 0;
}
