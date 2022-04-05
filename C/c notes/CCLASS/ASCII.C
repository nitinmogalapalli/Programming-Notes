/* program to find the ASCII Values for different characters */

#include<stdio.h>
#include<conio.h>

main()
{
	unsigned char ch;
	clrscr();
	for(ch=0;ch<127;ch++)
		printf("%c :%-3d\t",ch,ch);
	printf("\nEnter a character to move to the next characters...");
	getch();
	clrscr();
	for(;ch<255;ch++)
		printf("%c :%-3d\t",ch,ch);
	getch();
}