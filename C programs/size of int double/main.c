#include <stdio.h>

int main()
{
       long int a,*ptr;
        char b,*ptr1;
        double c,*ptr2;

        int x,y,z,i,j,k,num1,num2,num3;

        ptr=&a;
        ptr1=&b;
        ptr2=&c;

        i=ptr;
        x=++ptr;
        j=ptr1;
        y=++ptr1;
        k=ptr2;
        z=++ptr2;

        num1=x-i;
        num2=y-j;
        num3=z-k;



        printf("long int size is %d\n",num1);
        printf("char size is is %d\n",num2);
        printf("double size is is %d\n",num3);



}
