/* program to understand the relational operators */

#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 4, b = 6;
	clrscr();
	printf("Consider the Result as:\n1. for True\n0. for False\n");
	printf("%d is greater than %d , Result is: %d\n", a, b, a>b);
	printf("%d is Less than %d , Result is: %d\n", a, b, a<b);
	printf("%d is greater than or equal to %d , Result is: %d\n", a, b, a>=b);
	printf("%d is Less than or equal to %d , Result is: %d\n", a, b, a<=b);
	printf("%d is Equal to %d , Result is: %d\n", a, b, a==b);
	printf("%d is Not equal to %d , Result is: %d\n", a, b, a!=b);
	getch();
}