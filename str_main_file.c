#include<stdio.h>
#include"all_str_function.c"

int main()
{
	// length of string...
	
	char s1[50];
	int len;
	printf("enter your string:\n");
	scanf("%s",s1);
	len = str_len(s1);
	printf("Length of string is: %d\n",len);

	/*// print lower case to upper case
	char up[20];
	char low[20];
	printf("enter the string in lower case\n");
	scanf("%s",low);
	low_to_up(low,up);
	printf("In upper case: %s",up);

	// print upper to lower
	char up[20];
	char low[20];
	printf("enter the string in upper case\n");
	scanf("%s",up);
	up_to_low(up,low);
	printf("In lower case: %s",low);

	// string comparesion
	char s1[20];
	char s2[20];
	printf("enter your string:\n");
	scanf("%s",s1);
	printf("emter your second string:\n");
	scanf("%s",s2);
	str_cmp(s1,s2);
	
	// Concatination of two string
	char s1[20];
	char s2[20];
	char s3[40];
	printf("enter the first string:\n");
	scanf("%s",s1);
	printf("enter the second string:\n");
	scanf("%s",s2);
	str_cat(s1,s2,s3);
	printf("%s",s3);


	// copy the string...
	char s1[20];
	char s2[20];
	printf("enter the string:\n");
	scanf("%s",s1);
	str_cpy(s1,s2);
	printf("Copied string is:%s\n",s2);

	// find the substring from the main string
	
	char s1[100];
	char s2[20];
	
	printf("enter your main string\n");
	scanf("%s",s1);
	printf("enter your sub string\n");
	scanf("%s",s2);
	str_find(s1,s2);*/
	
	//swap();

	return 0;
}
