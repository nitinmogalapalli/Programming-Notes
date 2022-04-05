main()
{
int i,n;
clrscr();
printf("enter the range\n");
scanf("%d",&n);
printf("even no.s are:\n");
for(i=2;i<=n;i+=2)
{
printf("%d\n",i);
}
getch();
}