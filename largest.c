#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter first no. a: \n");
	scanf("%d",&a);
	printf("enter the second no. b: \n");
	scanf("%d",&b);
	printf("enter the third no. c: \n");
	scanf("%d",&c);

	if(a > b)
	{
		if(a > c)
			{
				printf("a is greater than b and c\n");
			}
	/*	else
		{
			printf("c is greater than a and b\n");
		}*/

	}
	
	else if(b > c)	
	{
		printf("b is greater than a and c\n");
			
	}	
	
	else
	{
		
		printf("c is largest no.\n");
		
	}

	return 0;
}
