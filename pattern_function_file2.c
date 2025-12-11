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


	


void right_angle(int SIZE)
{
	int i, j, k;

	// Right Ang. tri.
	
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
	return;
}
		



void equilateral(int SIZE)
{
	int i,j,k;


	// Equilateral Tri.
	
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
	return;
}



void opp_equilateral(int SIZE)
{
	int i,j,k;
		
	//Opp_Equi Tri
	
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
		return;
	}
	



void pattern(int SIZE,int n)	
{
	switch(n)
	{
		case(1):
			right_angle(SIZE);
			break;

		case(2):
			equilateral(SIZE);
			break;
		case(3):
			opp_equilateral(SIZE);
			break;
			


	}
}	
		




