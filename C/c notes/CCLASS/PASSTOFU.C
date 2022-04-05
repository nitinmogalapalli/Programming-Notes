/* program to illustrate passing value to functions with pointer */

void swap(int *a1,int *b1)
{
	int temp;
	temp = *a1;
	*a1 = *b1;
	*b1 = temp;
}
main()
{
	int a,b;
	clrscr();
	printf("Enter two values to swap: \n");
	printf("a: ");
	scanf("%d",&a);
	printf("b : ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("The values after swapping:\n");
	printf(" a : %d\n b : %d",a,b);
	getch();
}