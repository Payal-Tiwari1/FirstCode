#include <stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE  *fp,*fp1;
	fp = fopen (argv[1],"r");
	fp1 = fopen (argv[2],"r");
	int ch;
	while((ch = getc(fp)) != EOF)
	{
		putchar(ch);
	}
	while((ch = getc(fp1)) != EOF)
	{
		putchar(ch);
	}

	fclose(fp);
	fclose(fp1);


}




