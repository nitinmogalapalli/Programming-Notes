/* program to copy one string to another */
main()
{
	char str1[20],str2[10];
	int i;
	clrscr();
	printf("Enter two strings:\n");
	printf("String 1: ");
	gets(str1);
	printf("String 2: ");
	gets(str2);

	printf("The string after copying string2 to string1:\n");
	i=0;
	while( str2[i] != '\0' )
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	printf("String 1: ");
	puts(str1);
	printf("String 2: ");
	puts(str2);
	getch();
}
