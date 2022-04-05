
/* program for understanding do-while looping statement with switch */

main()
{
	int ch,a,b,c;
	clrscr();
	printf("Choices:\n 1. for Addition\n 2. for Subtraction\n 3. for multiplication\n 4. for division\n 5. for EXIT\n");
	printf("Enter Your Choice: ");
	scanf("%d",&ch);
	do
	{
	switch(ch)
	{
		case 1:	printf("Enter two numbers:\n");
			scanf("%d%d",&a,&b);
			c = a+b;
			printf("Addition of %d & %d is: %d",a,b,c);
			break;
		case 2: printf("Enter two numbers:\n");
			scanf("%d%d",&a,&b);
			c = a-b;
			printf("Subtraction of %d & %d is: %d",a,b,c);
			break;
		case 3: printf("Enter two numbers:\n");
			scanf("%d%d",&a,&b);
			c = a*b;
			printf("Multiplication of %d & %d is: %d",a,b,c);
			break;
		case 4:	printf("Enter two numbers:\n");
			scanf("%d%d",&a,&b);
			c = a/b;
			printf("Division of %d & %d is: %d",a,b,c);
			break;

/*		case 5: exit(); */

		default: if( ch != 5 )
				printf("INVALID Choice...");
	}
	if( ch != 5 )
	{
		printf("\nEnter Your Choice: ");
		scanf("%d",&ch);
		if( ch == 5 )
			printf("Exiting...");
	}
	else
		printf("Exiting...");
	}while( ch != 5 );

	getch();
}
