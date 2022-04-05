/* Program to print the following structure

 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j;
	clrscr();

	/* Printing the Structure */
	for( i = 1; i <= 5; i++ )
	{
		for( j = 1; j <= i; j++ )
		{
			textcolor(YELLOW);
			cprintf("%2d", j);
		}
		printf("\n");
	}

	getch();
}