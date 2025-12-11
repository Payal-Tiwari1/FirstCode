// patterns using functions WANR(with argument no return)
#include<stdio.h>
void area(int SIZE,int num)
{
	int area;
	switch(num)
	{
		case(1):
			area = 0.5*SIZE*SIZE;
			printf("Area of Triangle= %d\n",area);
			break;
		case(2):
			printf("Thank You....");
			break;
	}
	
}

void pattern(int SIZE,int n)
	
{
	int i, j, k;

	// Right Ang. tri.
	
	switch(n)
	{
		
		case(1):
	
		for(i = 0; i < SIZE; i++)
		{
			printf("*");
		
			for(j = 0; j < i; j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
		for(i = 0; i < SIZE; i++)
		{
			printf("*");
		}
		printf("\n");

		
		break;

	// Equilateral Tri.
	
		case(2):
		for(i = 0; i < SIZE; i++)
		{
			for(j = 0 ; j < SIZE-i; j++)
			{
				printf(" ");
			}
			printf("*");
		
			for(k = 0; k < i*2; k++)
			{
				printf(" ");
			}
			printf("*\n");
		}
	
		for(i = 0;i < SIZE*2; i++)
		{
			printf("*");
		}
		printf("\n");

		break;

	//Opp_Equi Tri
		case(3):
	
		for(i = 0; i< SIZE*2; i++)
		{
			printf("*");
		}
		for(i = 0; i < SIZE; i++)
		{
			for(j = SIZE; j > SIZE-i; j--)
			{
				printf(" ");
			}
			printf("*");
			for(k = 0; k < j*2; k++)
			{
				printf(" ");
			}
			printf("*\n");


		}
			break;
	}
	
		
		return;
}



