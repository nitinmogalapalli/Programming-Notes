/* program to declare, defiene and use a function */

#include<stdio.h>
#include<conio.h>

void main(void)
{
	int n, result;
	clrscr();

	/* Reading a value to the variable */
	printf("Enter an integer value: ");
	scanf("%4d", &n);

	result = square(n);

	/* Printing the result on to the screen */
	printf("\nThe Square of the given number is: %d", result);

	result = cube(n);
	/* Printing the result on to the screen */
	printf("\nThe Cube of the given number is: %d", result);

	getch();

}

int square(int a)
{
	int s;
	s = a*a;
	return s;
}
int cube(int b)
{
	int s;
	s = square(b) * b;
	return s;
}