#include<stdio.h>
#include<stdlib.h>
int r = 0;
struct emp
{
	int id;
	char name[20];
	char dep[10];
	char address_line1[10];
	char address_line2[10];
	char city[10];
	float salary;
	int pincode;
	int delete;

}s[5];


void create_record();
void read_record();
void edit_record(int i);
void view_record(int i);
void delete_record(int nr);



void menu()
{
	int i;
	printf("What Do You Want To Do?\n");
	printf("1. create\n");
	printf("2. read\n");
	printf("3. edit\n");
	printf("4. view\n");
	printf("5. delete\n");
	printf("6. Exit\n");

	scanf("%d",&i);
	
	switch(i)
	{
		int rn;
		case 1:
			create_record();
			break;
		
		case 2:
			
			read_record();
			break;

		case 3:
			
			printf("which record you want to edit\n");
			scanf("%d",&rn);
			edit_record(rn);
			break;

		case 4:
			printf("Enter the ID No.: ");
			scanf("%d",&rn);
			view_record(rn);
			break;

		case 5:
			printf("Which record you want to delete: ");
			scanf("%d",&rn);
			delete_record(rn);
			break;

		case 6:
			exit(6);
			break;
		

		default: 
			break;
	}
	
}



void create_record()
{
	
	r++;
	s[r].id = r;
	
	printf("enter the name of emp: \n");
	scanf("%s",s[r].name);
	printf("enter the department: \n");
	scanf("%s",s[r].dep);
	printf("enter the salary of emp.: \n");
	scanf("%f",&s[r].salary);
	printf("enter address line 1: \n");
	scanf("%s",s[r].address_line1);
	printf("enter address line 2: \n");
	scanf("%s",s[r].address_line2);
	printf("enter city name: \n");
	scanf("%s",s[r].city);
	printf("enter Pincode: \n");
	scanf("%d",&s[r].pincode);

	printf("Record Sucessefuly entered....\n");
	printf("\n");
        		
}

void read_record()
{
	for (int j = 1; j <= r; j++)
	{
		if(s[j].delete == 1)
		{
			printf("Record no %d is deleted\n",j);
			printf("\n");
		}
		else
		{
			printf("Id of emp: %d\n",s[j].id);
			printf("Name of emp: %s\n",s[j].name);
			printf("Department of emp: %s\n",s[j].dep);
			printf("Salary of emp: %.2f\n",s[j].salary);
			printf("Address line 1: %s\n",s[j].address_line1);
			printf("Address line 2: %s\n",s[j].address_line2);
			printf("City: %s\n",s[j].city);
			printf("Pincode: %d\n",s[j].pincode);
			printf("\n");
		}
	}
	

}


void view_record(int i)
{
	printf("Id: %d\n",s[i].id);
	printf("Name: %s\n",s[i].name);
	printf("Department: %s\n",s[i].dep);
	printf("Salary: %.2f\n",s[i].salary);
	printf("Address line 1: %s\n",s[i].address_line1);
	printf("Address line 2: %s\n",s[i].address_line2);
	printf("City: %s\n",s[i].city);
	printf("Pincode: %d\n",s[i].pincode);
	printf("\n");
}



void edit_record(int i)
{
	int value;
	
	printf("for Name 1:\n");
	printf("for Depat 2:\n");
	printf("for Salary 3:\n");
	printf("for City 4:\n");
	printf("for Pincode 5:\n");
	printf("for Exit 6:\n");
	scanf("%d",&value);

	switch(value)
	{
		case 1:
			printf("enter new value: ");
			scanf("%s",s[i].name);
			break;

		case 2:
			printf("enter new value: ");
			scanf("%s",s[i].dep);
			break;

		case 3:
			printf("enter new value: ");
			scanf("%f",&s[i].salary);
			break;
			
		case 4: 
			printf("enter new value: ");
			scanf("%s",s[i].city);
			break;

		case 5:
			printf("enter new value: ");
			scanf("%d",&s[i].pincode);
			break;

		case 6:
			break;


	}


}

void delete_record(int i)
{
	char ch;
	printf("Do you want to delete Id No.%d\n",i);
	printf("y/n: ");
	scanf(" %c",&ch);
	if(ch == 'y')
	{
	s[i].delete = 1;
	}
	else
	{
		menu();
	}
}




int main()
{
	char ch;
	printf("Do you want to open menu y/n: \n");
	scanf(" %c",&ch);
	while(ch == 'y')
	{
	menu();
	}
	return 0;


}
