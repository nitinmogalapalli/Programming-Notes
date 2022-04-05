/* program  table for a given number*/
main()
{
	int num,i;
	clrscr();
	printf("enter a number to print table:");
	scanf("%d",&num);
	i=1;
	while(i<=12)
	{
	printf("%2d X %2d = %3d\n",num,i,num*i);
	i++;
	}
	getch();
}
/* Output:
enter a numbers to print table:10
10 X 1 =10
10 X 2 =20
10 X 3 =30
       =
       =
       =
       =
       =
10 X10 =100
10 X11 =110
10 X12 =120
*/
