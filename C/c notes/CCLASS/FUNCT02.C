/* program to declare, define, and use a User defined function */

#include<stdio.h>
#include<conio.h>

void square(int s);
int cube(int c);

void main(void)
{
	int a;
	clrscr();

	/* Reading a value to find square of that number */
	printf("\nEnter a number to Find square: ");
	scanf("%d", &a);

	square(a);

	/* Reading a value to find cube of that number */
	printf("\nEnter a number to find the Cube: ");
	scanf("%d", &a);

	/* printing the cube as result */
	printf("Cube of the given no: %d ", cube(a));  /* fuction call return a value */
	getch();
}

void square(int s)
{
	printf("The Square is: %d", s*s);
}

int cube(int c)
{
	return (c*c*c);
}