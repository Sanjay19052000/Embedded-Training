#include <stdio.h>
int main()
{
    char a;
    printf("enter the character");
    scanf("%c",&a);

    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("the character is vowel");
    }
    else
    {
        printf("the character is not vowel");
    }
    return 0;
}
