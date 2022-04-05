/* program for understanding nested if-else where it is used to find the minimum among the two*/

main()
{
	int num1,num2;
	clrscr();
	printf("Enter two numbers:\n");
	scanf("%d%d",&num1,&num2);

	/* nested if-else staement */

	if( num1<num2 )
	{
		printf("Minimum is : %d",num1);
	}
	else
	{
		if( num1 == num2 )
			printf("Both the numbers are EQUAL...");
		else
			printf("Minimum is : %d",num2);
	}
	getch();
}


/* Output:
	Enter two numbers:
	64
	64
	Both the numbers are EQUAL...
	*/

