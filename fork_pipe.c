#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main()
{
	int parent[2],child[2],n;
	char ch[20];
	
	pipe(parent);
	pipe(child);

	int i = fork();

	if (i == 0)
	{
		read(parent[0],ch,5);		// output of parent input
				
		int res = write(child[1],"Tiwari",6);	// Input at child side
		printf("Res %d\n", res);
		
		printf("Hello Child Process (output:- %s)",ch);
	}
	else
	{
	write(parent[1],"Payal",5);	// Input at parent side
	
	read(child[0],ch,6);		// Output of child side
	
	printf("Hello Parent Process %s\n",ch);
	}
}

