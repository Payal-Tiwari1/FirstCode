// to find the sub string in main string
#include<stdio.h>
int main()
{
	char s1[20];
	char s2[20];
	char s3[20];
	int i,j,k = 0;
	int flag = 0;


	printf("Enter your Main String:\n");
	scanf("%s",s1);

	printf("Enter your Sub String:\n");
	scanf("%s",s2);

	for (i = 0; s2[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			
			if(s2[i] == s1[j])
			{
				s3[k] = s2[i];
				k++;
				break;
				
			}
			else
			{
				;
			}
			
		}
	
	}
	s3[k] = 0;
	
	for(i = 0; s2[i] != '\0'; i++)
	{
		if(s2[i] != s3[i])
		{
			
			flag = 1;
			printf("Sub string %s is NOT present..!\n\n",s2);
			break;
		}
	
	}
	if(flag == 0)
	{
	printf("'YES'Sub string %s is PRESENT..\n\n",s3);
	}
	
	return 0;
}
