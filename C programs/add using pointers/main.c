#include <stdio.h>

int main()
{
    int num1,num2,add;
    int *ptr1=&num1;
    int *ptr2=&num2;

    printf("enter the inputs\n");
    scanf("%d \n %d",&num1,&num2);

    add=*ptr1+*ptr2;
    printf("the sum is %d\n",add);
    return 0;
}
