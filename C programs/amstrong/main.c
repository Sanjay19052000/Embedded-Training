#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a=1,number,duplicate,duplicate1,timer=0,rem,st,d,sum=0,i;

    printf("enter the number\n");
    scanf("%d",&number);

    duplicate=number;
    duplicate1=number;
    while(duplicate>0)
    {
        duplicate=duplicate/10;
        timer++;

    }
    d=timer;
//int d=printf("%d",timer);
while(number!=0){
rem=number%10;
  for(i=0;i<d;i++)
  {
     a=a*rem;
  }
  sum=sum+a;
  a=1;
  number=number/10;
}
  printf("%d",sum);
if(duplicate1==sum)
{
    printf("armstrong num");
}
}
