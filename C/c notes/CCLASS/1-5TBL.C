

/* program that prints 1 to 5 tables*/
main()
{
     int i,j;
     clrscr();
     printf("tables from 1 to 5 are:\n");
     for(i=1; i<=12; i=i+1)
     {
       for(j=1; j<=5; j=j+1)
       {
	 printf("%5d X %2d=%3d",j,i,j*i);
       }
	printf("\n");
     }
     getch();
}
/*output:
tables from 1 to 5 are:
1 X 1=1  2 X 2=4  3 X 1=3  4 X 1=4  5 X1=5
      :
      :
      :
      :
      :
      :
      :
      :
      :
1 X 12=12  2 X 12=24  3 X 12=39  4 X 12=48  5 X 12=60
*/