#include<stdio.h>
#include <stdlib.h>
int main(int argc,char  *num[])
{
	
	printf("%s\t",num[1]);
	printf("%s",num[2]);
	
	printf("\nAddition:%d",atoi(num[1]) + atoi(num[2]));
	printf("\nSubstraction:%d",atoi(num[1]) - atoi(num[2]));
	printf("\nMultiplication:%d",atoi(num[1]) * atoi(num[2]));
	printf("\nDivision:%d",atoi(num[1]) / atoi(num[2]));

	return 0;

}
