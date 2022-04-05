/* program to understand the function */

int add(int a1,int b1)
{
	int result;
	result = a1 + b1;
	return result;
}

void main()
{
	int a,b,result;
	clrscr();
	printf("Enter two values to add: \n");
	scanf("%d%d",&a,&b);

	result = add(a,b);
	printf("The Addition of above numbers is: %d",result);
	getch();
}