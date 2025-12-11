#include<stdio.h>

int main()
{
	float a, b, c;
	char d;
	printf("enter the value of a =  \n");
	scanf("%f",&a);
	fflush(stdin);
	printf("What you want to do +, -, *, / \n");
	scanf("%c",&d);
	
	printf("enter the value of b =  \n");
	scanf("%f",&b);

	switch(d)
	{
		case ('+'):
			c = a + b;
			printf("a + b = %f",c);
			break;

		case ('-'):
			c = a - b;
			printf("a - b = %f",c);
			break;
		case ('*'):
			c = a * b;
			printf("a * b = %f",c);
			break;
		case ('/'):
			c = a / b;
			printf("a / b = %f",c);
			break;
		/*case ('%'):
			c = a - b;
			printf("a $(%) b = %f",c);
			break;*/
		default:
			printf("Invalid Input.....\n");
	

	
				
	}
	return 0;
}
