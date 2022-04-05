/* program to read multiple integer variables */

void main()
{
	int i1, i2, i3;
	clrscr();

/*
	printf("Enter three values:\n");
	scanf("%d", &i1);
	scanf("%d", &i2);
	scanf("%d", &i3);

	printf("You entered :\n");
	printf("%3d", i1);
	printf("%3d", i2);
	printf("%3d", i3);
*/

	printf("Enter three values:\n");
	scanf("%d%d%d", &i1, &i2, &i3);

	printf("You entered :\n");
	printf("%-3d%-3d%-3d", i1, i2, i3);
	getch();

}