/* program to define a User defined function */
void cube(void)
{
	int a;
	clrscr();
	printf("Enter a value to find CUBE: ");
	scanf("%d",&a);
	printf("The CUBE is: %d",a*a*a);
	getch();
}
main()
{       int i;
	for(i=0;i<5;i++)
	cube();

}