#include <stdio.h>
 int main()
 {
     int old_day,new_day,diff_day,old_month,new_month,diff_month,old_year,new_year,diff_year;
     char name[20];

     printf("enter the date of birth ");
     scanf("%d %d %d",&old_day,&old_month,&old_year);

     printf("enter todays date");
     scanf("%d %d %d",&new_day,&new_month,&new_year);

     if (new_year>old_year)
     {
     diff_year=(new_year-old_year);
     }
     else if (new_year<old_year)
     {
         diff_year=(new_year-old_year)*-1;
     }
     if (new_month>=old_month)
     {
         diff_month=(new_month-old_month);
     }
     else if (new_month<old_month)
     {
         --diff_year;
         diff_month=(12)+(new_month-old_month);
     }
     if (new_day>=old_day)
     {
         diff_day=(new_day-old_day);
     }
     else if (new_day<old_day)
     {
         --diff_month;
         diff_day=(30)+(new_day-old_day);
     }

     printf("%d-%d-%d",diff_day,diff_month,diff_year);


 }
