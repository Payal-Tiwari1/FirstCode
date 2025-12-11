#include<stdio.h>

int main()
{
	int i;
	int arr[5] = {10,20,30,40,50};
	int arr1[5];
	float arr2[5];
	char arr3[10];

	// integer input hardcoded
	
	/*for(int i = 0; i < 5; i++)
	{ 
		printf("%d element is: %d\n",i+1,arr[i]);
	}

	//integer input from user
	
	for(i = 0; i < 5; i++)
	{
		printf("enter the %d elements in array: \n",i+1);
		scanf("%d",&arr1[i]);
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d element is: %d\n",i+1,arr1[i]);
	}

	// Float input
	


	for(i = 0; i < 5; i++)
	{
		printf("enter the %d float elements in array: \n",i+1);
		scanf("%f",&arr2[i]);
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d element is: %.2f\n",i+1,arr2[i]);
	}

	// charactor input


	for(i = 0; i < 10; i++)
	{
		printf("enter the %d charactor: \n",i+1);
		scanf(" %c",&arr3[i]);
	}

	for(i = 0; i < 10; i++)
	{
		printf("%d charctor is:%c\n",i+1,arr3[i]);
	}*/


	
	//integer input 
        int array[]= {1,2,3,4,5,6};	
	
	for(i = 0; i < sizeof(array)/sizeof(int); i++)
	{
		printf("%d element is: %d\n",i+1,array[i]);
	}

	// Float input


	return 0;
}
