#include <stdio.h>
#define PAYAL
#define PI 3.14
int main()
{
#ifdef PAYAL
	printf("Hello");
#endif
	printf("%i", (int)PI);

	int k=90;
}
