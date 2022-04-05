/* program to find the given string is pallindrome or not */

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char rev[20], *sp="";
	int i, j, cmp;
	clrscr();

	/* Reading a string to find whether it is a pallindrome or not */
	printf("Enter a String to find it is Pallindrome: ");
	gets(sp);

	/* finding the reverse of the given string */
	i = 0;
	j = strlen(sp);
	sp = strupr(sp);
	while( j > 0 )
	{
		rev[i] = sp[j-1];
		j--;
		i++;
	}
	rev[i] = '\0';

	/* checking the strings for equality */
	cmp = strcmp(sp, rev);

	if( cmp == 0 )
	{
		textcolor(GREEN);
		cprintf("String is Pallindrome...");
	}
	else
	{
		textcolor(RED);
		cprintf("String is NOT a Pallindrome...");
	}
	getch();

}