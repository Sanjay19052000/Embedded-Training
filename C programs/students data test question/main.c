#include <stdio.h>
struct students
{
    char name[10];
    int marks;
    int id;
} s[4],temp,temp1,temp2,s4;

int main()
{
    int i,j;
    char str[20],str1[20];
  //struct students temp2={"raj"};
strcpy(s4.name,"mohan");

    for(i=0; i<3; i++)
    {
        printf("enter the student name\n");
        scanf("%s",&s[i].name);
        printf("enter the marks\n");
        scanf("%d",&s[i].marks);
        printf("enter the id\n");
        scanf("%d",&s[i].id);
    }

    for (i=0; i<3; i++)
    {
        for (j=i+1; j<3; j++)
        {
            if (s[i].id>s[j].id)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }


      printf("enter the student name to find\n");
      scanf("%s",s[3].name);
     // printf("%s",str);

      for (i=0;i<3;i++)
      {
          for (j=i+3;j<3;j++)
          if (s[i].name==s[j].name)
          {

            printf("%s\t %d\t %d\n",s[i].name,s[i].marks,s[i].id,str);
            //s[i+1].name;
           // printf("next student is %s",str1);
          }

      }
}
