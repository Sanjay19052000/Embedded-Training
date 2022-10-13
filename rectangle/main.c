#include <stdio.h>
int main()
{
    int len,wed,per,area;
    printf("enter the length and width");
    scanf("%d %d",&len,&wed);

    per=2*len*wed;
    printf(" the peremeter is %d\n", per);

    area=wed*len;
    printf(" the area is %d", area);
    return 0;
}
