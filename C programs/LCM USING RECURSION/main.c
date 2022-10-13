#include <stdio.h>
int lcm_fun (int i, int j)
{
    int lcm,k,m,counter;
    for (counter=1; counter<=i; counter++)

    {
        k=counter*i;

        if (k%j==0)
        {
            printf("%d",k);
        }


    }
    m=i*j;
    printf("%d",m);



}
int main()
{
    int i,j,result;
    printf("enter 2 values");
    scanf("%d %d",&i,&j);
    result=lcm_fun(i,j);
    return 0;
}
