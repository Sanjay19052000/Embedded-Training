#include <stdio.h>

float prod_fun(int a,float b)
{
    float z=a*b;
}
int main()
{
    float num2,result;
    int num1;
    printf("enter the numbers \n");
    scanf("%d %f",&num1,&num2);
    result = prod_fun(num1,num2);
    printf("the answer is %f",result);
    return 0;
}
