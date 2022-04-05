main()
{
     int i,j,x[2][3]={1,2,3,4,5,6};
     clrscr();
     printf("the matrix is:\n");
     for(i=0;i<2;i++)
     {
	 for(j=0;j<3;j++)
	 {
	      printf("%d ",x[i][j]);
	 }
	 printf("\n");
     }
     getch();
}