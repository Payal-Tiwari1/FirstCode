#include<stdio.h>

void swap_by_value(int i, int j)
{

	i = i + j;
	j = i - j;
	i = i - j;

	printf("After swaping\nvalue of i = %d\n",i);
	printf("value of j = %d\n",j);
	//printf("address of i = %d\n",&i);
	//printf("address if j = %d\n",&j);

	return;
}


void swap_by_pointer(int *i,int *j)
{
	

	*i = *i + *j;
	*j = *i - *j;
	*i = *i - *j;

	printf("After swaping\nvalue of i = %d\n",*i);
	printf("value of j = %d\n",*j);

	return;

}


int main()
{
	int i,j;
        printf("enter the value of i:");
	scanf("%d",&i);
	printf("enter the value of j:");
	scanf("%d",&j);
	
	swap_by_value(i, j);
	printf("After swaping\nvalue of i = %d\n",i);
	printf("value of j = %d\n",j);

	swap_by_pointer(&i, &j);
	printf("After swaping\nvalue of i = %d\n",i);
	printf("value of j = %d\n",j);

	return 0;

}
