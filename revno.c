#include<stdio.h>
int main()
{
	int r1,r2,r3,d1,d2,d3,n1=0,n2,n3,n0=123;
	r1 = n0%10;
	d1 = n0/10;
	//n1 = n1*10+r1;
	r2 = d1%10;
        d2 = d1/10;
        //n2 = n1*10+r2;
	r3 = d2%10;
        d3 = d2/10;
        //n3 = n2*10+r3;
	n = r1 * 1 + r2 * 10 + r3 *100;
	//printf("%d",n3);
	printf("%d",n);
	return 0;
}
