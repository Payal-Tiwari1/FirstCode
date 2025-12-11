#include<stdio.h>
int main()
{
	int i;
	char ch;
	float f;
	i = sizeof(i);
	ch = sizeof(ch);
	f = sizeof(f);
       printf("size of integer:%d\n",i);
       printf("size of charactor: %d\n",ch);
       printf("size of float: %f\n",f);
       return 0;
}
