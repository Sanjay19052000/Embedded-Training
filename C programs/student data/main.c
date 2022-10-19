#include <stdio.h>
#include<string.h>
struct student{
char name;
int roll_number;
int age;
};

int main()
{
    char name[20];
    int i;
    struct student s1={"raj",12,22};
    struct student s2={"sanju",7,23};
    struct student s3={"manoj",1,24};
    struct student s4={"nikil",23,22};

    printf("%s",name);
    scanf("%s",name);

    for (i=s1.name;i<=4;i++)
    {
        if (name==i)
        {
            printf("%s",i);
        }
    }



}
