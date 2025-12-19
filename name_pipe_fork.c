#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<string.h>
#include<fcntl.h>
int main()
{
	int i,fd,n,f;
	char ch[15];
	f = fork();
	if (f == 0)
	{
		fd = open("new_pipe",O_WRONLY);
		write(fd,"Payal Tiwari",12);
	}
	else
	{
		fd = open("new_pipe",O_RDONLY);
		n = read(fd,ch,sizeof(ch)-1);
		ch[n] = '\0';
		printf("%s",ch);
	}
	return 0;
}
