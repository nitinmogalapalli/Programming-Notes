/* program to find whether the given number is strong number of not */

#include<stdio.h>
#include<conio.h>

void main()
{
	int num, rem, i, fact, sum, check;
	clrscr();

	/* Reading a number */
	printf("Enter a Number for Strong number : ");
	scanf("%d", &num);

	/* Finding the sum of the factorials of the individual Digits */
	sum = 0;
	check = num;
	while( num > 0 )
	{
		rem = num%10 ;
		fact = 1;
		for( i=1; i <= rem; i++)
		{
			fact = fact * i;
		}
		sum = sum + fact;
		num = num/10;
	}
	if( sum == check )
	{
		printf("%5d is a STRONG NUMBER....\n",check);
	}
	else
	{
		printf("%5d is NOT a STRONG NUMBER...!!!\n", check);
	}
	getch();
}