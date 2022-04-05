/* program to check whether the given number is pallindrome or not */

#include<stdio.h>
#include<conio.h>

void main()
{
	long i, rev = 0, num, check;
	clrscr();

	/* enter a number for which we need to find the sum of digits */
	printf("Enter a number to check it is pallindrome or not: ");
	scanf("%ld", &num);

	check = num;

	/* finding the reverse of the given number */
	while( num != 0 )
	{
		i = num % 10;
		rev = rev*10 + i;
		num = num / 10;
	}

	/* checking the number for pallindrome */
	if( rev == check )
	{
		textcolor(GREEN);
		cprintf("\rIt is a PALLINDROME...");
	}
	else
	{
		textcolor(RED);
		cprintf("\rIt is NOT A PALLINDROME...");
	}
	getch();
}