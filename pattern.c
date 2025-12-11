// Pattern using for-loop
#include<stdio.h>
#define SIZE 10

int main()
{
	int i,j,k;

	// Right Angle Triangle 
	for(i = 0; i < SIZE; i++)
	{
		printf("*");

		for(j = 0; j <= i; j++)
		{
			printf(" ");
			
		}
		
		printf("*");
		printf("\n");
		

	}
	
	for(i = 0; i < SIZE+2; i++)
	{
		printf("*");
	}

	
	// Line

	for(i = 0; i < SIZE; i++)
	{
		for(j = 0; j < i+1; j++)
		{
			printf(" ");
		}

		printf("*");
		printf("\n");
	}


	for(i = 0; i < SIZE; i++)
	{
		for(j = 0; j < SIZE -i; j++)
		{
			printf(" ");
		}
		printf("*\n");

	}


	for(i = 0; i < SIZE; i++)
	{
		printf("*");

		for(j = 0; j < i+1; j++)
		{
			printf(" ");
		}
		printf("*\n");
		

	
	}
	for(i = 0; i < SIZE; i++)
	{
		printf("*");
	}

	// Equilateral Triangle


	for(i = 0; i < SIZE ; i++)
	{
		
		for(j = 0; j < SIZE-i; j++)
		{
			printf(" ");
		}
		printf("*");

		for(k = 0; k < i*2 ; k++)
		{
			printf(" ");
		}
		printf("*\n");

	
	}

	for(i = 0; i < SIZE*2; i++)
	{
		printf("*");
	}
	printf("\n");

	// Opposite of Equilateral Triangle
	
	for(i = 0; i < SIZE*2; i++)
	{
		printf("*");
		
	}
	for(i = 0; i < SIZE; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf(" ");
		}
		printf("*");
		
		for(k = SIZE*2; k > i*2; k--)
		{
			printf(" ");
		}
		printf("*\n");


        }


return 0;

}		
		
		
		
	
	



	


