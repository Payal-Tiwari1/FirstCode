#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	int fd,rec;
	char ch[10];
	

	fd = open("new_pipe",O_WRONLY);
	if(fd == -1)
	{
		perror("open");
		return 1;
	}

	write(fd,"Hello",5);
	
	close(fd);
	return 0;
	
}
