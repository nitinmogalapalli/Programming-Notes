main()
{
int i,j;
clrscr();
for(i=1;i<12;i++)
{
for(j=1;j<=5;j++)
printf("%2d X %2d = %2d",j,i,j*i);
printf("\n");
}
getch();
}