#include<stdio.h>
int main()
{
	int i,j,k,a,b,a1,a2;
	int arr1[4][4];
	int arr2[4][4];
	int arr3[4][4];
	printf("Enter No of rows: ");
	scanf("%d",&a);
	printf("Enter No of column: ");
	scanf("%d",&b);
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
			printf("enter the element of 1st array: ");
			scanf("%d",&arr1[i][j]);
		}
	
	}
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
			printf("enter the element of 2nd array: ");
			scanf("%d",&arr2[i][j]);
		}
		
	}
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)

		{
			arr3[i][j] = arr1[i][j]+arr2[i][j];
		}
	}
	printf("\n");
	printf("Sum of array is:-\n");
	
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Substration of array is:-\n");


	for(i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)

		{
			arr3[i][j] = arr1[i][j] - arr2[i][j];
		}
	}
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Multiplication of array is:-\n");

/*	arr3[0][0] = arr1[0][0]*arr2[0][0] + arr1[0][1]*arr2[1][0];
	arr3[0][1] = arr1[0][0]*arr2[0][1] + arr1[0][1]*arr2[1][1];
	arr3[1][0] = arr1[1][0]*arr2[0][0] + arr1[1][1]*arr2[1][0];
	arr3[1][1] = arr1[1][0]*arr2[0][1] + arr1[1][1]*arr2[1][1];*/
	
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
			arr3[i][j] = 0;
			for(k = 0; k < b; k++)
			{
				arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][j];
					
			}
			
		}
	}

	for(i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}


	return 0;

}
