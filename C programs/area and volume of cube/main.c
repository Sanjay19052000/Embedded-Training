#include <stdio.h>
#include<math.h>
int main()
{
    int edge,area,volume;
    printf("enter the edge");
    scanf("%d",&edge);

    area=edge*edge*6;
    printf("the area is %d",area);

    volume=6*edge*edge*edge;
    printf("the volume is %d",volume);
    return 0;
}
