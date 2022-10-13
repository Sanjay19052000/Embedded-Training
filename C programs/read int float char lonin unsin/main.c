#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    long int d;
    unsigned int e;
    printf("enter the int value\n");
    scanf("%d",&a);
    printf ("enter the float value\n");
    scanf("%f",&b);
    printf("enter the char value\n");
    scanf(" %c",&c);
    printf("enter the long int value\n");
    scanf("%d",&d);
    printf("enter the unsigned int value\n");
    scanf("%u",&e);
    printf("%d\n %f\n %c\n %d\n %u\n",a ,b ,c ,d ,e);
    return 0;

}
