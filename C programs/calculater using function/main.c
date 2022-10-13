#include <stdio.h>
int main(){

int a,b,c;
    printf("enter the values\n");
    scanf("%d %d",&a,&b);
    printf("press 1 for addition\n press 2 for subtraction\n press 3 for nultiplication\n press 4 for division\n press 5 for remainder \n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("the value is %d",add(a,b));
    break;

    case 2:
        printf("the value is %d",sub(a,b));
        break;

    case 3:
        printf("the value is %d",mul(a,b));
        break;

    case 4:
        printf("the value is %d",div(a,b));
        break;

    case 5:
        printf("the value is %d",mod(a,b));
        break;
}


    return 0;

}
 int add(int a,int b)
 {
     int add=a+b;
     return add;
 }
 int sub(int a,int b)
 {
     int sub=a-b;
     return sub;
 }
 int mul(int a,int b)
 {
     int mul=a*b;
     return mul;
 }
int div(int a,int b)
 {
     int div=a/b;
     return div;
 }
int mod(int a,int b)
 {
     int mod=a%b;
     return mod;
 }


