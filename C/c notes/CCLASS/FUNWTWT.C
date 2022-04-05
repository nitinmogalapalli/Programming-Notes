/* program to demonstrate functions without return type and without parameters */
void square(void)
{
	int a1;
	clrscr();
	printf("Enter a value to find squre of it: ");
	scanf("%d",&a1);
	printf("%d is the Square of %d...",a1*a1,a1);
	getch();
}
void cube(void)
{
	int a1;
	clrscr();
	printf("Enter a value to find cube of it: ");
	scanf("%d",&a1);
	printf("%d is the Cube of the %d...",a1*a1*a1,a1);
	getch();
}

void main(void)
{
	square();
	cube();
}