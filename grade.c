#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,total_marks,percentage;
	printf("enter the markes of English: \n");
	scanf("%f",&s1);
	printf("enter the markes of Hindi: \n");
        scanf("%f",&s2);
	printf("enter the markes of Maths: \n");
        scanf("%f",&s3);
	printf("enter the markes of Science: \n");
        scanf("%f",&s4);
	printf("enter the markes of Computer: \n");
        scanf("%f",&s5);
	total_marks = s1+s2+s3+s4+s5;
	printf("Your total markes is: %.2f\n",total_marks);
	percentage = (total_marks/500)*100;
	printf("Obtain percentage is: %.2f\n",percentage);
	
	if(percentage > 90)
	{
		printf("grade A\n");
	}
	else if(percentage > 80)
	{
		printf("grade B\n");
	}
	else if(percentage > 70)
	{
		printf("grade C\n");
	}
	else
	{
		printf("Best of luck for next time....\n");
	}

	return 0;
}
