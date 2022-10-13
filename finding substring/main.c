#include <stdio.h>
#include <string.h>
int main()
{
   char str1[100]={"My name is Sanjay"};
    char str2[100];
    int i,j,n=100;
    int len1=strlen(srt1);
    int len2=strlen(str2);

    scanf("%s",str2);



    for (i=1;i<len2;i++)
    {
        for (j=1;j<len1;j++)
        {
            if (str2[i]==str1[j])
            {
                printf("it is a substring %s",str2);
            }
            else
            {
                printf("it is not a substring %s",str2);
            }
        }
    }

}
