#include<stdio.h>
int main()
{
	int p,r,n;
	float i;
	printf("enter the amount,rate of int,year: \n");
	scanf("%d%d%d",&p,&r,&n);
	i=(p*r*n)/100.0;
	printf("%f",i);
	return 0;
}
