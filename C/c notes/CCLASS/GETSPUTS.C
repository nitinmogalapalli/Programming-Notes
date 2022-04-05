/* program to read and write a string using gets() and puts() */

main()
{
	char str[15];

	clrscr();
	puts("Enter a string: ");
	gets(str);
/*	scanf("%s",&str); */

	puts("\nThe string you entered is: ");
 	puts(str); 
/*	printf("%s", str);*/
	getch();
}