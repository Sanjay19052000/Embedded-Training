#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char str[20];
    printf("Enter the string\n");
    scanf("%[^\n]s",str);

    for (i=0;i<20;i++)
    {
        if ((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
        {
            str[i]=str[i]-32;
        }
        else
        {
            str[i]=str[i];
        }
    }
    printf("The sorted string is\n");
    for (j=0;j<20;j++)
    {
        printf("%c",str[j]);
    }
}
