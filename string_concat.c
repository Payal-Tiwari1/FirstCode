#include<stdio.h>
int main()
{
	char s1[10];
	char s2[10];
	char s3[20];
	int i,j;

	printf("enter the 1st string\n");
	scanf("%s",s1);

	printf("enter the 2nd string\n");
	scanf("%s",s2);

	for(i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}
	s3[i] = '\0';
	
	
	for(j = 0; s2[j] != '\0'; j++)
	{
		s3[i] = s2[j];
		i++;
	}

	s3[i] = 0;
	printf("%s",s3);

	return 0;
}
