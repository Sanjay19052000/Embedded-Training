#include <stdio.h>

int main()
{
    int i=0, count;
    int x =i++;
    int y=++i;
    printf("%d %d\n", x,y);
    for (count =0;count<3;count++)
    {
        x=i++;
        y=++i;
        printf("%d %d\n", x,y);

    }
     return 0;
}
