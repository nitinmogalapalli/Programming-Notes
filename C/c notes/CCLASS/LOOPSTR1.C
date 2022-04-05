/* program to print an arrangement

 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5

 */

 void main()
 {
	int i, j;
	clrscr();

	for( i = 1; i <= 5 ; i++)
	{
		for( j = 1; j <= 5 ; j++)
			printf("%3d", j);
		printf("\n");
	}
	getch();
 }