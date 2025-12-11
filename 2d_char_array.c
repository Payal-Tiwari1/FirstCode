#include<stdio.h>

int main()
{
	int i;
	char array[4]={'a','b','c','d'};
	printf("%c\n", *(&array[0]+3));
	
	printf("enter the value");
	scanf("%d",&i);
	printf("\n%d", *(&i));
	
	char array1[5][5]={{"payal"},{"abcde"}};
	printf("%c", array1[1][3]);


}
