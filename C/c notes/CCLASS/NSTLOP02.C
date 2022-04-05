/* Program to print the following structure

 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1

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
		for( j = 5; j >= 1; j-- )
		{
			textcolor(YELLOW);
			cprintf("%2d", j);
		}
		printf("\n");
	}

	getch();
}