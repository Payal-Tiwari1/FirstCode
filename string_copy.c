#include<stdio.h>
int main()
{
	char s1[10];
	char s2[10];
	int i;

	printf("enter the string\n");
	scanf("%s",s1);

	for(i = 0; s1[i] != '\0'; i++)
	{
		s2[i] = s1[i];
	}
	s2[i] = 0;
	printf("Copied string %s",s2);
	return 0;
}
