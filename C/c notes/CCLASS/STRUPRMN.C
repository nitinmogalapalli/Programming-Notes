/* program to convert a string to the uppercase stirng */

#include<ctype.h>
#include<stdio.h>
#include<conio.h>

main()
{
	char str1[15], i;
	clrscr();

	puts("Enter a string to convert UPPERCASE...");
	gets(str1);

	/* converting string to uppercase */
	i = 0;
	while( str1[i] != '\0' )
	{
		if( islower(str1[i]) )
			str1[i] = toupper(str1[i]);
		i++;
	}
	puts("The String after converting to uppercase: ");
	puts(str1);
	getch();
}