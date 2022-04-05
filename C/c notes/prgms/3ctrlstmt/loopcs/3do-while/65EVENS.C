main()
{
int i,n;
clrscr();
printf("enter the range\n");
scanf("%d",&n);
  i=2;
  do
  {
    printf("%d\t",i);
    i+=2;
  }while(i<=n);
getch();
}