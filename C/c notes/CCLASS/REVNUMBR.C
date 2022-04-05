/* program to find the reverse of a given number */

#include<stdio.h>
#include<conio.h>

void main()
{
	long digit, rev = 0, num, temp;
	clrscr();

	/* Enter a number for which we need to find the reverse of it */

	printf("Enter a number to find its reverse(max 8 digits): ");
	scanf("%8ld", &num);

	temp = num;

	/* finding the reverse of the given number */
	while( num != 0 )
	{
		digit = num % 10;
		rev = (rev*10) + digit ;
		num = num / 10;
	}

	/* printing the result */
	printf("The Reverse of the given num %ld is: %ld", temp, rev);
	getch();
}

