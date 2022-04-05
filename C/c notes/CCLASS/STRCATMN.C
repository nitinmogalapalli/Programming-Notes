/* program to concat two strings into one string */
#include<string.h>
#include<conio.h>
#include<stdio.h>

main()
{
	char str1[20], str2[10], i, j;
	clrscr();

	puts("Enter two string to concatinate: ");
	printf("String 1: ");
	gets(str1);

	printf("String 2: ");
	gets(str2);

	/* finding length of the string 1 */
	i = 0;
	while(str1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while( str2[j] != '\0' )
	{
		str1[i] = str2[j];
		i++;
		j++;
	}

	puts("Two strings After concatinating string 2 to string 1: ");
	printf("String 1: ");
	puts(str1);

	printf("String 2: ");
	puts(str2);
	getch();
}