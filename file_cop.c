#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	FILE  *fp, *fp1;
	fp = fopen (argv[1],"r");
	fp1 = fopen (argv[2],"w");

	if(argc != 3)
	{
		printf("Syntax error\nout_file_name <Source_file.c> <destination_file.c>");
		return 1;
	}

	else if(fp == NULL)
	{
		printf("Source file does not exist....");
		return 1;
	}
	else
	{
         	
	char ch = getc(fp);
	
	while(ch != EOF)
	{
	putc(ch,fp1);

	ch = getc(fp);
	
	}
	
	
	fclose(fp);
	fclose(fp1);
	}
	return 0;

}




