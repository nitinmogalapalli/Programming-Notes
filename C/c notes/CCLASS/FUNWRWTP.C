/* program to demonstrate function with return type and without parameters*/
int square(void)
{
	int a;
	printf("Enter a value to find the square: ");
	scanf("%d",&a);
	return a*a;  /* We are retruning the square */
}
int cube(void)
{
	int b;
	printf("\nEnter a value to find the cube: ");
	scanf("%d",&b);
	return b*b*b; /* Here we are about to return cube of a value */
}

main()
{
	int result;
	clrscr();
	result = square();
	printf("The Square is: %d",result);
	result = cube();
	printf("The Cube is: %d",result);
	getch();
}