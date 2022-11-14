#include <stdio.h>
#include <stdlib.h>

void (*fun_ptr)(int);

void fun (int a)
{
    printf("value of a is %d\n",a);
}

int main()
{
    fun_ptr(10);
    return 0;

}

