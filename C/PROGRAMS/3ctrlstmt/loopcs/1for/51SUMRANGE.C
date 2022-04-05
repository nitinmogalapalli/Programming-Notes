main()
{
int i,n,s=0;
clrscr();
printf("enter a no.\n");
scanf("%d",&n);
printf("sum of no.s is:\n");
for(i=1;i<=n;i++)
{
    s=s+i;
}
    printf("   %d",s);
    getch();
}