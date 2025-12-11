#include<stdio.h>
#include"pattern_function_file2.c"


int main()
{

        float SIZE;
        int n,num;
        printf("1. Right Angle Triangle\n2.Euilateral Triangle\n3.Opposite Of Equilateral Triangle: ");
        scanf("%d",&n);

        printf("enter the size:- ");
        scanf("%f",&SIZE);
        pattern(SIZE,n);
        printf("1. Area of Triangle\n2.Exit: ");
        scanf("%d",&num);
        area(SIZE,num);
        return 0;
}

