#include<stdio.h>
int main()
{
	char ch;
	int i;
	printf("enter the char\n");
	scanf("%c",&ch);
	ch = ch - 48;
 	printf("integer no is: %d\n",ch);
	
	
	printf("enter the number\n");
	scanf("%d",&i);
	i = i + 48;
	printf("charactor is: %c\n",i);
	return 0;
}
