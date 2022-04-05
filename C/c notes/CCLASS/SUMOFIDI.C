/* program to find the Sum of Inidividual digits of a given number */

#include<stdio.h>
#include<conio.h>

void main()
{
	long rem, sum = 0, num, temp;
	clrscr();

	/* enter a number for which we need to find the sum of digits */

	printf("Enter a number to find sum of its digits(max 6 digits) : ");
	scanf("%6ld", &num);

	temp = num;

	/* finding the sum of the individual digits of the given number */

	while( num != 0 )
	{
		rem = num % 10;
		sum = sum + rem; /* sum += rem; */
		num = num / 10;
	}

	/* printing the result */
	printf("The sum of the individual digits of the num %ld is: %ld", temp, sum);
	getch();
}

