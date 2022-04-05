/* Program to print FIBONACCI Series

   0 1 1 2 3 5 8 13 21 .. . . . . . .
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b, fib, range;
	clrscr();

	/* Reading range to which fibonacci series printed */
	printf("Enter range for FIBONACCI Series : ");
	scanf("%4d", &range);

	/* Printing Fibonacci Series */

	a = 0;
	b = 1;
	fib = 0;
	while ( fib <= range )
	{
		if( fib == 0 )
		{
			printf("%3d", fib);
			fib = a + b;
		}
		else if( fib == 1 )
		{
			printf("%3d", fib);
			fib = a + b;
			a = b;
			b = fib;
		}
		else
		{
			printf("%3d", fib);
			fib = a + b;
			a = b;
			b = fib;

		}
	}

	getch();
}
