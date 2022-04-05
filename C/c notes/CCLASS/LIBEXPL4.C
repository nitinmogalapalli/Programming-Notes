/* Program to use some functions from the math.h header file */
/* Program will calculates ceil, floor, pow, sqrt */

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	double val, x, y, result;
	clrscr();

	/* set a text colour */
	textcolor(MAGENTA);

	/* Reading a Double value to ceil its value */
	cprintf("Enter a Double value to round up: ");
	scanf("%lf", &val);

	result = ceil(val);

	/* Printing the Value */
	cprintf("\rThe value rounded up is: %lf", result);

	textcolor(YELLOW);
	/* Reading a Double value to floor it */
	cprintf("\r\nEnter a Double Value to round down: ");
	scanf("%lf", &val);

	result = floor(val);

        /* Printing the Value */
	cprintf("\rThe value rounded down is: %lf", result);

	textcolor(DARKGRAY);
	/* Reading two values x and y to find x to the power of y */
	cprintf("\r\nEnter x and y values to find x to the power of y: ");
	scanf("%lf%lf", &x, &y);

	result = pow(x,y);

        /* Printing the Value */
	cprintf("\rThe value of x to y is: %lf", result);


	textcolor(WHITE);
	/* Reading a value to find square root of the given value */
	cprintf("\r\nEnter a value to find square root of it: ");
	scanf("%lf", &val);

	result = sqrt(val);

        /* Printing the Value */
	cprintf("\rThe square root of %lf is: %lf", val, result);

	getch();
}