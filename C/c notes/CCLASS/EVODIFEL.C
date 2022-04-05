/* program to find whether the given number is Even or Odd */

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	clrscr();

	/* Reading a number to check for even or odd */
	printf("Enter a number to check for even or odd: ");
	scanf("%d", &num);

	textcolor(YELLOW);
	/* checking for Even or Odd */
	if( (num % 2) == 0 )
	{
		cprintf("It is EVEN Number...");
	}
	else
	{
		cprintf("It is ODD Number...");
	}
	getch();

}
