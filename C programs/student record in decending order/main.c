#include <stdio.h>
struct students{
char name[10];
int marks;
}s[n],temp;

int main()
{
    int i,j;

    for(i=0;i<n;i++)
    {
        printf("enter the student name\n");
        scanf("%s",&s[i].name);
        printf("enter the marks\n");
        scanf("%d",&s[i].marks);
    }

    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (s[i].marks<s[j].marks)
            {
               temp=s[i];
               s[i]=s[j];
               s[j]=temp;
            }
        }
    }
    for (i=0;i<n;i++)
    {
    printf("%s %d\n",s[i].name,s[i].marks);
    }
}
