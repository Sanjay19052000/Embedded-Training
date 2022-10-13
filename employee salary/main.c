#include <stdio.h>

int main()
{
    int emp_id, working_hours, per_hour;
    float salary;
    printf("enter the employee id\n");
    scanf("%d", &emp_id);
    printf("enter the total working hours \n");
    scanf("%d", &working_hours);
    printf("enter the amount per hour\n");
    scanf("%d", &per_hour);
    printf("employee id is %d\n", emp_id);
    salary= per_hour*working_hours;
    printf("salary of a month is %.2f\n",salary);
    return 0;
}

