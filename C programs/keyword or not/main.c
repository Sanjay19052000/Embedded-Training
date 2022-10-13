#include<stdio.h>
#include<string.h>

int main(){

    char str[35][10] = {"auto","double","int","struct","break","else","long","switch","case","enum","register","typedef","char","extern","return","union","const","float","short","unsigned","continue","for","signed","void","default",
    "goto","sizeof","voltile","do","if","static","while"};

    char input[20];

    int flag = 0;
    scanf("%s",input);

    for(int i = 0; i<32;i++)
        {
        if(strcmp(input,str[i]) == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag==1)
    {
        printf("%s is a keyword",input);
    }
    else
    {
        printf("%s is not a keyword",input);
    }
    return 0;
}
