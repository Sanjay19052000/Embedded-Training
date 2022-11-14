#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50],temp;
    int i,j,l;
    printf("enter the string");
    scanf("%s",&str);
   // ;
   l=strlen(str);
  // printf("%d",l);
   for (i=0;i<l;i++)
   {
       for (j=0;j<l;j++)
       {
           if (str[i]<str[j])
           {
               temp=str[i];
               str[i]=str[j];
               str[j]=temp;
           }

       }

   }

 printf("%s",str);
}

/*THE CHARACTERS ARE SORTED IN ASSCENDING ORDER
AND THE EXPECTED OUTPUT IS ACHIEVED
INPUT STRING="UNITED";
OUTPUT STRING="DEINTU";
*/
