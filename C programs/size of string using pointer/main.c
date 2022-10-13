#include <stdio.h>
int main()
{
    int count=0;
    char a[100],i;
    printf("enter the character\n");
    scanf("%s",a);
    char *ptr=&a;

    for (i=0;ptr[i]!='\0';i++)
    {
       count++;
    }
    printf("%d",count);
}
