 /* demonstration of the while inside while */
main()
{
	int a,b;
	clrscr();
	printf("numbers from 10 to 1:\n");
	a=1;
	while(a<=10)
	{
		b = 10;
		printf("for a->%d: ",a);
		while( b>=1 )
		{
			printf("%2d",b);
			b = b-1;
		}
		printf("\n");
		a = a+1;
	}
	getch();
}