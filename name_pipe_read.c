#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
        int fd,n;
        char ch[10];
        fd = open("new_pipe",O_RDONLY);
	if(fd == -1)
	{
		perror("open");
		return 1;
	}

        n = read(fd,ch,sizeof(ch)-1);
	ch[n] = '\0';
	printf("%d",n);
	printf("%s",ch);

        close(fd);
        return 0;

}
