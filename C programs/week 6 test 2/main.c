#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a=0;
    char str[20];
    char str1[20];
    printf("Enter the string\n");
    scanf("%[^\n]s",str);

    for (i=0;i<20;i++)
    {
       if (str[i]!=' ')
       {
           str1[a]=str[i];
           a++;
       }
    }

    for (i=0;i<17;i++)
    {
        printf("%c",str1[i]);
    }
}
