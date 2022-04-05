main()
{
int i,n,s=1;
clrscr();
printf("enter a no.\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s*i;
}
printf("factorial of no.s is:%d",s);
getch();
}