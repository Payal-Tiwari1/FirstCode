// to convert lower case to upper case(abc --> ABC).

#include<stdio.h>

int main()
{
	char low[10];
	char up[10];
	int i;

	printf("enter the lower case string\n");
	scanf("%s",low);
	
	for (i = 0; low[i] != '\0'; i++)
	{
		up[i] = low[i] - 32; 		// for converting the lower case char. to upper case char.
		
	}
	up[i] = 0;				// for putting null char at the end of string to terminate the string.
	printf("Upper case %s",up);

	return 0;
}
