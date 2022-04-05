/* program to find the sum of numbers in the given range */

#include<stdio.h>
#include<conio.h>

void main()
{
	int rfrom, rto, sum = 0, i;
	clrscr();

	/* Reading range from and to values */
	printf("Enter the range (from,to): ");
	scanf("%d%d", &rfrom, &rto );

	/* Checking the rfrom and rto values */
	if( rfrom > rto )
	{
		textcolor(RED);
		cprintf("You Entered INVALID Range...!");
	}
	else
	{
		for( i = rfrom; i <= rto ; i++ )
		{
			sum += i;
		}

	}

	/* Writing the summation on to the standard output */
	printf("\nThe sum of values in the given range: %d", sum);

	getch();
}