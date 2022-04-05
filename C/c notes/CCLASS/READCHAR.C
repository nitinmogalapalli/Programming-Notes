/* program to read a character from the screen,
	and print on to the screen */
#include<stdio.h>
#include<conio.h>
main()
{
	char cvar;

	clrscr();
	printf("Enter a character: ");
	scanf("%c", &cvar);

	printf("%c The character you entered is: ", cvar);

}