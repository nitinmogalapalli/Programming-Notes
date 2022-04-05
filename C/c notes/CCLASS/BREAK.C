/* program to understand break statement */
main()
{
	int i;
	clrscr();
	printf("the values from 1 to 10:\n");
	for(i=1;i<=10;i++)
	{
		if( i == 5 )
		break;
		printf("%-3d",i);
	}
	getch();
}