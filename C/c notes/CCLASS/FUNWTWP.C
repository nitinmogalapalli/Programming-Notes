/* program to demonstrate the functions with out return type with parameters */
void square(int a)
{
	clrscr();
	printf("%d is the square of %d...",a*a,a);
	getch();
}
void cube(int b)
{
	clrscr();
	printf("%d is the cube of %d...",b*b*b,b);
	getch();
}

main()
{
	int a1,b1;
	clrscr();
	printf("Enter a value to find square: ");
	scanf("%d",&a1);
	square(a1);
	printf("\nEnter a value to find cube: ");
	scanf("%d",&b1);
	cube(b1);
}