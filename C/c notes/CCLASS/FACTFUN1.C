/* program to write a Function to return a factorial of a given number */

#include<stdio.h>
#include<conio.h>

long factorial(long n);

void main(void)
{

	long result, f;
	clrscr();

	/* Reading a value to find the factorial */
	printf("Enter a value to find the factorial: ");
	scanf("%ld", &f);

	/* Calling Factorial function to find the factorial of given no. */
	result = factorial(f);

	/* Printing the result */
	printf("The Factorial of the given number is: %ld", result);
	getch();
}

long factorial(long n)
{
	long fact = 1, i;

	/* Processing for finding the factorial */
	for( i=1; i <= n; i++)
		fact =  fact * i;
	/* Returning the factorial */
	return fact;
}