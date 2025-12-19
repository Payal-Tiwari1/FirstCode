#include<stdio.h>
#include<unistd.h>
#include <sys/stat.h>
int main()
{
	int i;
	i = mknod("new_pipe", S_IFIFO | 0666, 0);

	if(i == 0)
	{
		printf("Named pipe is created\n");
	}
	else
	{
		printf("Error in pipe creation...\n");
	}
	return 0;
}
