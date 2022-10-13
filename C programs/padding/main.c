#include <stdio.h>

union abc{

char s[12];
int  a;
int b;
int c;
int d;

}str;

int main()
{

    printf("%d\n",sizeof(str));



}
