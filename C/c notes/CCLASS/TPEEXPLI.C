/* program to understand the Type Casting
	1. implicit (internal)
	2. Explicit (external)		*/

/* this is to explain implicit type conversion */

main()
{
	float a;
	int b;
	clrscr();
	printf("Enter b:");
	scanf("%d",&b);
	printf("The value of the expression 2*b+(b/2.1)+b is : ");
	a = 2*b+(b/2.1)+b;
	printf("%f",a);
	getch();
}

/* output:
	Enter b: 4
	The value of the expression 2*b+(b/2.1)+b is : 13.904762
*/
