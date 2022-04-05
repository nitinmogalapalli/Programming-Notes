/* program to read string using scanf() and printing using printf() */
main()
{
	char name[20];

	clrscr();
	puts("Enter some string: ");
	scanf("%s",&name);

	puts("\You entered a string: ");
	printf("%s",name);
	getch();
}