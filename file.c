#include <stdio.h>
int main()
{
	FILE  *fp;
	fp = fopen ("sum.c", "r");
	char ch;
	while(ch != EOF)
	{
	ch = getc(fp);
	printf("%c", ch);
	}
	fclose(fp);


}
