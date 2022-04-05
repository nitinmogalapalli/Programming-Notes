/* program to illustrate the pointer to strings */
main()
{
	char str[20],*cp;
	clrscr();
	printf("Enter a String: ");
	cp = str; /* Assigning string to a pointer */
	gets(cp);
	puts("The string printing using pointer is: ");
	puts(cp);
	getch();
}