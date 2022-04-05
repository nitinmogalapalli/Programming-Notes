/* program to understand the Continue statement */
main()
{
	int i;
	clrscr();
	printf("Numbers from 10 to 1:\n");
	for(i=10;i>=1;i--)
	{
		if(i==4 || i==7)
			continue;
		printf("%-3d",i);
	}
	getch();
}