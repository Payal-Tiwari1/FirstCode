#include <stdio.h>
#include<stdlib.h>
int main(int argc,char *f_name[])
{
	FILE  *fp;
	fp = fopen (f_name[1], f_name[2]);
	char ch;
	while(ch != EOF)
	{
	ch = getc(fp);
	printf("%c", ch);
	}
	fclose(fp);


}




