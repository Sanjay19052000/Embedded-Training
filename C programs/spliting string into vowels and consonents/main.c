#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i,j,c=0,d;
    char str1[10];
    char str2[5];
    char str3[5];
    printf("enter he string \n");
    scanf("%s",str1);
    int a=strlen(str1);

    for (i=0;i<=a;i++)
    {
        if ((str1[i]=='a')||(str1[i]=='e')||(str1[i]=='i')||(str1[i]=='o')||(str1[i]=='u'))
        {
            str2[c]=str1[i];
            c++;
        }
        else
        {
            str3[d]=str1[i];
            d++;
        }
    }
    
    printf("The vowels are\n");
    for (i=0;i<5;i++)
    {
        printf("%c\n",str2[i]);
    }

     printf("The consonents are\n");
    for (i=0;i<5;i++)
    {
        printf("%c\n",str3[i]);
    }
}
