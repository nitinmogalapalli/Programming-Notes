main()
{
int i,n;
clrscr();
printf("enter a no.\n");
scanf("%d",&n);
printf("multiplication table is:\n");
for(i=1;i<=n;i++)
{
printf("%d*%d=%d\n",n,i,n*i);
}
getch();
}