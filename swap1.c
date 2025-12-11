// swaping using two variable and without argument.

#include<stdio.h>

void swap()
{
	int a, b;
	printf("Enter a = ");
	scanf("%d",&a);
	printf("Enter b = ");
	scanf("%d",&b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Now a = %d\nb = %d\n",a,b);
	return	;
}

int main()
{
	swap();
	return 0;
}
