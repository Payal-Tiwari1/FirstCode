#include<stdio.h>

struct emp
{
	int a,b,c;
}e[5];



int main()
{
	for(int i = 0; i < 5; i++)
	{
		printf("a = \n");
		scanf("%d",&e[i].a);
		printf("b = \n");
		scanf("%d",&e[i].b);
		printf("c = \n");
		scanf("%d",&e[i].c);
	}
	
	return 0;
}
