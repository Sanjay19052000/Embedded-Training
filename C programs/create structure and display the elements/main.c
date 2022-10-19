#include <stdio.h>

struct students{
char name[20];
int roll_number;

};

int main()
{
   struct students s1={"raj",22} ;
   struct students s2={"vishnu",23};

   printf("%s %d",s1.name,s1.roll_number);
}
