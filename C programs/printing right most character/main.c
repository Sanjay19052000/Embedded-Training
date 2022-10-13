#include <stdio.h>
#include <string.h>
int main()
{
    int b;
    char c;
    char a[20]="abcdefg";
    b=strlen(a);
    c=a[b-1];
    printf("%c",c);
}
