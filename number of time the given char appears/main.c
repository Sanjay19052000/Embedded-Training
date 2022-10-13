#include <stdio.h>
#include <string.h>

int main()
{
    char s[100],r[100];
    int i,count=0,n;

    printf("Enter  the string");

    for (i=0;i<n-1;i++)
    {

        scanf("%c",s[i]);

    }
    strcpy(r,s);

    for(i=0;s[i];i++)
    {
    	if(s[i]==r[i])
    	{
          count++;
		}
 	}

	printf("character '%c' occurs %d times \n ",r[i],count);



    return 0;
}
