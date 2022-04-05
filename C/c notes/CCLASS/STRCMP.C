/* program to use strcmp() to compare two strings for maximum
or minimum or equality
*/
#include<stdio.h>
#include<conio.h>

main()
{
	char str1[10],str2[10];
	int cmp;
	clrscr();
	textcolor(RED);

	cprintf("Enter two Strings for Comparision: \n");

	cprintf("String 1: ");
	gets(str1);
	cprintf("Stirng 2: ");
	gets(str2);

	cmp = strcmp(str1,str2);

	if(cmp>0)
	{
		cprintf("The \"%s\" is maximum than \"%s\"...",str1,str2);
	}
	else if(cmp < 0)
	{
		cprintf("The \"%s\" is minimum than \"%s\"...",str1,str2);
	}
	else
	{
		cprintf("The BOTH Strings are \"EQUAL\"...");
	}
	getch();

}