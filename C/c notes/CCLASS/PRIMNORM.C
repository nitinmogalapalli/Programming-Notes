/* Program to check whether the given number is prime or not */

#include<stdio.h>
#include<conio.h>

void main()
{
	int num, i, count;
	clrscr();

	/* Reading the number to check for Prime */
	printf("Enter The number to check for PRIME : ");
	scanf("%4d", &num);

	/* Finding count */

	count = 0;
	for( i = 1; i <= num; i++ )
	{
		if( (num % i) == 0 )
		{
			count++;
		}
	}

	/* Checking for Prime */
	if( count == 2 )
	{
		textcolor(GREEN);
		cprintf("It is a PRIME NUMBER...");
	}
	else
	{
		textcolor(RED);
		cprintf("It is NOT a PRIME NUMBER...!");
	}

	getch();
}