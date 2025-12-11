#include<stdio.h>
#include<stdlib.h>
int r = 0;
int i = 0;
struct emp
{
	int id;
	char name[20];
	char dep[10];
	struct address
	{
		char address_line1[10];
		char address_line2[10];
		char city[10];
		int pincode;
	}add;
	float salary;
	int delete;

}s[5];


void create_record();
void read_record();
void edit_record();
void view_record();
void delete_record();



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
			
			edit_record();
			break;

		case 4:
			view_record();
			break;

		case 5:
			delete_record();
			break;

		case 6:
			exit(6);
			break;
		

		default: 
			printf("Invalid input.....\n");
			break;
	}
	
}



void create_record(int id, char[] string, )
{
	
	r++;
	i++;
	s[i].id = id;
	
	printf("enter the name of emp: \n");
	scanf("%s",s[i].name);
	printf("enter the department: \n");
	scanf("%s",s[i].dep);
	printf("enter the salary of emp.: \n");
	scanf("%f",&s[i].salary);
	printf("enter address line 1: \n");
	scanf("%s",s[i].add.address_line1);
	printf("enter address line 2: \n");
	scanf("%s",s[i].add.address_line2);
	printf("enter city name: \n");
	scanf("%s",s[i].add.city);
	printf("enter Pincode: \n");
	scanf("%d",&s[i].add.pincode);
	printf("Record Sucessefuly entered....\n");
	printf("\n");
        		
}



void read_record()
{
	if( r > 0)
	{
	for (int j = 1; j <= i; j++)
	{
		if(s[i].delete == 1)
		{
			printf("Someone delete this record..\n\n");
			
		}
		else
		{
			printf("Id of emp: %d\n",s[i].id);
			printf("Name of emp: %s\n",s[i].name);
			printf("Department of emp: %s\n",s[i].dep);
			printf("Salary of emp: %.2f\n",s[i].salary);
			printf("Address: %s\n",s[i].add.address_line1);
			printf("Address: %s\n",s[i].add.address_line2);
			printf("City: %s\n",s[i].add.city);
			printf("Pincode: %d\n",s[i].add.pincode);

			printf("\n");
		}
	}
		printf("Number of Records Present %d\n\n",r);
	}
	else
	{
		printf("No record found....\n\n");
	}
	
	

}


void view_record()
{
	if(r > 0)
	{
		int i;
		printf("Which record you want to view:\n");
		scanf("%d",&i);
		if(s[i].id == i)
		{
			if(s[i].delete == 1)
			{
				printf("Someone delete this record...!\n");
			}
			else
			{
				printf("Id: %d\n",s[i].id);
				printf("Name: %s\n",s[i].name);
				printf("Department: %s\n",s[i].dep);
				printf("Salary: %.2f\n",s[i].salary);
				printf("Address line 1: %s\n",s[i].add.address_line1);
				printf("Address line 2: %s\n",s[i].add.address_line2);
				printf("City: %s\n",s[i].add.city);
				printf("Pincode: %d\n",s[i].add.pincode);
				printf("\n");
			}
		}
		else
		{
			printf("Id is not in Database...!\n");
		}
	}
	else
	{
		printf("Record not found...!");
	}
}



void edit_record()
{
	int value,i;
	if (r > 0)
	{
		printf("Which record you want to edit: \n");
		scanf("%d",&i);
		
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
			scanf("%s",s[i].add.city);
			break;

		case 5:
			printf("enter new value: ");
			scanf("%d",&s[i].add.pincode);
			break;

		case 6:
			break;


	}
	}
	else
	{
		printf("Record not found...!\n\n");
	}


}

void delete_record()
{
	char ch;
	if(r > 0)
	{
		int i;
		printf("Which record you want to delete: \n");
		scanf("%d",&i);
		if(s[i].id == i)
		{
		printf("Do you want to delete Id No.%d\n",i);
		printf("y/n: ");
		scanf(" %c",&ch);
			if(ch == 'y'||ch == 'Y')
			{
				s[i].delete = 1;
				printf("Record has deleted...!\n\n");
				r--;
				
			}
			else if(ch =='n'||ch =='N')
			{
				printf("Thank You...!");
			}
		}
		else
		{
			printf("Id No. %d is not present here\n",i);
		}
	}
	
	else
	{
		printf("No records in Database....!\n\n");
	}
		
}




int main()
{
	char ch;
	printf("Do you want to open menu y/n: \n");
	scanf(" %c",&ch);
	if(ch == 'y'||ch == 'Y')
	{
	while(1)
	{
		menu();
	}
	}
	else if (ch == 'n'|| ch == 'N')
	{
		printf("Thank You...!");
	}
	else
	{ 
		printf("Please Enter Valid Input....");
	}

	return 0;


}
