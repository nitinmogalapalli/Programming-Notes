/* program to concat the two strings...*/
main()
{
	char str1[15],str2[7];
	int i,j;
	clrscr();
	printf("Enter two strings:\n");
	scanf("%s%s",&str1,&str2);
	i=0;
	while( str1[i] != '\0' )
		i++;
	j=0;
	while( str2[j] != '\0' )
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	printf("String after Concatenation:\n");
	puts("String 1: ");
	puts(str1);
	puts("String 2: ");
	puts(str2);
	getch();
}