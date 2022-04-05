/* Program to check whether a given number is positive or not */

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	clrscr();

	/* Reading a number */
	printf("Enter a number to find whether it is +ve or not: ");
	scanf("%d", &num);

	if( num > 0 )
	{
		textcolor(GREEN);
		cprintf("It is a POSITIVE Number...");
	}
	else
	{
		textcolor(RED);
		cprintf("It is NOT a Positive Number ...!!!");
	}
	getch();

}