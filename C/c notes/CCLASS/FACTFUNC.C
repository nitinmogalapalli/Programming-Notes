/* program to write a fucntion to find factorial of the given number */

#include<stdio.h>
#include<conio.h>

long fact(long f);

void main()
{
	long fac, num;
	clrscr();

	/* Reading a value to find factorial of it */
	printf("Enter a number to find factorial: ");
	scanf("%ld", &num);

	/* calling a fact function which perform factorial for the
	given number and returns */
	fac = fact( num );

	/* printing the result */
	printf("The Factorial of the given number is: %ld", fac);
	getch();
}

long fact(long f)
{
	long result = 1;
	for(; f >= 1 ; f--)
		result = result * f;
	return result;
}
