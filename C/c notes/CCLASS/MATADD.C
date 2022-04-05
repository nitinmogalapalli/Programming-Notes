/* program to MULTIPLICATION two matrices */
main()
{
	int mat1[10][10],mat2[10][10],mul[10][10],i,j,k,row1,col1,row2,col2;
	clrscr();
	printf("Enter Row & col size of MATRIX 1: \n");
	scanf("%d%d",&row1,&col1);
	printf("Enter Row & Col size of MATRIX 2: \n");
	scanf("%d%d",&row2,&col2);
	if(col1==row2)
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
		{
			for(j=0;j<col2;j++)
			{
				mul[i][j] = 0;
				for(k=0;k<col1;k++)
					mul[i][j] += mat1[i][k] * mat2[k][j] ;
			}
		}
		printf("The Multiplication matrix is: \n");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col2;j++)
				printf("%-3d",mul[i][j]);
			printf("\n");
		}


	}
	else
		printf("The Multiplication of the matrices is not possible\nwith this order...");
	getch();
}