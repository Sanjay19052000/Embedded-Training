#include <stdio.h>
#include <stdlib.h>

int main()
{
   float fare,min,km,fare1,fare2,fare3;

   printf("Enter the distance travelled\n");
   scanf("%f",&km);

   printf("Enter the time travelled\n");
   scanf("%f",&min);

   if (km<=2)
   {
       fare1=30;
   }
   else
   {
       fare2=(km*12);
   }
   if ((min>=0) && (min<20))
   {
       fare3=min*0.5;
   }
    if (min>20)
   {
       fare3=10;
   }
   fare=fare1+fare2+fare3;
   printf("The fare is Rs. %.2f",fare);
}
