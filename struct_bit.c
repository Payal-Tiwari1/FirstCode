#include<stdio.h>
struct bio
{
	int age:3;
	int wt:3;
	int ht:3;
}sb;

int main()
{
	int n;
	n = sizeof(sb);
	printf("%d",n);

}
