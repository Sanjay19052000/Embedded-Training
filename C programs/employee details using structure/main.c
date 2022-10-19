#include <stdio.h>
struct employee{
int emp_id;
char emp_name[50];
int emp_salary;
}s1,s2,s3,s4;

int main()
{
struct  employee  s1={1,"ajay",20000};
   struct  employee s2={2,"vijay",25000};
   struct  employee s3={3,"arun",30000};
   struct  employee s4={4,"kiran",35000};

    printf("%d %s %d",s1.emp_id,s1.emp_name,s1.emp_salary);
}
