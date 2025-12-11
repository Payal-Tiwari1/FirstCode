// Patterns using while-loop
#include<stdio.h>
#define SIZE 10
#define LINE_HOR
#define LINE_VER
#define LINE_LEFT
#define LINE_RIG
#define RIGHT_ANG_TRI
#define OPP_RIGHT_TRI
#define EQU_TRI
#define OPP_EQU_TRI
#define SQUARE

int main()
{
	int i, j, k;

/*#ifdef LINE_HOR
	i = 0;
	while (i < SIZE)
	{
		printf("*");
		
		i++;
	}
	printf("\n");
#endif	

#ifdef LINE_VER
	i = 0;
	while(i < SIZE)
	{
		printf("*\n");

		i++;
	}
	printf("\n");
#endif

#ifdef LINE_LEFT
	i = 0;
	while(i < SIZE)
	{
	j = 0;
		while(j < i)
		{
			printf(" ");

			j++;
		}
	printf("*\n");
	
	i++;
	}
	printf("\n");
#endif
	
#ifdef LINE_RIG

	i = SIZE;
	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			printf(" ");

			j++;
		}
		printf("*\n");
		
		i--;
	}
	printf("\n");
#endif

#ifdef RIGHT_ANG_TRI

	i = 0;
	while(i < SIZE)
	{
		printf("*");
		j = 0;
		while(j < i)
		{
			printf(" ");
			j++;
		}
		printf("*\n");
		i++;
	}
	i = 0;
	while(i < SIZE)
	{
		printf("*");
		i++;
	}
	printf("\n");
#endif

#ifdef OPP_RIGHT_TRI

	i = SIZE;
	while(i > 0)
	{
		j = 0;
		while(j < i)
		{
			printf(" ");
			j++;
		}

		printf("*");
		k = 0;
		while (k < SIZE-i)
		{
			printf(" ");
			k++;
		}
		printf("*\n");
		i--;
	}

	i = 0;
	while(i < SIZE)
	{
		printf("*");
		i++;
	}
	printf("\n");
#endif

#ifdef OPP_EQU_TRI

	i = 0;
	while(i < SIZE*2)
	{
		printf("*");
		i++;
	}
	
	i = 0;
	while(i < SIZE)
	{
		j = SIZE;
		while(j > SIZE-i)
		{
			printf(" ");
			j--;

		}
			printf("*");

		k = 0;
		while(k < j*2)
		{
			printf(" ");
			k++;
		}
		printf("*\n");

		
		i++;
	}

#endif

#ifdef EQU_TRI

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while(j < SIZE-i)
		{
			printf(" ");
			j++;
		}
		printf("*");
		k = 0;
		while(k < i*2 )
		{
			printf(" ");
			k++;
		}
		printf("*\n");
		i++;
	}

	i = 0;
	while(i < SIZE*2)
	{
		printf("*");
		i++;
	}
	printf("\n");


#endif*/

#ifdef SQUARE

	i = 0;
	while(i < SIZE)
	{
		printf("*");
		i++;
	}
	i = 0;
	while(i < SIZE)
	{
		printf("*");
		j = 0;
		while(j < SIZE)
		{
			printf(" ");
			j++;
		}
		printf("*\n");
		i++;
	}
	
	
	i = 0;
	while(i < SIZE)
	{
		printf("*");
		i++;

	}

	printf("\n");

#endif


	return 0;
}
