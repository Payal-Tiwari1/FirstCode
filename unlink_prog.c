#include<stdio.h>
#include<unistd.h>

int main()
{
	int i;
	char ch[20];

	printf("Enter the file name: ");
	scanf("%s",ch);
	i = unlink(ch);
	if(i == 0)
	{
		printf("File is removed...\n");
	}
	else
	{
		printf("Somethink wrong..\n");
	}
	return 0;
}
