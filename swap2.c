// Swaping with argument no return
#include<stdio.h>

void swap(int x, int y)
{
	x = x + y;
	y = x - y;
	x = x - y;
	printf("Now a = %d and b  = %d\n",x,y);
	return;
}

int main()
{
	int a, b;
	printf("enter the value of a = ");
	scanf("%d",&a);
	printf("enter the value of b = ");
	scanf("%d",&b);
	swap(a,b);
	return 0;
}
