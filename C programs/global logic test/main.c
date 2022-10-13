#include <stdio.h>

int a=10;

int main() {

    a=11;

    printf("%d and address is %x\n",a,&a);

    myfun();

    return 0;
}

void myfun(){
    printf("%d and address is %x\n",a,&a);
}
