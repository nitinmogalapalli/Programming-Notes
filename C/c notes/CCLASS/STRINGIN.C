
/*
	String:
		It is a set/sequence of characters which terminated with a null(\0) character.
		In C language we represent the strings using character arrays.

	we can access the character array as we worked with the numbered arrays.


String Operations:
	1. Finding Length of the string (strlen)
	2. Copying one string to another (strcpy)
	3. Adding two string to one string(concatenation) (
strcat)
	4. Comparing two strings (strcmp)
*/
/* program to find length of the string without using strlen */
main()
{
	char str[20],i;
	clrscr();
	printf("Enter a String to find the length:\n");
	gets(str);
	i=0;
	while( str[i] != '\0' )
		i++;
	printf("%d is the length of the Above string...",i);
	getch();
}