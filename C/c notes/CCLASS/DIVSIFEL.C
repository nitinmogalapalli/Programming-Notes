/* Program to find whther given number is divisible by a number or not */

#include<stdio.h>
#include<conio.h>

void main()
{
	int num, div;
	clrscr();

	/* Reading a number to check for divisibility */
	printf("Enter a number: ");
	scanf("%d", &num);

	/* Reading a number which divides the number you entered to check */
	printf("Enter number to check for divisibility of no. you entered: ");
	scanf("%d", &div);

	if( (num % div) == 0 )
	{
		textcolor(GREEN);
		cprintf("%d is divisible by %d...", num, div);
	}
	else
	{
		textcolor(RED);
		cprintf("%d is NOT divisible by %d...", num, div);
	}
	getch();

}