/* Program to read a character until we enter 'n' to stop Using do-while */

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();

	/* Read a character until you enter 'N' */
	do
	{
		printf("Enter a character( \'N\' to stop ): ");
		ch = getchar();
		if( ch != 'N' )
			printf("You entered: %c\n", ch);
		else
			printf("Loop Stoped...!!!");
		flushall();
	}while( ch != 'N' );

	getch();

}