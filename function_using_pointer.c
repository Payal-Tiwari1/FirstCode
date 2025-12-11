// all finction by using pointer...
#include<stdio.h>
#include<stdlib.h>




// to find length of a variable....
		
int str_len(char *s1)

{
	
        int i = 0;
	while(*s1 != '\0')
	{
		s1++;
		i++;
	}
	
       return i;
}


// to convert upper case to lower case(ABC --> abc).


char* up_to_low(char *up,char *low)
{
	int i;
	
	for(i = 0; *up != '\0'; i++)
	{
		*low = *up + 32;		//for converting upper case to lower case
		low++;
		up++;
	
	}
	*low = 0;				//for puting last charector 0 in string which terminate the string.
	return low;
	
}





char* low_to_up(char *low,char *up)
{
	int i;

	for (i = 0; *low != '\0'; i++)
	{
		*up = *low - 32; 		// for converting the lower case char. to upper case char.
		low++;
		up++;
	
	}
	*up= 0;				// for putting null char at the end of string to terminate the string.
	
	return up;
}


// string comperison ....


int str_cmp(char *s1,char *s2)

{

	while(*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 && *s2 && *s1 != *s2)
		{
			return 0;
		}
		s1++;
		s2++;


	}

	return 1;
	
}


//String Concatination....

char* str_cat(char *s1,char *s2,char *s3)

{
	int i,j;

	for(i = 0; *s1 != '\0'; i++)
	{
		*s3 = *s1;
		s3++;
		s1++;
	}
	*s3 = '\0';
	
	
	for(j = 0; *s2 != '\0'; j++)
	{
		*s3 = *s2;
		i++;
		s3++;
		s2++;
	}

	*s3 = '\0';

	return s3;
}


// String Copy.......


char* str_cpy(char *s1, char *s2)

{
	int i;

	for(i = 0; *s1 != '\0'; i++)
	{
		*s2 = *s1;
		s2++;
		s1++;
	}
	*s2 = 0;
	return s2;
}


// To find Substring in String.....


int str_find(char *s1,char *s2)
{
	char *p1;//main
	char *p2;
	
	while(*s1)
	{
		p1 = s1;
		p2 = s2;

		while(*p1 && *p2 && *p1==*p2)
		{
			p1++;
			p2++;
		}
		if(*p2 == '\0')
		{
			return 1;
		}
		s1++;
	}
	
		
        return 0;	
}



// Swap two number without using 3rd variable.....


void swap(int *a, int *b)
{
	
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}



int main()
{
	char s1[20];
	char s2[20];
	
	//find substring..	
	/*printf("enter your main string: \n");
	scanf("%s",s1);
	printf("enter your sub string string: \n");
	scanf("%s",s2);
	int i = str_find(s1,s2);
	if (i ==  0)
		{
			printf("Not found....");
		}
	else
	{
		printf("found...");
	}*/


	//Compa...
	printf("enter your string:");
	scanf("%s",s1);
	printf("enter your next string:");
	scanf("%s",s2);
	int i = str_cmp(s1,s2);
	if(i == 0)
		printf("Not match");
	else
		printf("match");


	/*int i,j;
	printf("enter the value of i:\n");
	scanf("%d",&i);
	printf("enter the value of j:\n");
	scanf("%d",&j);
	swap(&i,&j);
	printf("Now, i = %d\n",i);
	printf("and j = %d\n",j);*/
	return 0;


}
