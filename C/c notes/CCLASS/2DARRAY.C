/*

2 Dimensional Arrays:

	these are the arrays with two indexs,
Syntax:
	data_type arr_name[size][size],...;
	Using two-dimensional array we can represents the table data.

Eg:
	int a[10][10];

We can develop matrices using these 2D arrays...

Assignment:
	a[1][2] = 20;
	a[0][9] = 20;

Reading:
	scanf("%d",&a[1][2]);
	for(i=0;i<size1;i++)
		for(j=0;j<size2;j++)
			scanf("%d",&a[i][j]);
Printing:
	for(i=0;i<size1;i++)
		for(j=0;j<size2;j++)
			printf("%d",a[i][j]);
*/

/* program to add two matrices */
main()
{
	int mat1[10][10],mat2[10][10],add[10][10],i,j,row1,col1,row2,col2;
	clrscr();
	printf("Enter Row & col size of MATRIX 1: \n");
	scanf("%d%d",&row1,&col1);
	printf("Enter Row & Col size of MATRIX 2: \n");
	scanf("%d%d",&row2,&col2);
	if((row1==row2) && (col1==col2))
	{
		printf("Enter Matrix 1:\n");
		for(i=0;i<row1;i++)
			for(j=0;j<col1;j++)
				scanf("%d",&mat1[i][j]);
		printf("Enter Matrix 2:\n");
		for(i=0;i<row2;i++)
			for(j=0;j<col2;j++)
				scanf("%d",&mat2[i][j]);
		for(i=0;i<row1;i++)
			for(j=0;j<col1;j++)
				add[i][j] = mat1[i][j] + mat2[i][j] ;
		printf("The Addition matrix is: \n");
		printf("MATRIX 1\tMATRIX 2\tAddition is\n");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
				printf("%-3d",mat1[i][j]);
			printf("\t");
			for(j=0;j<col1;j++)
				printf("%-3d",mat2[i][j]);
			printf("\t");
			for(j=0;j<col1;j++)
				printf("%-3d",add[i][j]);
			printf("\n");
		}

	}
	else
		printf("The Addition of the matrices is not possible\nwith this order...");
	getch();
}