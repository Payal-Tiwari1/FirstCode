//WAP to display the student record using structure.

#include<stdio.h>
#include<string.h>

struct Student{

	int roll;
	float marks;
	char name[20];

};

int main()
{
	struct Student s1;

	s1.roll = 10;
	s1.marks = 85.5;
	strcpy(s1.name,"Payal");

	printf("Roll No. = %d\n",s1.roll);
	printf("Name = %s\n",s1.name);
	printf("Marks = %f\n",s1.marks);
	
	return 0;
}
