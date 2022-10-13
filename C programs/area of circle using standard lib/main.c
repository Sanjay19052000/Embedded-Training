#include<stdio.h>
#include<math.h>
int main()
{
    float area,radius;
    printf("enter the radius");
    scanf("%f",&radius);
    area= M_PI*radius*radius;
    printf("the area of circle is %f",area);
    return 0;
}
