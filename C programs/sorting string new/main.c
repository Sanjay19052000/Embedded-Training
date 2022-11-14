#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n=1,m=0;
    char temp;
   char str1[30];
   char str2[10];
   char str3[10];
    printf("enter the string\n");
    scanf("%[^\n]",str1);
    str2[0]=str1[0];
    for (i=0;i<30;i++)
    {
        if (str1[i]==' ')
        {
            str2[n]=str1[i+1];
            n++;
        }
    }

    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
          if (str2[i]<str2[j])
          {
              temp=str2[j];
              str2[j]=str2[i];
              str2[i]=temp;
          }
        }
    }

    for (i=0;i<10;i++)
    {
        printf("%c",str2[i]);
    }

//   for (i=0;i<30;i++)
//   {
//       if (str1[i]==str2[i])
//       {
//           printf("%s",str1);
//       }
//   }
}
