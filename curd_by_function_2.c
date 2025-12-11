#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int r = 0;
int i = 1;
int r1,r2;
int k,rec,value;
char str[50];
struct emp
{
	int id;
	char name[20];
	char dep[10];
	struct address{
		char address_line1[10];
		char address_line2[10];
		char city[10];
		int pincode;
	}add;
	float salary;
	int delete;

}s[5];




int create_record(struct emp  p)	// p is the variable.
{
	
	s[i] = p;			// record is created
	r++;				// Number of records increment by 1
	i++;				// Id no incremented by 1
	return 1;			// Record created
}




int display_record(int a) 
{
	if(s[a].delete == '\0')		// if record is not deleted
	{
		return a;
	}
	
	return -1;
}
		
		
struct emp view_record(int a)

{
     if(s[a].delete == '\0')         // if record is not deleted
        {
             return s[a];
        }
} 





void edit_record(int a, int b, char* str, float sal, int pin)
{
	if(s[a].delete == '\0')
	{
	switch(b)
	{
		case 1: strcpy(s[a].name, str);
			break;
		case 2: strcpy(s[a].dep, str);
			break;
		case 3: strcpy(s[a].add.city, str);
			break;
		case 4: s[a].add.pincode = pin;
			break;
		case 5: s[a].salary = sal;
			break;
		defalt: 
			break;
	}

	}
}


int delete_record(int a)
{
	if(s[a].delete == '\0')
	{
		s[a].delete = 1;
		r--;
	}
	return 1;
}


int undelete_record(int a)
{
	if(s[a].delete == 1)
	{
		s[a].delete = 0;
		r++;
	}
	return 1;
}





int main()
{
	while(1)
{
	printf("What do you want to do...\n\n");
	printf("Create Record   1:\n");
	printf("Display Record  2:\n");
	printf("View Record     3:\n");
	printf("Update Record   4:\n");
	printf("View by range   5:\n");
	printf("Delete Record   6:\n");
	printf("Undelete Record 7:\n");
	printf("Exit 8:\n");
	scanf("%d",&value);

switch(value)
{		
	
case 1: //Create Record....
	int rec;
	s[i].id = i;
	printf("Enter the name\n");
	scanf("%s",s[i].name);
	printf("Enter the department\n");
	scanf("%s",s[i].dep);
	printf("Enter the address line 1\n");
	scanf("%s",s[i].add.address_line1);
	printf("Enter the address line2\n");
	scanf("%s",s[i].add.address_line2);
	printf("Enter the city\n");
	scanf("%s",s[i].add.city);
	printf("Enter the pincode\n");
	scanf("%d",&s[i].add.pincode);
	printf("Enter the salary\n");
	scanf("%f",&s[i].salary);
	
	rec = create_record(s[i]);
	if(rec == 1)
	{
		printf("\nRecord created...\n");
	}
	else
	{
		printf("Error...\n");
	}

	break;

case 2: // Display Record....

	k = display_record(1);

	while(k <= r)
	{
		printf("Id:%d\t",s[k].id);
		printf("Name:%s\t",s[k].name);
		printf("Depart:%s\t",s[k].dep);
		printf("City:%s\t",s[k].add.city);
		printf("Pincode:%d\t",s[k].add.pincode);
		printf("Salary:%.2f\t",s[k].salary);
		
		k = display_record(k+1);
		printf("\n");
	}

	break;

case 3: // View record....

	printf("Which Record you want to View:");
	scanf("%d",&r1);

	struct emp e = view_record(r1);

	printf("Id:%d\t",e.id);
	printf("Name:%s\t",e.name);
	printf("Depart:%s\t",e.dep);
	printf("City:%s\t",e.add.city);
	printf("Pincode:%d\t",e.add.pincode);
	printf("Salary:%.2f\t",e.salary);

	break;
	

case 4: // Update record...

	int pin;
	float sal;
	
	printf("Which record you want to update:");
	scanf("%d",&r1);

	printf("Which Field :\n");
	printf("Name       1:\n");
	printf("Department 2:\n");
	printf("City       3:\n");
	printf("Pincode    4:\n");
	printf("Salary     5:\n");
	printf("for Exit   6:\n");
	scanf("%d",&value);

switch(value)
{
	case 1: printf("Enter the new Name:");
		scanf("%s",str);
		
		edit_record(r1, value, str, sal, pin);
		
		break;

	case 2: printf("Enter new department:");
	        scanf("%s",str);
	       
	        edit_record(r1, value, str, sal, pin);
	       
	        break;

	case 3: printf("Enter new city name:");
		scanf("%s",str);
	       
	       	edit_record(r1, value, str, sal, pin);
		
		break;
		
	case 4: printf("Enter new pincode:");
		scanf("%d",&pin);
	       	
		edit_record(r1, value, str, sal, pin);
		break;

	case 5: printf("Enter new salary:");
		scanf("%f",&sal);
		
		edit_record(r1, value, str, sal, pin);
		break;

	case 6:
		break;
}
break;


		
		
case 5: // View by range...
			
	printf("Here %d record is present..\n\n",r);
			
	printf("enter start recode no.:");
	scanf("%d",&r1);

	printf("enter end record no.:");
	scanf("%d",&r2);
			
	k = display_record(r1);
	for(i = r1; i <= r2; i++)
	{
			
	printf("Id:%d\t",s[k].id);
	printf("Name:%s\t",s[k].name);
	printf("Dep:%s\t",s[k].dep);
	printf("Salary:%.2f\t",s[k].salary);
	
	k = display_record(i);
	printf("\n");
	}
	break;

		
case 6: // delete record...
			
	printf("Which record you want to delete:\n");
	scanf("%d",&k);
			
	rec = delete_record(k);
			
	if(rec == 1)
	{
		printf("Record no %d has been deleted\n",rec);
	}
	break;
		
		
case 7: // undelete record...
			
	printf("Which record you want to undelete:\n");
	scanf("%d",&k);
			
	rec = undelete_record(k);
			
	if(rec == 1)
	{
		printf("Record no %d has been retrive\n",rec);
	}
	break;


case 8:
	exit(8);
	break;
		
	
default: 
	printf("Invalid input.....\n");
	break;
}
}
	return 0;
}



	
