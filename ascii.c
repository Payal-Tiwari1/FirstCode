#include<stdio.h>
int main()
{
	char ch,CH;
	printf("enter the char\n");
	scanf("%c",&ch);
	CH = ch - 32;
	printf("Old Char.was = %c\nNew Char. is = %c\n ",ch,CH);
	printf("ascii of old char = %d\nascii of new char = %d\n",ch,CH);
	return 0;

}
