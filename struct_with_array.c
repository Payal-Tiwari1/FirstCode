#include<stdio.h>

struct emp
{
	int i;
	char name[20];
	char surname[20];
	char city[10];
	int pincode;
};

int main()
{
	int j,i;
	printf("Enter the no. of Employee: ");
	scanf("%d",&j);
	struct emp s[j];
	
	for(i = 0; i < j; i++ )
	{
	printf("Enter %d Emp. Name: ",i+1);
	scanf("%s",s[i].name);
	printf("Enter %d Emp. Surname: ",i+1);
	scanf("%s",s[i].surname);
	printf("Enter %d Emp. City Name: ",i+1);
	scanf("%s",s[i].city);
	printf("Enter %d Emp. Pincode:",i+1);
	scanf("%d",&s[i].pincode);
	}


	for(i = 0; i < j; i++)
	{
	printf("%d Emp Name: %s\n",i+1,s[i].name);
	printf("%d Emp Surname: %s\n",i+1,s[i].surname);
	printf("%d Emp City:%s\n",i+1,s[i].city);
	printf("%d Pincode: %d\n",i+1,s[i].pincode);
	printf("\n");
	}

	return 0;

}
