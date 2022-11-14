#include <stdio.h>
#include <stdlib.h>

struct car{
char model_name[20];
int price;
}str[4];

int main()
{
    int budget1,budget2,i,arr[i],n=4;
   struct car str[]={{"nano",100000},{"maruthi",400000},{"audi",1000000},{"BMW",1500000}};

   printf("enter the starting budget");
   scanf("%d",&budget1);

   printf("enter the end budget");
   scanf("%d",&budget2);

    for (i=str[0].price;i<=str[4].price;i++)
    {
       // printf("%d",i);
        if ((budget1<=i) && (budget2>=i))
        {
            arr[i]=str[i].price;
        }

    }
    for (i=0;i<=arr[i];i++)
    {
       // printf("%d\n",arr[i]);
   printf("%s %d",str[i].model_name,str[i].price);
    }
}
