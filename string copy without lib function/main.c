#include <stdio.h>
int main()
{
    char s1[100], s2[100],i,n=100;
    printf("Enter string s1 \n");


        scanf("%s",s1);

    for(i=0;s1[i]!='\0'; ++i)
    {
        s2[i] = s1[i];
    }

    printf("String s2 %s", s2);
    return 0;

}
