#include<stdio.h>

struct mul
{
	int a;
	int b;
	int c;
}m[5];


int main()
{
	for(int i = 0; i < 5; i++)
	{
		printf("a = ");
		scanf("%d",&m[i].a);
	}
	for(int j = 0; j < 5; j++)
	{
		printf("b = ");
		scanf("%d",&m[j].b);
	}
	for(int k = 0;k < 5; k++)
	{
		m[k].c = m[k].a * m[k].b;
		printf("c%d = %d\n",k,m[k].c);
	}
	return 0;
}
