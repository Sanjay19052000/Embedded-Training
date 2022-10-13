#include <stdio.h>
int main()
{
    int maths,science,english,kannada,histry,average,total,fail=0,pass=0,marks;
    printf("enter the marks of maths,science,english,kannada,histry\n");
    scanf("%d %d %d %d %d",&maths, &science, &english, &kannada, &histry);

    average=(maths+science+english+kannada+histry)/5;
    total = (maths+science+english+kannada+histry);


    if (maths<35)
    {
        fail++;
    }
    if (science<35)
    {
        fail++;
    }
    if (english<35)
    {
        fail++;
    }
    if (kannada<35)
    {
        fail++;
    }
    if (histry<35)
    {
        fail++;
    }
    if (fail>0)
    {
        printf("fail\n");
    }
    else if (average>90)
    {
        printf("distintion\n");
    }
    else if ((average>60) &&(average <90))
    {
        printf("first class\n");
    }
    else if ((average >35) && (average<60))
    {
        printf("second class\n");
    }
    pass=5-fail;
    printf("total passed subjects = %d\n",pass);
    printf("total failed subjects = %d\n",fail);

    return 0;

}
