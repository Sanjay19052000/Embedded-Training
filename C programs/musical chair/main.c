#include<stdio.h>
#include<math.h>

struct {
char name[10];
int roll_number;
}student;

int main()
{
   struct student={{"san",1},{"man",2},{"nik",3},{"amr",4},{"ash",5},{"chand",6},{"mahi",7},{"abhi",8,{"vinay",9},{"hemanth",10 }};
  // struct student.roll_number[10]={1,2,3,4,5,6,7,8,9,10};
    int temp,random,i;

    for (i=0;i<10;i++)
    {
        temp=student.roll_number[i];
        srand(time(NULL));
        random=rand()%10;
        student.roll_number=arr[random];
        arr[random]=temp;
    }

    for (i=0;i<9;i++)
    {
        arr[i]=0;
    }
    for (i=0;i<10;i++)
    {
        if (arr[i]>0)
        {
            printf("%d is the winner\n",student.name);
        }
    }

}
/* OUTPUT IS GENERATED

9 is the winner
7 is the winner

*/
