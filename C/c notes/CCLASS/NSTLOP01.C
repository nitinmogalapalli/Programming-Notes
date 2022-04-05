/* Program to print the following structure

   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
   1 2 3 4 5
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
		for( j = 1; j <= 5; j++ )
		{
			textcolor(YELLOW);
			cprintf("%2d", j);
		}
		printf("\n");
	}

	getch();
}