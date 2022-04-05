main()
{
int i,n;
clrscr();
printf("enter the range\n");
scanf("%d",&n);
printf("odd no.s are:\n");
  i=1;
  do
  {
    printf("%d\t",i);
    i+=2;
  }while(i<=n);
getch();
}