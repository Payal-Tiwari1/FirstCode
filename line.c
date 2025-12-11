#include<stdio.h>
#define SIZE 5
#define HORI_LINE
#define VER_LINE
#define VER_RIGHT_INCL_LINE
#define RIGHT_INCL_LINE
#define LEFT_INCL_LINE
#define RIGHT_ANGEL_TRI
#define OPP_RIGHT_ANGEL_TRI
#define EQUI_TRI
int main()
{
	int i, j, k;
#ifdef HORI_LINE

	for(int i = 0; i < SIZE; i++)
	{
	
		printf("*");
	}
#endif

#ifdef VER_LINE

	for(int i = 0; i < SIZE; i++)
	{
		printf("\n*");
	}
#endif

#ifdef RIGHT_INCL_LINE
	
	for(int i = 0; i < SIZE ; i++)
	{
		
		for(int j = 0; j < i ; j++)
		{
			printf(" ");
		}
		printf("*\n");
		
	}

#endif
#ifdef LEFT_INCL_LINE
	
	
	for(int i = 0; i < SIZE; i++)
	{
		
		for(int j = SIZE; j > i ; j--)
		{
			printf(" ");
		}
		printf("*\n");
	}
#endif

#ifdef RIGHT_ANGEL_TRI

	for(int i = 0;i < SIZE; i++)
	{

		for(int j = 0; j <= i; j++)
		{
			printf("*");

		}
		printf("\n");
		
		
	}
#endif
		
#ifdef OPP_RIGHT_ANGEL_TRI
	
	
	for(int i = SIZE; i > 0; i--)
        {
		printf("\n");

                for(int j = 0; j < i ; j++)
                {
                        printf("*");

                }
	
	
	}
	

	
#endif
#ifdef MIRR_OF_TRI
	for(int i = 0; i < SIZE; i++)
	{
		
		for(int j = 0; j < SIZE-i; j++)
		{
			printf(" ");
			
		}

		
		for(int k = 0; k <= i; k++)
		{
			printf("*");
		}

		printf("\n");

		
	}
#endif

	for(int i = 0; i < SIZE; i++)	
	{
		for(j = 0; j < SIZE -i; j++)
		{
			printf(" ");
		}
		printf("*");
		
		for(int k = 0;k < i; k++)
		{
			printf("**");
		}

		printf("\n");
	}


return 0;

}
