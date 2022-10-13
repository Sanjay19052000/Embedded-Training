#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    int count1,count2,count3,count=0;
    printf("enter the string\n");
    scanf("%s",a);
    int i=strlen(a);

    for (i=0;i<=a;i++)
    {
        if (a=='a'||'e'||'i'||'o'||'u')
        {
            count1++;
            printf("%d",count1);
        }
        if (a==' ')
        {
            count2++;
            printf("%d",count2);
        }
        else
        {
            count3=i-count1-count2;
            printf("%d",count3);
        }
    }
}
