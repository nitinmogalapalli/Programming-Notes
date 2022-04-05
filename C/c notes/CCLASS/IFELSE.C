/* program for understanding if-else
	where it is used to find the minimum among the two*/

main()
{
	int num1,num2;
	clrscr();
	printf("Enter two numbers to find minimum among them:\n");
	scanf("%d%d",&num1,&num2);

	/* if-else statement */

	if( num1<num2 )
	{
		printf("Minimum is : %d",num1);
	}
	else
	{
		printf("Minimum is : %d",num2);
	}
	getch();
}


/* Output:
	Enter two numbers:
	64
	94
	Minimum is : 64
*/

