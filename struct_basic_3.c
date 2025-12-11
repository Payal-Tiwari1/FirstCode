#include<stdio.h>

struct mul
{
	int a[5];
	int b[5];
	int c[5];
}m;


int main()
{
	for(int i = 0; i < 5; i++)
	{
		printf("a = ");
		scanf("%d",&m.a[i]);
	}
	for(int j = 0; j < 5; j++)
	{
		printf("b = ");
		scanf("%d",&m.b[j]);
	}
	for(int k = 0;k < 5; k++)
	{
		m.c[k] = m.a[k] * m.b[k];
		printf("c%d = %d\n",k,m.c[k]);
	}
	return 0;
}
