/* Declaring and Reading a string */

void main()
{
	char str[10];
	clrscr();

	printf("Enter a string : ");
	scanf("%s",&str);

	printf("String using scanf is: %s\n", str);

	/* Reading characters using string functions...*/
	flushall();
	printf("Enter a string to read using gets: ");
	gets(str);
	puts("String using gets is: ");
	puts(str);

	getch();
}