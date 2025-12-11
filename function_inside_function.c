#include<stdio.h>

void E();
void D();
void C();
void B();
void A();
void FUNCTION()
{
	A();
	return;
}

void A()
{
	//printf("I am from FUNCTION 1\n");
	B();
	return;
}

void B()
{
	//printf("I am from FUNCTION 2\n");
	C();
	return;
}



void C()
{
	//printf("I am from FUNCTION 3\n");
	D();
	return;
}


void D()
{
	//printf("I am from FUNCTION 4\n");
	E();
	return;
}



void E()
{
	//printf("I am from FUNCTION 5\n");
	
	return;
}



int main()
{
	FUNCTION();
	return 0;
}
