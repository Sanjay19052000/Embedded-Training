#include <stdio.h>

int main ()
{
	char string[100];
	char temp;
	int i, j;


  printf("\n Enter the string : ");
	scanf("%s",string);
	int n = strlen(string);

	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (string[i] > string[j]) {
					temp = string[i];
					string[i] = string[j];
					string[j] = temp;
			}
		}
	}

	printf("The sorted string is : %s", string);
	return 0;
}
