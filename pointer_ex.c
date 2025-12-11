//what is pointer.....#include <stdio.h>

#include<stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Pointer p stores: %p\n", p);
    printf("Value through pointer: %d\n", *p);

    return 0;
}



/*#include<stdio.h>

int main()
{
	int a = 10;
	int *p = &a;
	
	printf("value of a = %d\n",a);
	printf("value of p = %d\n",p);
	printf("value of pointer *p = %d\n",*p);

	return 0;
}*/
