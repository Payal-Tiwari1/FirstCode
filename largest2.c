#include<stdio.h>
int main()
{
	int a, b, c;
	printf("enter a = \n");
	scanf("%d",&a);
	printf("enter b = \n");
        scanf("%d",&b);
	printf("enter c = \n");
        scanf("%d",&c);
	(a > b) ? ((a > c)?printf("a is greater\n"):printf("c is greater\n")):(b > c)?printf("b is greater\n"):printf("c is greater\n");
	return 0;
}
