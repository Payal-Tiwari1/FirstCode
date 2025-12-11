// to convert upper case to lower case(ABC --> abc).

#include<stdio.h>

int up_to_low(char up[],char low[])
{
	int i;
	
	for(i = 0; up[i] != '\0'; i++)
	{
		low[i] = up[i] + 32;		//for converting upper case to lower case
	}
	low[i] = 0;				//for puting last charector 0 in string which terminate the string.
	return low;
	
}



