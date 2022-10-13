#include <stdio.h>
int main()
{

    int num1,i,counter=0;
    printf("enter the number");
    scanf("%d",&num1);

    for (i=0; i<=num1; i++)
    {
        if (i%num1==0)
        {
            counter++;
            printf("%d\n",counter);
            break;

        }

    }
     if (counter==2)
    {
        printf("it is prime");
    }
    else
    {
        printf("not prime");
    }

}
