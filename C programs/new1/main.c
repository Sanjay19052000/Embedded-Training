#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,j,temp,k,nex,temp2;
    int arr[60];
    int arr1[50],arr2[50],arr3[50],arr4[50];

    // temp=(rand()%100);
    // printf("%d",temp);

    for(i=0; i<50; i++)
    {
        arr[i]=(rand()%100);
       // arr1[i]=-1;
    }
    printf("RANDOM NUMBERS GENERATED ARE\n");
    for (i=0;i<50;i++)
    {
        printf("%d  ",arr[i] );
    }
    printf("\n");

    for (i=0;i<50;i++)
    {
        temp=1;
        for (j=i+1;j<50;j++)
        {
            if (arr[i]==arr[j])
            {
                temp++;
                arr1[j]=0;

            }
        }
        if (arr1[i]!=0)
        {
            arr1[i]=temp;

        }

    }
  //  printf("frequency is %d\n");
  for (i=0;i<50;i++)
  {
      for (j=0;j<50;j++)
      {
          if (arr1[i]<arr1[j])
          {
              temp2=arr1[i];
              arr1[i]=arr1[j];
              arr1[j]=temp;
          }
      }
  }

    for(i=0;i<50;i++)
    {
        if(arr1[i] !=0)
        {
            printf("%d occured  %d times  \n",arr[i],arr1[i]);
        }
    }


}

