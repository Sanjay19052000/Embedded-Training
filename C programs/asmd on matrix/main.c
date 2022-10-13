#include <stdio.h>

int main()
{
    int arr1[5],arr2[5],arr3[5],i,j,n,sum=0,sub=0,mul=1,div=1,c;
    printf("enter the 1st array\n");
    for(i=1; i<=5; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("press 1 for addition \n 2 for subtraction\n 3 for multiplication\n 4 for division\n");
    scanf("%d",&c);
    switch (c)
    {

    case 1:
        for (i=1; i<=5; i++)
        {
            sum=sum+arr1[i];
        }
        printf("%d",sum);
        break;

    case 2:
        for (i=1; i<=5; i++)
        {
            sub=sub-arr1[i];
        }
        printf("%d",sub);
        break;

    case 3:
        for (i=1; i<=5; i++)
        {
            mul=mul*arr1[i];
        }
        printf("%d",mul);
        break;

    case 4:
        for (i=1; i<=5; i++)
        {
            div=div/arr1[i];
        }
        printf("%d",div);
        break;
    }
}
