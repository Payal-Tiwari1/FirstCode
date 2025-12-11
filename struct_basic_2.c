#include<stdio.h>
#include<string.h>

struct name
{
	char f_name[20];
	char l_name[20];
	char full_name[40];
}n[2];



int main()
{
	int i,j,k;
	for(i = 0; i < 2; i++)
	{
	printf("enter first name:");
	scanf("%s",n[i].f_name);
	printf("enter last name:");
	scanf("%s",n[i].l_name);
	}

	for(i = 0; i < 2; i++)
	{
		strcat(n[i].full_name,n[i].f_name);
		strcat(n[i].full_name,n[i].l_name);
	}

	for(i = 0; i < 2; i++)
	{
		printf("Full Name: %s\n",n[i].full_name);
	}


	return 0;
}
