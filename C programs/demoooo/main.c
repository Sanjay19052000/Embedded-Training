#include <stdio.h>
int main()
{
extern int a;
static char j ='E';
printf("%c, %d",++j,++a);
return 0;
}
