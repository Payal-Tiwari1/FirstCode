#include<stdio.h>

int main()
{
	int i;
	char name[20];
	char surname[20];
	char city[10];
	int pincode[6];

	printf("Enter your Name: ");
	scanf("%s",name);
	printf("Enter your Surname: ");
	scanf("%s",surname);
	printf("Enter your City Name: ");
	scanf("%s",city);
	printf("Enter your Pincode:");
	scanf("%ls",pincode);

	printf("Name: %s\n",name);
	printf("Surname: %s\n",surname);
	printf("City:%s\n",city);
	printf("Pincode: %ls\n",pincode);


	i = sizeof(name);
	printf("Size of Name Array is:%d\n",i);

	i = sizeof(surname);
	printf("Size of Surname Array is: %d\n",i);

	i = sizeof(city);
	printf("Size of City Array is: %d\n",i);

	i = sizeof(pincode);
	printf("Size of PinCode Array is: %d\n",i);

	return 0;

}
