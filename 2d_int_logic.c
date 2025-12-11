#include<stdio.h>
int main()
{
	int i,j;
	int arr1[2][2] = {{1,2},{3,4}};
	int arr2[2][2] = {{1,2},{3,4}};
	int arr3[2][2];

/*	for(int i = 1; i <= 2; i++)
	{
		for(int j = 1; j <= 2; j++)
		{
			if(i != j) continue;
			printf("%d\t%d\t",i,j);
		}
		printf("\n");
	}*/

	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			arr3[j][i] = arr2[i][j];
		}
	}
	printf("\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%d\t",arr3[i][j]);
		}
	printf("\n");
	}

}
