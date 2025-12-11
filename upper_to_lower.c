// to convert upper case to lower case(ABC --> abc).

#include<stdio.h>
int main()
{
	char up[10];
	char low[10];
	int i;
	
	printf("enter the upper case string:");
	scanf("%s",up);			//for taking input from user


	for(i = 0; up[i] != '\0'; i++)
	{
		low[i] = up[i] + 32;		//for converting upper case to lower case
	}
	low[i] = 0;				//for puting last charector 0 in string which terminate the string.
	printf("lower case: %s",low);

	return 0;
	
}
