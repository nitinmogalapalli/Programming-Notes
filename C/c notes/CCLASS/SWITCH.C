/* program for understanding switch statement where we take one
choice as input, based on input we perform different operations,
output value according to the operation performed*/

main()
{
	int ch,a,b,c;
	clrscr();
	printf("Enter \n 1. for Addition\n 2. for Subtraction\n 3.for multiplication\n 4. for division\n");
	scanf("%d",&ch);
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
		default:
			printf("INVALID Choice...Try Again...!!!");
			break;
	}
	getch();
}

/* output:
	Enter
	1. for Addition
	2. for Subtraction
	3. for Multiplication
	4. for Division
	1
	Enter two numbers:
	56
	57
	Addition of 56 & 57 is : 113
*/