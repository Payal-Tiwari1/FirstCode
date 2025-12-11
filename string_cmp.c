#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s1[10];
	char s2[10];
	int i,res=0;

	printf("enter 1st string\n");
	scanf("%s",s1);

	printf("enter 2nd string\n");
	scanf("%s",s2);

	for(i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			res = 1;
			printf("String is NOT match\n");
			break;
		}


	}
	if(res == 0)
	{
		printf("String is same.....!");
	}
	return 0;
	
}
