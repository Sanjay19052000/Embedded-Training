#include<stdio.h>
#include<math.h>
#include<string.h>

struct school {
char name[10];
int roll_number;
}student[10];

int main()
{
    int arr[10],a;
    int temp,random,i;
    char temp1;

  strcpy(student[0].name,"sanjay");
  strcpy(student[1].name,"majoj");
  strcpy(student[2].name,"amruth");
  strcpy(student[3].name,"nikhil");
  strcpy(student[4].name,"kiran");
  strcpy(student[5].name,"ashwin");
  strcpy(student[6].name,"kiran");
  strcpy(student[7].name,"madan");
  strcpy(student[8].name,"chandan");
  strcpy(student[9].name,"gagan");

  student[0].roll_number=1;
  student[1].roll_number=2;
  student[2].roll_number=3;
  student[3].roll_number=4;
  student[4].roll_number=5;
  student[5].roll_number=6;
  student[6].roll_number=7;
  student[7].roll_number=8;
  student[8].roll_number=9;
  student[9].roll_number=10;



    for (i=0;i<10;i++)
    {
        random=rand()%10;
        temp=student[i].roll_number;
        student[i].roll_number=random;
        student[random].roll_number=temp;

    }

    for (i=0;i<10;i++)
    {
        temp=student[i].roll_number;
        temp1=student[i].name;
        student[temp].name=student[i].name;
        student[temp].name=temp1;

        strcpy
    }

    for (i=0;i<9;i++)
    {
        printf("Player eleminated is : %s \n",student[i].name);
        student[i].roll_number=0;

    }


    for (i=0;i<10;i++)
    {
        if (student[i].roll_number>0)
        {
            printf("the winner is : %s ",student[i].name);
        }
    }

}
