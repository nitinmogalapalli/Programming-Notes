main()
{
int i,n;
clrscr();
printf("enter the range\n");
scanf("%d",&n);
printf("even no.s are:\n");
for(i=1;i<=n;i++)
{
if(i%2==0)
printf("%d\n",i);
}
getch();
}