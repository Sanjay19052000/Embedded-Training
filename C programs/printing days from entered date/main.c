#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date,month,date1=0,date2=0,date3=0,date4=0;
    printf("enter the month\n");
    scanf("%d",&month);
    printf("enter the date\n");
    scanf("%d",&date);

    if (month %2 ==0)
    {
        date1=month/2;
    }
    if (month %2 !=0)
    {
        date3=month/2;
    }
    if (month > 2)
    {
        date2=date-2;
    }
    if (month <= 2)
    {
        date4=date;
    }
    date=(month*30)-30+date1+date2+date3+date4;

    printf("Days passed is %d",date);

}

/*THE OUTPUT IS ACHIEVED

enter the month
2
enter the date
5
Days passed is 36


enter the month
9
enter the date
5
Days passed is 247

*/
