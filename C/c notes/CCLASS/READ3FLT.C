/* Program to Read 3 Floating Values */

#include<stdio.h>
#include<conio.h>

void main()
{
	float f1, f2, f3;
	clrscr();

	printf("Enter three Floating point values:\n");
	scanf("%f%f%f", &f1, &f2, &f3);

	printf("You entered:\n");
	printf(" %.3f\n %.3f\n %.3f", f1, f2, f3);

	getch();
}