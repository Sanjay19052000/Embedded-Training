#include <stdio.h>
int main()
{
    char ch1,ch2;

    printf("enter the character \n");
    scanf("%c",&ch1);


    if ((ch1=='a') || (ch1=='A') || (ch1=='e')||(ch1=='E')||(ch1=='i')||(ch1=='I')||(ch1=='o')||(ch1=='O')||(ch1=='u')||(ch1=='U'))
    {
        printf("the character is vowel" );
    }
    else if (ch1 == ' ')
    {
        printf("the character is whitespace");
    }
    else
    {
        printf("the character is  consonant");
    }
    return 0;

}
