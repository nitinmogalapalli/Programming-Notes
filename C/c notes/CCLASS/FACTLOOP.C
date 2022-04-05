/* Program to find the factorial of a given number */

#include<stdio.h>
#include<conio.h>

void main()
{
	long num, fact = 1, i;
	clrscr();

	/* Reading the number to find its factorial */
	printf("Enter a Number to find factorial of it: ");
	scanf("%ld", &num);

	/* Finding factorial */
	for( i=1; i <= num; i++ )
		fact = fact * i;

	/* Printing the Factorial of given number */
	printf("The Factorial of %ld is : %ld", num, fact);

	getch();

}
