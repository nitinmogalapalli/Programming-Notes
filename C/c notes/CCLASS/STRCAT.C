/* program to use strcat() */

main()
{
	char str1[25],str2[15];
	clrscr();
	printf("Enter Strings to concatinate: \n");
	printf("String 1: ");
	gets(str1);
	printf("String 2: ");
	gets(str2);

	strcat(str1,str2);
	printf("The strings After concatenation are:\n");
	printf("String 1: %s\nStirng 2: %s",str1,str2);
	getch();
}