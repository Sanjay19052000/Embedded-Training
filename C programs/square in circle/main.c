#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define pi 3.147

int main()
{
    int radius;
    float side;

    printf("enter the radius\n");
    scanf("%d",&radius);

    side=sqrt(2)*radius;

    printf("the side of a square is %f",side);
}

/* THE OUTPUT IS ACHIEVED

enter the radius
5
the side of a square is 7.071068

enter the radius
9
the side of a square is 12.727922

*/
