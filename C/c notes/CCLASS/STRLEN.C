
/* program to find the length of the string using strlen */
main()
{
	char str[] = {'2','55', '9', '7'};
	clrscr();
	puts(str);
	printf("Enter a string to find the length:\n");
	flushall();
	gets(str);
	printf("%d is the length of the string...",strlen(str));
	getch();
}

