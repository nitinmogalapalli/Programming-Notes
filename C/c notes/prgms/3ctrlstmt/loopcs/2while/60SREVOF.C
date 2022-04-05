main()
{
int n,r,rev=0;
clrscr();
printf("enter a no.\n");
scanf("%d",&n);
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("reverse of digits are:%d",rev);
getch();
}