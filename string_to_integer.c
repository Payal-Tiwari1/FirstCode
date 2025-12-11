// String to integer

#include<stdio.h>i
/*int main()
{
	char num[] = "123";
	int new_num = 0;
	int j = 1;
	int n1,n2,n3;
	n1 = num[0] - '0';
	
	n2 = num[1] - '0';
	
	n3 = num[2] - '0';

	new_num = n1*100 +n2*10+n3*1;
	printf("%d",new_num);
	
	return 0;
}*/


int main()
{
	char num[50];
	int new_num = 0,i,j,k,l = 1;
	int number = 0;
	printf("enter the string\n");
	scanf("%s",num);
	for(i = 0; num[i] != 0; i++)
	{
		;
	}
	printf("%d",i);
	for(j = 0; j < i ; j++)
	{
		new_num = num[j] - '0';
		for(k = 1; k <= i-1; k++)
		{
			l = l *10;
		}

		
		number = number + new_num*l;
		l--;
	}

	printf("%d",number);
	return 0;
}
