#include <stdio.h>
int main()
{
    float a,b,quad;
    printf("enter 2 points ");
    scanf("%f %f",&a,&b);

    if (a>0&&b>0)
    {
       printf("first quadrant");
    }
    else if (a<0&&b>0)
    {
        printf("seconf quadrant");
    }
    else if (a<0&&b<0)
    {
        printf("third quadrant");
    }
    else if (a>0&&b<0)
    {
        printf("fourth quadrant");
    }
    else
    {
        printf("error");
    }
    return 0;

}
