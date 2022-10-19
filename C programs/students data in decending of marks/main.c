#include <stdio.h>
struct students{
char name[10];
int marks;
int id;
}s[10],temp;

int main()
{
    int i,j;

    for(i=0;i<4;i++)
    {
        printf("enter the student name\n");
        scanf("%s",&s[i].name);
        printf("enter the marks\n");
        scanf("%d",&s[i].marks);
        printf("enter the id\n");
        scanf("%d",&s[i].id);
    }

    for (i=0;i<4;i++)
    {
        for (j=i+1;j<4;j++)
        {
            if (s[i].marks<s[j].marks)
            {
               temp=s[i];
               s[i]=s[j];
               s[j]=temp;
            }
        }
    }
    for (i=0;i<4;i++)
    {
    printf("%s %d %d\n",s[i].name,s[i].marks,s[i].id);
    }
}
