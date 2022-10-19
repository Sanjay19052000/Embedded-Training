#include <stdio.h>

struct students
{
    int id;
    char name[20];
    int marks;
} s[4],s1,temp;

int main()
{
    int i,j,a;
    //struct students s1= {50,"ggg",50};

    for (i=0; i<3; i++)
    {
        printf("enter the studet id,name and marks");
        scanf("%d %s %d",&s[i].id,&s[i].name,&s[i].marks);

    }

    for (i=0; i<3; i++)
    {
        if (s[i].marks<50)
        {
            printf("%s %d\n",s[i].name,s[i].marks);
        }
    }


}
