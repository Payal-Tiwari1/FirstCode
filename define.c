#include<stdio.h>
#define CUR_CIR
#define ARA_CIR
#define PI 3.14

int main()
{
	float r,c,a;

#ifdef CUR_CIR
	printf("enter the radius of circle\n");
        scanf("%f",&r);
	c = 2 * PI * r;
	printf("Circumf. of circle = %f",c);
#endif

#ifdef ARA_CIR
	printf("enter the radius of circle\n");
        scanf("%f",&r);
	a = PI * r * r;
	printf("Area of circle = %f",a);
#endif
	return 0;
}
