/* program to copy the strings using the strcpy */
main()
{
	char str1[10],str2[10];
	clrscr();
	printf("Enter two strings:\n");
	printf("String 1: ");
	gets(str1);
	printf("String 2: ");
	gets(str2);

	strcpy(str1,str2);
	printf("Strings After the Copying...:\n");
	printf("String 1: ");
	puts(str1);
	printf("String 2: ");
	puts(str2);
	getch();
}