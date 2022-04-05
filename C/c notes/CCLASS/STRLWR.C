/* program to convert string to lowercase */
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str[15], *strlower;
	clrscr();

	puts("Enter a string to convert into lowercase...");
	gets(str);

	strlower = strlwr(str);
	puts("The string after converting to lowercase is: ");
	puts(strlower);
	getch();

}