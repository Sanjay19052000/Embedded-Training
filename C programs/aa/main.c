#include <stdio.h>

typedef struct student
{
    char *a;
}   stu;

void main()
{
    struct student s;
    s.a = "hi";
    printf("%s", s.a);
}
