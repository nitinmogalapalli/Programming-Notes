/* program to find Whether the given number is perfect number or not */

#include<stdio.h>
#include<conio.h>

void main()
{
	int i, num, sum = 0, range;
	clrscr();

	/* Reading the number */
	printf("Enter a Number for perfect no: ");
	scanf("%d", &num);

	/* Finding the sum of the factors */
	for( i=1; i <= (num/2); i++)
	{
		if( num%i == 0 )
			sum = sum + i;
	}

	/* Checking for Perfect number */
	if( num == sum )
		printf("%5d --> It is a PERFECT NUMBER...\n", num);
	}
	else
		printf("%5d --> It is NOT a PERFECT NUMBER...!!!", num);
	getch();
}