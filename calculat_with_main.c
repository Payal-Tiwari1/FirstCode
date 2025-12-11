#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc , char *argv[])
{
        int res;
	printf("f_agr: %s\n",argv[1]);
	printf("s_arg: %s\n",argv[2]);
	printf("t_arg: %s\n",argv[3]);
	if (argc != 4){

		printf("Invalid arguments");
		printf("\nSuntax is sum <operand> <operator> <operand>");
		exit(10);
	}

	switch(argv[2][0])
	{

		case '+':
			res = atoi(argv[1]) + atoi(argv[3]);
			break;
		case '-':
			res = atoi(argv[1]) - atoi(argv[3]);
			break;
		case '*':
			res = atoi(argv[1]) * atoi(argv[3]);
			break;
		case '/':
			res = atoi(argv[1]) / atoi(argv[3]);
			break;
			
	}

	printf("%d\n", res);
	printf("Copyright @payal");

}
