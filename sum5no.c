#include<stdio.h>
int main()
{
	int num = 12345,a,b,c,d,e,f,sum;
	a = num%10;
	num = num/10;
	b = num%10;
	num = num/10;
	c = num%10;
	num = num/10;
	d = num%10;
	num = num/10;
	e = num%10;
	num = num/10;
	sum = a+b+c+d+e;
	printf("Sum = %d\n",sum);
	return 0;
}

