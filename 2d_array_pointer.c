#include<stdio.h>
#include<string.h>
int main()
{
	char a[20][20] = {"APPLE", "MANGO", "ORANGE"};
	char fruit[20][20];
	
	char (*p)[20] = a;
	char (*ptr)[20] = fruit;

	for(int i = 0; i < 3; i++)
		strcpy(ptr[i],p[i]);
	
	for(int i = 0; i < 3; i++)
		printf("%s\n",ptr[i]);
	printf("%s",a[0]);

/*	printf("\nMy name is %s", argv[0]);
	printf("\nFirst agu is  %s", argv[1]);
	printf("\nSecodn  nam eis %s", argv[2]);
	printf("\nThisoio eis %s", argv[3]);
	printf("\nNumber of argu  %i", kuchchbhi);*/

	return 0;
}
