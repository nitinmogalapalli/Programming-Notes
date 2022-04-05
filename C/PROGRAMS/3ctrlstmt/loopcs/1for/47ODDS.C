main()
{
int i,n;
clrscr();
printf("enter the range\n");
scanf("%d",&n);
printf("odd no.s are:\n");
for(i=0;i<=n;i++)
{
if(i%2==1)
printf("%d\n",i);
}
getch();
}