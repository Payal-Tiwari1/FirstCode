#include <stdio.h>
#include "all_str_function.c"
int main()
{
	char str[]="TAntransh";
	char dest[10];
	str_cpy(str, dest);
	printf("%s", dest);
}
