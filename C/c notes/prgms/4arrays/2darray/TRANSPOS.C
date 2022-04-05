main()
{
     int i,j,x[3][3];
     clrscr();
     printf("enter 3/3 matrix\n");
     for(i=0;i<3;i++)
     {
	 for(j=0;j<3;j++)
	 {
	     scanf("%d",&x[i][j]);
	 }
     }
     printf("the transpose matrix is:\n");
     for(i=0;i<3;i++)
     {
	 for(j=0;j<3;j++)
	 {
	      printf("%d ",x[j][i]);
	 }
	 printf("\n");
     }
     getch();
}