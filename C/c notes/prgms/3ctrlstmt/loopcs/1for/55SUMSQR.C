main()
{
int i,n,s=0;
clrscr();
printf("enter a no.\n");
scanf("%d",&n);
printf("sum of squares:\t");
for(i=1;i<=n;i++)
{
   s=s+(i*i);
}
printf("%d",s);
getch();
}