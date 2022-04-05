/* Program to use some functions from the ctype.h header file */
/* Program will convert the lower case letter to UPPER CASE letter */

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
	char ch;
	clrscr();

	/* set a text colour */
	textcolor(CYAN);

	/* Reading a character */
	cprintf("Enter a character: ");
	flushall();
	ch = getchar();

	/* Converting the character to UPPER CASE */
	ch = toupper(ch);

	/* set text background as blue */
	textcolor(YELLOW);

	/* Printing UPPER CASE character */
	cprintf("The Character you entred in UPPER CASE is: ");
	putchar(ch);

	getch();
}