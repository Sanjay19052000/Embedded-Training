#include <stdio.h>

int main()
{
  int arr[5],i,j,n,flag[5],counter;
  printf("enter the array\n");

  for (i=0;i<5;i++)
  {
      scanf("%d",&arr[i]);
      flag[i]=-1;
  }
  for(i=0;i<5;i++)
  {
      counter=1;
      for(j=i+1;j<5;j++)
      {
          if (arr[i]==arr[j])
          {
            counter=counter+counter++;
              flag[i]=0;
          }
      }
      if (flag[i]!=0)
      {
          flag[i]=counter;
      }
  }
  printf("frequency is\n");
  for (i=0;i<5;i++)
  {
      if (flag[i]!=0)
      {

          printf("%d\t%d\n",arr[i],flag[i]);
      }

  }
  return 0;

}
