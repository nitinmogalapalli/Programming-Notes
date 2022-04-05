/*
Amstrong Numbers:
	A number is said to be Amstrong number when sum of cubes of its
individual digits is equal to that number.

	253 = cube(2) + cube(5) + cube(3);

	253/10  =  25, 253%10  =  3
	25/10   =  2,  25%10   =  5
	2/10    =  0,  2%10    =  2

	153 = cube(1) + cube(5) + cube(3);
	it is an amstrong number
*/

/* Program to find a given number is amstrong or not */

#include<stdio.h>
#include<conio.h>

main()
{
	int num, rem, sum=0, actual, i;
	clrscr();

	/* Reading the Number to check for Amstrong */
	printf("Enter a number : ");
	scanf("%d",&num);

	/* Finding the sum of cubes of individual digits of the given number */
	actual = num;
	while (num != 0)
	{
		rem = num%10;
		sum = sum + (rem * rem * rem) ;
		num = num/10;
	}

	/* Checking the number for Amstrong */
	if( actual == sum )
	{
		textcolor(GREEN);
		cprintf("The Number %d is a Amstrong Number...",sum);
	}
	else
	{
		textcolor(RED);
		cprintf("It is NOT An Amstrong number...");
	}

	getch();
}
