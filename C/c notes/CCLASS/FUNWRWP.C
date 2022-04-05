/* program to demonstrate function with return type and with parameters */
int square(int a)
{
	return a*a;
}
int cube(int b)
{
	return b*b*b;
}

main()
{
	int a1,b1,result;
	clrscr();
	printf("Enter a value to find the Square: ");
	scanf("%d",&a1);
	result = square(a1);
	printf("\nThe Square of %d is : %d",a1,result);
	printf("\nEnter a value to find the cube: ");
	scanf("%d",&b1);
	result = cube(b1);
	printf("\nThe Cube of %d is : %d",b1,result);
	getch();
}